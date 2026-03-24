/*
 * XREFs of HUBPDO_AssignPDOIds @ 0x1C007945C
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1C00796D4 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBID_BuildUxdPnpId @ 0x1C001B2D8 (HUBID_BuildUxdPnpId.c)
 *     HUBID_BuildDeviceID @ 0x1C001B484 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x1C001B6A4 (HUBID_BuildHardwareID.c)
 *     HUBID_BuildCompatibleID @ 0x1C001BE8C (HUBID_BuildCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x1C001BF74 (HUBID_BuildContainerID.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C00808CC (HUBREG_UpdateUxdSettings.c)
 */

__int64 __fastcall HUBPDO_AssignPDOIds(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // ebx
  unsigned __int16 v5; // r9
  _BYTE *v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int16 v9; // dx
  NTSTATUS v11; // [rsp+28h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h] BYREF

  *(_QWORD *)&DestinationString.Length = 3670016LL;
  DestinationString.Buffer = (wchar_t *)&v13;
  HUBREG_UpdateUxdSettings(*(_QWORD *)a1, a1, 0LL);
  if ( (*(_DWORD *)(a1 + 1632) & 1) != 0 )
    HUBID_BuildUxdPnpId(a1, (const void **)(a1 + 2120));
  v4 = HUBID_BuildDeviceID(a1, a2);
  if ( v4 >= 0 )
  {
    v4 = HUBID_BuildHardwareID(a1, a2, 0LL);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v4;
      v5 = 100;
      goto LABEL_6;
    }
    v4 = HUBID_BuildCompatibleID(a1, a2, 0LL, v6);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v4;
      v5 = 101;
      goto LABEL_6;
    }
    HUBID_BuildContainerID(a1, a2);
    v7 = *(_DWORD *)(a1 + 1632);
    if ( (v7 & 0x40) != 0 )
    {
      if ( (v7 & 2) == 0 )
        DestinationString.MaximumLength = 32;
      RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 2152));
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1704))(
             WdfDriverGlobals,
             a2,
             &DestinationString);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v4;
        v5 = 102;
        goto LABEL_6;
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v8 + 204) & 0x200) == 0 || (v9 = *(_WORD *)(v8 + 236)) == 0 || (*(_DWORD *)(a1 + 1636) & 2) == 0 )
        v9 = *(_WORD *)(v8 + 200);
      v4 = RtlIntegerToUnicodeString(v9, 0xAu, &DestinationString);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v4;
        v5 = 103;
        goto LABEL_6;
      }
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1704))(
             WdfDriverGlobals,
             a2,
             &DestinationString);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v4;
        v5 = 104;
        goto LABEL_6;
      }
    }
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 99;
LABEL_6:
    v11 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v5,
      (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
      v11,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return (unsigned int)v4;
}

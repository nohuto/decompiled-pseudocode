/*
 * XREFs of HUBPDO_AssignPDOIds @ 0x1C007A95C
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1C007ABD4 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBID_BuildUxdPnpId @ 0x1C001B834 (HUBID_BuildUxdPnpId.c)
 *     HUBID_BuildDeviceID @ 0x1C001B9CC (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x1C001BBEC (HUBID_BuildHardwareID.c)
 *     HUBID_BuildCompatibleID @ 0x1C001C3D0 (HUBID_BuildCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x1C001C4B8 (HUBID_BuildContainerID.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C0081E38 (HUBREG_UpdateUxdSettings.c)
 */

__int64 __fastcall HUBPDO_AssignPDOIds(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // ebx
  unsigned __int16 v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int16 v8; // dx
  NTSTATUS v10; // [rsp+28h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-58h] BYREF

  *(_QWORD *)&DestinationString.Length = 3670016LL;
  DestinationString.Buffer = (wchar_t *)&v12;
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
    v4 = HUBID_BuildCompatibleID(a1, a2, 0LL);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v4;
      v5 = 101;
      goto LABEL_6;
    }
    HUBID_BuildContainerID(a1, a2);
    v6 = *(_DWORD *)(a1 + 1632);
    if ( (v6 & 0x40) != 0 )
    {
      if ( (v6 & 2) == 0 )
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
      v7 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v7 + 204) & 0x200) == 0 || (v8 = *(_WORD *)(v7 + 236)) == 0 || (*(_DWORD *)(a1 + 1636) & 2) == 0 )
        v8 = *(_WORD *)(v7 + 200);
      v4 = RtlIntegerToUnicodeString(v8, 0xAu, &DestinationString);
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
    v10 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v5,
      (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
      v10,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return (unsigned int)v4;
}

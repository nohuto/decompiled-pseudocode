/*
 * XREFs of ACPIProcessHardwareInformation @ 0x1C0096E88
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C00BEF88 (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     ACPIAssert @ 0x1C00228CC (ACPIAssert.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 ACPIProcessHardwareInformation()
{
  __int64 v0; // rdi
  int v1; // r8d
  int v2; // r9d
  unsigned int v3; // ebx
  int v4; // r8d
  int v5; // r9d
  __int16 v6; // dx
  bool v7; // zf
  unsigned __int16 v8; // dx
  unsigned int v9; // ebp
  char *Pool2; // rax
  __int64 v11; // r8
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // r9

  v0 = *((_QWORD *)AcpiInformation + 1);
  *((_QWORD *)AcpiInformation + 13) = *(unsigned int *)(v0 + 48);
  *((_WORD *)AcpiInformation + 50) = -1;
  v3 = 0;
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(6LL) >= 0 )
  {
    *((_BYTE *)AcpiInformation + 85) = *(_BYTE *)(v0 + 92);
    ACPIAssert(*(_BYTE *)(v0 + 92) != 0, 4107, v1, v2);
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(7LL) >= 0 )
  {
    *((_BYTE *)AcpiInformation + 96) = *(_BYTE *)(v0 + 93);
    *((_WORD *)AcpiInformation + 50) = *(unsigned __int8 *)(v0 + 94);
    ACPIAssert(*(_BYTE *)(v0 + 93) != 0, 4108, v4, v5);
  }
  *((_WORD *)AcpiInformation + 43) = *((_BYTE *)AcpiInformation + 85) >> 1;
  v6 = *((_BYTE *)AcpiInformation + 96) >> 1;
  *((_WORD *)AcpiInformation + 49) = v6;
  v7 = *((_WORD *)AcpiInformation + 43) + v6 == 0;
  v8 = *((_WORD *)AcpiInformation + 43) + v6;
  *((_WORD *)AcpiInformation + 51) = v8;
  if ( v7 )
  {
LABEL_8:
    *((_WORD *)AcpiInformation + 56) = 32;
    if ( (*(_BYTE *)(v0 + 112) & 0x10) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_12:
        if ( (*(_BYTE *)(v0 + 112) & 0x20) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_16;
          v13 = 35;
        }
        else
        {
          *((_WORD *)AcpiInformation + 56) |= 0x200u;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_16:
            if ( (*(_DWORD *)(v0 + 112) & 0x4000) != 0 )
              *((_WORD *)AcpiInformation + 56) |= 0x4000u;
            return v3;
          }
          v13 = 34;
        }
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          v13,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
        goto LABEL_16;
      }
      v12 = 33;
    }
    else
    {
      *((_WORD *)AcpiInformation + 56) |= 0x100u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_12;
      v12 = 32;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      v12,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    goto LABEL_12;
  }
  v9 = 21 * v8;
  Pool2 = (char *)ExAllocatePool2(64LL, v9, 1735418689LL);
  GpeTable = Pool2;
  if ( Pool2 )
  {
    GpeHandlerRegistered = Pool2;
    LODWORD(GpeTableSize) = v9;
    GpeEnable = &Pool2[*((unsigned __int16 *)AcpiInformation + 51)];
    GpeCurEnable = (char *)GpeEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeIsLevel = (char *)GpeCurEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeHandlerType = (char *)GpeIsLevel + *((unsigned __int16 *)AcpiInformation + 51);
    GpeWakeEnable = (char *)GpeHandlerType + *((unsigned __int16 *)AcpiInformation + 51);
    GpeWakeHandler = (char *)GpeWakeEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeSpecialHandler = (char *)GpeWakeHandler + *((unsigned __int16 *)AcpiInformation + 51);
    GpePending = (char *)GpeSpecialHandler + *((unsigned __int16 *)AcpiInformation + 51);
    GpeRunMethod = (char *)GpePending + *((unsigned __int16 *)AcpiInformation + 51);
    GpeComplete = (char *)GpeRunMethod + *((unsigned __int16 *)AcpiInformation + 51);
    v11 = *((unsigned __int16 *)AcpiInformation + 51);
    GpeSavedWakeMask = (char *)GpeComplete + v11;
    GpeSavedWakeStatus = (char *)GpeComplete + v11 + v11;
    GpeMap = (__int64)GpeComplete + v11 + v11 + v11;
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x1Fu,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      v9);
  return (unsigned int)-1073741670;
}

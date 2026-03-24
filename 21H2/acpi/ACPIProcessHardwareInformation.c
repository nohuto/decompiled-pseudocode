/*
 * XREFs of ACPIProcessHardwareInformation @ 0x1C009F214
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C00BECCC (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     ACPIAssert @ 0x1C0024258 (ACPIAssert.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0032480 (memset.c)
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
  char *PoolWithTag; // rax
  char *v11; // rsi
  __int64 v12; // r8
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // r9

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
          v14 = 35;
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
          v14 = 34;
        }
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          6u,
          v14,
          (__int64)&WPP_46b15d9ca9c23528b9d260ad71f05863_Traceguids);
        goto LABEL_16;
      }
      v13 = 33;
    }
    else
    {
      *((_WORD *)AcpiInformation + 56) |= 0x100u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_12;
      v13 = 32;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      v13,
      (__int64)&WPP_46b15d9ca9c23528b9d260ad71f05863_Traceguids);
    goto LABEL_12;
  }
  v9 = 21 * v8;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x67706341u);
  GpeTable = PoolWithTag;
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    LODWORD(GpeTableSize) = v9;
    memset(PoolWithTag, 0, v9);
    GpeHandlerRegistered = v11;
    GpeEnable = &v11[*((unsigned __int16 *)AcpiInformation + 51)];
    GpeCurEnable = (char *)GpeEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeIsLevel = (char *)GpeCurEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeHandlerType = (char *)GpeIsLevel + *((unsigned __int16 *)AcpiInformation + 51);
    GpeWakeEnable = (char *)GpeHandlerType + *((unsigned __int16 *)AcpiInformation + 51);
    GpeWakeHandler = (char *)GpeWakeEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeSpecialHandler = (char *)GpeWakeHandler + *((unsigned __int16 *)AcpiInformation + 51);
    GpePending = (char *)GpeSpecialHandler + *((unsigned __int16 *)AcpiInformation + 51);
    GpeRunMethod = (char *)GpePending + *((unsigned __int16 *)AcpiInformation + 51);
    GpeComplete = (char *)GpeRunMethod + *((unsigned __int16 *)AcpiInformation + 51);
    v12 = *((unsigned __int16 *)AcpiInformation + 51);
    GpeSavedWakeMask = (char *)GpeComplete + v12;
    GpeSavedWakeStatus = (char *)GpeComplete + v12 + v12;
    GpeMap = (__int64)GpeComplete + v12 + v12 + v12;
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x1Fu,
      (__int64)&WPP_46b15d9ca9c23528b9d260ad71f05863_Traceguids,
      v9);
  return (unsigned int)-1073741670;
}

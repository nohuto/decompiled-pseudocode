/*
 * XREFs of Interrupter_CreateInterrupter @ 0x1C0071FA4
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006EE90 (Interrupter_PrepareHardware.c)
 *     Interrupter_Create @ 0x1C0071F2C (Interrupter_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0009764 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014518 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     Counter_CreateInterrupterInstance @ 0x1C007222C (Counter_CreateInterrupterInstance.c)
 */

__int64 __fastcall Interrupter_CreateInterrupter(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int64 **a7)
{
  unsigned __int64 **v10; // r13
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // r14d
  int v15; // r9d
  __int64 v16; // rbx
  int v18; // r9d
  unsigned __int64 *v19; // [rsp+40h] [rbp-A1h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-99h] BYREF
  __int64 v21; // [rsp+60h] [rbp-81h]
  __int128 v22; // [rsp+68h] [rbp-79h]
  void *v23; // [rsp+78h] [rbp-69h]
  _QWORD v24[20]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v27; // [rsp+148h] [rbp+67h] BYREF

  memset(v24, 0, 0x68uLL);
  v10 = a7;
  *(_QWORD *)&v20[8] = 0LL;
  *(_QWORD *)&v20[16] = 0LL;
  v27 = 0LL;
  v19 = 0LL;
  if ( a4 || a5 || a7 )
  {
    LODWORD(v24[0]) = 104;
    v24[3] = Interrupter_WdfEvtInterruptIsr;
    v24[5] = Interrupter_WdfEvtInterruptEnable;
    v24[6] = Interrupter_WdfEvtInterruptDisable;
    LODWORD(v24[2]) = 2;
    v24[4] = 0LL;
    HIDWORD(v24[11]) = 2;
    v24[8] = a4;
    v24[9] = a5;
    if ( Controller_IsSecureDevice(a2) )
    {
      v24[7] = Interrupter_WdfEvtInterruptWorkItem;
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 88) + 129LL) == (_BYTE)v11 )
        LOBYTE(v24[11]) = 1;
    }
    else
    {
      v24[4] = Interrupter_WdfEvtInterruptDpc;
    }
    v23 = off_1C0061310;
    *(_QWORD *)&v20[16] = v11;
    *(_QWORD *)&v20[8] = Interrupter_WdfEvtCleanupCallback;
    *(_QWORD *)v20 = 56LL;
    v22 = 0LL;
    v21 = 0x100000001LL;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *, _BYTE *, __int64 *))(WdfFunctions_01023 + 1128))(
            WdfDriverGlobals,
            a1,
            v24,
            v20,
            &v27);
    v14 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v14;
      v18 = 13;
      goto LABEL_17;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 14;
LABEL_9:
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(a2 + 72),
        v13,
        9,
        v15,
        (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
        v27,
        a3);
    }
  }
  else
  {
    v23 = off_1C0061310;
    memset(&v20[4], 0, 20);
    *(_DWORD *)v20 = 56;
    v21 = 0x100000001LL;
    v22 = a1;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _BYTE *, __int64 *))(WdfFunctions_01023 + 1656))(
            WdfDriverGlobals,
            v20,
            &v27);
    v14 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v14;
      v18 = 11;
      goto LABEL_17;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 12;
      goto LABEL_9;
    }
  }
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v27,
          off_1C0061310);
  *(_QWORD *)v16 = v27;
  *(_QWORD *)(v16 + 8) = a2;
  *(_DWORD *)(v16 + 32) = a3;
  KeInitializeSpinLock((PKSPIN_LOCK)(v16 + 208));
  Counter_CreateInterrupterInstance(v16);
  *a6 = v16;
  if ( v10 )
  {
    v23 = off_1C0061180;
    memset(v20, 0, sizeof(v20));
    *(_DWORD *)v20 = 56;
    v22 = 0LL;
    v21 = 0x100000001LL;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _BYTE *, unsigned __int64 **))(WdfFunctions_01023
                                                                                                + 1624))(
            WdfDriverGlobals,
            v27,
            v20,
            &v19);
    v14 = v12;
    if ( v12 >= 0 )
    {
      *v19 = a1;
      v19[1] = a2;
      *v10 = v19;
      return v14;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v14;
    v18 = 15;
LABEL_17:
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v13, 9, v18, (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids, v12);
  }
  return v14;
}

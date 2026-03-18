/*
 * XREFs of Interrupter_CreateInterrupter @ 0x1C006CEC0
 * Callers:
 *     Interrupter_Create @ 0x1C006CE48 (Interrupter_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C006ED2C (Interrupter_PrepareHardware.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0005AD0 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014644 (WPP_RECORDER_SF_qd.c)
 *     DynamicLock_Create @ 0x1C0016778 (DynamicLock_Create.c)
 *     Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled @ 0x1C0019074 (Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     Counter_CreateInterrupterInstance @ 0x1C006D2CC (Counter_CreateInterrupterInstance.c)
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
  int v10; // r12d
  int v11; // eax
  int v12; // edx
  unsigned int v13; // esi
  int v14; // r9d
  unsigned __int16 v15; // r9
  char IsSecureDevice; // al
  __int64 v17; // rdx
  __int64 v18; // r13
  int v19; // r8d
  char v20; // al
  unsigned __int64 **v21; // r13
  unsigned __int64 *v23; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-99h] BYREF
  int v25; // [rsp+60h] [rbp-81h]
  int v26; // [rsp+64h] [rbp-7Dh]
  __int128 v27; // [rsp+68h] [rbp-79h]
  void *v28; // [rsp+78h] [rbp-69h]
  _QWORD v29[20]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v32; // [rsp+148h] [rbp+67h] BYREF

  memset(v29, 0, 0x64uLL);
  memset((char *)v24 + 4, 0, 20);
  v32 = 0LL;
  v23 = 0LL;
  if ( a4 || a5 || a7 )
  {
    memset(v29, 0, 0x68uLL);
    LODWORD(v29[0]) = 104;
    v29[3] = Interrupter_WdfEvtInterruptIsr;
    LODWORD(v29[2]) = 2;
    v29[5] = Interrupter_WdfEvtInterruptEnable;
    v29[4] = 0LL;
    v29[6] = Interrupter_WdfEvtInterruptDisable;
    HIDWORD(v29[11]) = 2;
    v29[8] = a4;
    v29[9] = a5;
    IsSecureDevice = Controller_IsSecureDevice(a2);
    v10 = v17 + 1;
    if ( IsSecureDevice )
    {
      v29[7] = Interrupter_WdfEvtInterruptWorkItem;
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 88) + 129LL) == (_BYTE)v17 )
        LOBYTE(v29[11]) = v17 + 1;
    }
    else
    {
      v29[4] = Interrupter_WdfEvtInterruptDpc;
    }
    v28 = off_1C0061310;
    v24[2] = v17;
    v24[1] = Interrupter_WdfEvtCleanupCallback;
    v24[0] = 56LL;
    v27 = 0LL;
    v25 = v17 + 1;
    v26 = v17 + 1;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 1128))(
            WdfDriverGlobals,
            a1,
            v29,
            v24,
            &v32);
    v13 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v13;
      v14 = 13;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 14;
      goto LABEL_19;
    }
  }
  else
  {
    v10 = 1;
    v28 = off_1C0061310;
    v27 = a1;
    memset((char *)v24 + 4, 0, 20);
    LODWORD(v24[0]) = 56;
    v25 = 1;
    v26 = 1;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
            WdfDriverGlobals,
            v24,
            &v32);
    v13 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 11;
LABEL_7:
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 72),
          v12,
          9,
          v14,
          (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
          v11);
        return v13;
      }
      return v13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 12;
LABEL_19:
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(a2 + 72),
        4u,
        9u,
        v15,
        (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
        v32,
        a3);
    }
  }
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v32,
          off_1C0061310);
  *(_QWORD *)v18 = v32;
  *(_QWORD *)(v18 + 8) = a2;
  *(_DWORD *)(v18 + 32) = a3;
  if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
  {
    if ( !Controller_IsSecureDevice(a2) || *(_BYTE *)(*(_QWORD *)(a2 + 88) + 129LL) )
    {
      v19 = 0;
      v20 = 0;
    }
    else
    {
      v19 = v10;
      v20 = v10;
    }
    *(_BYTE *)(v18 + 224) = v20;
    v11 = DynamicLock_Create(v32, *(_QWORD *)(a2 + 72), v19, (__int64 *)(v18 + 216));
    v13 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v13;
      v14 = 15;
      goto LABEL_7;
    }
  }
  else
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v18 + 208));
  }
  Counter_CreateInterrupterInstance(v18);
  *a6 = v18;
  v21 = a7;
  if ( a7 )
  {
    v28 = off_1C0061180;
    memset(v24, 0, sizeof(v24));
    LODWORD(v24[0]) = 56;
    v27 = 0LL;
    v25 = v10;
    v26 = v10;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, unsigned __int64 **))(WdfFunctions_01023
                                                                                                 + 1624))(
            WdfDriverGlobals,
            v32,
            v24,
            &v23);
    v13 = v11;
    if ( v11 >= 0 )
    {
      *v23 = a1;
      v23[1] = a2;
      *v21 = v23;
      return v13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 16;
      goto LABEL_7;
    }
  }
  return v13;
}

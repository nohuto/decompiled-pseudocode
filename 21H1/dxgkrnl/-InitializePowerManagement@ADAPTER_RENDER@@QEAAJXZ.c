/*
 * XREFs of ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C021229C
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0177C34 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializePowerManagement(ADAPTER_RENDER *this)
{
  __int64 v1; // r15
  void (__fastcall *v3)(__int64, unsigned int); // rax
  unsigned int v4; // r12d
  __int64 v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // r10
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD v17[6]; // [rsp+40h] [rbp-19h] BYREF
  void (__fastcall *v18)(__int64, unsigned int); // [rsp+70h] [rbp+17h]
  __int64 (__fastcall *v19)(__int64, __int64, char); // [rsp+78h] [rbp+1Fh]
  __int64 v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  char v23; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *((_QWORD *)this + 2);
  v18 = 0LL;
  v22 = 0;
  v20 = *(_QWORD *)(v1 + 216);
  v17[1] = DxgSetPowerComponentActiveNoWaitCB;
  v17[0] = &DxgSetPowerComponentActiveCBInternal;
  v17[2] = DxgSetPowerComponentIdleCBInternal;
  v17[3] = DxgSetPowerComponentActiveNoWaitForceAsyncCB;
  v17[4] = DxgSetPowerComponentIdleForceAsyncCBInternal;
  v17[5] = DxgkLatencyToleranceTimerNotification;
  v21 = *(_DWORD *)(v1 + 3208);
  v19 = DxgkNotifyMemorySegmentHasData;
  v3 = 0LL;
  if ( *(int *)(v1 + 2572) >= 1300 )
    v3 = DxgNotifyVSyncCB;
  v18 = v3;
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 77) + 8LL) + 792LL))(
    *((_QWORD *)this + 78),
    v17);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 80) + 8LL) + 736LL))(
    *((_QWORD *)this + 81),
    v17);
  v4 = *(_DWORD *)(v1 + 2920);
  LODWORD(v5) = 0;
  v6 = 0;
  if ( v4 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(v1 + 2776);
      v9 = *(_DWORD *)(v7 + v8 + 208);
      if ( v9 )
      {
        switch ( v9 )
        {
          case 2:
            v13 = *((_QWORD *)this + 77);
            v14 = *(unsigned int *)(v7 + v8 + 212);
            v23 = 0;
            v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, unsigned int, char *))(*(_QWORD *)(v13 + 8) + 800LL))(
                    *((_QWORD *)this + 78),
                    2LL,
                    0LL,
                    v14,
                    v6,
                    &v23);
            break;
          case 3:
            v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(*((_QWORD *)this + 80)
                                                                                             + 8LL)
                                                                                 + 744LL))(
                    *((_QWORD *)this + 81),
                    *(unsigned __int16 *)(v7 + v8 + 6),
                    *(unsigned int *)(v7 + v8 + 212),
                    *(unsigned int *)(v7 + v8),
                    3);
            break;
          case 4:
            v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(*((_QWORD *)this + 80)
                                                                                             + 8LL)
                                                                                 + 744LL))(
                    *((_QWORD *)this + 81),
                    0LL,
                    0LL,
                    *(unsigned int *)(v7 + v8),
                    4);
            break;
          default:
            goto LABEL_15;
        }
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, __int64))(*(_QWORD *)(*((_QWORD *)this + 77) + 8LL)
                                                                                               + 800LL))(
                *((_QWORD *)this + 78),
                0LL,
                *(unsigned __int16 *)(v7 + v8 + 6),
                *(unsigned int *)(v7 + v8 + 212),
                v6,
                v7 + v8 + 358);
      }
      v5 = v10;
      if ( v10 < 0 )
      {
        v15 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v15 + 24) = v5;
        WdLogEvent5_WdError(v15);
        return (unsigned int)v5;
      }
LABEL_15:
      ++v6;
      v7 += 520LL;
    }
    while ( v6 < v4 );
  }
  return (unsigned int)v5;
}

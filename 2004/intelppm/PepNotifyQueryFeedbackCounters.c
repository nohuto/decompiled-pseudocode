/*
 * XREFs of PepNotifyQueryFeedbackCounters @ 0x1C0039718
 * Callers:
 *     InitPepPerfStates @ 0x1C0038F1C (InitPepPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C0004500 (memmove.c)
 *     memset @ 0x1C00047C0 (memset.c)
 */

__int64 __fastcall PepNotifyQueryFeedbackCounters(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v3; // rsi
  SIZE_T v6; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi
  int v9; // ebx

  v3 = a2;
  v6 = 8 * a2 + 4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    *v8 = v3;
    v9 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), 9LL, v8);
    if ( v9 >= 0 )
    {
      memmove(a3, v8 + 1, 8 * v3);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0x1Fu,
        (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids,
        v9);
    }
  }
  else
  {
    v9 = -1073741670;
  }
  ExFreePoolWithTag(v8, 0x72637250u);
  return (unsigned int)v9;
}

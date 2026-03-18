/*
 * XREFs of VidSchFlushHwQueue @ 0x1C00F4440
 * Callers:
 *     VidSchTerminateHwQueue @ 0x1C0042A20 (VidSchTerminateHwQueue.c)
 * Callees:
 *     VidSchiInterlockedReadUlong @ 0x1C00144F0 (VidSchiInterlockedReadUlong.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C003B27C (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiWaitFlushCompletion @ 0x1C009A288 (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushHwQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  KSPIN_LOCK *v6; // rdi
  _DWORD *v7; // rbx
  union _LARGE_INTEGER v9; // [rsp+20h] [rbp-B8h]
  _QWORD v10[20]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v6 = *(KSPIN_LOCK **)(*(_QWORD *)(v4 + 8) + 32LL);
  VidSchRundownUnorderedWaiter<VIDSCH_HW_QUEUE>(a1, (__int64)v6, a3, a4, v9);
  memset(v10, 0, sizeof(v10));
  v7 = (_DWORD *)(a1 + 148);
  if ( *v7 )
  {
    LODWORD(v10[4]) |= 0x50u;
    LODWORD(v10[2]) = 1;
    v10[5] = v7;
    LODWORD(v10[6]) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 16) + 4LL);
    VidSchiWaitFlushCompletion(v6, (__int64)v10, 0x16u);
  }
  return VidSchiInterlockedReadUlong(v6 + 216, v7);
}

/*
 * XREFs of ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AC874
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     EtwTraceInputProcessDelay @ 0x1C00778E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0078070 (EtwTraceMessageCheckDelay.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0126C80 (-EtwCaptureStateCallback@@YAXXZ.c)
 * Callees:
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00AD0F0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 */

void __fastcall EtwpGetLastInputProcessTime(struct tagQ *const a1, int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  if ( a1 )
  {
    *a3 = a2 - *((_DWORD *)a1 + 104);
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v8, a1);
    if ( *((_DWORD *)a1 + 10) )
      v4 = a2 - *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL);
  }
  else
  {
    *a3 = 0;
  }
  *a4 = v4;
}

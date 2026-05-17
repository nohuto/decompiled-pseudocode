/*
 * XREFs of RtlCreateTimerQueue @ 0x180082930
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpRevertCapture @ 0x18000BD78 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18000C0E4 (RtlpTpResumeImpersonation.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlCreateTimerQueue(__int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 Heap; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  HANDLE v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h]

  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a1 = 0LL;
  v4 = RtlpTpRevertCapture(&v9, 0, a3);
  if ( v4 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 48LL);
    v6 = Heap;
    v10 = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_QWORD *)(Heap + 16) = 0LL;
      v7 = (_QWORD *)(Heap + 24);
      v7[1] = v7;
      *v7 = v7;
      *(_QWORD *)(v6 + 40) = 0LL;
      *a1 = v6;
      v4 = 0;
    }
    else
    {
      v4 = -1073741801;
    }
  }
  RtlpTpResumeImpersonation(v9);
  return (unsigned int)v4;
}

/*
 * XREFs of _RtlCreateTimerQueue@4 @ 0x4B2A8F60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateTimerQueue@4 @ 0x4B2A8F60 (_RtlCreateTimerQueue@4.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlCreateTimerQueue(_DWORD *a1)
{
  int result; // eax
  int v2; // esi
  _DWORD *Heap; // eax
  int v4; // [esp+14h] [ebp-20h] BYREF
  int v5; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  result = -1073741823;
  v5 = -1073741823;
  v4 = 0;
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    *a1 = 0;
    ms_exc.registration.TryLevel = 0;
    v2 = RtlpTpRevertCapture(&v4, 0);
    v5 = v2;
    if ( v2 >= 0 )
    {
      Heap = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 24);
      if ( Heap )
      {
        *Heap = 1;
        Heap[1] = 0;
        Heap[2] = 0;
        Heap[4] = Heap + 3;
        Heap[3] = Heap + 3;
        Heap[5] = 0;
        *a1 = Heap;
        v2 = 0;
      }
      else
      {
        v2 = -1073741801;
      }
      v5 = v2;
    }
    ms_exc.registration.TryLevel = -2;
    RtlpTpResumeImpersonation(v4, 1261080551);
    return v2;
  }
  return result;
}

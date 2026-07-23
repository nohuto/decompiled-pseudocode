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

NTSTATUS __cdecl RtlCreateTimerQueue(PHANDLE TimerQueueHandle)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // esi
  _DWORD *Heap; // eax
  SIZE_T v4; // [esp-4h] [ebp-38h]
  HANDLE TokenHandle; // [esp+14h] [ebp-20h] BYREF
  int v6; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  result = -1073741823;
  v6 = -1073741823;
  TokenHandle = 0;
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    *TimerQueueHandle = 0;
    ms_exc.registration.TryLevel = 0;
    v2 = RtlpTpRevertCapture(&TokenHandle);
    v6 = v2;
    if ( v2 >= 0 )
    {
      LODWORD(v4) = 24;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      if ( Heap )
      {
        *Heap = 1;
        Heap[1] = 0;
        Heap[2] = 0;
        Heap[4] = Heap + 3;
        Heap[3] = Heap + 3;
        Heap[5] = 0;
        *TimerQueueHandle = Heap;
        v2 = 0;
      }
      else
      {
        v2 = -1073741801;
      }
      v6 = v2;
    }
    ms_exc.registration.TryLevel = -2;
    RtlpTpResumeImpersonation(TokenHandle, 1261080551);
    return v2;
  }
  return result;
}

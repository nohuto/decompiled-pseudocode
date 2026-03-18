/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x1405C6380
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406AD6BC (PfSetSuperfetchInformation.c)
 *     PfpLogScenarioEvent @ 0x140986F94 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(unsigned int Priority)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v7; // edx
  int v8; // r9d

  if ( Priority > 0x1F )
  {
    return 32;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
    if ( Thread )
      v3 = KeSetPriorityThread(Thread, Priority);
    else
      v3 = 33;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PfTGlobals);
    v4 = KeGetCurrentThread();
    if ( (unsigned __int64)&PfTGlobals - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    _disable();
    p_Process = (__int64)&v4[1].Process;
    v7 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PfTGlobals & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v7;
      p_Process += 96LL;
      if ( v7 >= 6 )
        goto LABEL_16;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_16:
      if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v4, (ULONG_PTR)&PfTGlobals, SessionId, 0LL);
      _enable();
      goto LABEL_24;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v8 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v4->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v8 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v4, (__int64)&PfTGlobals, v8);
LABEL_24:
    KeLeaveCriticalRegion();
  }
  return v3;
}

/*
 * XREFs of _RtlUnlockProcessHeapOnProcessTerminate@0 @ 0x4B2DD99E
 * Callers:
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 * Callees:
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlpHpHeapUnlock@12 @ 0x4B379185 (_RtlpHpHeapUnlock@12.c)
 */

char __thiscall RtlUnlockProcessHeapOnProcessTerminate(void *this)
{
  struct _PEB *v1; // eax
  _DWORD *ProcessHeap; // esi
  _DWORD *v3; // ecx
  void *UniqueThread; // eax

  v1 = NtCurrentPeb();
  ProcessHeap = v1->ProcessHeap;
  if ( ProcessHeap[2] == -571548178 )
  {
    LOBYTE(v1) = RtlpHpHeapUnlock(this);
  }
  else if ( (ProcessHeap[17] & 0x1000000) == 0 )
  {
    v3 = (_DWORD *)ProcessHeap[50];
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    v3[4] = 0;
    v3[3] = UniqueThread;
    v3[1] = -2;
    v3[2] = 1;
    LOBYTE(v1) = RtlUnlockHeap(ProcessHeap);
  }
  return (char)v1;
}

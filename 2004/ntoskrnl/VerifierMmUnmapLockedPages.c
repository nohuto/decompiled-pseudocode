/*
 * XREFs of VerifierMmUnmapLockedPages @ 0x1409E41B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessExitProcessCalled @ 0x140359440 (PsGetProcessExitProcessCalled.c)
 *     ZwQueryVirtualMemory @ 0x1403F3A20 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     VfUtilCheckRuleEnforcement @ 0x1409C35CC (VfUtilCheckRuleEnforcement.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1409D42A0 (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmUnmapLockedPages(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // r9
  __int128 MemoryInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h]
  __int128 v12; // [rsp+50h] [rbp-18h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  MemoryInformation = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( BugCheckParameter2 <= 0x7FFFFFFEFFFFLL )
  {
    if ( CurrentIrql > 1u && (MmVerifierData & 1) != 0 )
    {
      v6 = 122LL;
      goto LABEL_8;
    }
  }
  else if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
  {
    v6 = 121LL;
LABEL_8:
    VerifierBugCheckIfAppropriate(0xC4u, v6, CurrentIrql, BugCheckParameter2, BugCheckParameter3);
  }
  if ( BugCheckParameter2 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (MmVerifierData & 0x800) != 0
      && !PsGetProcessExitProcessCalled((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      v7 = ((*(_DWORD *)(BugCheckParameter3 + 32) + *(_DWORD *)(BugCheckParameter3 + 44)) & 0xFFF)
         + *(unsigned int *)(BugCheckParameter3 + 40)
         + 4095LL;
      if ( (ZwQueryVirtualMemory(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              (PVOID)BugCheckParameter2,
              MemoryRegionInformationEx,
              &MemoryInformation,
              0x30uLL,
              0LL) < 0
         || (_QWORD)MemoryInformation != (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL)
         || (_QWORD)v11 != (v7 & 0xFFFFFFFFFFFFF000uLL)
         || (BYTE12(MemoryInformation) & 1) == 0)
        && VfUtilCheckRuleEnforcement() )
      {
        VerifierBugCheckIfAppropriate(0xC4u, 0xB9uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
      }
    }
  }
  else if ( (*(_WORD *)(BugCheckParameter3 + 10) & 1) == 0 && (MmVerifierData & 0x800) != 0 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0xB6uLL, BugCheckParameter3, *(__int16 *)(BugCheckParameter3 + 10), 1LL);
  }
  v8 = -(__int64)*(unsigned int *)(BugCheckParameter3 + 40);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 192LL, 0xC8u, v8);
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, unsigned __int64))pXdvMmUnmapLockedPages)(
           BugCheckParameter2,
           BugCheckParameter3,
           a3,
           v8);
}

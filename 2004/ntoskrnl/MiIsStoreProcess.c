/*
 * XREFs of MiIsStoreProcess @ 0x1402D55C0
 * Callers:
 *     MiAgeWorkingSet @ 0x140204610 (MiAgeWorkingSet.c)
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 *     MiStoreCheckCandidatePage @ 0x1402D503C (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiCheckFatalAccessViolation @ 0x14034CDD0 (MiCheckFatalAccessViolation.c)
 *     MiCapturePfnVm @ 0x140365E70 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiOrderTrimList @ 0x140536170 (MiOrderTrimList.c)
 *     MiCombinePte @ 0x140557460 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x140557784 (MiCombineWorkingSet.c)
 *     MiCloneProcessAddressSpace @ 0x1408D5A60 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1160) )
  {
    if ( *(_QWORD *)(v1 + 1280) == a1 )
      return 1LL;
  }
  return result;
}

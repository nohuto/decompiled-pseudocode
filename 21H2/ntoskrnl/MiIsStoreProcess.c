/*
 * XREFs of MiIsStoreProcess @ 0x140258450
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiCheckFatalAccessViolation @ 0x14023DA3C (MiCheckFatalAccessViolation.c)
 *     MiStoreCheckCandidatePage @ 0x1402565FC (MiStoreCheckCandidatePage.c)
 *     MiAgeWorkingSet @ 0x1402AD440 (MiAgeWorkingSet.c)
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 *     MiCapturePfnVm @ 0x1403682B0 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiOrderTrimList @ 0x14053B880 (MiOrderTrimList.c)
 *     MiCombinePte @ 0x14055CB40 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x14055CE64 (MiCombineWorkingSet.c)
 *     MiCloneProcessAddressSpace @ 0x1408D91C0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1160) )
  {
    if ( *(_QWORD *)(v1 + 1280) == a1 )
      return 1LL;
  }
  return result;
}

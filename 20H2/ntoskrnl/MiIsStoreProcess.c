/*
 * XREFs of MiIsStoreProcess @ 0x140341D60
 * Callers:
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiAgeWorkingSet @ 0x140269E60 (MiAgeWorkingSet.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     MiCheckFatalAccessViolation @ 0x14031DB30 (MiCheckFatalAccessViolation.c)
 *     MiStoreCheckCandidatePage @ 0x1403425E4 (MiStoreCheckCandidatePage.c)
 *     MiCapturePfnVm @ 0x140367E50 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiOrderTrimList @ 0x140539B40 (MiOrderTrimList.c)
 *     MiCombinePte @ 0x14055AE30 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x14055B154 (MiCombineWorkingSet.c)
 *     MiCloneProcessAddressSpace @ 0x1408DB8A0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1160) )
  {
    if ( *(_QWORD *)(v1 + 1280) == a1 )
      return 1LL;
  }
  return result;
}

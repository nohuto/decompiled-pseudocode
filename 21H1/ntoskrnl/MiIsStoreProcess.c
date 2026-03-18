/*
 * XREFs of MiIsStoreProcess @ 0x14034D700
 * Callers:
 *     MiAgeWorkingSet @ 0x14025D530 (MiAgeWorkingSet.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 *     MiCheckFatalAccessViolation @ 0x14030F700 (MiCheckFatalAccessViolation.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiStoreCheckCandidatePage @ 0x14034F880 (MiStoreCheckCandidatePage.c)
 *     MiCapturePfnVm @ 0x1403654B0 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiOrderTrimList @ 0x140535B20 (MiOrderTrimList.c)
 *     MiCombinePte @ 0x140556E10 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x140557134 (MiCombineWorkingSet.c)
 *     MiCloneProcessAddressSpace @ 0x1408D4710 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1160) )
  {
    if ( *(_QWORD *)(v1 + 1280) == a1 )
      return 1LL;
  }
  return result;
}

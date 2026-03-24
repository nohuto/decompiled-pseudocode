/*
 * XREFs of MiIsStoreProcess @ 0x14026A4B0
 * Callers:
 *     MiAgeWorkingSet @ 0x140208B40 (MiAgeWorkingSet.c)
 *     MiStoreCheckCandidatePage @ 0x14026865C (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiCheckFatalAccessViolation @ 0x1402BF5EC (MiCheckFatalAccessViolation.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 *     MiCapturePfnVm @ 0x140368100 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiOrderTrimList @ 0x14053B640 (MiOrderTrimList.c)
 *     MiCombinePte @ 0x14055C900 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x14055CC24 (MiCombineWorkingSet.c)
 *     MiCloneProcessAddressSpace @ 0x1408D9060 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1160) )
  {
    if ( *(_QWORD *)(v1 + 1280) == a1 )
      return 1LL;
  }
  return result;
}

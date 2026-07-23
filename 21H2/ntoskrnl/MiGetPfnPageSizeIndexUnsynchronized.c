/*
 * XREFs of MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6B08
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402AFFF0 (MiProbeLeafPteAccess.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 *     MiLegitimatePageForDriversToMap @ 0x14030A93C (MiLegitimatePageForDriversToMap.c)
 *     MiPfnsWorthTrying @ 0x14030CE80 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x14030D450 (MiActivePageClaimCandidate.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1403F69B8 (MiGetPagesRemainingInResidentPage.c)
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiGetBaseResidentPage @ 0x1403F6734 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiGetPfnPageSizeIndexUnsynchronized(__int64 a1, int *a2, int *a3, _DWORD *a4)
{
  unsigned int PfnPageSizeIndex; // ebp
  int v5; // esi
  int v6; // ebx
  unsigned __int8 v10; // r14
  __int64 BaseResidentPage; // rax
  __int64 v12; // r8
  __int64 result; // rax

  PfnPageSizeIndex = -1;
  v5 = *(_BYTE *)(a1 + 34) & 7;
  v6 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (*(_QWORD *)(a1 + 40) & 0x1000000000LL) != 0 )
  {
    v10 = MiLockPageInline(a1, (__int64)a2, (__int64)a3, a4);
    if ( (*(_QWORD *)(a1 + 40) & 0x1000000000LL) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a1);
      v6 = *(unsigned __int8 *)(BaseResidentPage + 34) >> 6;
      v5 = *(_BYTE *)(BaseResidentPage + 34) & 7;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
      if ( v12 != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUnlockPage(a1, v10);
  }
  *a2 = v5;
  result = PfnPageSizeIndex;
  *a3 = v6;
  return result;
}

/*
 * XREFs of MiGetPfnPageSizeIndexUnsynchronized @ 0x1403EFAF8
 * Callers:
 *     MiFillSystemPtes @ 0x140274CE0 (MiFillSystemPtes.c)
 *     MiPfnsWorthTrying @ 0x14027F530 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x14027FB00 (MiActivePageClaimCandidate.c)
 *     MiProbeLeafPteAccess @ 0x1402A77A0 (MiProbeLeafPteAccess.c)
 *     MiLegitimatePageForDriversToMap @ 0x1403476D4 (MiLegitimatePageForDriversToMap.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1403EF9A8 (MiGetPagesRemainingInResidentPage.c)
 *     MiCombineAllPhysicalMemory @ 0x1407134D0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiUnlockPage @ 0x1402FFA3C (MiUnlockPage.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiGetBaseResidentPage @ 0x1403EF724 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403EFAC8 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiGetPfnPageSizeIndexUnsynchronized(__int64 a1, int *a2, int *a3, _DWORD *a4)
{
  unsigned int PfnPageSizeIndex; // ebp
  int v5; // esi
  int v6; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r14
  __int64 BaseResidentPage; // rax
  __int64 v15; // r8
  __int64 result; // rax

  PfnPageSizeIndex = -1;
  v5 = *(_BYTE *)(a1 + 34) & 7;
  v6 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (*(_QWORD *)(a1 + 40) & 0x1000000000LL) != 0 )
  {
    v13 = MiLockPageInline(a1, (__int64)a2, (__int64)a3, a4);
    if ( (*(_QWORD *)(a1 + 40) & 0x1000000000LL) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a1, v10, v11, v12);
      v6 = *(unsigned __int8 *)(BaseResidentPage + 34) >> 6;
      v5 = *(_BYTE *)(BaseResidentPage + 34) & 7;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
      if ( v15 != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUnlockPage(a1, v13);
  }
  *a2 = v5;
  result = PfnPageSizeIndex;
  *a3 = v6;
  return result;
}

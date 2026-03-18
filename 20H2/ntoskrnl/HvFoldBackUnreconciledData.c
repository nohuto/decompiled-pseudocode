/*
 * XREFs of HvFoldBackUnreconciledData @ 0x1408790A4
 * Callers:
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140263E60 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x14030A854 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x1406D5C6C (HvFreeUnreconciledData.c)
 */

void __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1728));
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
  v3 = *(_BYTE *)(a1 + 1724) == 0;
  *(_DWORD *)(a1 + 128) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 191) = 1;
  HvFreeUnreconciledData(a1);
}

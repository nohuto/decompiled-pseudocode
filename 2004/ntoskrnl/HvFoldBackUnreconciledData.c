/*
 * XREFs of HvFoldBackUnreconciledData @ 0x140873554
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1402F24B0 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x140333F20 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x140702C28 (HvFreeUnreconciledData.c)
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

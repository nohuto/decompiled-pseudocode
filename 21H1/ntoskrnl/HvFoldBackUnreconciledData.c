/*
 * XREFs of HvFoldBackUnreconciledData @ 0x140872264
 * Callers:
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1402E13C0 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x1402E1944 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x1406DFE98 (HvFreeUnreconciledData.c)
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

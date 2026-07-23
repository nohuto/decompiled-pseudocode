/*
 * XREFs of KiOpFetchNextByte @ 0x140262008
 * Callers:
 *     KiOpDecode @ 0x140261E80 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x1402620D4 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x1403CF6CC (KiOpDecodeModRM.c)
 *     KiOpFetchBytes @ 0x14052492C (KiOpFetchBytes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpFetchNextByte(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rax

  v2 = *(_BYTE **)(a1 + 16);
  if ( v2 == *(_BYTE **)(a1 + 8) )
    return 3221225473LL;
  *a2 = *v2;
  ++*(_QWORD *)(a1 + 16);
  return 0LL;
}

/*
 * XREFs of KiOpFetchNextByte @ 0x140299BF0
 * Callers:
 *     KiOpDecode @ 0x140299A64 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x140299CBC (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x140299D74 (KiOpDecodeModRM.c)
 *     KiOpFetchBytes @ 0x1403B6C24 (KiOpFetchBytes.c)
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

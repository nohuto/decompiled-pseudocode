/*
 * XREFs of KiOpFetchNextByte @ 0x14032B7A8
 * Callers:
 *     KiOpDecode @ 0x14032B620 (KiOpDecode.c)
 *     KiOpLocateDecodeEntry @ 0x14032B874 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x1403CB18C (KiOpDecodeModRM.c)
 *     KiOpFetchBytes @ 0x14051EBEC (KiOpFetchBytes.c)
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

/*
 * XREFs of KiOpFetchBytes @ 0x14052492C
 * Callers:
 *     KiOpDecode @ 0x140261E80 (KiOpDecode.c)
 *     KiOpDecodeModRM @ 0x1403CF6CC (KiOpDecodeModRM.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x140262008 (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpFetchBytes(__int64 a1, int a2, _BYTE *a3)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = KiOpFetchNextByte(a1, a3);
    if ( (int)result < 0 )
      break;
    ++a3;
    if ( !--a2 )
      return 0LL;
  }
  return result;
}

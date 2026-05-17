/*
 * XREFs of _ARRAY_FITS@16 @ 0x4B33DB3F
 * Callers:
 *     _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0 (_RtlpLocateActivationContextSection@20.c)
 * Callees:
 *     _ULongAdd@12 @ 0x4B2E454E (_ULongAdd@12.c)
 */

bool __fastcall ARRAY_FITS(ULONG a1, unsigned int a2, unsigned int a3, ULONG a4)
{
  char v4; // bl
  ULONG v7; // [esp+0h] [ebp-Ch]
  ULONG *v8; // [esp+4h] [ebp-8h]
  ULONG ulAugend; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  if ( !is_mul_ok(a3, a2) || ULongAdd((ULONG)&ulAugend, v7, v8) < 0 )
    return 0;
  if ( a1 < a4 )
    return ulAugend <= a4;
  return v4;
}

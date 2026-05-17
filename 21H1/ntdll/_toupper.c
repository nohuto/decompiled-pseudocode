/*
 * XREFs of _toupper @ 0x4B2FA560
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpcaseUnicodeToMultiByteN@20 @ 0x4B2E0B90 (_RtlUpcaseUnicodeToMultiByteN@20.c)
 *     _RtlAnsiCharToUnicodeChar@4 @ 0x4B2E1DF0 (_RtlAnsiCharToUnicodeChar@4.c)
 */

int __cdecl toupper(int C)
{
  int v2; // [esp+0h] [ebp-10h] BYREF
  unsigned __int8 *p_C; // [esp+4h] [ebp-Ch] BYREF
  __int16 v4; // [esp+8h] [ebp-8h] BYREF
  _BYTE v5[4]; // [esp+Ch] [ebp-4h] BYREF

  p_C = (unsigned __int8 *)&C;
  v4 = RtlAnsiCharToUnicodeChar(&p_C);
  if ( RtlUpcaseUnicodeToMultiByteN((int)v5, 2, (int)&v2, (int)&v4, 2) < 0 )
    return C;
  if ( v2 == 1 )
    return v5[0];
  return v5[1] | (v5[0] << 8);
}

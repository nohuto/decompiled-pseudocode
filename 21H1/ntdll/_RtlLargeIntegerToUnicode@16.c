/*
 * XREFs of _RtlLargeIntegerToUnicode@16 @ 0x4B3506E9
 * Callers:
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

int __thiscall RtlLargeIntegerToUnicode(unsigned int *this, int a2, _WORD *a3)
{
  _WORD *v4; // edx
  unsigned int v5; // esi
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // edi
  int i; // esi
  bool v10; // cc
  size_t v12; // [esp-4h] [ebp-B8h]
  _BYTE v13[6]; // [esp+96h] [ebp-1Eh] BYREF
  CPPEH_RECORD ms_exc; // [esp+9Ch] [ebp-18h]

  v4 = v13;
  v5 = *this;
  v6 = this[1];
  do
  {
    v7 = v5 & 0xF;
    v5 = __PAIR64__(v6, v5) >> 4;
    v6 >>= 4;
    *--v4 = RtlpIntegerWChars[v7];
  }
  while ( __PAIR64__(v6, v5) );
  v8 = (v13 - (_BYTE *)v4) >> 1;
  i = a2;
  if ( a2 >= 0 )
  {
    v10 = v8 <= a2;
  }
  else
  {
    for ( i = -a2; ; --i )
    {
      v10 = v8 <= i;
      if ( v8 >= i )
        break;
      *a3++ = 48;
    }
  }
  if ( !v10 )
    return -2147483643;
  ms_exc.registration.TryLevel = 0;
  LODWORD(v12) = 2 * v8;
  memcpy(a3, v4, v12);
  if ( v8 < i )
    a3[v8] = 0;
  return 0;
}

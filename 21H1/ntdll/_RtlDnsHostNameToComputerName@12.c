/*
 * XREFs of _RtlDnsHostNameToComputerName@12 @ 0x4B34DAA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlOemStringToUnicodeString@12 @ 0x4B2AABF0 (_RtlOemStringToUnicodeString@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlUpcaseUnicodeToOemN@20 @ 0x4B3444F0 (_RtlUpcaseUnicodeToOemN@20.c)
 *     _RtlpDidUnicodeToOemWork@8 @ 0x4B344552 (_RtlpDidUnicodeToOemWork@8.c)
 */

int __stdcall RtlDnsHostNameToComputerName(unsigned __int16 *a1, _DWORD *a2, char a3)
{
  int v3; // esi
  int v4; // eax
  unsigned __int16 v5; // cx
  int result; // eax
  unsigned int v7; // [esp+8h] [ebp-28h] BYREF
  unsigned __int16 v8[2]; // [esp+Ch] [ebp-24h] BYREF
  _BYTE *v9; // [esp+10h] [ebp-20h]
  _DWORD v10[2]; // [esp+14h] [ebp-1Ch] BYREF
  _BYTE v11[16]; // [esp+1Ch] [ebp-14h] BYREF

  v3 = a2[1];
  v10[0] = *a2;
  v4 = 0;
  v5 = v10[0];
  v10[1] = v3;
  if ( LOWORD(v10[0]) >> 1 )
  {
    while ( *(_WORD *)(v3 + 2 * v4) != 46 )
    {
      if ( ++v4 >= (unsigned int)(LOWORD(v10[0]) >> 1) )
        goto LABEL_6;
    }
    v5 = 2 * v4;
    LOWORD(v10[0]) = 2 * v4;
  }
LABEL_6:
  if ( v5 < 2u )
    return -1073741534;
  result = RtlUpcaseUnicodeToOemN((int)v11, 0xFu, &v7, v3, v5);
  if ( result >= 0 || result == -2147483643 )
  {
    v9 = v11;
    v8[1] = 16;
    v8[0] = v7;
    if ( RtlpDidUnicodeToOemWork(v8, (int)v10) )
    {
      result = RtlOemStringToUnicodeString(a1, v8, a3);
      if ( result >= 0 )
        return 0;
      return result;
    }
    return -1073741534;
  }
  return result;
}

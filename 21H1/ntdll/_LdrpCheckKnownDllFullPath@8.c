/*
 * XREFs of _LdrpCheckKnownDllFullPath@8 @ 0x4B2E3ACB
 * Callers:
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 * Callees:
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 */

char __fastcall LdrpCheckKnownDllFullPath(unsigned __int16 *a1, int a2)
{
  char result; // al
  unsigned __int16 *i; // eax
  int v5; // ecx
  unsigned __int16 v6; // cx
  __int16 v7; // ax
  unsigned __int16 v8[2]; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h]

  result = 0;
  if ( LdrpKnownDllPath )
  {
    for ( i = (unsigned __int16 *)(*a1 - 2 + *((_DWORD *)a1 + 1)); ; --i )
    {
      *(_DWORD *)(a2 + 4) = i;
      if ( (unsigned int)i <= *((_DWORD *)a1 + 1) )
        break;
      v5 = *i;
      if ( v5 == 92 || v5 == 47 )
      {
        *(_DWORD *)(a2 + 4) = i + 1;
        break;
      }
    }
    v6 = *(_WORD *)(a2 + 4) - a1[2];
    v7 = *a1 - v6;
    v8[1] = v6;
    *(_WORD *)a2 = v7;
    *(_WORD *)(a2 + 2) = a1[1] - v6;
    v9 = *((_DWORD *)a1 + 1);
    v8[0] = v6 - 2;
    return RtlEqualUnicodeString(v8, (unsigned __int16 *)&LdrpKnownDllPath, 1);
  }
  return result;
}

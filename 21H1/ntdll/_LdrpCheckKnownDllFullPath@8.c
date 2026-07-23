/*
 * XREFs of _LdrpCheckKnownDllFullPath@8 @ 0x4B2E3ACB
 * Callers:
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 * Callees:
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 */

BOOLEAN __fastcall LdrpCheckKnownDllFullPath(unsigned __int16 *a1, int a2)
{
  BOOLEAN result; // al
  unsigned __int16 *i; // eax
  int v5; // ecx
  unsigned __int16 v6; // cx
  __int16 v7; // ax
  _UNICODE_STRING String1; // [esp+4h] [ebp-8h] BYREF

  result = 0;
  if ( LdrpKnownDllPath.Length )
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
    String1.MaximumLength = v6;
    *(_WORD *)a2 = v7;
    *(_WORD *)(a2 + 2) = a1[1] - v6;
    String1.Buffer = (wchar_t *)*((_DWORD *)a1 + 1);
    String1.Length = v6 - 2;
    return RtlEqualUnicodeString(&String1, &LdrpKnownDllPath, 1u);
  }
  return result;
}

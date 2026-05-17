/*
 * XREFs of _RtlpCopyExtendedContext@24 @ 0x4B35BC77
 * Callers:
 *     _RtlCopyExtendedContext@12 @ 0x4B35B760 (_RtlCopyExtendedContext@12.c)
 * Callees:
 *     _RtlpCopyLegacyContext@16 @ 0x4B35BCDD (_RtlpCopyLegacyContext@16.c)
 *     _RtlpCopyXStateChunk@20 @ 0x4B35C23D (_RtlpCopyXStateChunk@20.c)
 *     _RtlpValidateContextFlags@8 @ 0x4B35C543 (_RtlpValidateContextFlags@8.c)
 */

int __fastcall RtlpCopyExtendedContext(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  int v8; // edx
  _BYTE v9[4]; // [esp+4h] [ebp-4h] BYREF

  result = RtlpValidateContextFlags(a4, v9);
  if ( result >= 0 )
  {
    if ( (v9[0] & 1) != 0 )
    {
      v8 = *(_DWORD *)(a5 + 8);
      if ( *(_DWORD *)(a2 + 8) != v8 || *(_DWORD *)(a2 + 12) < *(_DWORD *)(a5 + 12) )
        return -1073741811;
      RtlpCopyLegacyContext(a4, v8 + a5);
    }
    if ( (v9[0] & 2) == 0 )
      return 0;
    result = RtlpCopyXStateChunk(a2, a5, a5);
    if ( result >= 0 )
      return 0;
  }
  return result;
}

/*
 * XREFs of _LdrIsResItemExist@16 @ 0x4B2B8120
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 * Callees:
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _LdrRscIsTypeExist@16 @ 0x4B2BE7B0 (_LdrRscIsTypeExist@16.c)
 */

int __fastcall LdrIsResItemExist(void *a1, wchar_t **a2, int a3, int a4)
{
  int RcConfig; // esi
  int result; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = 0;
  RcConfig = LdrpGetRcConfig(a1, 1, 1);
  if ( !RcConfig )
    return 0x80000;
  if ( LdrRscIsTypeExist(RcConfig, *a2, a4, (int)&v7) < 0 )
    return 393216;
  result = v7;
  if ( (*(_DWORD *)(RcConfig + 20) & 0x100) != 0 )
    result = v7 | 0x100000;
  if ( (*(_BYTE *)(RcConfig + 16) & 0x10) != 0 )
    return result | 0x200000;
  return result;
}

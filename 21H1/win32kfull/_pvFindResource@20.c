/*
 * XREFs of _pvFindResource@20 @ 0xE621E
 * Callers:
 *     ?LOADSTRING@@YGHPAXIPAGH@Z @ 0xE3124 (-LOADSTRING@@YGHPAXIPAGH@Z.c)
 *     _cParseFontResources@16 @ 0xE8BCC (_cParseFontResources@16.c)
 *     _EngFindResource@16 @ 0x1DA0FE (_EngFindResource@16.c)
 * Callees:
 *     <none>
 */

int __fastcall pvFindResource(int a1, unsigned int a2, int a3, int a4, _DWORD *a5)
{
  int v7; // [esp+4h] [ebp-8h] BYREF
  unsigned int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = 0;
  v7 = 0;
  if ( (int)LdrResFindResource(a1, a4, a3, 0, &v8, &v7, 0, 0, 0) >= 0 )
    *a5 = v7;
  return v8 < a2 ? v8 : 0;
}

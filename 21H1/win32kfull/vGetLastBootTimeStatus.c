/*
 * XREFs of vGetLastBootTimeStatus @ 0xDF9F4
 * Callers:
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 * Callees:
 *     bQueryFntCacheReg @ 0xDF8D6 (bQueryFntCacheReg.c)
 */

int vGetLastBootTimeStatus()
{
  int v0; // eax
  int v1; // ecx
  int result; // eax
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = 0;
  *(_DWORD *)(dword_274068 + 8) = 0;
  v0 = bQueryFntCacheReg(ghkeyGreInitialize, L"LastBootTimeFontCacheState", &v3);
  v1 = dword_274068;
  if ( v0 )
    *(_DWORD *)(dword_274068 + 8) = v3;
  result = *(_DWORD *)(v1 + 8);
  *(_DWORD *)(v1 + 12) = result;
  return result;
}

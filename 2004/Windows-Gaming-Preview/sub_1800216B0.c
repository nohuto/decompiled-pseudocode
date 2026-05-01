/*
 * XREFs of sub_1800216B0 @ 0x1800216B0
 * Callers:
 *     sub_180024BE0 @ 0x180024BE0 (sub_180024BE0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1800216B0(__int64 a1, HSTRING *a2)
{
  HRESULT result; // eax
  const WCHAR *v4; // rcx
  __int64 v5; // rdx

  result = 0;
  *a2 = 0LL;
  v4 = *(const WCHAR **)(a1 + 224);
  if ( v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
    return WindowsCreateString(v4, v5, a2);
  }
  return result;
}

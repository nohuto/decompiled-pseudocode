/*
 * XREFs of StringCopyWorkerW_0 @ 0x18043650C
 * Callers:
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x1804359C0 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW_0(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  STRSAFE_LPWSTR v5; // r10
  size_t v6; // r11
  signed __int64 v7; // r9
  __int64 v8; // rdx
  wchar_t v9; // ax
  STRSAFE_LPWSTR v10; // rcx
  HRESULT result; // eax
  size_t v12; // rcx

  v5 = pszDest;
  v6 = 0LL;
  v7 = (char *)pszSrc - (char *)pszDest;
  v8 = 49LL;
  do
  {
    if ( v8 == -2147483597 )
      break;
    v9 = *(STRSAFE_LPWSTR)((char *)v5 + v7);
    if ( !v9 )
      break;
    *v5 = v9;
    ++v6;
    ++v5;
    --v8;
  }
  while ( v8 );
  v10 = v5 - 1;
  result = v8 == 0 ? 0x8007007A : 0;
  if ( v8 )
    v10 = v5;
  *v10 = 0;
  if ( pcchNewDestLength )
  {
    v12 = v6 - 1;
    if ( v8 )
      v12 = v6;
    *pcchNewDestLength = v12;
  }
  return result;
}

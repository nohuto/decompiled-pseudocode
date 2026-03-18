/*
 * XREFs of ?StringCchCatW@@YGJPAGIPBG@Z @ 0xDD112
 * Callers:
 *     ?FinishStockFontInitInternal@@YGXPBGH@Z @ 0xDBCEC (-FinishStockFontInitInternal@@YGXPBGH@Z.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x8A584 (StringCopyWorkerW.c)
 *     StringLengthWorkerW @ 0xDD148 (StringLengthWorkerW.c)
 */

int __stdcall StringCchCatW(size_t cchDest, unsigned int a2, const unsigned __int16 *a3)
{
  int result; // eax
  wchar_t *v4; // ecx
  size_t v5; // [esp+0h] [ebp-8h]
  const wchar_t *v6; // [esp+0h] [ebp-8h]
  wchar_t psz[2]; // [esp+4h] [ebp-4h] BYREF

  result = StringLengthWorkerW(psz, v5, 0);
  if ( result >= 0 )
    return StringCopyWorkerW(v4, cchDest, (size_t *)v4, v6, *(size_t *)psz);
  return result;
}

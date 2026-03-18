/*
 * XREFs of _FontDriverQueryRoutine@24 @ 0x293EED
 * Callers:
 *     <none>
 * Callees:
 *     ?FntCacheHDEV@@YGXPAVPDEV@@K@Z @ 0xE6180 (-FntCacheHDEV@@YGXPAVPDEV@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall FontDriverQueryRoutine(int a1, int a2, wchar_t *Src, int a4, int a5, int a6)
{
  struct _LDEV *Driver; // eax
  struct PDEV **v8; // [esp+8h] [ebp-214h] BYREF
  wchar_t Dst[262]; // [esp+Ch] [ebp-210h] BYREF

  _wcscpy_s(Dst, 0x105u, L"\\SystemRoot\\System32\\");
  if ( (a4 & 0xFFFFFFFE) >= 0x1DC )
    return 0;
  if ( a2 != 1 )
    return 0;
  _wcscat_s(Dst, 0x105u, Src);
  if ( !__wcsicmp(L"\\SystemRoot\\System32\\atmdrvr.dll", Dst) )
    return 0;
  if ( !__wcsicmp(L"\\SystemRoot\\System32\\atmfd.dll", Dst) )
    return 0;
  Driver = (struct _LDEV *)ldevLoadDriver(Dst, 6, 1);
  if ( !Driver )
    return 0;
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v8, Driver, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  if ( !v8 )
    return 0;
  v8[6] = (struct PDEV *)((unsigned int)v8[6] | 0x2000);
  FntCacheHDEV(v8, 0);
  return 1;
}

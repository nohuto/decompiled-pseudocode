/*
 * XREFs of ?IsEqualByAppId@CClassicWindow@@UEBA_NQEBG@Z @ 0x180163750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsEqualByAppId(LPCWCH *this, const WCHAR *a2)
{
  return CompareStringOrdinal(a2, -1, this[5], -1, 1) == 2;
}

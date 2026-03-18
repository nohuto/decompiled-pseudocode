/*
 * XREFs of _xxxUpdateWindowPositionsForDpiBoundaryChange@4 @ 0x152694
 * Callers:
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

void __thiscall xxxUpdateWindowPositionsForDpiBoundaryChange(_DWORD *this)
{
  _DWORD *i; // esi
  _DWORD *v2; // eax
  int v3; // edi

  for ( i = this; i; i = (_DWORD *)*i )
  {
    v2 = (_DWORD *)HMValidateHandleNoSecure(i[1], 1);
    v3 = (int)v2;
    if ( v2 && (i[5] || i[4] || IsChildWindowDpiBoundary(v2)) )
      xxxSetWindowPos(v3, 0, i[2], i[3], 0, 0, 21);
  }
}

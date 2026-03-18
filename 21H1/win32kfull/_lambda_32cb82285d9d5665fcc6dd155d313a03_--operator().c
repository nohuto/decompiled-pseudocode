/*
 * XREFs of _lambda_32cb82285d9d5665fcc6dd155d313a03_::operator() @ 0xEF8DE
 * Callers:
 *     _lambda_32cb82285d9d5665fcc6dd155d313a03_::_lambda_invoker_stdcall_ @ 0xEF7D0 (_lambda_32cb82285d9d5665fcc6dd155d313a03_--_lambda_invoker_stdcall_.c)
 * Callees:
 *     ?NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z @ 0x92358 (-NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YG_NPBUtagWND@@@Z @ 0xAB7F2 (-IsWindowActivateable@@YG_NPBUtagWND@@@Z.c)
 */

bool __stdcall lambda_32cb82285d9d5665fcc6dd155d313a03_::operator()(int a1, _DWORD *a2)
{
  char v2; // bl
  _DWORD *TopWindow; // eax
  _DWORD *v4; // esi

  v2 = 6;
  *a2 = 0;
  a2[1] = 0;
  while ( 1 )
  {
    TopWindow = FindNextTopWindow::NextTopWindow(a1, a1, v2);
    v4 = TopWindow;
    if ( TopWindow )
      break;
    if ( (v2 & 2) == 0 )
      goto LABEL_7;
    v2 &= ~2u;
  }
  if ( IsWindowActivateable((_DWORD *)TopWindow[27]) )
    v4 = (_DWORD *)v4[27];
LABEL_7:
  if ( v4 )
  {
    *a2 = v4;
    a2[1] = 3;
  }
  return *a2 != 0;
}

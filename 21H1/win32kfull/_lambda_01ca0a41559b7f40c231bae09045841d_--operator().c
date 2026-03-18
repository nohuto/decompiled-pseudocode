/*
 * XREFs of _lambda_01ca0a41559b7f40c231bae09045841d_::operator() @ 0xEF870
 * Callers:
 *     _lambda_01ca0a41559b7f40c231bae09045841d_::_lambda_invoker_stdcall_ @ 0xEF7C4 (_lambda_01ca0a41559b7f40c231bae09045841d_--_lambda_invoker_stdcall_.c)
 * Callees:
 *     _SkipWindowOnMonitor@4 @ 0x92526 (_SkipWindowOnMonitor@4.c)
 *     ?IsWindowActivateable@@YG_NPBUtagWND@@@Z @ 0xAB7F2 (-IsWindowActivateable@@YG_NPBUtagWND@@@Z.c)
 */

bool __stdcall lambda_01ca0a41559b7f40c231bae09045841d_::operator()(int a1, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int v3; // eax

  *a2 = 0;
  a2[1] = 0;
  if ( _gpqForegroundPrev )
  {
    if ( IsWindowActivateable(*(_DWORD **)(_gpqForegroundPrev + 68)) )
    {
      v2 = *(_DWORD **)(_gpqForegroundPrev + 68);
      v3 = v2[5];
      if ( (*(_BYTE *)(v3 + 12) & 0x20) == 0 && (*(_BYTE *)(v3 + 23) & 0x20) == 0 && !SkipWindowOnMonitor(v2) )
      {
        *a2 = *(_DWORD *)(_gpqForegroundPrev + 68);
        a2[1] = 4;
      }
    }
  }
  return *a2 != 0;
}

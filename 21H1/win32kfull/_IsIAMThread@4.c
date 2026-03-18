/*
 * XREFs of _IsIAMThread@4 @ 0xAC466
 * Callers:
 *     _NtUserSetActivationFilter@8 @ 0x11952 (_NtUserSetActivationFilter@8.c)
 *     ?IsAppShellGhosted@@YGHPAUtagTHREADINFO@@@Z @ 0xC11B0 (-IsAppShellGhosted@@YGHPAUtagTHREADINFO@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0 (-_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z.c)
 *     ?HandleIAMHotKey@@YGHQBUtagHOTKEY@@@Z @ 0x155E40 (-HandleIAMHotKey@@YGHQBUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall IsIAMThread(_DWORD *this)
{
  int v1; // edx
  bool result; // al

  v1 = this[62];
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 + 176) == (_DWORD)this;
  return result;
}

/*
 * XREFs of _GetPTPShellListener@0 @ 0x178B6F
 * Callers:
 *     ?IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z @ 0x15AE16 (-IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z.c)
 *     _GetPTPShellTarget@0 @ 0x178B8D (_GetPTPShellTarget@0.c)
 * Callees:
 *     <none>
 */

int __stdcall GetPTPShellListener()
{
  int v0; // eax

  if ( _grpdeskRitInput && (v0 = *(_DWORD *)(_grpdeskRitInput + 4)) != 0 )
    return *(_DWORD *)(v0 + 116);
  else
    return 0;
}

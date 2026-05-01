/*
 * XREFs of WindowRelativePositioning::_anonymous_namespace_::MoveBy @ 0x1803F1D84
 * Callers:
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1803F1680 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 * Callees:
 *     WindowRelativePositioning::_anonymous_namespace_::MoveIntoDisplayRect @ 0x1803F1DE0 (WindowRelativePositioning--_anonymous_namespace_--MoveIntoDisplayRect.c)
 */

_OWORD *__fastcall WindowRelativePositioning::_anonymous_namespace_::MoveBy(
        _OWORD *a1,
        _DWORD *a2,
        int a3,
        int a4,
        __int64 a5)
{
  int v6; // r10d
  int v7; // r8d
  int v8; // r10d
  int v9; // edx
  __int128 v10; // xmm0
  _OWORD *result; // rax
  _DWORD v12[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF

  v6 = a3 + *a2;
  v7 = a2[2] + a3;
  v12[0] = v6;
  v8 = a2[1];
  v9 = a2[3];
  v12[2] = v7;
  v12[3] = a4 + v9;
  v12[1] = a4 + v8;
  v10 = *(_OWORD *)WindowRelativePositioning::_anonymous_namespace_::MoveIntoDisplayRect(&v13, v12, a5);
  result = a1;
  *a1 = v10;
  return result;
}

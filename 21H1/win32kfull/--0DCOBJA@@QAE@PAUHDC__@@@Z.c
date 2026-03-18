/*
 * XREFs of ??0DCOBJA@@QAE@PAUHDC__@@@Z @ 0x7AB76
 * Callers:
 *     _GreConvertMemToRedirectionDC@8 @ 0x7AB00 (_GreConvertMemToRedirectionDC@8.c)
 *     _DxgkEngAccumD3DPresentBounds@8 @ 0x1D388A (_DxgkEngAccumD3DPresentBounds@8.c)
 *     _DxgkEngIsRedirectionDC@4 @ 0x1D43D8 (_DxgkEngIsRedirectionDC@4.c)
 *     _GreWatchVisRgnChange@8 @ 0x1FDF85 (_GreWatchVisRgnChange@8.c)
 *     _GreConvertRedirectionToMemDC@8 @ 0x200FC3 (_GreConvertRedirectionToMemDC@8.c)
 * Callees:
 *     <none>
 */

DCOBJA *__thiscall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = HmgShareLockEx(a2, 1, 0);
  return this;
}

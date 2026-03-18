/*
 * XREFs of _GetWindowBordersWithDpiAwareness@12 @ 0x314A8
 * Callers:
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 * Callees:
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 */

int __thiscall GetWindowBordersWithDpiAwareness(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // ecx
  INT WindowDpiLastNotify; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // esi

  v3 = (_DWORD *)this[5];
  v4 = v3[46] & 0xF;
  if ( v4 == 3 )
  {
    WindowDpiLastNotify = (v3[46] >> 8) & 0x1FF;
  }
  else if ( (v3[36] & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(this);
  }
  else if ( !v4 && (v6 = *(_DWORD *)(this[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v6 + 4) + 32) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(this[2] + 232) + 160);
  }
  v7 = this[2];
  if ( *(_DWORD *)(v7 + 340) <= 0x9900u )
    v8 = *(_DWORD *)(v7 + 352);
  else
    v8 = 0;
  return GetWindowBordersForDpiWithCompatFlags2(v3[5], 0, WindowDpiLastNotify, v8);
}

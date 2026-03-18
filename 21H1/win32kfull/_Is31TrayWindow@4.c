/*
 * XREFs of _Is31TrayWindow@4 @ 0x19C56C
 * Callers:
 *     ?xxxUpdateTray@@YGXPAUtagWND@@@Z @ 0x19ED6 (-xxxUpdateTray@@YGXPAUtagWND@@@Z.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 * Callees:
 *     ?IsVSlick@@YGHPAUtagWND@@@Z @ 0x19C50E (-IsVSlick@@YGHPAUtagWND@@@Z.c)
 */

BOOL __thiscall Is31TrayWindow(_DWORD *this)
{
  _DWORD *v2; // ecx
  _BYTE *v4; // eax
  char v5; // dl

  v2 = (_DWORD *)this[16];
  if ( !v2 )
    return !IsVSlick(this);
  v4 = (_BYTE *)v2[5];
  if ( (char)v4[16] < 0 )
    return 0;
  if ( (v4[12] & 0x40) != 0 )
    return IsVSlick(v2);
  v5 = v4[22];
  if ( (v5 & 0xA) != 0 && ((v5 & 0xC0) != 0 || (v4[23] & 0x20) != 0) )
    return IsVSlick(v2);
  return 1;
}

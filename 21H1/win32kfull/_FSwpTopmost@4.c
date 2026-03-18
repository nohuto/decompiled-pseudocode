/*
 * XREFs of _FSwpTopmost@4 @ 0xA5E62
 * Callers:
 *     ?TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z @ 0x32AE4 (-TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z.c)
 *     ?ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z @ 0x38C50 (-ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall FSwpTopmost(_DWORD *this)
{
  return (*(_BYTE *)(this[5] + 11) & 4 ^ (*(unsigned __int8 *)(this[5] + 16) >> 1) & 4u) >> 2;
}

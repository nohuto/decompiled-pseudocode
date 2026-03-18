/*
 * XREFs of _SendDwmIconChange@4 @ 0x1D802
 * Callers:
 *     ?xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z @ 0x13876 (-xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetClassIconEnum@@YGHPAUtagWND@@J@Z @ 0x19C6E6 (-xxxSetClassIconEnum@@YGHPAUtagWND@@J@Z.c)
 *     _xxxRecreateSmallIcons@4 @ 0x1A12BF (_xxxRecreateSmallIcons@4.c)
 * Callees:
 *     _xxxGetWindowSmIcon@8 @ 0x1D0E0 (_xxxGetWindowSmIcon@8.c)
 *     _DwmAsyncIconChange@16 @ 0x1D878 (_DwmAsyncIconChange@16.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __HasCaptionIcon@4 @ 0x321BC (__HasCaptionIcon@4.c)
 */

int __thiscall SendDwmIconChange(_DWORD *this)
{
  int v2; // ebx
  int v3; // esi
  void *v4; // eax
  _BYTE v6[8]; // [esp+10h] [ebp-8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  if ( _HasCaptionIcon(this) && (*(_BYTE *)(this[5] + 22) & 8) != 0 && xxxGetWindowSmIcon((ULONG_PTR)this, 1) )
    v2 = *(_DWORD *)xxxGetWindowSmIcon((ULONG_PTR)this, 1);
  else
    v2 = 0;
  v3 = *(_DWORD *)(this[5] + 172);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  v4 = (void *)ReferenceDwmApiPort();
  return DwmAsyncIconChange(v4, v2, v3);
}

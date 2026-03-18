/*
 * XREFs of SendDwmIconChange @ 0x1C002A5A0
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C000E8BC (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00309B0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023EAD0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C02441FC (xxxRecreateSmallIcons.c)
 * Callees:
 *     DwmAsyncIconChange @ 0x1C002A640 (DwmAsyncIconChange.c)
 *     xxxGetWindowSmIcon @ 0x1C002BFF8 (xxxGetWindowSmIcon.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _HasCaptionIcon @ 0x1C00A08F8 (_HasCaptionIcon.c)
 */

__int64 __fastcall SendDwmIconChange(__int64 a1)
{
  void *v2; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v4);
  if ( (unsigned int)HasCaptionIcon(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 && xxxGetWindowSmIcon(a1) )
    xxxGetWindowSmIcon(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v4);
  v2 = (void *)ReferenceDwmApiPort();
  return DwmAsyncIconChange(v2);
}

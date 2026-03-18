/*
 * XREFs of SendDwmIconChange @ 0x1C00C4E60
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0078134 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00816D4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023D830 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0242F5C (xxxRecreateSmallIcons.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C005C5D8 (_HasCaptionIcon.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxGetWindowSmIcon @ 0x1C00C37C8 (xxxGetWindowSmIcon.c)
 *     DwmAsyncIconChange @ 0x1C00C4F00 (DwmAsyncIconChange.c)
 */

__int64 __fastcall SendDwmIconChange(unsigned __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  if ( (unsigned int)HasCaptionIcon(a1)
    && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0
    && xxxGetWindowSmIcon(a1, 1) )
  {
    xxxGetWindowSmIcon(a1, 1);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
  v3 = (void *)ReferenceDwmApiPort(v2);
  return DwmAsyncIconChange(v3);
}

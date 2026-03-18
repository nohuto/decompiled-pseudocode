/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QAE@ABV0@@Z @ 0x2A41E
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 *     _xxxSendMenuSelect@20 @ 0x1AD617 (_xxxSendMenuSelect@20.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 */

_DWORD *__thiscall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_DWORD *this, int a2)
{
  SmartObjStackRefBase<tagMENU>::Init(**(_DWORD **)a2);
  this[2] = *(_DWORD *)(a2 + 8);
  return this;
}

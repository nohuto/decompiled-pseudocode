/*
 * XREFs of ??1?$SmartObjStackRef@UtagCLS@@@@QAE@XZ @ 0x46B96
 * Callers:
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     __GetClassInfoEx@20 @ 0x8052E (__GetClassInfoEx@20.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
_DWORD *__thiscall SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(_DWORD *this)
{
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(this);
}

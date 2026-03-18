/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QAE@XZ @ 0x2A3EA
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     __GetClassInfoEx@20 @ 0x8052E (__GetClassInfoEx@20.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

_DWORD *__thiscall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_DWORD *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  this[1] = 0;
  *this = gSmartObjNullRef;
  this[1] = *(_DWORD *)(ThreadWin32Thread + 840);
  *(_DWORD *)(ThreadWin32Thread + 840) = this + 1;
  return this;
}

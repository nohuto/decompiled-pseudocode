/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C005AFE4
 * Callers:
 *     IOCPDispatcher_Destroy @ 0x1C005AEF0 (IOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C005AF1C (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00528A0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

IOCPDispatcher *__fastcall IOCPDispatcher::`scalar deleting destructor'(IOCPDispatcher *this)
{
  *(_QWORD *)this = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(this, 0);
  Win32FreePool(this);
  return this;
}

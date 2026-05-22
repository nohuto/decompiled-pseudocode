/*
 * XREFs of ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800B5048
 * Callers:
 *     ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800B4B04 (--1KeyboardOverriderDispatcher@@UEAA@XZ.c)
 *     ?OnDisconnected@KeyboardOverriderDispatcher@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800B53E0 (-OnDisconnected@KeyboardOverriderDispatcher@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800B5E70 (-SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800B5090 (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::DestroyOverriderProxy(KeyboardOverriderDispatcher *this)
{
  NtMITSetKeyboardOverriderState(0LL);
  if ( *((_QWORD *)this + 7) )
    KeyboardOverriderDispatcher::DrainMessageQueue(this);
  *((_BYTE *)this + 728) = 0;
  return NarratorProxy::DestroyNarratorProxy(
           (KeyboardOverriderDispatcher *)((char *)this + 440),
           (KeyboardOverriderDispatcher *)((char *)this + 8));
}

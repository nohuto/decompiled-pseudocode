/*
 * XREFs of _xxxInitInput@4 @ 0xE856E
 * Callers:
 *     ?xxxInitTerminal@@YGJPAUtagTERMINAL@@@Z @ 0xE8316 (-xxxInitTerminal@@YGJPAUtagTERMINAL@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __thiscall xxxInitInput(void *this)
{
  int v3; // [esp+Ch] [ebp-1FCh] BYREF
  void *v4; // [esp+10h] [ebp-1F8h] BYREF
  PVOID Object; // [esp+14h] [ebp-1F4h]
  _BYTE v6[492]; // [esp+18h] [ebp-1F0h] BYREF

  memset(v6, 0, 0x1E8u);
  v4 = this;
  Object = (PVOID)CreateKernelEvent(1, 0);
  if ( !Object )
    return 0;
  if ( !InitCreateSystemThreadsMsg(v6, 2, &v4) )
  {
    Win32FreePool(Object);
    return 0;
  }
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  UserSessionSwitchLeaveCrit();
  v3 = 488;
  if ( (int)LpcSendWaitReceivePort(_CsrApiPort, &loc_20000, v6, v6, &v3, 0) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0);
  Win32FreePool(Object);
  Object = 0;
  EnterCrit(0, 1);
  return _gptiRit != 0;
}

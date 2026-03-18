/*
 * XREFs of xxxInitInput @ 0x1C000C50C
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C000C210 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall xxxInitInput(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v4; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h]
  __int64 v6; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v7[960]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v7, 0, 0x3B8uLL);
  v2 = 0;
  v4 = a1;
  Object = (PVOID)CreateKernelEvent(1LL);
  if ( !Object )
    return 0LL;
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v7, 2LL, &v4) )
  {
    Win32FreePool(Object);
    return 0LL;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  v6 = 952LL;
  if ( (int)LpcSendWaitReceivePort(CsrApiPort, 0x20000LL, v7, v7, &v6, 0LL, v4) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  Win32FreePool(Object);
  Object = 0LL;
  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = gptiRit != 0LL;
  return v2;
}

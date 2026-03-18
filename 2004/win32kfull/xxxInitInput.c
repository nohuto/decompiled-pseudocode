/*
 * XREFs of xxxInitInput @ 0x1C00C136C
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00C1070 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall xxxInitInput(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h]
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v9[960]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v9, 0, 0x3B8uLL);
  v2 = 0;
  v6 = a1;
  Object = (PVOID)CreateKernelEvent(1LL);
  if ( !Object )
    return 0LL;
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v9, 2LL, &v6) )
  {
    Win32FreePool(Object);
    return 0LL;
  }
  if ( gdwInAtomicOperation )
  {
    v3 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v3, gdwInAtomicOperation, v4);
  v8 = 952LL;
  if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *, _BYTE *, __int64 *, _QWORD, __int64, PVOID))LpcSendWaitReceivePort)(
              CsrApiPort,
              0x20000LL,
              v9,
              v9,
              &v8,
              0LL,
              v6,
              Object) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  Win32FreePool(Object);
  Object = 0LL;
  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = gptiRit != 0LL;
  return v2;
}

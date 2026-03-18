/*
 * XREFs of ?SendRequest@PROXYPORT@@QEAAJPEAXK0K@Z @ 0x1C00EEC40
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00EE8FC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall PROXYPORT::SendRequest(PROXYPORT *this, void *a2, int a3, void *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v11[10]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v12[86]; // [rsp+90h] [rbp-70h] BYREF

  memset(v11, 0, 0x48uLL);
  memset(v12, 0, sizeof(v12));
  v11[0] = 0x800000480020LL;
  LODWORD(v11[5]) = a3;
  v11[6] = a2;
  v11[8] = a4;
  v10 = 688LL;
  LODWORD(v11[7]) = a4 != 0LL ? a5 : 0;
  result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
             **(_QWORD **)this,
             0x20000LL,
             v11,
             v12,
             &v10,
             0LL);
  if ( (_DWORD)result == -1073741769 )
    *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
  if ( (int)result >= 0 )
  {
    if ( (WORD2(v12[0]) & 0x7FFF) != 2 )
      return 3221225473LL;
    if ( LOWORD(v12[0]) != 32 )
      return 3221225473LL;
    if ( a4 != (void *)v12[8] )
      return 3221225473LL;
    result = (unsigned int)result;
    if ( a5 != LODWORD(v12[7]) )
      return 3221225473LL;
  }
  return result;
}

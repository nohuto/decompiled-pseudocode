/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0155F10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C004AC8C (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

void *__fastcall NtUserDwmGetRemoteSessionOcclusionEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  void *Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm(a1, a2, a3) )
  {
    v5 = ObOpenObjectByPointer(
           gpRemoteSessionOcclusionEvent,
           0,
           0LL,
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v5 < 0 )
      UserSetLastStatus(v5, 1);
  }
  else
  {
    UserSetLastError(5LL, v3, v4);
  }
  return Handle;
}

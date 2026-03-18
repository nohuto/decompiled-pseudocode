/*
 * XREFs of _NtUserDwmGetRemoteSessionOcclusionEvent@0 @ 0xD34D4
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 */

void *__stdcall NtUserDwmGetRemoteSessionOcclusionEvent()
{
  NTSTATUS v0; // eax
  void *Handle; // [esp+0h] [ebp-4h] BYREF

  Handle = 0;
  if ( UserUnsafeIsCurrentProcessDwm() )
  {
    v0 = ObOpenObjectByPointer(
           _gpRemoteSessionOcclusionEvent,
           0,
           0,
           (ACCESS_MASK)&loc_1F0002 + 1,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v0 < 0 )
      UserSetLastStatus(v0, 1);
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  return Handle;
}

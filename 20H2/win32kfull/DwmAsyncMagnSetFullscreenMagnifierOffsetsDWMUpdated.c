/*
 * XREFs of DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated @ 0x1C027406C
 * Callers:
 *     NtUserSetFullscreenMagnifierOffsetsDWMUpdated @ 0x1C0201C00 (NtUserSetFullscreenMagnifierOffsetsDWMUpdated.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated(
        PVOID Object,
        __int64 a2,
        int a3,
        float a4,
        int a5)
{
  unsigned int v8; // ebx
  _DWORD v10[16]; // [rsp+20h] [rbp-88h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v10, 0, sizeof(v10));
    v10[15] = a5;
    LOWORD(v10[1]) = 0x8000;
    v10[10] = 1073741934;
    *(float *)&v10[14] = a4;
    v10[0] = 4194328;
    *(_QWORD *)&v10[11] = a2;
    v10[13] = a3;
    EtwUpdateEvent(0LL, 1073741934LL);
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}

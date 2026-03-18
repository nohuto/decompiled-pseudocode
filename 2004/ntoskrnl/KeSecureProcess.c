/*
 * XREFs of KeSecureProcess @ 0x14050E5D0
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     VslInitializeSecureProcess @ 0x1404F75E4 (VslInitializeSecureProcess.c)
 */

__int64 __fastcall KeSecureProcess(
        _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _MDL *a7,
        unsigned __int64 a8)
{
  unsigned int v12; // ebx
  _OWORD v14[3]; // [rsp+40h] [rbp-78h] BYREF

  memset(v14, 0, sizeof(v14));
  KiStackAttachProcess(a1, 0LL, (__int64)v14);
  v12 = VslInitializeSecureProcess(a2, a1->SecureState.SecureHandle, a3, a4, a5, a6, a7, a8);
  KiUnstackDetachProcess((__int64)v14, 0LL);
  return v12;
}

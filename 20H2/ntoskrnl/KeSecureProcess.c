/*
 * XREFs of KeSecureProcess @ 0x140511F00
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     VslInitializeSecureProcess @ 0x1404FAE74 (VslInitializeSecureProcess.c)
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
  KiStackAttachProcess(a1, 0, (__int64)v14);
  v12 = VslInitializeSecureProcess(a2, a1->SecureState.SecureHandle, a3, a4, a5, a6, a7, a8);
  KiUnstackDetachProcess((__int64)v14, 0);
  return v12;
}

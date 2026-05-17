/*
 * XREFs of __RtlUserThreadStart@8 @ 0x4B2E7A03
 * Callers:
 *     _RtlUserThreadStart@8 @ 0x4B2F4F40 (_RtlUserThreadStart@8.c)
 * Callees:
 *     ___RtlUserThreadStart@8 @ 0x4B2E7A1F (___RtlUserThreadStart@8.c)
 *     _RtlInitializeExceptionChain@4 @ 0x4B2E7A60 (_RtlInitializeExceptionChain@4.c)
 */

void __stdcall __noreturn _RtlUserThreadStart(int a1, int a2)
{
  _DWORD v2[2]; // [esp+0h] [ebp-8h] BYREF

  RtlInitializeExceptionChain(v2);
  __RtlUserThreadStart(v2[0], v2[1]);
  __debugbreak();
}

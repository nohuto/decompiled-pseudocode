/*
 * XREFs of NvmSubsystemReset @ 0x1C000F978
 * Callers:
 *     NVMeControllerReset @ 0x1C000D088 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016C10 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     <none>
 */

char __fastcall NvmSubsystemReset(__int64 a1)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 32LL) = 1314278757;
  _InterlockedOr(v2, 0);
  StorPortStallExecution(5000LL);
  return 1;
}

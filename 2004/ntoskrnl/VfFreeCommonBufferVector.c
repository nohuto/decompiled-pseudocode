/*
 * XREFs of VfFreeCommonBufferVector @ 0x1409C8CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x1409CBA40 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFreeCommonBufferVector(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1, a2);
}

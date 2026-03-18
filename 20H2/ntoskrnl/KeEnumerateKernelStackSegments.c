/*
 * XREFs of KeEnumerateKernelStackSegments @ 0x14033596C
 * Callers:
 *     MmOutPageKernelStack @ 0x140335834 (MmOutPageKernelStack.c)
 *     PspReaper @ 0x1403358C0 (PspReaper.c)
 *     DbgkpLkmdSnapKernelStack @ 0x1404EC9A8 (DbgkpLkmdSnapKernelStack.c)
 *     PspThreadDelete @ 0x140666EA0 (PspThreadDelete.c)
 *     PsDereferenceKernelStack @ 0x1406E28C0 (PsDereferenceKernelStack.c)
 * Callees:
 *     KeGetNextKernelStackSegment @ 0x140335A08 (KeGetNextKernelStackSegment.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeEnumerateKernelStackSegments(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _OWORD *, __int64),
        __int64 a3)
{
  __int64 v3; // rbp
  char NextKernelStackSegment; // bl
  __int64 v7; // rcx
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  __int128 v10; // [rsp+30h] [rbp-58h]
  _OWORD v11[2]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a3;
  LOBYTE(a3) = 1;
  v9 = 0LL;
  v10 = 0LL;
  KeGetNextKernelStackSegment(a1, &v9, a3);
  do
  {
    v11[0] = v9;
    v11[1] = v10;
    NextKernelStackSegment = KeGetNextKernelStackSegment(a1, &v9, 0LL);
    result = a2(v7, v11, v3);
  }
  while ( NextKernelStackSegment );
  return result;
}

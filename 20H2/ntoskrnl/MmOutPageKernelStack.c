/*
 * XREFs of MmOutPageKernelStack @ 0x140335834
 * Callers:
 *     KiOutSwapKernelStacks @ 0x140335620 (KiOutSwapKernelStacks.c)
 * Callees:
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     KeEnumerateKernelStackSegments @ 0x14033596C (KeEnumerateKernelStackSegments.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall MmOutPageKernelStack(__int64 a1)
{
  _KPROCESS *v2; // rdx
  _QWORD v3[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v3, 0, 0xB8uLL);
  if ( (MiFlags & 0x40) != 0 )
  {
    v3[3] = 0LL;
    LODWORD(v3[1]) = 20;
    KeEnumerateKernelStackSegments(a1, MiOutPageSingleKernelStack, v3);
    MiFlushTbList((unsigned int *)v3, v2);
  }
}

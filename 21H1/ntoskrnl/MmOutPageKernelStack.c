/*
 * XREFs of MmOutPageKernelStack @ 0x14032A4F0
 * Callers:
 *     KiOutSwapKernelStacks @ 0x14032A2DC (KiOutSwapKernelStacks.c)
 * Callees:
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     KeEnumerateKernelStackSegments @ 0x14032A62C (KeEnumerateKernelStackSegments.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
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
    MiFlushTbList((__int64)v3, v2);
  }
}

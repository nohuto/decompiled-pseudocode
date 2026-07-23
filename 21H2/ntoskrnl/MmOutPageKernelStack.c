/*
 * XREFs of MmOutPageKernelStack @ 0x140295CA4
 * Callers:
 *     KiOutSwapKernelStacks @ 0x140295A90 (KiOutSwapKernelStacks.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x140295DDC (KeEnumerateKernelStackSegments.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MmOutPageKernelStack(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v3, 0, 0xB8uLL);
  result = (unsigned int)MiFlags;
  if ( (MiFlags & 0x40) != 0 )
  {
    v3[3] = 0LL;
    LODWORD(v3[1]) = 20;
    KeEnumerateKernelStackSegments(a1, MiOutPageSingleKernelStack, v3);
    return MiFlushTbList(v3);
  }
  return result;
}

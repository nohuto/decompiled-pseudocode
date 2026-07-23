/*
 * XREFs of MiLogKernelStackEvent @ 0x140546D80
 * Callers:
 *     MiInPageSingleKernelStack @ 0x140295F90 (MiInPageSingleKernelStack.c)
 *     MmCreateKernelStack @ 0x1403352B0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1403358C0 (MmDeleteKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogKernelStackEvent(__int64 a1, unsigned int a2, int a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+48h] [rbp-20h] BYREF

  v4[2] = a2;
  v4[1] = a1;
  v5[1] = 24LL;
  v4[0] = 11LL;
  v5[0] = v4;
  return EtwTraceKernelEvent((int)v5, 1, 0x20000001u, (a3 != 1) + 632, 289413890);
}

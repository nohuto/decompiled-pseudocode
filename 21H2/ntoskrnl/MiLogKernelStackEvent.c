/*
 * XREFs of MiLogKernelStackEvent @ 0x140546B40
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1402E4C40 (MiInPageSingleKernelStack.c)
 *     MmCreateKernelStack @ 0x14032A560 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x14032AB70 (MmDeleteKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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

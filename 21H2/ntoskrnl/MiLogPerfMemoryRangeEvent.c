/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x14053185C
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 *     MiDecommitLargePoolVa @ 0x140370830 (MiDecommitLargePoolVa.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x1408C79B0 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp-20h] BYREF
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  v5 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v5 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v10 = 0;
  v7[1] = a1;
  v7[2] = a4;
  v7[0] = v5 | (a3 >> 1) & 0xF;
  v9 = 24;
  v8 = v7;
  return EtwTraceKernelEvent((int)&v8, 1, 0x20000001u, ((a3 & 1) == 0) | 0x278u, 289413890);
}

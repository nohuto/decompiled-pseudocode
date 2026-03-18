/*
 * XREFs of EtwpGetDurationSince @ 0x1405A2EB4
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1402F8FFC (MiAllocateContiguousMemory.c)
 *     MiAllocatePagesForMdl @ 0x140342ADC (MiAllocatePagesForMdl.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     RtlULongLongMult @ 0x1402C1CCC (RtlULongLongMult.c)
 */

ULONGLONG __fastcall EtwpGetDurationSince(__int64 a1)
{
  LARGE_INTEGER v2; // rax
  unsigned __int64 v3; // r10
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER v6; // [rsp+38h] [rbp+10h] BYREF

  v6.QuadPart = 0LL;
  pullResult = 0LL;
  v2 = KeQueryPerformanceCounter(&v6);
  if ( RtlULongLongMult(v2.QuadPart - a1, 0xF4240uLL, &pullResult) >= 0 )
    return pullResult / v6.QuadPart;
  if ( v6.QuadPart / 0xF4240uLL )
    return v3 / (v6.QuadPart / 0xF4240uLL);
  return 0LL;
}

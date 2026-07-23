/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x180006740
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x180005BCC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180006040 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1800067A0 (RtlpHpEnvAllocVA.c)
 */

PVOID __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, ULONG_PTR *a2)
{
  int v3; // [rsp+28h] [rbp-30h]
  int v4; // [rsp+30h] [rbp-28h]
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  RtlpHpEnvAllocVA(&BaseAddress, a2, 4u, v3, v4, *(_QWORD *)(a1 + 32));
  return BaseAddress;
}

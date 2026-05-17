/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x180006740
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x180005BCC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180006040 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1800067A0 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, int a2, int a3)
{
  char v3; // r10
  int v4; // r9d
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 46);
  v6 = 0LL;
  v4 = ((v3 & 6u) < 4 ? 0x2000 : 536883200) | 0x40000;
  if ( (v3 & 8) == 0 )
    v4 = (v3 & 6u) < 4 ? 0x2000 : 536883200;
  RtlpHpEnvAllocVA((unsigned int)&v6, a2, a3, v4, 4);
  return v6;
}

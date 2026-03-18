/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x140306644
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x1403071D4 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x140237A70 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1403078AC (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x140307EEC (RtlpHpVaMgrAllocAligned.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v9 = RtlpHpVaMgrAllocAligned(a1, &v10);
  if ( !v9 )
    return 0LL;
  v2 = *(_WORD *)(a1 + 40);
  v8 = 0LL;
  WORD4(v8) = v2;
  v7 = 0LL;
  v3 = RtlpHpVaMgrRangeCreate(a1, v9, &v7);
  v4 = v9;
  v5 = v3;
  if ( v3 )
    v4 = 0LL;
  v9 = v4;
  if ( v4 )
    RtlpHpEnvFreeVA((unsigned __int64 *)&v9, &v10, 0x8000);
  return v5;
}

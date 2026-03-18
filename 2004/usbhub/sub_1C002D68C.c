/*
 * XREFs of sub_1C002D68C @ 0x1C002D68C
 * Callers:
 *     sub_1C002D410 @ 0x1C002D410 (sub_1C002D410.c)
 * Callees:
 *     sub_1C0001AE8 @ 0x1C0001AE8 (sub_1C0001AE8.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002D93C @ 0x1C002D93C (sub_1C002D93C.c)
 */

void __fastcall sub_1C002D68C(__int64 a1, unsigned __int16 a2, __int32 a3, __int32 a4)
{
  __int64 v7; // rbp
  __m128 *PoolWithTag; // rax
  __m128 *v9; // rsi
  char v10; // [rsp+28h] [rbp-10h]

  v7 = sub_1C0016CA0(a1, a2);
  if ( v7 )
  {
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, 0xA0uLL, 0x42554855u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      sub_1C001D340(PoolWithTag, 0, 0xA0uLL);
      if ( (int)sub_1C0001AE8(a1, (__int64)v9, 1951875663) < 0 )
        goto LABEL_6;
      v9->m128_i32[0] = 1331118703;
      v9[1].m128_u64[0] = a1;
      v9->m128_u64[1] = v7;
      v9[9].m128_i32[2] = a3;
      v9[9].m128_i32[3] = a4;
      KeInitializeTimer((PKTIMER)&v9[1].m128_u16[4]);
      KeInitializeDpc((PRKDPC)&v9[5].m128_u16[4], (PKDEFERRED_ROUTINE)DeferredRoutine, v9);
      v10 = 1;
      if ( (sub_1C002D93C(a1, 1000LL, &v9[1].m128_u16[4], &v9[5].m128_u16[4], 1836343919, v10) & 0xC0000000) == 0xC0000000 )
LABEL_6:
        ExFreePoolWithTag(v9, 0);
      else
        sub_1C000FD80(a1, 8, 1869565524, v7, _InterlockedExchange64((volatile __int64 *)(v7 + 688), (__int64)v9));
    }
  }
}

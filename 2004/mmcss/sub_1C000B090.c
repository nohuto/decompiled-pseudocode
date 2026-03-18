/*
 * XREFs of sub_1C000B090 @ 0x1C000B090
 * Callers:
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 *     sub_1C000C300 @ 0x1C000C300 (sub_1C000C300.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000A0A0 @ 0x1C000A0A0 (sub_1C000A0A0.c)
 */

__int64 __fastcall sub_1C000B090(__m128 **a1)
{
  __m128 *PoolWithQuotaTag; // rax
  __m128 *v3; // rsi
  __m128 *v4; // rbp
  __int64 v5; // r8
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // eax
  _QWORD *v9; // rax
  __int64 result; // rax

  PoolWithQuotaTag = (__m128 *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x60uLL, 0x5073634Du);
  v3 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225495LL;
  sub_1C0003440(PoolWithQuotaTag, 0, 0x60uLL);
  v3->m128_i32[0] = 1;
  v3[2].m128_u64[0] = 1LL;
  v3[5].m128_u64[0] = PsGetCurrentProcess();
  v3[4].m128_u64[1] = (unsigned __int64)&v3[4];
  v3[4].m128_u64[0] = (unsigned __int64)&v3[4];
  ObfReferenceObject((PVOID)v3[5].m128_u64[0]);
  v4 = 0LL;
  ExAcquirePushLockExclusiveEx(&DeviceObject.DeviceQueue.DeviceListHead.Blink, 0LL);
  LOBYTE(v5) = 0;
  v6 = (_QWORD *)DeviceObject.DeviceQueue.1;
  DeviceObject.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
  v7 = v3[5].m128_u64[0];
  if ( !*(_QWORD *)&DeviceObject.DeviceQueue.1 )
  {
LABEL_10:
    RtlRbInsertNodeEx(&DeviceObject.DeviceQueue.Busy, v6, v5, &v3[2].m128_u16[4]);
    goto LABEL_11;
  }
  while ( 1 )
  {
    v8 = sub_1C000A0A0(v7, (__int64)v6);
    if ( v8 <= 0 )
      break;
    v9 = (_QWORD *)v6[1];
    if ( !v9 )
    {
      v5 = 1LL;
      goto LABEL_10;
    }
LABEL_5:
    v6 = v9;
  }
  if ( v8 < 0 )
  {
    v9 = (_QWORD *)*v6;
    if ( !*v6 )
    {
      LOBYTE(v5) = 0;
      goto LABEL_10;
    }
    goto LABEL_5;
  }
  v4 = (__m128 *)(v6 - 5);
  if ( _InterlockedIncrement64(v6 - 1) <= 1 )
    __fastfail(0xEu);
LABEL_11:
  DeviceObject.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&DeviceObject.DeviceQueue.DeviceListHead.Blink, 0LL);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)v3[5].m128_u64[0]);
    ExFreePoolWithTag(v3, 0x5073634Du);
    v3 = v4;
  }
  result = 0LL;
  *a1 = v3;
  return result;
}

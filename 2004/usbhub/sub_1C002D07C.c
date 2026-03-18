/*
 * XREFs of sub_1C002D07C @ 0x1C002D07C
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 *     sub_1C002D328 @ 0x1C002D328 (sub_1C002D328.c)
 *     sub_1C0037328 @ 0x1C0037328 (sub_1C0037328.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0015F10 @ 0x1C0015F10 (sub_1C0015F10.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E9C0 @ 0x1C002E9C0 (sub_1C002E9C0.c)
 */

void __fastcall sub_1C002D07C(__int64 a1, __int32 a2, __int32 a3, __int64 a4, __int64 a5, char *a6)
{
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  char v11; // r10
  unsigned __int64 v12; // rdi
  _DWORD *v13; // r14
  __int64 v14; // rbx
  unsigned __int32 v15; // ebx
  __m128 *PoolWithTag; // rax
  __m128 *v17; // rsi
  __m128 *v18; // r9
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128 *v22; // rax
  int v23; // [rsp+20h] [rbp-58h]

  sub_1C000FD80(a1, 8, 1936880673, a2, a3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E9C0(DeviceObject->DeviceExtension, v8, v9, v10, v23, (__int64)a6, a2, a5, v11);
  v12 = -1LL;
  v13 = sub_1C000F050(a1);
  v14 = -1LL;
  do
    ++v14;
  while ( a6[v14] );
  v15 = v14 + 533;
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v15, 0x42554855u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, v15);
    v18 = v17 + 1;
    v17->m128_i32[3] = a3;
    v17->m128_i32[0] = v15;
    v17->m128_i32[1] = a2;
    if ( *((_QWORD *)v13 + 111) )
    {
      v19 = v13[220];
      v20 = 16LL;
      do
      {
        v21 = v13[221] & v19;
        v19 = v21 + 1;
        v22 = (__m128 *)(*((_QWORD *)v13 + 111) + 32 * v21);
        *v18 = *v22;
        v18[1] = v22[1];
        v18 += 2;
        --v20;
      }
      while ( v20 );
    }
    do
      ++v12;
    while ( a6[v12] );
    sub_1C001D080((char *)v18, a6, v12);
    sub_1C0015F10(a1, 0x22002Bu, (ULONG_PTR)v17, 0LL);
    ExFreePoolWithTag(v17, 0);
  }
}

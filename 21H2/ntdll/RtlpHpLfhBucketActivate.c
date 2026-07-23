/*
 * XREFs of RtlpHpLfhBucketActivate @ 0x180007328
 * Callers:
 *     RtlpHpLfhBucketUpdateStats @ 0x180007294 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhBucketInitialize @ 0x1800074F8 (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpLfhOwnerInitialize @ 0x180007564 (RtlpHpLfhOwnerInitialize.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

char __fastcall RtlpHpLfhBucketActivate(__int64 a1, unsigned int a2)
{
  __int64 v4; // r14
  signed __int64 v5; // r8
  char *v6; // rax
  __int64 v7; // r10
  unsigned int v8; // r13d
  unsigned __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  size_t v13; // r15
  unsigned int v14; // ebp
  _QWORD *v15; // rdi
  char *v16; // r12
  __int64 v17; // r15
  void *v18; // rbx
  __int64 v20; // [rsp+20h] [rbp-48h]
  signed __int64 v21; // [rsp+70h] [rbp+8h]
  unsigned __int64 v22; // [rsp+70h] [rbp+8h]
  unsigned __int64 v23; // [rsp+80h] [rbp+18h]
  unsigned __int64 v24; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v20 = a2;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 128);
  LOBYTE(v6) = v5 & 3;
  if ( (v5 & 3) == 1 )
  {
    v21 = *(_QWORD *)(a1 + 8LL * a2 + 128);
    LOWORD(v21) = v5 | 2;
    v6 = (char *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * a2 + 128), v21, v5);
    if ( v6 == (char *)v5 )
    {
      v7 = *(unsigned __int8 *)(a1 + 56);
      v8 = 1;
      v9 = (unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6;
      v24 = v9 + 64;
      v22 = v9 + 128;
      v10 = v9 + 135 + v7 - (((_BYTE)v7 - 1) & 7);
      v11 = v10 + 8 * v7;
      v12 = v9 - (((_BYTE)v11 - 1) & 0x3F);
      v23 = v12 + v11 + 63;
      if ( (RtlpHpLfhPerfFlags & 0x200) != 0 )
        v8 = v7;
      v13 = v12 + v11 + 63 + (v9 + 64) * v8;
      v6 = (char *)((__int64 (__fastcall *)(_QWORD, size_t))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
                     *(_QWORD *)a1,
                     v13);
      v14 = 0;
      v15 = v6;
      if ( v6 )
      {
        memset(v6, 0, v13);
        RtlpHpLfhBucketInitialize(v15, a2, a1);
        v15[11] = (char *)v15 + v22;
        v6 = (char *)v15 + v10;
        v16 = (char *)v15 + v23;
        v15[12] = v6;
        if ( v8 )
        {
          v17 = 0LL;
          do
          {
            *(_QWORD *)(v15[12] + 8 * v17) = v16;
            v18 = *(void **)(v15[12] + 8 * v17);
            memset(v18, 0, 0x40uLL);
            RtlpHpLfhOwnerInitialize(v18, *((unsigned __int8 *)v15 + 1), v14);
            ++*((_BYTE *)v15 + 2);
            v16 += v24;
            v6 = (char *)v15[11];
            v6[v17++] = v14++;
          }
          while ( v14 < v8 );
          v4 = v20;
        }
        *(_QWORD *)(a1 + 8 * v4 + 128) = v15;
      }
    }
  }
  return (char)v6;
}

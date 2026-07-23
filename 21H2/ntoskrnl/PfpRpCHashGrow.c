/*
 * XREFs of PfpRpCHashGrow @ 0x1407B1DD8
 * Callers:
 *     PfpRpCHashAddEntries @ 0x1406B41D4 (PfpRpCHashAddEntries.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashGrow(__int64 a1, __m128i *a2, ULONG_PTR a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // r12
  unsigned int v8; // esi
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // edi
  char v12; // dl
  unsigned int v13; // r14d
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // r9d
  unsigned int v17; // esi
  __int64 *v18; // r15
  unsigned __int64 v19; // rax
  int v20; // r12d
  __int64 v21; // r8
  char *v22; // rax
  struct _KTHREAD *v23; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 i; // rax
  __int64 v28; // r9
  struct _KTHREAD *v29; // rax
  char *PoolWithTag; // [rsp+20h] [rbp-58h]
  unsigned __int64 v31; // [rsp+28h] [rbp-50h]
  volatile signed __int64 *v32; // [rsp+30h] [rbp-48h]
  __m128i v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+48h] [rbp-30h]
  __m128i Src; // [rsp+50h] [rbp-28h]
  char v36; // [rsp+C0h] [rbp+48h]
  __int64 v37; // [rsp+C0h] [rbp+48h]
  char v38; // [rsp+C8h] [rbp+50h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 128);
  v32 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v8 = a2->m128i_u32[3];
  if ( 2 * a2[1].m128i_i32[0] < v8 )
  {
    v29 = KeGetCurrentThread();
    v11 = 0;
    --v29->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a3, 0LL);
  }
  else
  {
    v9 = 2 * v8;
    if ( v9 < 8 )
      v9 = 8;
    v10 = v9 << a2->m128i_i32[2];
    v11 = 0;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x48436650u);
    if ( PoolWithTag )
    {
      v12 = -1;
      Src = *a2;
      HIDWORD(v34) = 0;
      v36 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
      v13 = 1 << v36;
      v14 = -1;
      v15 = 1 << v36;
      if ( 1 << v36 )
      {
        do
        {
          ++v14;
          v15 >>= 1;
        }
        while ( v15 );
      }
      v16 = v14 + 1;
      if ( ((v13 - 1) & v13) == 0 )
        v16 = v14;
      v38 = v16;
      v17 = v10 >> v16;
      if ( ((v17 - 1) & v17) != 0 )
      {
        for ( ; v17; v17 >>= 1 )
          ++v12;
        v17 = 1 << v12;
      }
      LODWORD(v34) = 0;
      v33.m128i_i64[1] = __PAIR64__(v17, v16);
      v33.m128i_i64[0] = (__int64)PoolWithTag;
      memset(PoolWithTag, 0, (unsigned __int64)v17 << v16);
      v18 = (__int64 *)Src.m128i_i64[0];
      v19 = Src.m128i_i64[0] + ((unsigned __int64)Src.m128i_u32[3] << v36);
      v31 = v19;
      if ( Src.m128i_i64[0] < v19 )
      {
        v20 = 0;
        do
        {
          v21 = *v18;
          if ( *v18 )
          {
            if ( v17 )
            {
              v25 = v17 - 1;
              v26 = 0LL;
              v37 = *v18;
              for ( i = 37
                      * (BYTE6(v37)
                       + 37
                       * (BYTE5(v37)
                        + 37
                        * (BYTE4(v37)
                         + 37
                         * (BYTE3(v37) + 37 * (BYTE2(v37) + 37 * (BYTE1(v37) + 37 * ((unsigned __int8)v21 + 11623883)))))))
                      + (unsigned int)HIBYTE(v37); ; i = v17 - 1 )
              {
                v28 = i & v25;
                v22 = &PoolWithTag[v28 << v38];
                if ( !*(_QWORD *)v22 || *(_QWORD *)v22 == v21 )
                  break;
                if ( !v26 )
                {
                  v26 = 2654435761LL * v21 + 1;
                  if ( ((-79 * (_BYTE)v21) & 1) != 0 )
                    v26 = 2654435761LL * v21;
                }
                v25 = v26 + v28;
              }
            }
            else
            {
              v22 = 0LL;
            }
            memmove(v22, v18, v13);
            v19 = v31;
            LODWORD(v34) = ++v20;
          }
          v18 = (__int64 *)((char *)v18 + v13);
        }
        while ( (unsigned __int64)v18 < v19 );
        v7 = v32;
      }
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a3, 0LL);
      *a2 = v33;
      a2[1].m128i_i64[0] = v34;
      if ( Src.m128i_i64[0] )
      {
        *(_QWORD *)Src.m128i_i64[0] = *a4;
        *a4 = Src.m128i_i64[0];
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  return v11;
}

/*
 * XREFs of MiGetFileOnlyRanges @ 0x14052C814
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x14076B808 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9000 (MiGetNextNonGapPfnPage.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

char *__fastcall MiGetFileOnlyRanges(__int16 *a1, char a2, _QWORD *a3)
{
  char v3; // al
  char *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // r15
  char *AnyMultiplexedVm; // rax
  char v11; // al
  unsigned __int8 v12; // bl
  __int64 NextNonGapPfnPage; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  size_t v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  char *Pool; // rax
  char *v21; // r15
  unsigned __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24[9]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+98h] [rbp+20h]

  v3 = MiFlags;
  v4 = 0LL;
  *a3 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = -1LL;
  if ( (v3 & 0x30) == 0 )
    return 0LL;
  v26 = *a1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v24[0] = 0LL;
  v27 = (__int64)AnyMultiplexedVm;
LABEL_4:
  while ( 1 )
  {
    v11 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v22 = 0LL;
    v12 = v11;
    NextNonGapPfnPage = MiGetNextNonGapPfnPage(v24, &v22, v11, 0);
    MiUnlockWorkingSetShared(v27, v12);
    if ( !NextNonGapPfnPage )
      break;
    v14 = 48 * ((NextNonGapPfnPage + 0x58000000000LL) / 48);
    v15 = v14 - 0x58000000000LL;
    v23 = v14 - 0x58000000000LL;
    v16 = 48 * ((__int64)(NextNonGapPfnPage + v22 + 0x58000000000LL) / 48) - 0x58000000000LL;
    AnyMultiplexedVm = (char *)v27;
    v22 = v16;
    if ( v14 - 0x58000000000LL < v16 )
    {
      v17 = 16 * v6;
      while ( 1 )
      {
        v18 = *(_QWORD *)(v14 - 0x57FFFFFFFD8LL);
        if ( (v18 & 0x2000000000000LL) != 0 && ((a2 & 2) != 0 || ((v18 >> 39) & 0x3FF) == v26) )
        {
          v19 = v14 / 48;
          if ( v7 == -1 || v7 + 1 != v19 )
          {
            if ( v6 == v5 )
            {
              if ( v5 )
                v5 *= 2LL;
              else
                v5 = 16LL;
              Pool = (char *)MiAllocatePool(64, 16 * v5, 0x66506D4Du);
              v21 = Pool;
              if ( !Pool && v4 )
              {
                ExFreePoolWithTag(v4, 0);
                return 0LL;
              }
              if ( v6 )
              {
                memmove(Pool, v4, v17);
                ExFreePoolWithTag(v4, 0);
              }
              v15 = v23;
              v4 = v21;
              v16 = v22;
            }
            *(_QWORD *)&v4[v17 + 8] = 4096LL;
            ++v6;
            *(_QWORD *)&v4[v17] = v19 << 12;
            v17 += 16LL;
          }
          else
          {
            *(_QWORD *)&v4[v17 - 8] += 4096LL;
          }
          v7 = v14 / 48;
        }
        v15 += 48LL;
        v14 += 48LL;
        v23 = v15;
        if ( v15 >= v16 )
        {
          AnyMultiplexedVm = (char *)v27;
          goto LABEL_4;
        }
      }
    }
  }
  *a3 = v6;
  return v4;
}

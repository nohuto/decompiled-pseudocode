/*
 * XREFs of MiGetFileOnlyRanges @ 0x14052E554
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x14076F928 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9B70 (MiGetNextNonGapPfnPage.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char *__fastcall MiGetFileOnlyRanges(__int16 *a1, char a2, _QWORD *a3)
{
  char v3; // al
  char *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // r15
  char *AnyMultiplexedVm; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  char v14; // al
  unsigned __int8 v15; // bl
  __int64 NextNonGapPfnPage; // rsi
  __int64 v17; // r12
  unsigned __int64 v18; // rcx
  size_t v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  char *Pool; // rax
  char *v23; // r15
  unsigned __int64 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26[9]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v28; // [rsp+90h] [rbp+18h]
  __int64 v29; // [rsp+98h] [rbp+20h]

  v3 = MiFlags;
  v4 = 0LL;
  *a3 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = -1LL;
  if ( (v3 & 0x30) == 0 )
    return 0LL;
  v28 = *a1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v26[0] = 0LL;
  v29 = (__int64)AnyMultiplexedVm;
LABEL_4:
  while ( 1 )
  {
    v14 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v11, v12, (_DWORD *)v13);
    v24 = 0LL;
    v15 = v14;
    NextNonGapPfnPage = MiGetNextNonGapPfnPage(v26, &v24, v14, 0);
    MiUnlockWorkingSetShared(v29, v15);
    if ( !NextNonGapPfnPage )
      break;
    v13 = 0x2AAAAAAAAAAAAAABLL;
    v17 = 48 * ((NextNonGapPfnPage + 0x58000000000LL) / 48);
    v12 = v17 - 0x58000000000LL;
    v25 = v17 - 0x58000000000LL;
    v11 = (__int64)(NextNonGapPfnPage + v24 + 0x58000000000LL) / 48;
    v18 = 48 * v11 - 0x58000000000LL;
    AnyMultiplexedVm = (char *)v29;
    v24 = v18;
    if ( v17 - 0x58000000000LL < v18 )
    {
      v19 = 16 * v6;
      while ( 1 )
      {
        v20 = *(_QWORD *)(v17 - 0x57FFFFFFFD8LL);
        v11 = 0x2000000000000LL;
        if ( (v20 & 0x2000000000000LL) != 0 )
        {
          if ( (a2 & 2) != 0 || (v11 = 1023LL, ((v20 >> 39) & 0x3FF) == v28) )
          {
            v11 = (unsigned __int128)(v17 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v21 = v17 / 48;
            if ( v7 == -1 || v7 + 1 != v21 )
            {
              if ( v6 == v5 )
              {
                if ( v5 )
                  v5 *= 2LL;
                else
                  v5 = 16LL;
                Pool = (char *)MiAllocatePool(64, 16 * v5, 0x66506D4Du);
                v23 = Pool;
                if ( !Pool && v4 )
                {
                  ExFreePoolWithTag(v4, 0);
                  return 0LL;
                }
                if ( v6 )
                {
                  memmove(Pool, v4, v19);
                  ExFreePoolWithTag(v4, 0);
                }
                v12 = v25;
                v4 = v23;
                v18 = v24;
                v13 = 0x2AAAAAAAAAAAAAABLL;
              }
              *(_QWORD *)&v4[v19 + 8] = 4096LL;
              ++v6;
              *(_QWORD *)&v4[v19] = v21 << 12;
              v19 += 16LL;
            }
            else
            {
              *(_QWORD *)&v4[v19 - 8] += 4096LL;
            }
            v7 = v17 / 48;
          }
        }
        v12 += 48LL;
        v17 += 48LL;
        v25 = v12;
        if ( v12 >= v18 )
        {
          AnyMultiplexedVm = (char *)v29;
          goto LABEL_4;
        }
      }
    }
  }
  *a3 = v6;
  return v4;
}

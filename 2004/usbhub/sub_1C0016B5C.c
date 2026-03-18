/*
 * XREFs of sub_1C0016B5C @ 0x1C0016B5C
 * Callers:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C00022A0 @ 0x1C00022A0 (sub_1C00022A0.c)
 *     sub_1C000B870 @ 0x1C000B870 (sub_1C000B870.c)
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 *     sub_1C00183BC @ 0x1C00183BC (sub_1C00183BC.c)
 *     sub_1C0018B00 @ 0x1C0018B00 (sub_1C0018B00.c)
 *     sub_1C00304E0 @ 0x1C00304E0 (sub_1C00304E0.c)
 *     sub_1C0033A0C @ 0x1C0033A0C (sub_1C0033A0C.c)
 *     sub_1C00340A0 @ 0x1C00340A0 (sub_1C00340A0.c)
 *     sub_1C0034F64 @ 0x1C0034F64 (sub_1C0034F64.c)
 *     sub_1C0036CFC @ 0x1C0036CFC (sub_1C0036CFC.c)
 *     sub_1C0038920 @ 0x1C0038920 (sub_1C0038920.c)
 *     sub_1C0039D88 @ 0x1C0039D88 (sub_1C0039D88.c)
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 *     sub_1C003DF14 @ 0x1C003DF14 (sub_1C003DF14.c)
 *     sub_1C003E6C4 @ 0x1C003E6C4 (sub_1C003E6C4.c)
 *     sub_1C003F498 @ 0x1C003F498 (sub_1C003F498.c)
 *     sub_1C003F948 @ 0x1C003F948 (sub_1C003F948.c)
 *     sub_1C003FC88 @ 0x1C003FC88 (sub_1C003FC88.c)
 *     sub_1C003FF9C @ 0x1C003FF9C (sub_1C003FF9C.c)
 *     sub_1C0042380 @ 0x1C0042380 (sub_1C0042380.c)
 *     sub_1C0048FE8 @ 0x1C0048FE8 (sub_1C0048FE8.c)
 *     sub_1C0056620 @ 0x1C0056620 (sub_1C0056620.c)
 *     sub_1C0058BE0 @ 0x1C0058BE0 (sub_1C0058BE0.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 */

__int64 __fastcall sub_1C0016B5C(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rsi
  KIRQL v9; // bp
  __int64 v10; // rax
  _DWORD *v11; // rbx
  char *PoolWithTag; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx

  v8 = 0LL;
  sub_1C000FD80(a1, 256, 1817199695, a2, a4);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
  v10 = sub_1C0016CA0(a1, a2);
  if ( v10 )
  {
    v8 = *(_QWORD *)(v10 + 392);
    if ( v8 )
    {
      v11 = sub_1C0011220(*(_QWORD *)(v10 + 392));
      PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, 0x30uLL, 0x42554855u);
      if ( PoolWithTag )
      {
        *(_QWORD *)(PoolWithTag + 4) = 0LL;
        *(_QWORD *)(PoolWithTag + 12) = 0LL;
        *((_DWORD *)PoolWithTag + 5) = 0;
        *((_DWORD *)PoolWithTag + 7) = 0;
        *(_DWORD *)PoolWithTag = 1668571500;
        *((_QWORD *)PoolWithTag + 4) = v8;
        *((_DWORD *)PoolWithTag + 6) = a4;
        *((_QWORD *)PoolWithTag + 5) = a3;
        v13 = PoolWithTag + 8;
        v14 = (_QWORD *)*((_QWORD *)v11 + 160);
        if ( (_DWORD *)*v14 != v11 + 318 )
          __fastfail(3u);
        *v13 = v11 + 318;
        v13[1] = v14;
        *v14 = v13;
        *((_QWORD *)v11 + 160) = v13;
      }
      else
      {
        ++v11[322];
      }
    }
  }
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v9);
  return v8;
}

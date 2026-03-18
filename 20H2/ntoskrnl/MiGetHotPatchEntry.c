/*
 * XREFs of MiGetHotPatchEntry @ 0x1408CC82C
 * Callers:
 *     MiHotPatchImage @ 0x1408CCB74 (MiHotPatchImage.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CCE78 (MiHotPatchImageTreeCompare.c)
 */

unsigned __int64 __fastcall MiGetHotPatchEntry(__int64 a1, __int64 a2, int a3, int *a4)
{
  volatile signed __int64 *v7; // r12
  unsigned __int64 v8; // rsi
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  unsigned __int64 v12; // rax
  _QWORD *Pool; // rax
  unsigned __int64 v14; // r14
  bool v15; // r8
  int v16; // ebp
  unsigned __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v8 = *(_QWORD *)a1;
  v9 = 0;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v8 )
      v8 ^= a1;
    else
      v8 = 0LL;
  }
  v10 = *(_BYTE *)(a1 + 8) & 1;
  if ( !v8 )
    goto LABEL_20;
  do
  {
    v11 = MiHotPatchImageTreeCompare(a2, v8);
    if ( v11 >= 0 )
    {
      if ( v11 <= 0 )
        break;
      v12 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v12 = *(_QWORD *)v8;
    }
    if ( v10 && v12 )
      v8 ^= v12;
    else
      v8 = v12;
  }
  while ( v8 );
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 92) & 1) != 0 )
    {
      v8 = 0LL;
      v9 = 259;
      goto LABEL_43;
    }
    if ( *(_DWORD *)(v8 + 88) == a3 )
    {
      v8 = 0LL;
      v9 = 255;
      goto LABEL_43;
    }
  }
  else
  {
LABEL_20:
    if ( !a3 )
    {
      v8 = 0LL;
      v9 = 1075380276;
      goto LABEL_43;
    }
    Pool = MiAllocatePool(256, 0x60uLL, 0x4E455048u);
    v8 = (unsigned __int64)Pool;
    if ( !Pool )
    {
      v9 = -1073741670;
      goto LABEL_43;
    }
    Pool[3] = a2;
    *((_DWORD *)Pool + 22) = 0;
    v14 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      if ( v14 )
        v14 ^= a1;
      else
        v14 = 0LL;
    }
    v15 = 0;
    v16 = *(_BYTE *)(a1 + 8) & 1;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( (int)MiHotPatchImageTreeCompare(a2, v14) < 0 )
        {
          v17 = *(_QWORD *)v14;
          if ( v16 )
          {
            if ( !v17 )
              goto LABEL_40;
            v17 ^= v14;
          }
          if ( !v17 )
          {
LABEL_40:
            v15 = 0;
            break;
          }
        }
        else
        {
          v17 = *(_QWORD *)(v14 + 8);
          if ( v16 )
          {
            if ( !v17 )
              goto LABEL_34;
            v17 ^= v14;
          }
          if ( !v17 )
          {
LABEL_34:
            v15 = 1;
            break;
          }
        }
        v14 = v17;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64 *)a1, v14, v15, v8);
  }
  *(_DWORD *)(v8 + 92) |= 1u;
LABEL_43:
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  *a4 = v9;
  return v8;
}

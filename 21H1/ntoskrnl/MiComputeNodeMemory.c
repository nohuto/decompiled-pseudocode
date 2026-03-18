/*
 * XREFs of MiComputeNodeMemory @ 0x1407B73E0
 * Callers:
 *     MiUpdatePartitionMemory @ 0x14055D984 (MiUpdatePartitionMemory.c)
 *     MiAddPhysicalMemory @ 0x1408C0540 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C163C (MiRemovePhysicalMemory.c)
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiReferencePageRuns @ 0x1402F02C0 (MiReferencePageRuns.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiDereferencePageRuns @ 0x14037BE90 (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall MiComputeNodeMemory(_QWORD *a1, int a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rsi
  unsigned __int64 v5; // rbp
  _DWORD *v6; // r15
  unsigned int *v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  unsigned int *v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // r14
  unsigned int v13; // esi
  volatile signed __int64 *v14; // r14
  unsigned int *v15; // rdx
  __int64 v16; // r9
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned int *v25; // rax
  unsigned int *v26; // rdx
  __int64 *v27; // r8
  __int64 v28; // r11
  unsigned __int64 v29; // rcx
  __int64 v30; // r10
  _QWORD *v31; // r9
  __int16 v32; // [rsp+20h] [rbp-98h]
  unsigned int v33; // [rsp+28h] [rbp-90h]
  int v34; // [rsp+30h] [rbp-88h]
  unsigned int v35; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-78h]
  unsigned __int64 v37; // [rsp+48h] [rbp-70h]
  unsigned __int64 v38; // [rsp+50h] [rbp-68h]
  _OWORD v40[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v41; // [rsp+80h] [rbp-38h] BYREF

  v4 = a1;
  v5 = -1LL;
  v34 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = (unsigned int *)a1[4];
  v8 = 0LL;
  v32 = *(_WORD *)a1;
  if ( v7 )
  {
    v9 = *v7;
    v35 = *v7;
    v10 = &v7[4 * v9 + 4];
    if ( (_DWORD)v9 )
    {
      v5 = *((_QWORD *)v7 + 2);
      v8 = *(_QWORD *)&v7[4 * (unsigned int)(v9 - 1) + 6] + *(_QWORD *)&v7[4 * (unsigned int)(v9 - 1) + 4] - 1LL;
    }
    a1[864] = v5;
    a1[865] = v8;
  }
  else
  {
    v10 = 0LL;
    v35 = 0;
    if ( !a2 )
    {
      v25 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 1u, a3, a4);
      a2 = v34;
      v6 = v25;
      v10 = &v25[4 * *v25 + 4];
    }
  }
  v11 = 0;
  v12 = v4[2];
  if ( KeNumberNodes )
  {
    v13 = v35;
    v14 = (volatile signed __int64 *)(v12 + 4296);
    do
    {
      memset(v40, 0, sizeof(v40));
      if ( a2 )
      {
        if ( v13 )
        {
          v15 = v10 + 1;
          v16 = v13;
          v17 = v7 + 6;
          do
          {
            if ( *(v15 - 1) == v11 )
              *((_QWORD *)v40 + *v15) += *v17;
            v17 += 2;
            v15 += 2;
            --v16;
          }
          while ( v16 );
        }
      }
      else if ( *v6 )
      {
        v26 = v10;
        v27 = (__int64 *)(v6 + 6);
        v28 = (unsigned int)*v6;
        do
        {
          if ( *v26 == v11 )
          {
            v29 = *(v27 - 1);
            v30 = *v27;
            if ( *v27 )
            {
              v33 = v26[1];
              v31 = (_QWORD *)(48 * v29 - 0x57FFFFFFFD8LL);
              do
              {
                v38 = v5;
                v37 = v5;
                if ( ((*v31 >> 39) & 0x3FF) == v32 )
                {
                  ++*((_QWORD *)v40 + v33);
                  v5 = v29;
                  if ( v37 <= v29 )
                    v5 = v38;
                  if ( v8 < v29 )
                    v8 = v29;
                }
                ++v29;
                v31 += 6;
                --v30;
              }
              while ( v30 );
            }
          }
          v26 += 2;
          v27 += 2;
          --v28;
        }
        while ( v28 );
        v13 = v35;
      }
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
      if ( MmNumberOfChannels )
      {
        v18 = v40;
        v19 = 0LL;
        v20 = (unsigned int)MmNumberOfChannels;
        do
        {
          v19 += *v18;
          *(_QWORD *)((char *)v18 + (char *)v14 - (char *)&v41 - 120) = *v18;
          ++v18;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        v19 = 0LL;
      }
      *((_QWORD *)v14 - 15) = v19;
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v21, v22, v23);
      v14 += 568;
      a2 = v34;
      ++v11;
    }
    while ( v11 < (unsigned __int16)KeNumberNodes );
    v4 = a1;
  }
  v4[865] = v8;
  v24 = 0LL;
  if ( v5 <= v8 )
    v24 = v5;
  v4[864] = v24;
  if ( v6 )
    MiDereferencePageRuns((__int64)v6);
}

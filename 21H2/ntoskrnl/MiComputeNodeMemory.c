/*
 * XREFs of MiComputeNodeMemory @ 0x1407CD210
 * Callers:
 *     MiUpdatePartitionMemory @ 0x1405636B4 (MiUpdatePartitionMemory.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDereferencePageRuns @ 0x14037EB10 (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
  unsigned __int64 v21; // rax
  unsigned int *v22; // rax
  unsigned int *v23; // rdx
  __int64 *v24; // r8
  __int64 v25; // r11
  unsigned __int64 v26; // rcx
  __int64 v27; // r10
  _QWORD *v28; // r9
  __int16 v29; // [rsp+20h] [rbp-98h]
  unsigned int v30; // [rsp+28h] [rbp-90h]
  int v31; // [rsp+30h] [rbp-88h]
  unsigned int v32; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-78h]
  unsigned __int64 v34; // [rsp+48h] [rbp-70h]
  unsigned __int64 v35; // [rsp+50h] [rbp-68h]
  _OWORD v37[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v38; // [rsp+80h] [rbp-38h] BYREF

  v4 = a1;
  v5 = -1LL;
  v31 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = (unsigned int *)a1[4];
  v8 = 0LL;
  v29 = *(_WORD *)a1;
  if ( v7 )
  {
    v9 = *v7;
    v32 = *v7;
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
    v32 = 0;
    if ( !a2 )
    {
      v22 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 1u, a3, a4);
      a2 = v31;
      v6 = v22;
      v10 = &v22[4 * *v22 + 4];
    }
  }
  v11 = 0;
  v12 = v4[2];
  if ( KeNumberNodes )
  {
    v13 = v32;
    v14 = (volatile signed __int64 *)(v12 + 4296);
    do
    {
      memset(v37, 0, sizeof(v37));
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
              *((_QWORD *)v37 + *v15) += *v17;
            v17 += 2;
            v15 += 2;
            --v16;
          }
          while ( v16 );
        }
      }
      else if ( *v6 )
      {
        v23 = v10;
        v24 = (__int64 *)(v6 + 6);
        v25 = (unsigned int)*v6;
        do
        {
          if ( *v23 == v11 )
          {
            v26 = *(v24 - 1);
            v27 = *v24;
            if ( *v24 )
            {
              v30 = v23[1];
              v28 = (_QWORD *)(48 * v26 - 0x57FFFFFFFD8LL);
              do
              {
                v35 = v5;
                v34 = v5;
                if ( ((*v28 >> 39) & 0x3FF) == v29 )
                {
                  ++*((_QWORD *)v37 + v30);
                  v5 = v26;
                  if ( v34 <= v26 )
                    v5 = v35;
                  if ( v8 < v26 )
                    v8 = v26;
                }
                ++v26;
                v28 += 6;
                --v27;
              }
              while ( v27 );
            }
          }
          v23 += 2;
          v24 += 2;
          --v25;
        }
        while ( v25 );
        v13 = v32;
      }
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
      if ( MmNumberOfChannels )
      {
        v18 = v37;
        v19 = 0LL;
        v20 = (unsigned int)MmNumberOfChannels;
        do
        {
          v19 += *v18;
          *(_QWORD *)((char *)v18 + (char *)v14 - (char *)&v38 - 120) = *v18;
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
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v14 += 568;
      a2 = v31;
      ++v11;
    }
    while ( v11 < (unsigned __int16)KeNumberNodes );
    v4 = a1;
  }
  v4[865] = v8;
  v21 = 0LL;
  if ( v5 <= v8 )
    v21 = v5;
  v4[864] = v21;
  if ( v6 )
    MiDereferencePageRuns((__int64)v6);
}

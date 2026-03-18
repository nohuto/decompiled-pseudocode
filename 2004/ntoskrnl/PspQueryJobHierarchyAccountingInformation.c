/*
 * XREFs of PspQueryJobHierarchyAccountingInformation @ 0x140699E9C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     PsAddProcessEnergyValues @ 0x1402D2530 (PsAddProcessEnergyValues.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1403452D4 (KeQuerySchedulingGroupReadyTime.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14068A3B8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x14068AAF0 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x14068AC34 (PspLockRootJobShared.c)
 *     PspUnlockJobConditionally @ 0x14069A198 (PspUnlockJobConditionally.c)
 */

void __fastcall PspQueryJobHierarchyAccountingInformation(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // ecx
  PVOID *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _OWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25[86]; // [rsp+40h] [rbp-C0h] BYREF

  v24[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v25, 0, sizeof(v25));
  PspLockRootJobShared((__int64)Object, (__int64)CurrentThread, v24);
  v5 = 0;
  v6 = (PVOID *)v24;
  while ( Object != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
      break;
    }
  }
  PspEnumJobsAndProcessesInJobHierarchy(
    Object,
    0,
    0,
    (int)PspQueryProcessAccountingInformationCallback,
    (__int64)v25,
    1);
  v10 = v25[14];
  *(_QWORD *)a2 = v25[14] + *((_QWORD *)Object + 20);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Object + 23) + v10;
  v11 = v25[13];
  *(_QWORD *)(a2 + 8) = v25[13] + *((_QWORD *)Object + 21);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)Object + 24) + v11;
  *(_DWORD *)(a2 + 32) = LODWORD(v25[31]) + *((_DWORD *)Object + 52);
  *(_DWORD *)(a2 + 36) = *((_DWORD *)Object + 53);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)Object + 54);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)Object + 55);
  *(_QWORD *)(a2 + 48) = v25[18] + *((_QWORD *)Object + 61);
  *(_QWORD *)(a2 + 56) = v25[19] + *((_QWORD *)Object + 62);
  *(_QWORD *)(a2 + 64) = v25[20] + *((_QWORD *)Object + 63);
  *(_QWORD *)(a2 + 72) = v25[21] + *((_QWORD *)Object + 64);
  *(_QWORD *)(a2 + 80) = v25[22] + *((_QWORD *)Object + 65);
  *(_QWORD *)(a2 + 88) = v25[23] + *((_QWORD *)Object + 66);
  *(_QWORD *)(a2 + 96) = v25[26] + *((_QWORD *)Object + 67);
  *(_QWORD *)(a2 + 104) = v25[27] + *((_QWORD *)Object + 68);
  *(_QWORD *)(a2 + 112) = v25[28] + *((_QWORD *)Object + 69);
  *(_QWORD *)(a2 + 120) = v25[29] + *((_QWORD *)Object + 70);
  *(_QWORD *)(a2 + 128) = v25[30] + *((_QWORD *)Object + 71);
  *(_QWORD *)(a2 + 136) = v25[17] + *((_QWORD *)Object + 25);
  *(_QWORD *)(a2 + 144) = v25[16] + *((_QWORD *)Object + 22);
  *(_QWORD *)(a2 + 152) = v25[15] + *((_QWORD *)Object + 128);
  *(_QWORD *)(a2 + 432) = v25[24] + *((_QWORD *)Object + 198);
  *(_QWORD *)(a2 + 440) = v25[25] + *((_QWORD *)Object + 199);
  v12 = *((_QWORD *)Object + 126);
  if ( v12 )
    *(_QWORD *)(a2 + 152) += KeQuerySchedulingGroupReadyTime(v12 + 128, v7, v8, v9);
  v13 = *((_QWORD *)Object + 166);
  v14 = (_OWORD *)(a2 + 160);
  if ( v13 )
  {
    PsAddProcessEnergyValues((__int64)&v25[32], v13);
    v15 = 2LL;
    v16 = &v25[32];
    do
    {
      v17 = *((_OWORD *)v16 + 1);
      *v14 = *(_OWORD *)v16;
      v18 = *((_OWORD *)v16 + 2);
      v14[1] = v17;
      v19 = *((_OWORD *)v16 + 3);
      v14[2] = v18;
      v20 = *((_OWORD *)v16 + 4);
      v14[3] = v19;
      v21 = *((_OWORD *)v16 + 5);
      v14[4] = v20;
      v22 = *((_OWORD *)v16 + 6);
      v14[5] = v21;
      v23 = *((_OWORD *)v16 + 7);
      v16 += 16;
      v14[6] = v22;
      v14 += 8;
      *(v14 - 1) = v23;
      --v15;
    }
    while ( v15 );
    *v14 = *(_OWORD *)v16;
  }
  else
  {
    memset(v14, 0, 0x110uLL);
  }
  PspUnlockJobConditionally(Object, v24);
  PspUnlockJob(v24[0], (__int64)CurrentThread);
}

/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140597BD4
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140597920 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403570D8 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1403572A0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1403F85D0 (ZwQueryVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x1408CAD9C (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  __int64 *v3; // r15
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // rsi
  __int64 v10; // r9
  unsigned int v11; // r8d
  unsigned int v12; // r13d
  int v13; // ecx
  char *v14; // r14
  __int64 v15; // rax
  char *v16; // rcx
  __int64 v17; // r15
  char *v18; // r12
  char *v19; // rax
  unsigned __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  char *v22; // r8
  char *v23; // r10
  unsigned int v24; // r9d
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  struct _KTHREAD *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  int MemoryInformationLength; // [rsp+20h] [rbp-E0h]
  unsigned int v37; // [rsp+30h] [rbp-D0h]
  unsigned int v38; // [rsp+34h] [rbp-CCh]
  unsigned int v39; // [rsp+38h] [rbp-C8h]
  _OWORD v41[3]; // [rsp+50h] [rbp-B0h] BYREF
  char *v42; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v43[63]; // [rsp+88h] [rbp-78h]
  char MemoryInformation[8]; // [rsp+280h] [rbp+180h] BYREF
  char v45; // [rsp+288h] [rbp+188h] BYREF

  v2 = (*(_BYTE *)(a1 + 6021) & 4) == 0;
  memset(v41, 0, sizeof(v41));
  v3 = a2;
  if ( v2 )
    return (unsigned int)-1073741637;
  v6 = *(_DWORD *)(a1 + 1952);
  v5 = 0;
  v38 = v6;
  if ( !v6 )
    return v5;
  v7 = *(_DWORD *)(a1 + 6208) >> 12;
  v37 = v7;
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6584), 0, (__int64)v41);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 6024);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 6596));
  v11 = 0;
  v12 = 0;
  if ( !*(_DWORD *)(a1 + 6212) )
    goto LABEL_43;
  do
  {
    if ( v11 >= v6 )
      break;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v12) & 0x7FFFFFFFFFFF0000LL) == 0 )
      goto LABEL_42;
    v13 = *(_BYTE *)(a1 + 856) ? 0 : *(unsigned __int16 *)(*(_QWORD *)(a1 + 1112) + 2LL * v12) >> 13;
    if ( v13 != 6 )
      goto LABEL_42;
    v39 = v11 + 1;
    v14 = (char *)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v12, 0, v10, 0);
    if ( (unsigned __int64)v14 <= 3 )
      goto LABEL_41;
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !*v3 )
    {
      v15 = *(unsigned int *)(a1 + 6208);
      v42 = v14;
      v43[0] = v15;
      MmSetPriorityVaRanges(1LL, &v42, 5LL);
      goto LABEL_40;
    }
    v16 = v14;
    v17 = v7 << 12;
    v18 = &v14[v17];
    v19 = MemoryInformation;
    if ( v14 < &v14[v17] )
    {
      do
      {
        *(_QWORD *)v19 = v16;
        v16 += 4096;
        v19 += 16;
      }
      while ( v16 < v18 );
    }
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v14,
           MemoryWorkingSetExInformation,
           MemoryInformation,
           16LL * v37,
           0LL) < 0
      && v14 < v18 )
    {
      v20 = (unsigned __int64 *)&v45;
      v21 = ((unsigned __int64)(v17 - 1) >> 12) + 1;
      do
      {
        *v20 = *v20 & 0xFFFFFFFFF8FFFFFEuLL | 0x6000001;
        v20 += 2;
        --v21;
      }
      while ( v21 );
    }
    v22 = MemoryInformation;
    v23 = v14;
    v24 = 0;
    if ( v14 >= v18 )
    {
      v3 = a2;
      goto LABEL_39;
    }
    do
    {
      if ( (*((_QWORD *)v22 + 1) & 1) != 0 || (*((_QWORD *)v22 + 1) & 0xC00000LL) == 0x400000 )
      {
        v3 = a2;
        v25 = *((_QWORD *)v22 + 1) & 0x7000000LL;
        if ( v25 == 100663296 )
        {
          if ( !*a2 )
          {
            v31 = *(unsigned int *)(a1 + 6208);
            v30 = 5LL;
            v42 = v14;
            v43[0] = v31;
            v29 = 1LL;
            goto LABEL_37;
          }
          v26 = *a2 - 1;
          goto LABEL_28;
        }
        if ( v25 < 0x6000000 )
        {
          v27 = *a2;
          if ( *a2 )
          {
            v28 = 2LL * v24++;
            v43[v28 - 1] = *(_QWORD *)v22;
            v26 = v27 - 1;
            v43[v28] = 4096LL;
LABEL_28:
            *a2 = v26;
          }
        }
      }
      else
      {
        v3 = a2;
      }
      v23 += 4096;
      v22 += 16;
    }
    while ( v23 < v18 );
    if ( !v24 )
      goto LABEL_39;
    v29 = v24;
    v30 = 6LL;
LABEL_37:
    MmSetPriorityVaRanges(v29, &v42, v30);
LABEL_39:
    v7 = v37;
LABEL_40:
    v32 = KeGetCurrentThread();
    --v32->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v12, v33, v34, MemoryInformationLength, 0);
LABEL_41:
    v11 = v39;
    v6 = v38;
LABEL_42:
    ++v12;
  }
  while ( v12 < *(_DWORD *)(a1 + 6212) );
LABEL_43:
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(a1 + 6024);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedAdd((volatile signed __int32 *)(a1 + 6596), 0xFFFFFFFF);
  KiUnstackDetachProcess((__int64)v41, 0);
  return v5;
}

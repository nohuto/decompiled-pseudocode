/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140593A44
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140593790 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402C385C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402C3A24 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1403F2790 (ZwQueryVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x1408C3C0C (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, __int64 *a2, __int64 a3, _DWORD *a4)
{
  bool v4; // zf
  __int64 *v5; // r15
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v11; // rsi
  __int64 v12; // r9
  unsigned int v13; // r8d
  unsigned int v14; // r13d
  int v15; // ecx
  char *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  char *v21; // rcx
  __int64 v22; // r15
  char *v23; // r12
  char *v24; // rax
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // rcx
  char *v27; // r8
  char *v28; // r10
  unsigned int v29; // r9d
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  struct _KTHREAD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r8
  _DWORD *v44; // r9
  int MemoryInformationLength; // [rsp+20h] [rbp-E0h]
  unsigned int v47; // [rsp+30h] [rbp-D0h]
  unsigned int v48; // [rsp+34h] [rbp-CCh]
  unsigned int v49; // [rsp+38h] [rbp-C8h]
  _OWORD v51[3]; // [rsp+50h] [rbp-B0h] BYREF
  char *v52; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v53[63]; // [rsp+88h] [rbp-78h]
  char MemoryInformation[8]; // [rsp+280h] [rbp+180h] BYREF
  char v55; // [rsp+288h] [rbp+188h] BYREF

  v4 = (*(_BYTE *)(a1 + 6021) & 4) == 0;
  memset(v51, 0, sizeof(v51));
  v5 = a2;
  if ( v4 )
    return (unsigned int)-1073741637;
  v8 = *(_DWORD *)(a1 + 1952);
  v7 = 0;
  v48 = v8;
  if ( !v8 )
    return v7;
  v9 = *(_DWORD *)(a1 + 6208) >> 12;
  v47 = v9;
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6584), 0LL, (__int64)v51, a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v11 = (volatile signed __int64 *)(a1 + 6024);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 6596));
  v13 = 0;
  v14 = 0;
  if ( !*(_DWORD *)(a1 + 6212) )
    goto LABEL_43;
  do
  {
    if ( v13 >= v8 )
      break;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v14) & 0x7FFFFFFFFFFF0000LL) == 0 )
      goto LABEL_42;
    v15 = *(_BYTE *)(a1 + 856) ? 0 : *(unsigned __int16 *)(*(_QWORD *)(a1 + 1112) + 2LL * v14) >> 13;
    if ( v15 != 6 )
      goto LABEL_42;
    v49 = v13 + 1;
    v16 = (char *)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v14, 0, v12, 0);
    if ( (unsigned __int64)v16 <= 3 )
      goto LABEL_41;
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
    if ( !*v5 )
    {
      v20 = *(unsigned int *)(a1 + 6208);
      v52 = v16;
      v53[0] = v20;
      MmSetPriorityVaRanges(1LL, &v52, 5LL);
      goto LABEL_40;
    }
    v21 = v16;
    v22 = v9 << 12;
    v23 = &v16[v22];
    v24 = MemoryInformation;
    if ( v16 < &v16[v22] )
    {
      do
      {
        *(_QWORD *)v24 = v21;
        v21 += 4096;
        v24 += 16;
      }
      while ( v21 < v23 );
    }
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v16,
           MemoryWorkingSetExInformation,
           MemoryInformation,
           16LL * v47,
           0LL) < 0
      && v16 < v23 )
    {
      v25 = (unsigned __int64 *)&v55;
      v26 = ((unsigned __int64)(v22 - 1) >> 12) + 1;
      do
      {
        *v25 = *v25 & 0xFFFFFFFFF8FFFFFEuLL | 0x6000001;
        v25 += 2;
        --v26;
      }
      while ( v26 );
    }
    v27 = MemoryInformation;
    v28 = v16;
    v29 = 0;
    if ( v16 >= v23 )
    {
      v5 = a2;
      goto LABEL_39;
    }
    do
    {
      if ( (*((_QWORD *)v27 + 1) & 1) != 0 || (*((_QWORD *)v27 + 1) & 0xC00000LL) == 0x400000 )
      {
        v5 = a2;
        v30 = *((_QWORD *)v27 + 1) & 0x7000000LL;
        if ( v30 == 100663296 )
        {
          if ( !*a2 )
          {
            v36 = *(unsigned int *)(a1 + 6208);
            v35 = 5LL;
            v52 = v16;
            v53[0] = v36;
            v34 = 1LL;
            goto LABEL_37;
          }
          v31 = *a2 - 1;
          goto LABEL_28;
        }
        if ( v30 < 0x6000000 )
        {
          v32 = *a2;
          if ( *a2 )
          {
            v33 = 2LL * v29++;
            v53[v33 - 1] = *(_QWORD *)v27;
            v31 = v32 - 1;
            v53[v33] = 4096LL;
LABEL_28:
            *a2 = v31;
          }
        }
      }
      else
      {
        v5 = a2;
      }
      v28 += 4096;
      v27 += 16;
    }
    while ( v28 < v23 );
    if ( !v29 )
      goto LABEL_39;
    v34 = v29;
    v35 = 6LL;
LABEL_37:
    MmSetPriorityVaRanges(v34, &v52, v35);
LABEL_39:
    v9 = v47;
LABEL_40:
    v37 = KeGetCurrentThread();
    --v37->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v14, v38, v39, MemoryInformationLength, 0);
LABEL_41:
    v13 = v49;
    v8 = v48;
LABEL_42:
    ++v14;
  }
  while ( v14 < *(_DWORD *)(a1 + 6212) );
LABEL_43:
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(a1 + 6024);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v40, v41, v42);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 6596), 0xFFFFFFFF);
  KiUnstackDetachProcess((__int64)v51, 0LL, v43, v44);
  return v7;
}

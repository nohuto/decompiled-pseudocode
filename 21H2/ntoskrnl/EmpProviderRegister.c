/*
 * XREFs of EmpProviderRegister @ 0x14079D1E0
 * Callers:
 *     EmProviderRegister @ 0x14079D170 (EmProviderRegister.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 *     EmInitSystem @ 0x140A4628C (EmInitSystem.c)
 *     HalRegisterErrataCallbacks @ 0x140A465B0 (HalRegisterErrataCallbacks.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     EmpQueueRuleUpdateState @ 0x1403B4338 (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x1403B4654 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x1403B468C (EmpSearchEntryDatabase.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpProviderRegister(
        PVOID Object,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // rsi
  unsigned int v10; // r12d
  void *v11; // rbx
  unsigned int v12; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rax
  PVOID v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r10
  __int64 v20; // rbp
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r10
  _QWORD *v24; // rdx
  __int64 v25; // rax
  PVOID v26; // rax
  unsigned int v27; // ebp
  __int64 v28; // r14
  __int64 *v29; // r10
  __int64 v30; // rsi
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // r10
  _QWORD *v34; // r11
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 i; // rbp
  __int64 v38; // rdx
  _QWORD *j; // rsi
  __int64 k; // rbp
  __int64 v41; // rdx
  _QWORD *m; // rsi
  SIZE_T v44; // rbp
  PVOID v45; // rax
  _QWORD *v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rdx
  _QWORD *v49; // rcx
  void *v50; // rcx
  unsigned int v51; // edx
  _QWORD *v52; // r8
  __int64 v53; // rcx
  _QWORD *v54; // rax
  char *v55; // rcx
  char *v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax

  v7 = a3;
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  if ( a6 && (!(_DWORD)v7 || a2) && (!a5 || a4) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x72704D45u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741670;
      goto LABEL_40;
    }
    PoolWithTag[3] = 0LL;
    *((_DWORD *)PoolWithTag + 8) = 0;
    PoolWithTag[5] = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 0;
    PoolWithTag[1] = 0LL;
    *((_DWORD *)PoolWithTag + 4) = 0;
    v14 = PoolWithTag + 7;
    v14[1] = v14;
    *v14 = v14;
    if ( (_DWORD)v7 )
    {
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * v7), 0x72704D45u);
      *((_QWORD *)v11 + 1) = v15;
      if ( v15 )
      {
        memset(v15, 0, (unsigned int)(8 * v7));
        v16 = (_QWORD *)(a2 + 8);
        *((_DWORD *)v11 + 4) = v7;
        v17 = v7;
        do
        {
          if ( *v16 )
            ++*((_DWORD *)v11 + 8);
          v16 += 3;
          --v17;
        }
        while ( v17 );
        v18 = *((_DWORD *)v11 + 8);
        if ( !v18 )
        {
LABEL_14:
          v19 = 0LL;
          while ( 1 )
          {
            v20 = 3 * v19;
            v21 = *(_QWORD **)(a2 + 24 * v19);
            if ( !v21 )
              goto LABEL_52;
            v22 = EmpSearchEntryDatabase(v21);
            v24 = v22;
            if ( !v22 )
            {
LABEL_49:
              v12 = -1073741275;
              goto LABEL_53;
            }
            *(_QWORD *)(*((_QWORD *)v11 + 1) + 8 * v23) = v22;
            v25 = *(_QWORD *)(a2 + 8 * v20 + 8);
            if ( v25 )
            {
              v46 = (_QWORD *)(*((_QWORD *)v11 + 3) + 32LL * v10);
              *v46 = v25;
              v46[1] = *(_QWORD *)(a2 + 8 * v20 + 16);
              v47 = v24 + 7;
              v48 = (_QWORD *)v24[8];
              v49 = v46 + 2;
              if ( (_QWORD *)*v48 != v47 )
                goto LABEL_72;
              *v49 = v47;
              ++v10;
              v49[1] = v48;
              *v48 = v49;
              v47[1] = v49;
            }
            v19 = (unsigned int)(v23 + 1);
            if ( (unsigned int)v19 >= (unsigned int)v7 )
              goto LABEL_19;
          }
        }
        v44 = (unsigned int)(32 * v18);
        v45 = ExAllocatePoolWithTag(PagedPool, v44, 0x72704D45u);
        *((_QWORD *)v11 + 3) = v45;
        if ( v45 )
        {
          memset(v45, 0, (unsigned int)v44);
          goto LABEL_14;
        }
      }
LABEL_44:
      v12 = -1073741670;
      goto LABEL_53;
    }
LABEL_19:
    if ( !a5 )
    {
LABEL_27:
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v11 + 4); i = (unsigned int)(i + 1) )
      {
        v38 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 8 * i);
        _InterlockedIncrement((volatile signed __int32 *)(v38 + 16));
        for ( j = *(_QWORD **)(v38 + 72); j; j = (_QWORD *)*j )
          EmpQueueRuleUpdateState(*(j - 1), 0LL);
      }
      for ( k = 0LL; (unsigned int)k < *((_DWORD *)v11 + 12); k = (unsigned int)(k + 1) )
      {
        v41 = *(_QWORD *)(*((_QWORD *)v11 + 5) + 8 * k);
        _InterlockedIncrement((volatile signed __int32 *)(v41 + 24));
        for ( m = *(_QWORD **)(v41 + 48); m; m = (_QWORD *)*m )
          EmpQueueRuleUpdateState(*(m - 1), 0LL);
      }
      if ( Object )
        ObfReferenceObject(Object);
      *(_QWORD *)v11 = Object;
      *a6 = v11;
      goto LABEL_40;
    }
    v26 = ExAllocatePoolWithTag(PagedPool, 8 * a5, 0x72704D45u);
    *((_QWORD *)v11 + 5) = v26;
    if ( !v26 )
      goto LABEL_44;
    memset(v26, 0, 8 * a5);
    v27 = 0;
    v28 = 0LL;
    *((_DWORD *)v11 + 12) = a5;
    v29 = (__int64 *)(a4 + 8);
    while ( 1 )
    {
      v30 = *v29;
      if ( !*v29 )
        break;
      v31 = (_QWORD *)*(v29 - 1);
      if ( !v31 )
        break;
      v32 = EmpSearchCallbackDatabase(v31);
      v34 = v32;
      if ( !v32 )
        goto LABEL_49;
      v35 = v32[2];
      if ( v35 && v35 != v30 )
      {
        v12 = -1073741771;
        goto LABEL_53;
      }
      ++v27;
      *(_QWORD *)(v28 + *((_QWORD *)v11 + 5)) = v34;
      v28 += 8LL;
      v34[2] = *v33;
      v36 = v33[1];
      v29 = v33 + 3;
      v34[4] = v36;
      if ( v27 >= a5 )
        goto LABEL_27;
    }
  }
LABEL_52:
  v12 = -1073741811;
LABEL_53:
  if ( v11 )
  {
    v50 = (void *)*((_QWORD *)v11 + 1);
    if ( v50 )
      ExFreePoolWithTag(v50, 0x72704D45u);
    if ( *((_QWORD *)v11 + 3) )
    {
      v51 = 0;
      if ( v10 )
      {
        while ( 1 )
        {
          v52 = (_QWORD *)(32LL * v51 + 16 + *((_QWORD *)v11 + 3));
          v53 = *v52;
          if ( *(_QWORD **)(*v52 + 8LL) != v52 )
            break;
          v54 = (_QWORD *)v52[1];
          if ( (_QWORD *)*v54 != v52 )
            break;
          ++v51;
          *v54 = v53;
          *(_QWORD *)(v53 + 8) = v54;
          if ( v51 >= v10 )
            goto LABEL_61;
        }
LABEL_72:
        __fastfail(3u);
      }
LABEL_61:
      ExFreePoolWithTag(*((PVOID *)v11 + 3), 0x72704D45u);
    }
    v55 = (char *)*((_QWORD *)v11 + 5);
    if ( v55 )
    {
      if ( a5 )
      {
        v56 = (char *)*((_QWORD *)v11 + 5);
        v57 = 0LL;
        v58 = a5;
        do
        {
          v59 = *(_QWORD *)&v55[v57];
          if ( v59 && !*(_DWORD *)(v59 + 24) )
          {
            *(_QWORD *)(v59 + 16) = 0LL;
            v55 = (char *)*((_QWORD *)v11 + 5);
            v56 = v55;
          }
          v57 += 8LL;
          --v58;
        }
        while ( v58 );
        v55 = v56;
      }
      ExFreePoolWithTag(v55, 0x72704D45u);
    }
    ExFreePoolWithTag(v11, 0x72704D45u);
  }
LABEL_40:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v12;
}

/*
 * XREFs of EmpClientRuleRegisterNotification @ 0x140889F54
 * Callers:
 *     EmClientRuleRegisterNotification @ 0x140889F30 (EmClientRuleRegisterNotification.c)
 * Callees:
 *     EmpSearchRuleDatabase @ 0x14026FDA4 (EmpSearchRuleDatabase.c)
 *     EmpSearchTargetRuleList @ 0x14026FDDC (EmpSearchTargetRuleList.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     EmpQueueRuleUpdateState @ 0x1403B4338 (EmpQueueRuleUpdateState.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpClientRuleRegisterNotification(PVOID Object, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // r14
  _QWORD *PoolWithTag; // rsi
  unsigned int v9; // edi
  PVOID v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r11
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  volatile signed __int32 *v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  volatile signed __int32 *v18; // r9
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  char *v22; // rcx
  char *v23; // r8
  __int64 v24; // rax
  __int64 v25; // r9
  volatile signed __int32 *v26; // rdx

  v5 = a3;
  PoolWithTag = 0LL;
  v9 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  if ( a4 && (_DWORD)v5 && a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x6C634D45u);
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_33;
    }
    v10 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(40 * v5), 0x6C634D45u);
    PoolWithTag[1] = v10;
    if ( !v10 )
    {
      v9 = -1073741670;
      goto LABEL_23;
    }
    memset(v10, 0, (unsigned int)(40 * v5));
    v11 = 0LL;
    *((_DWORD *)PoolWithTag + 4) = v5;
    while ( 1 )
    {
      v12 = (unsigned int)v11 + 2 * v11;
      v13 = *(_QWORD **)(a2 + 8 * v12);
      if ( !v13 || !*(_QWORD *)(a2 + 8 * v12 + 8) )
        break;
      v14 = EmpSearchRuleDatabase(v13);
      if ( !v14 || (v15 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v14), (v18 = v15) == 0LL) )
      {
        v9 = -1073741275;
        goto LABEL_23;
      }
      v19 = (unsigned int)v11 + 4 * v11;
      *(_QWORD *)(PoolWithTag[1] + 8 * v19) = v15;
      *(_QWORD *)(PoolWithTag[1] + 8 * v19 + 8) = *(_QWORD *)(a2 + 8 * v17 + 8);
      *(_QWORD *)(PoolWithTag[1] + 8 * v19 + 16) = *(_QWORD *)(a2 + 8 * v17 + 16);
      v20 = *(_QWORD **)(v16 + 88);
      v21 = (_QWORD *)(PoolWithTag[1] + 24LL + 8 * v19);
      if ( *v20 != v16 + 80 )
        __fastfail(3u);
      *v21 = v16 + 80;
      v21[1] = v20;
      *v20 = v21;
      *(_QWORD *)(v16 + 88) = v21;
      if ( _InterlockedIncrement(v18) == 1 )
        EmpQueueRuleUpdateState(v16, 0LL);
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= (unsigned int)v5 )
      {
        if ( Object )
          ObfReferenceObject(Object);
        *PoolWithTag = Object;
        *a4 = PoolWithTag;
        goto LABEL_33;
      }
    }
  }
  v9 = -1073741811;
LABEL_23:
  if ( PoolWithTag )
  {
    v22 = (char *)PoolWithTag[1];
    if ( v22 )
    {
      if ( (_DWORD)v5 )
      {
        v23 = (char *)PoolWithTag[1];
        v24 = 0LL;
        v25 = v5;
        do
        {
          v26 = *(volatile signed __int32 **)&v22[v24];
          if ( v26 )
          {
            _InterlockedAdd(v26, 0xFFFFFFFF);
            v22 = (char *)PoolWithTag[1];
            v23 = v22;
          }
          v24 += 40LL;
          --v25;
        }
        while ( v25 );
        v22 = v23;
      }
      ExFreePoolWithTag(v22, 0x6C634D45u);
    }
    ExFreePoolWithTag(PoolWithTag, 0x6C634D45u);
  }
LABEL_33:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v9;
}

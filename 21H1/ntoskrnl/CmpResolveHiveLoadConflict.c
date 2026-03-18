/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x14086A178
 * Callers:
 *     CmLoadKey @ 0x1405D5730 (CmLoadKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmpUnJoinClassOfTrust @ 0x1402D2E54 (CmpUnJoinClassOfTrust.c)
 *     SetFailureLocation @ 0x140315198 (SetFailureLocation.c)
 *     CmpJoinClassOfTrust @ 0x140322E14 (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x140322E90 (CmpPerformTrustClassAccessCheck.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     CmpRecordUnloadEventForHive @ 0x1406593A0 (CmpRecordUnloadEventForHive.c)
 *     CmpReferenceKeyControlBlock @ 0x1406596B4 (CmpReferenceKeyControlBlock.c)
 *     UNLOCK_HIVE_LOAD @ 0x140691040 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406911D4 (LOCK_HIVE_LOAD.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086A030 (CmpIsHiveAlreadyLoaded.c)
 */

__int64 __fastcall CmpResolveHiveLoadConflict(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        char a7,
        __int64 *a8,
        _DMA_OPERATIONS **a9)
{
  __int64 v12; // r15
  __int64 v13; // rdx
  int v14; // eax
  PADAPTER_OBJECT v15; // rsi
  unsigned int v16; // edi
  int v17; // eax
  int v18; // ebx
  __int64 *v19; // rdi
  int v20; // edx
  int v22; // [rsp+20h] [rbp-E0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  _DMA_OPERATIONS **v27; // [rsp+60h] [rbp-A0h]
  _OWORD v28[19]; // [rsp+70h] [rbp-90h] BYREF

  v25 = a8;
  v26 = a2;
  v27 = a9;
  v24 = 0LL;
  v12 = 0LL;
  DmaAdapter = 0LL;
  memset(v28, 0, 0x128uLL);
  LODWORD(v28[6]) = -1;
  *((_QWORD *)&v28[9] + 1) = &v28[9];
  *(_QWORD *)&v28[9] = &v28[9];
  memset((char *)&v28[13] + 8, 0, 0x50uLL);
  v14 = ObReferenceObjectByNameEx(a1, v13, 131097, (__int64)CmKeyObjectType, 0, (__int64)v28, &DmaAdapter);
  v15 = DmaAdapter;
  if ( v14 < 0 )
  {
    v16 = -1073741275;
    goto LABEL_27;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
    goto LABEL_9;
  if ( !CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    v17 = CmpPerformTrustClassAccessCheck(v12, a7);
    v18 = v17;
    if ( v17 < 0 )
    {
      SetFailureLocation(a6, 0, 33, v17, 32);
LABEL_21:
      if ( v18 == -1073741275 )
        v18 = -1073741823;
      v16 = v18;
      goto LABEL_26;
    }
LABEL_9:
    if ( CmpIsHiveAlreadyLoaded((__int64)v15, v26, a3, &v24, v25) )
    {
      v19 = v24;
      v20 = *((_DWORD *)v24 + 40);
      if ( ((v20 & 0x8000) == 0 || (a3 & 0x2000) != 0) && ((v20 & 0x8000) != 0 || (a3 & 0x2000) == 0) )
      {
        CmpLockKcbExclusive((__int64)v15->DmaOperations);
        if ( (a3 & 0x800) != 0 )
        {
          CmpReferenceKeyControlBlock((ULONG_PTR)v15->DmaOperations);
          *v27 = v15->DmaOperations;
        }
        if ( a5 && (v18 = CmpRecordUnloadEventForHive((__int64)v19, a5), v18 < 0) )
        {
          CmpUnlockKcb((ULONG_PTR)v15->DmaOperations);
          SetFailureLocation(a6, 0, 33, v18, 80);
        }
        else
        {
          CmpUnlockKcb((ULONG_PTR)v15->DmaOperations);
          if ( v12 )
          {
            CmpUnJoinClassOfTrust((__int64)v19);
            *((_DWORD *)v19 + 1038) |= 1u;
            CmpJoinClassOfTrust((__int64)v19, v12, a7);
          }
          v18 = 0;
        }
        goto LABEL_21;
      }
      v22 = 64;
    }
    else
    {
      v22 = 48;
    }
    v16 = -1073741757;
    SetFailureLocation(a6, 0, 33, -1073741757, v22);
    goto LABEL_26;
  }
  v16 = -1073741444;
  SetFailureLocation(a6, 0, 33, -1073741444, 16);
LABEL_26:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
LABEL_27:
  if ( v15 )
    HalPutDmaAdapter(v15);
  CmpCleanupParseContext((__int64)v28, 0);
  return v16;
}

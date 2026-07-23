/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x14086E884
 * Callers:
 *     CmLoadKey @ 0x140619944 (CmLoadKey.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x140213A50 (CmpUnJoinClassOfTrust.c)
 *     CmpJoinClassOfTrust @ 0x140214140 (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x1402141BC (CmpPerformTrustClassAccessCheck.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpReferenceKeyControlBlock @ 0x1405E09D4 (CmpReferenceKeyControlBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x1405E0DB8 (CmpRecordUnloadEventForHive.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140667984 (LOCK_HIVE_LOAD.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E73C (CmpIsHiveAlreadyLoaded.c)
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
  int v13; // eax
  PADAPTER_OBJECT v14; // rsi
  unsigned int v15; // edi
  signed int v16; // eax
  signed int v17; // ebx
  __int64 *v18; // rdi
  int v19; // edx
  unsigned int v21; // [rsp+20h] [rbp-E0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  _DMA_OPERATIONS **v26; // [rsp+60h] [rbp-A0h]
  _OWORD v27[19]; // [rsp+70h] [rbp-90h] BYREF

  v24 = a8;
  v25 = a2;
  v26 = a9;
  v23 = 0LL;
  v12 = 0LL;
  DmaAdapter = 0LL;
  memset(v27, 0, 0x128uLL);
  LODWORD(v27[6]) = -1;
  *((_QWORD *)&v27[9] + 1) = &v27[9];
  *(_QWORD *)&v27[9] = &v27[9];
  memset((char *)&v27[13] + 8, 0, 0x50uLL);
  v13 = ObReferenceObjectByNameEx(a1, 0LL, 131097, (__int64)CmKeyObjectType, 0, (__int64)v27, &DmaAdapter);
  v14 = DmaAdapter;
  if ( v13 < 0 )
  {
    v15 = -1073741275;
    goto LABEL_27;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
    goto LABEL_9;
  if ( !CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    v16 = CmpPerformTrustClassAccessCheck(v12, a7);
    v17 = v16;
    if ( v16 < 0 )
    {
      SetFailureLocation(a6, 0, 33, v16, 0x20u);
LABEL_21:
      if ( v17 == -1073741275 )
        v17 = -1073741823;
      v15 = v17;
      goto LABEL_26;
    }
LABEL_9:
    if ( CmpIsHiveAlreadyLoaded((__int64)v14, v25, a3, &v23, v24) )
    {
      v18 = v23;
      v19 = *((_DWORD *)v23 + 40);
      if ( ((v19 & 0x8000) == 0 || (a3 & 0x2000) != 0) && ((v19 & 0x8000) != 0 || (a3 & 0x2000) == 0) )
      {
        CmpLockKcbExclusive((__int64)v14->DmaOperations);
        if ( (a3 & 0x800) != 0 )
        {
          CmpReferenceKeyControlBlock((ULONG_PTR)v14->DmaOperations);
          *v26 = v14->DmaOperations;
        }
        if ( a5 && (v17 = CmpRecordUnloadEventForHive((__int64)v18, a5), v17 < 0) )
        {
          CmpUnlockKcb((ULONG_PTR)v14->DmaOperations);
          SetFailureLocation(a6, 0, 33, v17, 0x50u);
        }
        else
        {
          CmpUnlockKcb((ULONG_PTR)v14->DmaOperations);
          if ( v12 )
          {
            CmpUnJoinClassOfTrust((__int64)v18);
            *((_DWORD *)v18 + 1038) |= 1u;
            CmpJoinClassOfTrust((__int64)v18, v12, a7);
          }
          v17 = 0;
        }
        goto LABEL_21;
      }
      v21 = 64;
    }
    else
    {
      v21 = 48;
    }
    v15 = -1073741757;
    SetFailureLocation(a6, 0, 33, 0xC0000043, v21);
    goto LABEL_26;
  }
  v15 = -1073741444;
  SetFailureLocation(a6, 0, 33, 0xC000017C, 0x10u);
LABEL_26:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
LABEL_27:
  if ( v14 )
    HalPutDmaAdapter(v14);
  CmpCleanupParseContext((__int64)v27, 0);
  return v15;
}

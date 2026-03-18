/*
 * XREFs of CmpPromoteKey @ 0x1409226E0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpIsKeyStackDeleted @ 0x140720F74 (CmpIsKeyStackDeleted.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpPopulateKcbStack @ 0x1407C063C (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1407C07F4 (CmpStartKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140922400 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140922984 (CmpPromoteSingleKeyFromKcbStacks.c)
 */

__int64 __fastcall CmpPromoteKey(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  __int16 v4; // dx
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  int started; // ebx
  __int64 v8; // r8
  struct _LOOKASIDE_LIST_EX *v9; // r9
  struct _LOOKASIDE_LIST_EX *v10; // r9
  unsigned int v11; // r14d
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v13; // r13
  __int64 v14; // rdi
  __int64 i; // rsi
  __int128 *v16; // r15
  __int128 *v17; // r12
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rsi
  __int128 *v27; // rax
  __int128 v29; // [rsp+20h] [rbp-48h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-38h]
  __int128 v31; // [rsp+40h] [rbp-28h] BYREF
  PPRIVILEGE_SET v32[2]; // [rsp+50h] [rbp-18h]
  __int64 KcbAtLayerHeight; // [rsp+B0h] [rbp+48h]

  v3 = *(_WORD *)(a1 + 2);
  v29 = 0LL;
  WORD1(v29) = -1;
  v31 = 0LL;
  WORD1(v31) = -1;
  *(_OWORD *)Privileges = 0LL;
  *(_OWORD *)v32 = 0LL;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v3);
  started = CmpStartKcbStack((__int64)&v29, v4, v5, v6);
  if ( started < 0 )
    goto LABEL_32;
  started = CmpStartKcbStack((__int64)&v31, v3, v8, v9);
  if ( started < 0 )
    goto LABEL_32;
  v11 = ((*(_DWORD *)(KcbAtLayerHeight + 8) >> 21) & 0x3FF) + 1;
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                    PagedPool,
                                                    8LL * v11,
                                                    0x37364D43u,
                                                    v10);
  v13 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    started = -1073741670;
    goto LABEL_32;
  }
  memset(TransientPoolWithTag, 0, 8LL * v11);
  LODWORD(v14) = v11;
  for ( i = KcbAtLayerHeight; !_bittest((const signed __int32 *)(i + 184), 0x12u); i = *(_QWORD *)(i + 72) )
  {
    v14 = (*(_DWORD *)(i + 8) >> 21) & 0x3FF;
    *((_QWORD *)&v13->PrivilegeCount + v14) = i;
  }
  v16 = &v29;
  v17 = &v31;
  CmpPopulateKcbStack((__int64)&v31, i);
  CmpLockKcbStackTopExclusiveRestShared((__int64)&v31);
  v18 = KcbAtLayerHeight;
  if ( i == KcbAtLayerHeight )
  {
    if ( a2 )
    {
      ExAcquirePushLockSharedEx(*(_QWORD *)(i + 32) + 72LL, 0LL);
      v19 = CmpFullPromoteHiveRootFromKcbStack((__int64)&v31);
      v20 = *(_QWORD *)(i + 32);
      started = v19;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v20 + 72));
      KeAbPostRelease(v20 + 72);
      if ( started < 0 )
        goto LABEL_30;
    }
    goto LABEL_29;
  }
  if ( (unsigned int)v14 >= v11 )
  {
LABEL_29:
    started = 0;
    if ( !a3 )
      goto LABEL_30;
    goto LABEL_31;
  }
  while ( 1 )
  {
    v21 = *((_QWORD *)&v13->PrivilegeCount + (unsigned int)v14);
    CmpPopulateKcbStack((__int64)v16, v21);
    CmpLockKcbStackTopExclusiveRestShared(v22);
    if ( CmpIsKeyStackDeleted((__int64)v16) )
      break;
    v23 = *(_DWORD *)(v21 + 40);
    if ( v21 == v18 )
    {
      if ( v23 != -1 && !a2 )
        goto LABEL_25;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v21 + 32) + 72LL, 0LL);
      LOBYTE(v24) = a2;
    }
    else
    {
      if ( v23 != -1 )
        goto LABEL_25;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v21 + 32) + 72LL, 0LL);
      v24 = 0LL;
    }
    v25 = CmpPromoteSingleKeyFromKcbStacks(v17, v16, v24);
    v26 = *(_QWORD *)(v21 + 32);
    started = v25;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v26 + 72));
    KeAbPostRelease(v26 + 72);
    if ( started < 0 )
      goto LABEL_28;
    v18 = KcbAtLayerHeight;
LABEL_25:
    CmpUnlockKcbStack((__int64)v17);
    v27 = v16;
    LODWORD(v14) = v14 + 1;
    v16 = v17;
    v17 = v27;
    if ( (unsigned int)v14 >= v11 )
      goto LABEL_29;
  }
  started = -1073741444;
LABEL_28:
  CmpUnlockKcbStack((__int64)v16);
LABEL_30:
  CmpUnlockKcbStack((__int64)v17);
LABEL_31:
  CmSiFreeMemory(v13);
LABEL_32:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v32[1] )
    CmSiFreeMemory(v32[1]);
  return (unsigned int)started;
}

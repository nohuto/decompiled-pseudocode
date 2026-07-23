/*
 * XREFs of CmpPromoteKey @ 0x140880428
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ED2B8 (CmDeleteLayeredKey.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DDD8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E29C (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14065DE90 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmpStartKcbStack @ 0x140712760 (CmpStartKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1407128D0 (CmpPopulateKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x140712920 (CmpIsKeyStackDeleted.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087FFA4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1408806DC (CmpPromoteSingleKeyFromKcbStacks.c)
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
  bool v11; // r15
  unsigned int v12; // r14d
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v14; // r12
  __int64 v15; // rdi
  __int64 i; // rsi
  __int128 *v17; // r12
  __int128 *v18; // r13
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rsi
  __int128 *v28; // rax
  __int128 v30; // [rsp+30h] [rbp-48h] BYREF
  PPRIVILEGE_SET v31[2]; // [rsp+40h] [rbp-38h]
  __int128 v32; // [rsp+50h] [rbp-28h] BYREF
  PPRIVILEGE_SET v33[2]; // [rsp+60h] [rbp-18h]
  __int64 KcbAtLayerHeight; // [rsp+C0h] [rbp+48h]
  struct _PRIVILEGE_SET *Privileges; // [rsp+D8h] [rbp+60h]

  v3 = *(_WORD *)(a1 + 2);
  v30 = 0LL;
  WORD1(v30) = -1;
  v32 = 0LL;
  WORD1(v32) = -1;
  *(_OWORD *)v31 = 0LL;
  *(_OWORD *)v33 = 0LL;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v3);
  started = CmpStartKcbStack((__int64)&v30, v4, v5, v6);
  if ( started < 0 )
    goto LABEL_33;
  started = CmpStartKcbStack((__int64)&v32, v3, v8, v9);
  if ( started < 0 )
    goto LABEL_33;
  v11 = 1;
  v12 = ((*(_DWORD *)(KcbAtLayerHeight + 8) >> 21) & 0x3FF) + 1;
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                    PagedPool,
                                                    8LL * v12,
                                                    0x37364D43u,
                                                    v10);
  Privileges = TransientPoolWithTag;
  v14 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    started = -1073741670;
    goto LABEL_33;
  }
  memset(TransientPoolWithTag, 0, 8LL * v12);
  LODWORD(v15) = v12;
  for ( i = KcbAtLayerHeight; (*(_DWORD *)(i + 184) & 0x40000) == 0; i = *(_QWORD *)(i + 72) )
  {
    v15 = (*(_DWORD *)(i + 8) >> 21) & 0x3FF;
    *((_QWORD *)&v14->PrivilegeCount + v15) = i;
  }
  v17 = &v30;
  v18 = &v32;
  CmpPopulateKcbStack((__int64)&v32, i);
  CmpLockKcbStackTopExclusiveRestShared((__int64)&v32);
  v19 = KcbAtLayerHeight;
  if ( i == KcbAtLayerHeight )
  {
    if ( a2 )
    {
      ExAcquirePushLockSharedEx(*(_QWORD *)(i + 32) + 72LL, 0LL);
      v20 = CmpFullPromoteHiveRootFromKcbStack((__int64)&v32);
      v21 = *(_QWORD *)(i + 32);
      started = v20;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v21 + 72));
      KeAbPostRelease(v21 + 72);
      if ( started < 0 )
        goto LABEL_31;
    }
LABEL_29:
    started = 0;
    v11 = a3 == 0;
    goto LABEL_30;
  }
  if ( (unsigned int)v15 >= v12 )
    goto LABEL_29;
  while ( 1 )
  {
    v22 = *((_QWORD *)&Privileges->PrivilegeCount + (unsigned int)v15);
    CmpPopulateKcbStack((__int64)v17, v22);
    CmpLockKcbStackTopExclusiveRestShared(v23);
    if ( CmpIsKeyStackDeleted((__int64)v17, 0LL) )
      break;
    v24 = *(_DWORD *)(v22 + 40);
    if ( v22 == v19 )
    {
      if ( v24 != -1 && !a2 )
        goto LABEL_25;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v22 + 32) + 72LL, 0LL);
      LOBYTE(v25) = a2;
    }
    else
    {
      if ( v24 != -1 )
        goto LABEL_25;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v22 + 32) + 72LL, 0LL);
      v25 = 0LL;
    }
    v26 = CmpPromoteSingleKeyFromKcbStacks(v18, v17, v25);
    v27 = *(_QWORD *)(v22 + 32);
    started = v26;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v27 + 72));
    KeAbPostRelease(v27 + 72);
    if ( started < 0 )
      goto LABEL_28;
    v19 = KcbAtLayerHeight;
LABEL_25:
    CmpUnlockKcbStack((__int64)v18);
    v28 = v17;
    LODWORD(v15) = v15 + 1;
    v17 = v18;
    v18 = v28;
    if ( (unsigned int)v15 >= v12 )
      goto LABEL_29;
  }
  started = -1073741444;
LABEL_28:
  CmpUnlockKcbStack((__int64)v17);
LABEL_30:
  if ( v11 )
LABEL_31:
    CmpUnlockKcbStack((__int64)v18);
  CmSiFreeMemory(Privileges);
LABEL_33:
  if ( v31[1] )
    CmSiFreeMemory(v31[1]);
  if ( v33[1] )
    CmSiFreeMemory(v33[1]);
  return (unsigned int)started;
}

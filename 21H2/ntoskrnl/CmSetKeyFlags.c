/*
 * XREFs of CmSetKeyFlags @ 0x14086DDD8
 * Callers:
 *     NtSetInformationKey @ 0x1406E3160 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140213DB0 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14026D0B0 (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpCleanupRollbackPacket @ 0x1405E094C (CmpCleanupRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1405E119C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmAddLogForAction @ 0x14060E74C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x140617BA0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140619820 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140619E60 (CmpLockIXLockExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14065DE90 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x140660DF4 (CmpGetKeyNodeForKcb.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1406DEC70 (CmpGetEffectiveKcbSemantics.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E364 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x14077AA8C (CmpAbortRollbackPacket.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863F5C (CmpReleaseKeyNodeForKcb.c)
 *     CmpRetryBackOff @ 0x1408751A0 (CmpRetryBackOff.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EC08 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140880428 (CmpPromoteKey.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // r12
  __int64 v5; // r15
  int v7; // edi
  __int64 v8; // rbx
  ULONG_PTR v9; // rsi
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 KeyNodeForKcb; // rax
  __int64 v18; // rcx
  int v19; // r13d
  int v20; // r13d
  int v21; // r13d
  __int16 v22; // ax
  unsigned int v23; // r14d
  _QWORD *UnitOfWork; // rax
  __int64 v26; // [rsp+28h] [rbp-59h] BYREF
  _QWORD *v27; // [rsp+30h] [rbp-51h]
  __int64 v28; // [rsp+38h] [rbp-49h] BYREF
  int v29; // [rsp+40h] [rbp-41h] BYREF
  __int128 v30; // [rsp+48h] [rbp-39h] BYREF
  __int128 v31; // [rsp+58h] [rbp-29h] BYREF
  __int128 v32; // [rsp+68h] [rbp-19h]
  _OWORD v33[3]; // [rsp+78h] [rbp-9h] BYREF

  v27 = (_QWORD *)a1;
  v3 = (_QWORD *)a1;
  v5 = 0LL;
  v28 = 0xFFFFFFFFLL;
  v31 = 0LL;
  WORD1(v31) = -1;
  v26 = 0LL;
  v29 = 0;
  memset(v33, 0, sizeof(v33));
  v32 = 0LL;
  v30 = 0LL;
  CmpAttachToRegistryProcess((__int64)v33);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v7 = -1073741811;
  }
  else
  {
    while ( (CmpShutdownRundown & 1) == 0 )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      CmpLockRegistry();
      v9 = v3[1];
      CmpStartKcbStackForTopLayerKcb((__int64)&v31, v9, v10, v11);
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v31);
      v7 = CmpPerformKeyBodyDeletionCheck((__int64)v3, 0LL);
      if ( v7 < 0 )
        goto LABEL_55;
      if ( v3[7] || v3[8] )
      {
        v7 = CmpTransSearchAddTransFromKeyBody(v3, &v26);
        if ( v7 < 0 )
          goto LABEL_55;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
        {
          v7 = -1072103423;
          goto LABEL_55;
        }
        v12 = v26;
        v7 = CmpPerformKeyBodyDeletionCheck((__int64)v27, v26);
        if ( v7 < 0 )
          goto LABEL_55;
      }
      else
      {
        v12 = v26;
      }
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v9, (__int64)v27) == 1 )
      {
        v7 = -1073741790;
        goto LABEL_55;
      }
      if ( (unsigned int)(a2 - 2) <= 2 )
        v12 = v15;
      v26 = v12;
      if ( v12 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v5 = (__int64)UnitOfWork;
        if ( UnitOfWork )
        {
          CmpTransEnlistUowInKcb(UnitOfWork, v9);
          v7 = CmpTransEnlistUowInCmTrans((_QWORD *)v5, v12);
          if ( v7 < 0 )
            goto LABEL_43;
          if ( !CmpLockIXLockIntent((unsigned int *)(v9 + 248), v5)
            || !CmpLockIXLockExclusive(v9 + 264, (_QWORD *)v5, 1) )
          {
            v7 = -1072103423;
            goto LABEL_43;
          }
          *(_DWORD *)(v5 + 68) = 7;
          *(_DWORD *)(v5 + 88) = a3;
          v7 = CmAddLogForAction(v5, 1);
          if ( v7 < 0 )
            goto LABEL_43;
          v7 = 0;
        }
        else
        {
          v7 = -1073741670;
        }
LABEL_55:
        CmpUnlockKcbStack((__int64)&v31);
LABEL_56:
        CmpUnlockRegistry();
        goto LABEL_58;
      }
      v16 = CmpTryAcquireKcbIXLocks(v13, 0LL, v14, (__int64)&v30);
      v7 = v16;
      if ( v16 == -1073741267 )
      {
        CmpLogTransactionAbortedForRollbackPacket(v9, 3u);
        CmpUnlockKcbStack((__int64)&v31);
        CmpUnlockRegistry();
        v7 = CmpAbortRollbackPacket((__int64)&v30, 0LL);
        if ( v7 < 0 )
          goto LABEL_58;
        CmpRetryBackOff(&v29);
        CmpCleanupRollbackPacket((__int64)&v30);
        v30 = 0LL;
      }
      else
      {
        if ( v16 < 0 )
          goto LABEL_55;
        if ( *(_DWORD *)(v9 + 40) != -1 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
          if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0LL) )
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v9, (__int64)&v28, 1);
            v18 = KeyNodeForKcb;
            v19 = a2 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  if ( v21 == 1 )
                  {
                    *(_BYTE *)(KeyNodeForKcb + 55) = a3;
                    *(_BYTE *)(v9 + 185) = a3;
                  }
                }
                else
                {
                  v22 = *(_WORD *)(KeyNodeForKcb + 2);
                  if ( (a3 & 4) != 0 )
                  {
                    *(_WORD *)(v18 + 2) = v22 | 0x80;
                    *(_WORD *)(v9 + 186) |= 0x80u;
                  }
                  else
                  {
                    if ( (a3 & 1) != 0 )
                    {
                      *(_WORD *)(v18 + 2) = v22 | 0x300;
                      *(_WORD *)(v9 + 186) |= 0x300u;
                    }
                    else
                    {
                      *(_WORD *)(v18 + 2) = v22 & 0xFEFF;
                      *(_WORD *)(v9 + 186) &= ~0x100u;
                    }
                    if ( (a3 & 2) != 0 )
                    {
                      *(_WORD *)(v18 + 2) |= 0x200u;
                      *(_WORD *)(v9 + 186) |= 0x200u;
                    }
                  }
                }
              }
              else
              {
                *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 20)) & 0xF00000;
                *(_DWORD *)(v9 + 184) ^= (*(_DWORD *)(v9 + 184) ^ *(unsigned __int16 *)(KeyNodeForKcb + 54)) & 0xF0;
                if ( (a3 & 2) != 0 )
                {
                  *(_WORD *)(KeyNodeForKcb + 2) &= ~0x80u;
                  *(_WORD *)(v9 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
                }
              }
            }
            else
            {
              v23 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 16)) & 0xF0000;
              *(_DWORD *)(KeyNodeForKcb + 52) = v23;
              *(_DWORD *)(v9 + 184) ^= (*(_DWORD *)(v9 + 184) ^ HIWORD(v23)) & 0xF;
            }
            *(_QWORD *)(v18 + 4) = v8;
            ++*(_QWORD *)(v9 + 304);
            *(_QWORD *)(v9 + 168) = v8;
            v7 = 0;
            CmpReleaseKeyNodeForKcb(v9);
          }
          else
          {
            v7 = -1073741443;
          }
          HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
LABEL_43:
          if ( v5 )
          {
            CmpRundownUnitOfWork((_QWORD *)v5);
            CmpFreeUnitOfWork(v5);
          }
          goto LABEL_55;
        }
        CmpUnlockKcbStack((__int64)&v31);
        v7 = CmpPromoteKey(&v31, 0LL, 0LL);
        if ( v7 < 0 )
          goto LABEL_56;
        CmpUnlockRegistry();
        CmpCleanupKcbStack((__int64)&v31);
        v31 = 0LL;
        WORD1(v31) = -1;
        v32 = 0LL;
      }
      v3 = v27;
    }
    v7 = -1073741431;
  }
LABEL_58:
  CmpDetachFromRegistryProcess((__int64)v33);
  CmpCleanupKcbStack((__int64)&v31);
  CmpCleanupRollbackPacket((__int64)&v30);
  return (unsigned int)v7;
}

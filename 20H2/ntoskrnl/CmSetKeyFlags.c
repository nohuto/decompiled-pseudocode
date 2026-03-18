/*
 * XREFs of CmSetKeyFlags @ 0x14087047C
 * Callers:
 *     NtSetInformationKey @ 0x1406766B0 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x1402F2D0C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1402F30C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14066BE80 (CmpGetEffectiveKcbSemantics.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1406A183C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1406A189C (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmpCleanupRollbackPacket @ 0x1406A34DC (CmpCleanupRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406A3E1C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmAddLogForAction @ 0x1406D1718 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9BBC (CmpAllocateUnitOfWork.c)
 *     CmpGetKeyNodeForKcb @ 0x1407028D4 (CmpGetKeyNodeForKcb.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076A0E0 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x14077691C (CmpAbortRollbackPacket.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140866204 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRetryBackOff @ 0x140877758 (CmpRetryBackOff.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x140881584 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
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
  __int64 v27; // [rsp+30h] [rbp-51h] BYREF
  int v28; // [rsp+38h] [rbp-49h] BYREF
  _QWORD *v29; // [rsp+40h] [rbp-41h]
  __int128 v30; // [rsp+48h] [rbp-39h] BYREF
  __int128 v31; // [rsp+58h] [rbp-29h] BYREF
  __int128 v32; // [rsp+68h] [rbp-19h]
  _OWORD v33[3]; // [rsp+78h] [rbp-9h] BYREF

  v29 = (_QWORD *)a1;
  v3 = (_QWORD *)a1;
  v5 = 0LL;
  v27 = 0xFFFFFFFFLL;
  v31 = 0LL;
  WORD1(v31) = -1;
  v26 = 0LL;
  v28 = 0;
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
        v7 = CmpPerformKeyBodyDeletionCheck((__int64)v29, v26);
        if ( v7 < 0 )
          goto LABEL_55;
      }
      else
      {
        v12 = v26;
      }
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v9) == 1 )
      {
        v7 = -1073741790;
        goto LABEL_55;
      }
      if ( (unsigned int)(a2 - 2) <= 2 )
        v12 = v13;
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
          v7 = CmAddLogForAction(v5, 1u);
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
      v16 = CmpTryAcquireKcbIXLocks(v14, 0LL, v15, (__int64)&v30);
      v7 = v16;
      if ( v16 == -1073741267 )
      {
        CmpLogTransactionAbortedForRollbackPacket(v9, 3u);
        CmpUnlockKcbStack((__int64)&v31);
        CmpUnlockRegistry();
        v7 = CmpAbortRollbackPacket((__int64)&v30);
        if ( v7 < 0 )
          goto LABEL_58;
        CmpRetryBackOff(&v28);
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
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v9, (__int64)&v27, 1);
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
      v3 = v29;
    }
    v7 = -1073741431;
  }
LABEL_58:
  CmpDetachFromRegistryProcess((__int64)v33);
  CmpCleanupKcbStack((__int64)&v31);
  CmpCleanupRollbackPacket((__int64)&v30);
  return (unsigned int)v7;
}

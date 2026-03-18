/*
 * XREFs of CmSetKeyFlags @ 0x1408696D8
 * Callers:
 *     NtSetInformationKey @ 0x1405FA5C0 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x1402D2D14 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402E1B1C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpCleanupKcbStack @ 0x140626070 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406569A4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x140658FF0 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpCleanupRollbackPacket @ 0x14065B6DC (CmpCleanupRollbackPacket.c)
 *     CmpLockIXLockExclusive @ 0x14068E09C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14068E2C0 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     CmpGetKeyNodeForKcb @ 0x140692A30 (CmpGetKeyNodeForKcb.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140694910 (CmpGetEffectiveKcbSemantics.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406958E8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmAddLogForAction @ 0x1406DBB4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406E3928 (CmpAllocateUnitOfWork.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407599F0 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x140765F2C (CmpAbortRollbackPacket.c)
 *     CmpReleaseKeyNodeForKcb @ 0x14085F494 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRetryBackOff @ 0x140870928 (CmpRetryBackOff.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087A724 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // r12
  int v5; // r14d
  __int64 v6; // r15
  int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  int v11; // edi
  __int64 v12; // rbx
  ULONG_PTR v13; // rsi
  __int64 v14; // r8
  struct _LOOKASIDE_LIST_EX *v15; // r9
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 KeyNodeForKcb; // rax
  __int64 v22; // rcx
  int v23; // r13d
  int v24; // r13d
  int v25; // r13d
  __int16 v26; // ax
  unsigned int v27; // r14d
  _QWORD *UnitOfWork; // rax
  __int64 v30; // [rsp+28h] [rbp-59h] BYREF
  __int64 v31; // [rsp+30h] [rbp-51h] BYREF
  int v32; // [rsp+38h] [rbp-49h] BYREF
  _QWORD *v33; // [rsp+40h] [rbp-41h]
  __int128 v34; // [rsp+48h] [rbp-39h] BYREF
  __int128 v35; // [rsp+58h] [rbp-29h] BYREF
  __int128 v36; // [rsp+68h] [rbp-19h]
  _OWORD v37[3]; // [rsp+78h] [rbp-9h] BYREF

  v33 = (_QWORD *)a1;
  v4 = (_QWORD *)a1;
  v5 = a3;
  v6 = 0LL;
  v31 = 0xFFFFFFFFLL;
  v7 = a2;
  v35 = 0LL;
  WORD1(v35) = -1;
  v30 = 0LL;
  v32 = 0;
  memset(v37, 0, sizeof(v37));
  v36 = 0LL;
  v34 = 0LL;
  CmpAttachToRegistryProcess((__int64)v37, a2, a3, a4);
  if ( v7 == 1 && (v5 & 0xFFFFFFF0) != 0 )
  {
    v11 = -1073741811;
  }
  else
  {
    while ( (CmpShutdownRundown & 1) == 0 )
    {
      v12 = MEMORY[0xFFFFF78000000014];
      CmpLockRegistry();
      v13 = v4[1];
      CmpStartKcbStackForTopLayerKcb((__int64)&v35, v13, v14, v15);
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v35);
      v11 = CmpPerformKeyBodyDeletionCheck((__int64)v4, 0LL);
      if ( v11 < 0 )
        goto LABEL_55;
      if ( v4[7] || v4[8] )
      {
        v11 = CmpTransSearchAddTransFromKeyBody(v4, &v30);
        if ( v11 < 0 )
          goto LABEL_55;
        if ( (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 160LL) & 2) != 0 )
        {
          v11 = -1072103423;
          goto LABEL_55;
        }
        v16 = v30;
        v11 = CmpPerformKeyBodyDeletionCheck((__int64)v33, v30);
        if ( v11 < 0 )
          goto LABEL_55;
      }
      else
      {
        v16 = v30;
      }
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v13) == 1 )
      {
        v11 = -1073741790;
        goto LABEL_55;
      }
      if ( (unsigned int)(v7 - 2) <= 2 )
        v16 = v17;
      v30 = v16;
      if ( v16 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v6 = (__int64)UnitOfWork;
        if ( UnitOfWork )
        {
          CmpTransEnlistUowInKcb(UnitOfWork, v13);
          v11 = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v16);
          if ( v11 < 0 )
            goto LABEL_43;
          if ( !CmpLockIXLockIntent((unsigned int *)(v13 + 248), v6)
            || !CmpLockIXLockExclusive(v13 + 264, (_QWORD *)v6, 1) )
          {
            v11 = -1072103423;
            goto LABEL_43;
          }
          *(_DWORD *)(v6 + 68) = 7;
          *(_DWORD *)(v6 + 88) = v5;
          v11 = CmAddLogForAction(v6, 1u);
          if ( v11 < 0 )
            goto LABEL_43;
          v11 = 0;
        }
        else
        {
          v11 = -1073741670;
        }
LABEL_55:
        CmpUnlockKcbStack((__int64)&v35);
LABEL_56:
        CmpUnlockRegistry();
        goto LABEL_58;
      }
      v20 = CmpTryAcquireKcbIXLocks(v18, 0LL, v19, (__int64)&v34);
      v11 = v20;
      if ( v20 == -1073741267 )
      {
        CmpLogTransactionAbortedForRollbackPacket(v13, 3u);
        CmpUnlockKcbStack((__int64)&v35);
        CmpUnlockRegistry();
        v11 = CmpAbortRollbackPacket((__int64)&v34);
        if ( v11 < 0 )
          goto LABEL_58;
        CmpRetryBackOff(&v32);
        CmpCleanupRollbackPacket((__int64)&v34);
        v34 = 0LL;
      }
      else
      {
        if ( v20 < 0 )
          goto LABEL_55;
        if ( *(_DWORD *)(v13 + 40) != -1 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v13 + 32));
          if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v13 + 32), *(unsigned int *)(v13 + 40), 0LL) )
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v13, (__int64)&v31, 1);
            v22 = KeyNodeForKcb;
            v23 = v7 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  if ( v25 == 1 )
                  {
                    *(_BYTE *)(KeyNodeForKcb + 55) = v5;
                    *(_BYTE *)(v13 + 185) = v5;
                  }
                }
                else
                {
                  v26 = *(_WORD *)(KeyNodeForKcb + 2);
                  if ( (v5 & 4) != 0 )
                  {
                    *(_WORD *)(v22 + 2) = v26 | 0x80;
                    *(_WORD *)(v13 + 186) |= 0x80u;
                  }
                  else
                  {
                    if ( (v5 & 1) != 0 )
                    {
                      *(_WORD *)(v22 + 2) = v26 | 0x300;
                      *(_WORD *)(v13 + 186) |= 0x300u;
                    }
                    else
                    {
                      *(_WORD *)(v22 + 2) = v26 & 0xFEFF;
                      *(_WORD *)(v13 + 186) &= ~0x100u;
                    }
                    if ( (v5 & 2) != 0 )
                    {
                      *(_WORD *)(v22 + 2) |= 0x200u;
                      *(_WORD *)(v13 + 186) |= 0x200u;
                    }
                  }
                }
              }
              else
              {
                *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (v5 << 20)) & 0xF00000;
                *(_DWORD *)(v13 + 184) ^= (*(_DWORD *)(v13 + 184) ^ *(unsigned __int16 *)(KeyNodeForKcb + 54)) & 0xF0;
                if ( (v5 & 2) != 0 )
                {
                  *(_WORD *)(KeyNodeForKcb + 2) &= ~0x80u;
                  *(_WORD *)(v13 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
                }
              }
            }
            else
            {
              v27 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (v5 << 16)) & 0xF0000;
              *(_DWORD *)(KeyNodeForKcb + 52) = v27;
              *(_DWORD *)(v13 + 184) ^= (*(_DWORD *)(v13 + 184) ^ HIWORD(v27)) & 0xF;
            }
            *(_QWORD *)(v22 + 4) = v12;
            ++*(_QWORD *)(v13 + 304);
            *(_QWORD *)(v13 + 168) = v12;
            v11 = 0;
            CmpReleaseKeyNodeForKcb(v13);
          }
          else
          {
            v11 = -1073741443;
          }
          HvUnlockHiveFlusherShared(*(_QWORD *)(v13 + 32));
LABEL_43:
          if ( v6 )
          {
            CmpRundownUnitOfWork((_QWORD *)v6);
            CmpFreeUnitOfWork(v6);
          }
          goto LABEL_55;
        }
        CmpUnlockKcbStack((__int64)&v35);
        v11 = CmpPromoteKey(&v35, 0LL, 0LL);
        if ( v11 < 0 )
          goto LABEL_56;
        CmpUnlockRegistry();
        CmpCleanupKcbStack((__int64)&v35);
        v35 = 0LL;
        WORD1(v35) = -1;
        v36 = 0LL;
      }
      v4 = v33;
    }
    v11 = -1073741431;
  }
LABEL_58:
  CmpDetachFromRegistryProcess((__int64)v37, v8, v9, v10);
  CmpCleanupKcbStack((__int64)&v35);
  CmpCleanupRollbackPacket((__int64)&v34);
  return (unsigned int)v11;
}

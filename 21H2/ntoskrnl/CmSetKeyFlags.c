/*
 * XREFs of CmSetKeyFlags @ 0x14086DC78
 * Callers:
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140360610 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140361D2C (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405EF510 (CmpGetEffectiveKcbSemantics.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140669070 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x14066BFD4 (CmpGetKeyNodeForKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A3094 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x1406AFE4C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406B8780 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406C3144 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpCleanupRollbackPacket @ 0x14071C518 (CmpCleanupRollbackPacket.c)
 *     CmpLockIXLockExclusive @ 0x14071D3E0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071D440 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071D7DC (CmpRundownUnitOfWork.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076E1A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x14077A8CC (CmpAbortRollbackPacket.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863E04 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRetryBackOff @ 0x140875040 (CmpRetryBackOff.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAA8 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x1408802C8 (CmpPromoteKey.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // r12
  int v5; // r14d
  __int64 v6; // r15
  int v7; // r13d
  int v8; // edi
  __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r9
  __int64 KeyNodeForKcb; // rax
  __int64 v20; // rcx
  int v21; // r13d
  int v22; // r13d
  int v23; // r13d
  __int16 v24; // ax
  unsigned int v25; // r14d
  _QWORD *UnitOfWork; // rax
  __int64 v28; // [rsp+28h] [rbp-59h] BYREF
  _QWORD *v29; // [rsp+30h] [rbp-51h]
  __int64 v30; // [rsp+38h] [rbp-49h] BYREF
  int v31; // [rsp+40h] [rbp-41h] BYREF
  __int128 v32; // [rsp+48h] [rbp-39h] BYREF
  __int128 v33; // [rsp+58h] [rbp-29h] BYREF
  __int128 v34; // [rsp+68h] [rbp-19h]
  _OWORD v35[3]; // [rsp+78h] [rbp-9h] BYREF

  v29 = (_QWORD *)a1;
  v4 = (_QWORD *)a1;
  v5 = a3;
  v6 = 0LL;
  v30 = 0xFFFFFFFFLL;
  v7 = a2;
  v33 = 0LL;
  WORD1(v33) = -1;
  v28 = 0LL;
  v31 = 0;
  memset(v35, 0, sizeof(v35));
  v34 = 0LL;
  v32 = 0LL;
  CmpAttachToRegistryProcess((__int64)v35, a2, a3, a4);
  if ( v7 == 1 && (v5 & 0xFFFFFFF0) != 0 )
  {
    v8 = -1073741811;
  }
  else
  {
    while ( (CmpShutdownRundown & 1) == 0 )
    {
      v9 = MEMORY[0xFFFFF78000000014];
      CmpLockRegistry();
      v10 = v4[1];
      CmpStartKcbStackForTopLayerKcb((__int64)&v33, v10, v11, v12);
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v33);
      v8 = CmpPerformKeyBodyDeletionCheck((__int64)v4, 0LL);
      if ( v8 < 0 )
        goto LABEL_55;
      if ( v4[7] || v4[8] )
      {
        v8 = CmpTransSearchAddTransFromKeyBody(v4, &v28);
        if ( v8 < 0 )
          goto LABEL_55;
        if ( (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 160LL) & 2) != 0 )
        {
          v8 = -1072103423;
          goto LABEL_55;
        }
        v13 = v28;
        v8 = CmpPerformKeyBodyDeletionCheck((__int64)v29, v28);
        if ( v8 < 0 )
          goto LABEL_55;
      }
      else
      {
        v13 = v28;
      }
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v10, (__int64)v29) == 1 )
      {
        v8 = -1073741790;
        goto LABEL_55;
      }
      if ( (unsigned int)(v7 - 2) <= 2 )
        v13 = v16;
      v28 = v13;
      if ( v13 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v6 = (__int64)UnitOfWork;
        if ( UnitOfWork )
        {
          CmpTransEnlistUowInKcb(UnitOfWork, v10);
          v8 = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v13);
          if ( v8 < 0 )
            goto LABEL_43;
          if ( !CmpLockIXLockIntent((unsigned int *)(v10 + 248), v6)
            || !CmpLockIXLockExclusive(v10 + 264, (_QWORD *)v6, 1) )
          {
            v8 = -1072103423;
            goto LABEL_43;
          }
          *(_DWORD *)(v6 + 68) = 7;
          *(_DWORD *)(v6 + 88) = v5;
          v8 = CmAddLogForAction(v6, 1);
          if ( v8 < 0 )
            goto LABEL_43;
          v8 = 0;
        }
        else
        {
          v8 = -1073741670;
        }
LABEL_55:
        CmpUnlockKcbStack((__int64)&v33);
LABEL_56:
        CmpUnlockRegistry();
        goto LABEL_58;
      }
      v17 = CmpTryAcquireKcbIXLocks(v14, 0LL, v15, (__int64)&v32);
      v8 = v17;
      if ( v17 == -1073741267 )
      {
        CmpLogTransactionAbortedForRollbackPacket(v10, 3u, (unsigned int *)&v32, v18);
        CmpUnlockKcbStack((__int64)&v33);
        CmpUnlockRegistry();
        v8 = CmpAbortRollbackPacket((__int64)&v32, 0LL);
        if ( v8 < 0 )
          goto LABEL_58;
        CmpRetryBackOff(&v31);
        CmpCleanupRollbackPacket((__int64)&v32);
        v32 = 0LL;
      }
      else
      {
        if ( v17 < 0 )
          goto LABEL_55;
        if ( *(_DWORD *)(v10 + 40) != -1 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v10 + 32));
          if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v10 + 32), *(unsigned int *)(v10 + 40), 0LL) )
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v10, (__int64)&v30, 1);
            v20 = KeyNodeForKcb;
            v21 = v7 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  if ( v23 == 1 )
                  {
                    *(_BYTE *)(KeyNodeForKcb + 55) = v5;
                    *(_BYTE *)(v10 + 185) = v5;
                  }
                }
                else
                {
                  v24 = *(_WORD *)(KeyNodeForKcb + 2);
                  if ( (v5 & 4) != 0 )
                  {
                    *(_WORD *)(v20 + 2) = v24 | 0x80;
                    *(_WORD *)(v10 + 186) |= 0x80u;
                  }
                  else
                  {
                    if ( (v5 & 1) != 0 )
                    {
                      *(_WORD *)(v20 + 2) = v24 | 0x300;
                      *(_WORD *)(v10 + 186) |= 0x300u;
                    }
                    else
                    {
                      *(_WORD *)(v20 + 2) = v24 & 0xFEFF;
                      *(_WORD *)(v10 + 186) &= ~0x100u;
                    }
                    if ( (v5 & 2) != 0 )
                    {
                      *(_WORD *)(v20 + 2) |= 0x200u;
                      *(_WORD *)(v10 + 186) |= 0x200u;
                    }
                  }
                }
              }
              else
              {
                *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (v5 << 20)) & 0xF00000;
                *(_DWORD *)(v10 + 184) ^= (*(_DWORD *)(v10 + 184) ^ *(unsigned __int16 *)(KeyNodeForKcb + 54)) & 0xF0;
                if ( (v5 & 2) != 0 )
                {
                  *(_WORD *)(KeyNodeForKcb + 2) &= ~0x80u;
                  *(_WORD *)(v10 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
                }
              }
            }
            else
            {
              v25 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (v5 << 16)) & 0xF0000;
              *(_DWORD *)(KeyNodeForKcb + 52) = v25;
              *(_DWORD *)(v10 + 184) ^= (*(_DWORD *)(v10 + 184) ^ HIWORD(v25)) & 0xF;
            }
            *(_QWORD *)(v20 + 4) = v9;
            ++*(_QWORD *)(v10 + 304);
            *(_QWORD *)(v10 + 168) = v9;
            v8 = 0;
            CmpReleaseKeyNodeForKcb(v10);
          }
          else
          {
            v8 = -1073741443;
          }
          HvUnlockHiveFlusherShared(*(_QWORD *)(v10 + 32));
LABEL_43:
          if ( v6 )
          {
            CmpRundownUnitOfWork((_QWORD *)v6);
            CmpFreeUnitOfWork(v6);
          }
          goto LABEL_55;
        }
        CmpUnlockKcbStack((__int64)&v33);
        v8 = CmpPromoteKey(&v33, 0LL, 0LL);
        if ( v8 < 0 )
          goto LABEL_56;
        CmpUnlockRegistry();
        CmpCleanupKcbStack((__int64)&v33);
        v33 = 0LL;
        WORD1(v33) = -1;
        v34 = 0LL;
      }
      v4 = v29;
    }
    v8 = -1073741431;
  }
LABEL_58:
  CmpDetachFromRegistryProcess((__int64)v35);
  CmpCleanupKcbStack((__int64)&v33);
  CmpCleanupRollbackPacket((__int64)&v32);
  return (unsigned int)v8;
}

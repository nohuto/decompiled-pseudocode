/*
 * XREFs of CmSetKeyFlags @ 0x140913964
 * Callers:
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x1402A21B0 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402A2204 (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvLockHiveFlusherShared @ 0x14067C50C (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14067C528 (HvUnlockHiveFlusherShared.c)
 *     CmpGetKeyNodeForKcb @ 0x14067E828 (CmpGetKeyNodeForKcb.c)
 *     CmpLockIXLockExclusive @ 0x14067E9B8 (CmpLockIXLockExclusive.c)
 *     CmpAllocateUnitOfWork @ 0x14067EA18 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x14067EF3C (CmpLockIXLockIntent.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpCleanupRollbackPacket @ 0x140681834 (CmpCleanupRollbackPacket.c)
 *     CmpCleanupKcbStack @ 0x14069F004 (CmpCleanupKcbStack.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14069FC64 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x1406A0010 (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406A0070 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmAddLogForAction @ 0x14071784C (CmAddLogForAction.c)
 *     CmpRundownUnitOfWork @ 0x14071C120 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140721CA0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvMarkCellDirty @ 0x14087D6D0 (HvMarkCellDirty.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140881426 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRetryBackOff @ 0x14091BC2C (CmpRetryBackOff.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AB4248 (CmpIsShutdownRundownActive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmSetKeyFlags(_QWORD *a1, int a2, int a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  ULONG_PTR v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 KeyNodeForKcb; // rax
  __int64 v27; // rdx
  int v28; // r15d
  int v29; // r15d
  int v30; // r15d
  __int16 v31; // ax
  unsigned int v32; // r14d
  _QWORD *UnitOfWork; // rax
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // [rsp+28h] [rbp-49h] BYREF
  int v37; // [rsp+30h] [rbp-41h] BYREF
  __int64 v38; // [rsp+38h] [rbp-39h] BYREF
  __int128 v39; // [rsp+40h] [rbp-31h] BYREF
  __int128 v40; // [rsp+50h] [rbp-21h] BYREF
  __int128 v41; // [rsp+60h] [rbp-11h]
  _OWORD v42[3]; // [rsp+70h] [rbp-1h] BYREF

  v38 = 0LL;
  v40 = 0LL;
  WORD1(v40) = -1;
  v36 = 0LL;
  memset(v42, 0, sizeof(v42));
  v41 = 0LL;
  HvpGetCellContextReinitialize(&v38);
  v37 = 0;
  v39 = 0LL;
  CmpAttachToRegistryProcess(v42);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v6 = -1073741811;
    goto LABEL_25;
  }
  if ( (unsigned __int8)CmpIsShutdownRundownActive() )
  {
LABEL_24:
    v6 = -1073741431;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v10 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v8, v7, v9);
    v11 = a1[1];
    CmpStartKcbStackForTopLayerKcb((__int64)&v40, v11);
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v40);
    v6 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( v6 < 0 )
      goto LABEL_55;
    if ( a1[7] || a1[8] )
    {
      v6 = CmpTransSearchAddTransFromKeyBody(a1, &v36);
      if ( v6 < 0 )
        goto LABEL_55;
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 32) + 160LL) & 2) != 0 )
      {
        v6 = -1072103423;
        goto LABEL_55;
      }
      v12 = v36;
      v6 = CmpPerformKeyBodyDeletionCheck(a1, v36);
      if ( v6 < 0 )
        goto LABEL_55;
    }
    else
    {
      v12 = v36;
    }
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(v11, (__int64)a1) == 1 )
    {
      v6 = -1073741790;
      goto LABEL_55;
    }
    if ( (unsigned int)(a2 - 2) <= 2 )
      v12 = v15;
    v36 = v12;
    if ( v12 )
      break;
    v16 = CmpTryAcquireKcbIXLocks(v13, 0LL, v14, (__int64)&v39);
    v6 = v16;
    if ( v16 == -1073741267 )
    {
      CmpLogTransactionAbortedForRollbackPacket(v11, 3u);
      CmpUnlockKcbStack((__int64)&v40);
      CmpUnlockRegistry(v18, v17, v19, v20);
      v6 = CmpAbortRollbackPacket((__int64)&v39, 0LL);
      if ( v6 < 0 )
        goto LABEL_25;
      CmpRetryBackOff(&v37);
      CmpCleanupRollbackPacket((__int64)&v39);
      v39 = 0LL;
    }
    else
    {
      if ( v16 < 0 )
        goto LABEL_55;
      if ( *(_DWORD *)(v11 + 40) != -1 )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(v11 + 32));
        v6 = HvMarkCellDirty(*(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 40), 0);
        if ( v6 >= 0 )
        {
          KeyNodeForKcb = CmpGetKeyNodeForKcb(v11, (__int64)&v38, 1);
          v27 = KeyNodeForKcb;
          v28 = a2 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 == 1 )
                {
                  *(_BYTE *)(KeyNodeForKcb + 55) = a3;
                  *(_BYTE *)(v11 + 185) = a3;
                }
              }
              else
              {
                v31 = *(_WORD *)(KeyNodeForKcb + 2);
                if ( (a3 & 4) != 0 )
                {
                  *(_WORD *)(v27 + 2) = v31 | 0x80;
                  *(_WORD *)(v11 + 186) |= 0x80u;
                }
                else
                {
                  if ( (a3 & 1) != 0 )
                  {
                    *(_WORD *)(v27 + 2) = v31 | 0x300;
                    *(_WORD *)(v11 + 186) |= 0x300u;
                  }
                  else
                  {
                    *(_WORD *)(v27 + 2) = v31 & 0xFEFF;
                    *(_WORD *)(v11 + 186) &= ~0x100u;
                  }
                  if ( (a3 & 2) != 0 )
                  {
                    *(_WORD *)(v27 + 2) |= 0x200u;
                    *(_WORD *)(v11 + 186) |= 0x200u;
                  }
                }
              }
            }
            else
            {
              *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 20)) & 0xF00000;
              *(_DWORD *)(v11 + 184) ^= (*(_DWORD *)(v11 + 184) ^ *(unsigned __int16 *)(KeyNodeForKcb + 54)) & 0xF0;
              if ( (a3 & 2) != 0 )
              {
                *(_WORD *)(KeyNodeForKcb + 2) &= ~0x80u;
                *(_WORD *)(v11 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
              }
            }
          }
          else
          {
            v32 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 16)) & 0xF0000;
            *(_DWORD *)(KeyNodeForKcb + 52) = v32;
            *(_DWORD *)(v11 + 184) ^= (*(_DWORD *)(v11 + 184) ^ HIWORD(v32)) & 0xF;
          }
          *(_QWORD *)(v27 + 4) = v10;
          v6 = 0;
          ++*(_QWORD *)(v11 + 304);
          *(_QWORD *)(v11 + 168) = v10;
          CmpReleaseKeyNodeForKcb(v11, (unsigned int *)&v38);
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v11 + 32));
        goto LABEL_55;
      }
      CmpUnlockKcbStack((__int64)&v40);
      v6 = CmpPromoteKey(&v40, 0LL, 0LL);
      if ( v6 < 0 )
        goto LABEL_56;
      CmpUnlockRegistry(v22, v21, v23, v24);
      CmpCleanupKcbStack((__int64)&v40);
      v40 = 0LL;
      WORD1(v40) = -1;
      v41 = 0LL;
    }
    if ( (unsigned __int8)CmpIsShutdownRundownActive() )
      goto LABEL_24;
  }
  UnitOfWork = CmpAllocateUnitOfWork();
  v34 = (__int64)UnitOfWork;
  if ( !UnitOfWork )
  {
    v6 = -1073741670;
    goto LABEL_55;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v11);
  v6 = CmpTransEnlistUowInCmTrans((_QWORD *)v34, v12);
  if ( v6 < 0 )
  {
LABEL_49:
    CmpRundownUnitOfWork((_QWORD *)v34);
    ExFreePoolWithTag((PVOID)v34, 0x77554D43u);
    goto LABEL_55;
  }
  if ( !CmpLockIXLockIntent((unsigned int *)(v11 + 248), v34, v35)
    || !CmpLockIXLockExclusive(v11 + 264, (_QWORD *)v34, 1LL) )
  {
    v6 = -1072103423;
    goto LABEL_49;
  }
  *(_DWORD *)(v34 + 68) = 7;
  *(_DWORD *)(v34 + 88) = a3;
  v6 = CmAddLogForAction(v34, 1u);
  if ( v6 < 0 )
    goto LABEL_49;
  v6 = 0;
LABEL_55:
  CmpUnlockKcbStack((__int64)&v40);
LABEL_56:
  CmpUnlockRegistry(v22, v21, v23, v24);
LABEL_25:
  CmpDetachFromRegistryProcess(v42);
  CmpCleanupKcbStack((__int64)&v40);
  CmpCleanupRollbackPacket((__int64)&v39);
  return (unsigned int)v6;
}

/*
 * XREFs of CmDeleteLayeredKey @ 0x1404E7EF8
 * Callers:
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405DF248 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1405DF2CC (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x1405E57CC (CmpReportNotifyForKcbStack.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405ECD50 (CmpUnlockHashEntryByKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405EDBB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCleanupKcbStack @ 0x1405F0A50 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpMarkKeyDirty @ 0x140640354 (CmpMarkKeyDirty.c)
 *     CmpHashUnicodeComponent @ 0x140641348 (CmpHashUnicodeComponent.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406445B4 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x140644680 (CmpLockKcbStackExclusive.c)
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140644960 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFindSubKeyByNumber @ 0x140671D20 (CmpFindSubKeyByNumber.c)
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14069CD68 (CmpRebuildKcbCacheFromNode.c)
 *     CmpInitializeKcbStack @ 0x140711510 (CmpInitializeKcbStack.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140721778 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpHashCompressedComponent @ 0x1407544D4 (CmpHashCompressedComponent.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x14086BC28 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIncrementKcbSequenceNumber @ 0x14086BD8C (CmpIncrementKcbSequenceNumber.c)
 *     HvpGetCellContextInitialize @ 0x1408728BC (HvpGetCellContextInitialize.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140872B24 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpInitializeDiscardReplaceContext @ 0x140872D70 (CmpInitializeDiscardReplaceContext.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140872F34 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFreeKeyValues @ 0x140875BD0 (CmpFreeKeyValues.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140877174 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteKey @ 0x14087D190 (CmpPromoteKey.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rdi
  char v6; // dl
  char v7; // r14
  __int64 v8; // r12
  char v9; // dl
  char v10; // r13
  int started; // ebx
  int SubKeyCountForKcbStack; // eax
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // r14
  unsigned int v27; // r15d
  unsigned int i; // r15d
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  int v32; // ebx
  __int64 v33; // rdx
  ULONG_PTR v34; // rbx
  __int64 KcbInHashEntryByCellIndex; // rax
  char v36; // al
  ULONG_PTR v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // [rsp+20h] [rbp-59h] BYREF
  __int64 v41; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v42[2]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v43[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v44; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v45[5]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v46; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v47; // [rsp+E8h] [rbp+6Fh]
  int v48; // [rsp+F8h] [rbp+7Fh] BYREF

  v47 = a2;
  v48 = 0;
  memset(v42, 0, sizeof(v42));
  v40 = 0LL;
  v46 = 0;
  memset(v43, 0, sizeof(v43));
  v41 = 0LL;
  v44 = 0LL;
  memset(v45, 0, 32);
  CmpInitializeKcbStack(v42);
  CmpInitializeKcbStack(v43);
  v5 = *(_QWORD *)(a1 + 8);
  v7 = v6;
  v8 = *(_QWORD *)(v5 + 72);
  HvpGetCellContextInitialize(&v41);
  HvpGetCellContextInitialize(&v40);
  CmpInitializeDiscardReplaceContext(v45);
  v10 = v9;
  if ( (*(_DWORD *)(v5 + 184) & 0x80000) != 0 )
  {
    started = -1073741535;
    goto LABEL_28;
  }
  started = CmpStartKcbStackForTopLayerKcb(v42, v5);
  if ( started >= 0 )
  {
    started = CmpStartKcbStackForTopLayerKcb(v43, v8);
    if ( started >= 0 )
    {
LABEL_23:
      CmpLockHashEntryExclusiveByKcb(v5);
      CmpLockKcbStackTopExclusiveRestShared(v43);
      CmpLockKcbStackExclusive(v42);
      while ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        SubKeyCountForKcbStack = CmpGetSubKeyCountForKcbStack(v42, &v48);
        v14 = 0LL;
        started = SubKeyCountForKcbStack;
        if ( SubKeyCountForKcbStack < 0 )
          goto LABEL_26;
        if ( v48 )
        {
          started = -1073741535;
          goto LABEL_26;
        }
        v15 = *(_QWORD *)(v5 + 192);
        if ( v15 )
        {
          v16 = (_QWORD *)(v15 + 32);
          v13 = (_QWORD *)*v16;
          if ( (_QWORD *)*v16 != v16 )
          {
            if ( !v7 )
              goto LABEL_22;
            if ( v13 != v16 )
            {
              v10 = 1;
              started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v5, v45, 0LL);
              if ( started < 0 )
                goto LABEL_26;
            }
          }
        }
        v17 = *(unsigned int *)(v5 + 40);
        if ( (_DWORD)v17 != -1 )
        {
          if ( !v7 )
          {
LABEL_22:
            CmpUnlockKcbStack(v42);
            CmpUnlockKcbStack(v43);
            CmpUnlockHashEntryByKcb(v5);
            CmpUnlockRegistry(v22, v21);
            CmpLockRegistryExclusive(v24, v23);
            v7 = 1;
            goto LABEL_23;
          }
          v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                  *(_QWORD *)(v5 + 32),
                  v17,
                  &v41);
          v27 = 0;
          if ( *(_DWORD *)(v26 + 24) + *(_DWORD *)(v26 + 20) )
          {
            while ( 1 )
            {
              started = CmpFindSubKeyByNumber(*(_QWORD *)(v5 + 32), v26, v27, &v46, v40, v41);
              if ( started < 0 )
                break;
              if ( !(unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v5 + 32), v46) )
                goto LABEL_40;
              if ( ++v27 >= *(_DWORD *)(v26 + 24) + *(_DWORD *)(v26 + 20) )
                goto LABEL_36;
            }
          }
          else
          {
LABEL_36:
            if ( (unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40)) )
            {
              CmpFindSubKeyByNumber(*(_QWORD *)(v5 + 32), v26, 0LL, &v46, v40, v41);
              for ( i = v46; v46 != -1; i = v46 )
              {
                v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                        *(_QWORD *)(v5 + 32),
                        i,
                        &v40);
                v30 = *(unsigned __int16 *)(v29 + 72);
                if ( (*(_BYTE *)(v29 + 2) & 0x20) != 0 )
                {
                  v31 = CmpHashCompressedComponent(v29 + 76, v30);
                }
                else
                {
                  *((_QWORD *)&v44 + 1) = v29 + 76;
                  LOWORD(v44) = v30;
                  WORD1(v44) = v30;
                  v31 = CmpHashUnicodeComponent(&v44);
                }
                v32 = v31;
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v40);
                v33 = (unsigned int)(v32 + 37 * *(_DWORD *)(v5 + 16));
                v34 = *(_QWORD *)(v5 + 32);
                KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v34, v33, i);
                if ( KcbInHashEntryByCellIndex )
                {
                  *(_DWORD *)(KcbInHashEntryByCellIndex + 40) = -1;
                  v34 = *(_QWORD *)(v5 + 32);
                }
                CmpFreeKeyByCell(v34, i);
                CmpFindSubKeyByNumber(*(_QWORD *)(v5 + 32), v26, 0LL, &v46, v40, v41);
              }
              CmpFreeKeyValues(*(_QWORD *)(v5 + 32));
              v36 = *(_BYTE *)(v26 + 13);
              *(_WORD *)(v26 + 2) &= 0x20u;
              *(_BYTE *)(v26 + 55) = 0;
              *(_DWORD *)(v26 + 52) &= 0xFF00FFFF;
              *(_BYTE *)(v26 + 13) = v36 & 0xFC | 1;
              *(_QWORD *)(v26 + 4) = 0LL;
              *(_QWORD *)(v26 + 56) = 0LL;
              *(_DWORD *)(v26 + 64) = 0;
              *(_WORD *)(v26 + 52) = 0;
              CmpIncrementKcbSequenceNumber(v5);
              CmpRebuildKcbCacheFromNode(v37);
              CmpReportNotifyForKcbStack(v43, 0LL, 1LL, v47);
              LOBYTE(v38) = 1;
              CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v5, v39, a3, v38);
              CmpFlushNotifiesOnKeyBodyList(v5, 8LL, a3);
              if ( v10 )
              {
                CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v5);
              }
              else
              {
                CmpMarkKeyUnbacked(v5, a3);
                CmpDiscardKcb(v5);
              }
              started = 0;
            }
            else
            {
LABEL_40:
              started = -1073741670;
            }
          }
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v41);
          goto LABEL_26;
        }
        if ( *(_DWORD *)(v8 + 40) != -1 )
          goto LABEL_18;
        CmpUnlockKcbStack(v42);
        CmpUnlockKcbStack(v43);
        LOBYTE(v18) = 1;
        v19 = CmpPromoteKey(v43, 0LL, v18);
        started = v19;
        if ( v19 == -1073741444 )
        {
          started = 0;
LABEL_27:
          CmpUnlockHashEntryByKcb(v5);
          goto LABEL_28;
        }
        if ( v19 < 0 )
          goto LABEL_27;
        CmpLockKcbStackExclusive(v42);
        if ( v7 )
        {
LABEL_18:
          started = CmpCreateTombstone(v13, v42, v14);
          if ( started >= 0 )
          {
            CmpReportNotifyForKcbStack(v43, 0LL, 1LL, v47);
            CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v5, v20, a3, 0LL);
            CmpFlushNotifiesOnKeyBodyList(v5, 8LL, a3);
            if ( v10 )
            {
              CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v5);
            }
            else
            {
              CmpMarkKeyUnbacked(v5, a3);
              CmpDiscardKcb(v5);
            }
            started = 0;
          }
          goto LABEL_26;
        }
      }
      started = 0;
LABEL_26:
      CmpUnlockKcbStack(v42);
      CmpUnlockKcbStack(v43);
      goto LABEL_27;
    }
  }
LABEL_28:
  CmpCleanupDiscardReplaceContext(v45, a3);
  CmpCleanupKcbStack(v42);
  CmpCleanupKcbStack(v43);
  return (unsigned int)started;
}

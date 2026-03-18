/*
 * XREFs of CmDeleteLayeredKey @ 0x14053F5E8
 * Callers:
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpCreateTombstone @ 0x14053FB50 (CmpCreateTombstone.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14067E8A8 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x14067E974 (CmpLockKcbStackExclusive.c)
 *     CmpDiscardKcb @ 0x14067EB68 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14067EDC0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanupKcbStack @ 0x14069F004 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x14069F308 (CmpInitializeKcbStack.c)
 *     CmpFindSubKeyByNumber @ 0x1406BF278 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1406E9370 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x140716758 (CmpMarkKeyDirty.c)
 *     CmpHashUnicodeComponent @ 0x140718B68 (CmpHashUnicodeComponent.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14071B4A0 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14071BB4C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpHashCompressedComponent @ 0x14071BC04 (CmpHashCompressedComponent.c)
 *     CmpUnlockHashEntryByKcb @ 0x14071C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpReportNotifyForKcbStack @ 0x140721878 (CmpReportNotifyForKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x1409150D4 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIncrementKcbSequenceNumber @ 0x14091523C (CmpIncrementKcbSequenceNumber.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14091CB44 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpInitializeDiscardReplaceContext @ 0x14091CDC0 (CmpInitializeDiscardReplaceContext.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14091CF4C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFreeKeyValues @ 0x14091F87C (CmpFreeKeyValues.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140920CA0 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2, _QWORD **a3)
{
  char v5; // si
  char v6; // r12
  int started; // ebx
  __int64 v8; // rdx
  int SubKeyCountForKcbStack; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rdx
  int v17; // eax
  ULONG_PTR v18; // rdi
  __int64 v19; // r15
  __int64 v21; // rdx
  ULONG_PTR v22; // rcx
  __int64 CellFlat; // rax
  __int64 v24; // rsi
  int v25; // r15d
  __int64 CellPaged; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rdx
  ULONG_PTR v32; // rbx
  __int64 KcbInHashEntryByCellIndex; // rax
  ULONG_PTR v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // [rsp+20h] [rbp-59h] BYREF
  __int64 v37; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v38[2]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v39[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v40; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v41[5]; // [rsp+80h] [rbp+7h] BYREF
  int v43; // [rsp+F8h] [rbp+7Fh] BYREF

  v43 = 0;
  memset(v39, 0, sizeof(v39));
  v36 = 0LL;
  memset(v38, 0, sizeof(v38));
  v37 = 0LL;
  v40 = 0LL;
  memset(v41, 0, 32);
  CmpInitializeKcbStack(v39);
  CmpInitializeKcbStack(v38);
  v5 = 0;
  HvpGetCellContextReinitialize(&v37);
  HvpGetCellContextReinitialize(&v36);
  CmpInitializeDiscardReplaceContext(v41);
  v6 = 0;
  while ( 1 )
  {
    v18 = *(_QWORD *)(a1 + 8);
    v19 = *(_QWORD *)(v18 + 72);
    if ( (*(_DWORD *)(v18 + 184) & 0x80000) != 0 )
    {
      started = -1073741535;
      goto LABEL_24;
    }
    started = CmpStartKcbStackForTopLayerKcb(v39, *(_QWORD *)(a1 + 8));
    if ( started < 0 )
      goto LABEL_24;
    started = CmpStartKcbStackForTopLayerKcb(v38, v19);
    if ( started < 0 )
      goto LABEL_24;
    CmpLockHashEntryExclusiveByKcb(v18);
    CmpLockKcbStackTopExclusiveRestShared(v38);
    CmpLockKcbStackExclusive(v39);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      started = 0;
      goto LABEL_59;
    }
    SubKeyCountForKcbStack = CmpGetSubKeyCountForKcbStack(v39, v8, &v43);
    v10 = 0LL;
    started = SubKeyCountForKcbStack;
    if ( SubKeyCountForKcbStack < 0 )
      goto LABEL_59;
    if ( v43 )
    {
      started = -1073741535;
      goto LABEL_59;
    }
    v11 = *(_QWORD *)(v18 + 192);
    if ( v11 && *(_QWORD *)(v11 + 32) != v11 + 32 )
    {
      if ( !v5 )
      {
        CmpUnlockKcbStack(v39);
        CmpUnlockKcbStack(v38);
        CmpUnlockHashEntryByKcb(v18);
LABEL_20:
        CmpUnlockRegistry(v13, v12, v14, v15, v36, v37);
        CmpCleanupKcbStack(v38);
        CmpCleanupKcbStack(v39);
        CmpLockRegistryExclusive();
        v5 = 1;
        goto LABEL_21;
      }
      v6 = 1;
      started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v18, v41);
      if ( started < 0 )
        goto LABEL_59;
    }
    v16 = *(unsigned int *)(v18 + 40);
    if ( (_DWORD)v16 != -1 )
      break;
    if ( *(_DWORD *)(v19 + 40) != -1 )
      goto LABEL_27;
    CmpUnlockKcbStack(v39);
    CmpUnlockKcbStack(v38);
    v17 = CmpPromoteKey(v38, 0LL, 0LL);
    started = v17;
    if ( v17 == -1073741444 )
    {
      started = 0;
      goto LABEL_60;
    }
    if ( v17 < 0 )
      goto LABEL_60;
    if ( v5 )
    {
      CmpLockKcbStackTopExclusiveRestShared(v38);
      CmpLockKcbStackExclusive(v39);
LABEL_27:
      started = CmpCreateTombstone(v10, v39);
      if ( started >= 0 )
      {
        ((void (__fastcall *)(_OWORD *, _QWORD, __int64, __int64, __int64, __int64))CmpReportNotifyForKcbStack)(
          v38,
          0LL,
          1LL,
          a2,
          v36,
          v37);
        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v18, v21, a3, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v18, 8LL, a3);
        if ( v6 )
        {
          CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v18);
        }
        else
        {
          CmpMarkKeyUnbacked(v18, a3);
          CmpDiscardKcb(v18);
        }
        started = 0;
      }
      goto LABEL_59;
    }
    CmpUnlockHashEntryByKcb(v18);
    CmpCleanupKcbStack(v38);
    CmpCleanupKcbStack(v39);
LABEL_21:
    CmpInitializeKcbStack(v38);
    CmpInitializeKcbStack(v39);
  }
  if ( !v5 )
  {
    CmpUnlockKcbStack(v39);
    CmpUnlockKcbStack(v38);
    CmpUnlockHashEntryByKcb(v18);
    CmpCleanupDiscardReplaceContext(v41, a3);
    CmpDrainDelayDerefContext(a3);
    goto LABEL_20;
  }
  v22 = *(_QWORD *)(v18 + 32);
  if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v22, v16);
  else
    CellFlat = HvpGetCellPaged(v22);
  v24 = CellFlat;
  v25 = 0;
  if ( *(_DWORD *)(CellFlat + 24) + *(_DWORD *)(CellFlat + 20) )
  {
    while ( 1 )
    {
      started = CmpFindSubKeyByNumber(*(_QWORD *)(v18 + 32));
      if ( started < 0 )
        break;
      started = CmpMarkKeyDirty(*(_QWORD *)(v18 + 32), 0LL);
      if ( started < 0 )
        break;
      if ( ++v25 >= (unsigned int)(*(_DWORD *)(v24 + 24) + *(_DWORD *)(v24 + 20)) )
        goto LABEL_39;
    }
  }
  else
  {
LABEL_39:
    started = CmpMarkKeyDirty(*(_QWORD *)(v18 + 32), *(unsigned int *)(v18 + 40));
    if ( started >= 0 )
    {
      while ( 1 )
      {
        CmpFindSubKeyByNumber(*(_QWORD *)(v18 + 32));
        v34 = *(_QWORD *)(v18 + 32);
        if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(v34, 0LL);
        else
          CellPaged = HvpGetCellPaged(v34);
        v27 = *(unsigned __int16 *)(CellPaged + 72);
        if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
        {
          v28 = CmpHashCompressedComponent(CellPaged + 76, v27);
        }
        else
        {
          *((_QWORD *)&v40 + 1) = CellPaged + 76;
          LOWORD(v40) = v27;
          WORD1(v40) = v27;
          v28 = CmpHashUnicodeComponent(&v40);
        }
        v29 = *(_QWORD *)(v18 + 32);
        v30 = v28;
        if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v29, &v36);
        else
          HvpReleaseCellPaged(v29, &v36);
        v31 = (unsigned int)(v30 + 37 * *(_DWORD *)(v18 + 16));
        v32 = *(_QWORD *)(v18 + 32);
        KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v32, v31, 0LL);
        if ( KcbInHashEntryByCellIndex )
        {
          *(_DWORD *)(KcbInHashEntryByCellIndex + 40) = -1;
          v32 = *(_QWORD *)(v18 + 32);
        }
        CmpFreeKeyByCell(v32, 0LL);
      }
    }
  }
  v35 = *(_QWORD *)(v18 + 32);
  if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v35, &v37);
  else
    HvpReleaseCellPaged(v35, &v37);
LABEL_59:
  CmpUnlockKcbStack(v39);
  CmpUnlockKcbStack(v38);
LABEL_60:
  CmpUnlockHashEntryByKcb(v18);
LABEL_24:
  CmpCleanupDiscardReplaceContext(v41, a3);
  CmpCleanupKcbStack(v39);
  CmpCleanupKcbStack(v38);
  return (unsigned int)started;
}

/*
 * XREFs of CmpTransMgrCommitUoW @ 0x14074D43C
 * Callers:
 *     CmpTransMgrCommit @ 0x14074D24C (CmpTransMgrCommit.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HvLockHiveFlusherShared @ 0x140618340 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14061835C (HvUnlockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x140622DA0 (CmpSignalDeferredPosts.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpReportNotify @ 0x1406581E4 (CmpReportNotify.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 *     CmpCommitDeleteKeyUoW @ 0x14071F748 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x14074D67C (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x14074D9D4 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x14074DC48 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14076840C (CmpCommitSetSecurityUoW.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 */

__int64 __fastcall CmpTransMgrCommitUoW(__int64 a1, __int64 *a2)
{
  int v2; // edi
  int v5; // eax
  int v6; // eax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int v12; // r15d
  __int64 v13; // r13
  unsigned int v14; // ecx
  __int64 v15; // rcx
  _DWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-48h] BYREF
  struct _LOOKASIDE_LIST_EX var38; // [rsp+48h] [rbp-38h] BYREF

  v2 = 0;
  v17 = 0LL;
  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02130,
      (unsigned __int8 *)word_1400228B2,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&var38.L.Depth);
  var38.L.ListHead.Region = (unsigned __int64)&var38;
  var38.L.ListHead.Alignment = (unsigned __int64)&var38;
  CmpInitializeDelayDerefContext(&v17);
  v5 = *(_DWORD *)(a1 + 68);
  if ( !v5 )
  {
    CmpLockRegistryExclusive();
    v2 = CmpCommitAddKeyUoW(a1, a2);
    if ( v2 < 0 )
      goto LABEL_15;
    v8 = 1LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 240LL) = 0LL;
    goto LABEL_26;
  }
  if ( v5 == 2 )
  {
    CmpLockRegistryExclusive();
    CmpReportNotify(*(_QWORD *)(a1 + 48), 0, 1LL, &var38);
    v9 = CmpCommitDeleteKeyUoW(a1, a2, (__int64)&v17);
LABEL_30:
    v2 = v9;
LABEL_14:
    CmpDrainDelayDerefContext((_QWORD **)&v17);
LABEL_15:
    CmpUnlockRegistry();
    goto LABEL_16;
  }
  if ( v5 > 3 )
  {
    if ( v5 <= 5 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
      HvLockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
      v6 = CmpCommitSetValueKeyUoW(a1, a2, &v17);
      goto LABEL_11;
    }
    if ( v5 == 6 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
      HvLockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
      v6 = CmpCommitDeleteValueKeyUoW(a1, a2, &v17);
LABEL_11:
      v2 = v6;
      if ( v6 >= 0 )
        CmpReportNotify(*(_QWORD *)(a1 + 48), 0, 4LL, &var38);
      HvUnlockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
      CmpUnlockKcb(*(_QWORD *)(a1 + 48));
      goto LABEL_14;
    }
    if ( v5 != 9 )
    {
      if ( v5 == 7 )
      {
        v16[0] = -1;
        v16[1] = 0;
        CmpLockRegistry();
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 48));
        HvLockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
        v10 = *(_QWORD *)(a1 + 48);
        v11 = *(_QWORD *)(v10 + 32);
        v12 = *(_DWORD *)(v10 + 40);
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v11 + 8))(v11, v12, v16);
        if ( v13 )
        {
          if ( !(unsigned __int8)HvMarkCellDirty(v11, v12, 0LL) )
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(v11 + 16))(v11, v16);
            HvUnlockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
            CmpUnlockKcb(*(_QWORD *)(a1 + 48));
            CmpUnlockRegistry();
            v2 = -1073741443;
            goto LABEL_16;
          }
          v14 = *(_DWORD *)(v13 + 52) ^ (*(_DWORD *)(v13 + 52) ^ (*(_DWORD *)(a1 + 88) << 16)) & 0xF0000;
          *(_DWORD *)(v13 + 52) = v14;
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^ HIWORD(v14)) & 0xF;
          v15 = *a2;
          *(_QWORD *)(v13 + 4) = *a2;
          ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v15;
          (*(void (__fastcall **)(__int64, _DWORD *))(v11 + 16))(v11, v16);
        }
        else
        {
          v2 = -1073741670;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
        CmpUnlockKcb(*(_QWORD *)(a1 + 48));
        goto LABEL_15;
      }
      if ( v5 != 12 )
        goto LABEL_16;
      CmpLockRegistryExclusive();
      v9 = CmpCommitRenameKeyUoW(a1, a2, &v17);
      goto LABEL_30;
    }
    CmpLockRegistryExclusive();
    v2 = CmpCommitSetSecurityUoW(a1, a2);
    if ( v2 < 0 )
      goto LABEL_15;
    v8 = 10LL;
LABEL_26:
    CmpReportNotify(*(_QWORD *)(a1 + 48), 0, v8, &var38);
    goto LABEL_15;
  }
LABEL_16:
  CmpSignalDeferredPosts(&var38);
  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02130,
      (unsigned __int8 *)byte_14002288D,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&var38.L.Depth);
  return (unsigned int)v2;
}

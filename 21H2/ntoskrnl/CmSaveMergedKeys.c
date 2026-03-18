/*
 * XREFs of CmSaveMergedKeys @ 0x14090CFF8
 * Callers:
 *     NtSaveMergedKeys @ 0x14090F9B0 (NtSaveMergedKeys.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     HvWriteExternal @ 0x14065A848 (HvWriteExternal.c)
 *     CmpCreateTemporaryHive @ 0x14065C990 (CmpCreateTemporaryHive.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpCopyKeyPartial @ 0x1406D3BF0 (CmpCopyKeyPartial.c)
 *     CmpBlockTwoHiveWrites @ 0x14071B284 (CmpBlockTwoHiveWrites.c)
 *     CmpUuidCreate @ 0x1407435A8 (CmpUuidCreate.c)
 *     CmpUnlockTwoKcbs @ 0x1407C2FB4 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1407C300C (CmpLockTwoKcbsShared.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpLogUnsupportedOperation @ 0x14091CEA0 (CmpLogUnsupportedOperation.c)
 *     CmpCopySyncTree @ 0x14091EE14 (CmpCopySyncTree.c)
 *     CmpMergeKeyValues @ 0x14091FCD8 (CmpMergeKeyValues.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmLockHiveSecurityShared @ 0x140AB4464 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AB4A4C (CmpDoAccessCheckOnSubtree.c)
 */

__int64 __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 TemporaryHive; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rsi
  unsigned int v10; // r12d
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char v15; // r14
  unsigned int v16; // r13d
  int v17; // r9d
  __int64 CellFlat; // rax
  __int64 CellPaged; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  ULONG_PTR v30; // [rsp+28h] [rbp-81h]
  unsigned int BugCheckParameter4; // [rsp+44h] [rbp-65h]
  ULONG_PTR BugCheckParameter4_4; // [rsp+48h] [rbp-61h] BYREF
  __int64 v33; // [rsp+50h] [rbp-59h] BYREF
  ULONG_PTR v34; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-49h]
  unsigned __int64 v36; // [rsp+68h] [rbp-41h]
  __int64 v37; // [rsp+70h] [rbp-39h] BYREF
  UUID v38; // [rsp+78h] [rbp-31h] BYREF
  UUID Uuid; // [rsp+88h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+98h] [rbp-11h] BYREF
  __int64 *v41; // [rsp+B8h] [rbp+Fh]
  __int64 v42; // [rsp+C0h] [rbp+17h]

  LODWORD(v34) = 0;
  TemporaryHive = 0LL;
  v37 = a3;
  v6 = *(_QWORD *)(a1 + 8);
  v33 = 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(a2 + 8);
  BugCheckParameter4_4 = 0xFFFFFFFFLL;
  Uuid = 0LL;
  v35 = v6;
  v38 = 0LL;
  v8 = *(_QWORD *)(v6 + 32);
  v9 = *(_QWORD *)(v7 + 32);
  v10 = *(_DWORD *)(v6 + 40);
  v36 = v7;
  BugCheckParameter4 = *(_DWORD *)(v7 + 40);
  v11 = CmpUuidCreate(&Uuid);
  if ( v11 >= 0 )
  {
    v11 = CmpUuidCreate(&v38);
    if ( v11 >= 0 )
    {
      if ( v9 != CmpMasterHive && v8 != CmpMasterHive )
      {
        if ( v9 == v8 )
          return (unsigned int)-1073741811;
        CmpLockRegistry(v13, v12, v14);
        CmpLockTwoKcbsShared(v35, v36);
        if ( *(_WORD *)(v35 + 66) || *(_WORD *)(v36 + 66) )
        {
          CmpLogUnsupportedOperation(19LL);
          v11 = -1073741822;
          goto LABEL_56;
        }
        if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) || (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, 0LL) )
        {
          v11 = -1073741444;
          goto LABEL_56;
        }
        if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104)
          || (*(_DWORD *)(v9 + 160) & 2) != 0 && *(_DWORD *)(v9 + 104) )
        {
          v11 = -1073741811;
          goto LABEL_56;
        }
        TemporaryHive = CmpCreateTemporaryHive((__int64)&Uuid, (__int64)&v38);
        if ( !TemporaryHive )
        {
          v11 = -1073741670;
          goto LABEL_56;
        }
        v11 = CmpBlockTwoHiveWrites((volatile signed __int32 *)v9, (volatile signed __int32 *)v8, 0);
        if ( v11 < 0 )
        {
LABEL_56:
          CmpUnlockTwoKcbs(v35, v36);
          CmpUnlockRegistry(v26, v25, v27, v28);
          if ( !TemporaryHive )
            return (unsigned int)v11;
LABEL_57:
          CmpDestroyHive(TemporaryHive);
          return (unsigned int)v11;
        }
        v15 = 6;
        CmLockHiveSecurityShared(v8);
        v11 = CmpDoAccessCheckOnSubtree(v8, 3);
        CmUnlockHiveSecurity(v8);
        if ( v11 >= 0 )
        {
          CmLockHiveSecurityShared(v9);
          v11 = CmpDoAccessCheckOnSubtree(v9, 3);
          CmUnlockHiveSecurity(v9);
          if ( v11 >= 0 )
          {
            HvLockHiveFlusherExclusive(TemporaryHive);
            v15 = 7;
            v11 = CmpCopyKeyPartial(v8, v10, TemporaryHive, 0xFFFFFFFF, 6, v30, 0, (unsigned int *)&v34);
            if ( v11 >= 0 )
            {
              v16 = v34;
              v17 = v34;
              *(_DWORD *)(*(_QWORD *)(TemporaryHive + 64) + 36LL) = v34;
              v11 = CmpCopySyncTree(v8, v10, TemporaryHive, v17, 2, 0);
              if ( v11 >= 0 )
              {
                HvUnlockHiveFlusherExclusive(v8);
                v15 = 5;
                if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v9, BugCheckParameter4, &BugCheckParameter4_4);
                else
                  CellFlat = HvpGetCellPaged(v9, BugCheckParameter4, (unsigned int *)&BugCheckParameter4_4);
                if ( CellFlat )
                {
                  if ( (*(_BYTE *)(TemporaryHive + 140) & 1) != 0 )
                    CellPaged = HvpGetCellFlat(TemporaryHive, v16, &v33);
                  else
                    CellPaged = HvpGetCellPaged(TemporaryHive, v16, (unsigned int *)&v33);
                  v20 = CellPaged;
                  if ( CellPaged )
                  {
                    v11 = CmpMergeKeyValues(v9, v16, CellPaged);
                    if ( v11 >= 0 )
                    {
                      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v9, &BugCheckParameter4_4);
                      else
                        HvpReleaseCellPaged(v9, (unsigned int *)&BugCheckParameter4_4);
                      if ( (*(_BYTE *)(TemporaryHive + 140) & 1) != 0 )
                        HvpReleaseCellFlat(TemporaryHive, &v33);
                      else
                        HvpReleaseCellPaged(TemporaryHive, (unsigned int *)&v33);
                      v11 = CmpCopySyncTree(v9, BugCheckParameter4, TemporaryHive, v16, 2, 2);
                      if ( v11 >= 0 )
                      {
                        HvUnlockHiveFlusherExclusive(v9);
                        HvUnlockHiveFlusherExclusive(TemporaryHive);
                        CmpUnlockTwoKcbs(v35, v36);
                        CmpUnlockRegistry(v22, v21, v23, v24);
                        *(_QWORD *)(TemporaryHive + 1560) = v37;
                        v11 = HvWriteExternal(TemporaryHive);
                        *(_QWORD *)(TemporaryHive + 1560) = 0LL;
                        goto LABEL_57;
                      }
                      goto LABEL_28;
                    }
                  }
                  else
                  {
                    v11 = -1073741670;
                  }
                  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v9, &BugCheckParameter4_4);
                  else
                    HvpReleaseCellPaged(v9, (unsigned int *)&BugCheckParameter4_4);
                  if ( v20 )
                  {
                    if ( (*(_BYTE *)(TemporaryHive + 140) & 1) != 0 )
                      HvpReleaseCellFlat(TemporaryHive, &v33);
                    else
                      HvpReleaseCellPaged(TemporaryHive, (unsigned int *)&v33);
                  }
                }
                else
                {
                  v11 = -1073741670;
                }
              }
            }
          }
        }
LABEL_28:
        HvUnlockHiveFlusherExclusive(v9);
        if ( (v15 & 2) != 0 )
          HvUnlockHiveFlusherExclusive(v8);
        if ( (v15 & 1) != 0 )
          HvUnlockHiveFlusherExclusive(TemporaryHive);
        goto LABEL_56;
      }
      if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 0x400000000000LL) )
      {
        v37 = 0x1000000LL;
        v41 = &v37;
        v42 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03868,
          (unsigned __int8 *)word_140028CA2,
          0LL,
          0LL,
          3u,
          &v40);
      }
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v11;
}

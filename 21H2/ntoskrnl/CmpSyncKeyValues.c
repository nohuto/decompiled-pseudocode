/*
 * XREFs of CmpSyncKeyValues @ 0x140879F8C
 * Callers:
 *     CmpCopySyncTree2 @ 0x1408786F0 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x1408795E0 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x1402AB7E0 (CmpFindSecurityCellCacheIndex.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCopyCell @ 0x1405E2220 (CmpCopyCell.c)
 *     CmpFreeSecurityDescriptor @ 0x140661338 (CmpFreeSecurityDescriptor.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14076FCB8 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x14076FCE8 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpAssignSecurityDescriptor @ 0x140871810 (CmpAssignSecurityDescriptor.c)
 *     CmpCopyValue @ 0x140878E80 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x140879200 (CmpFreeKeyValues.c)
 *     CmpAddValueToList @ 0x14087B518 (CmpAddValueToList.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 */

char __fastcall CmpSyncKeyValues(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rdi
  unsigned int v8; // r15d
  int v9; // r12d
  __int64 v12; // rsi
  int v14; // r13d
  __int64 v15; // rdx
  char v16; // di
  __int64 v17; // rcx
  unsigned int v18; // r12d
  ULONG_PTR v19; // rdx
  __int64 v20; // r9
  bool v21; // zf
  unsigned int v22; // ecx
  __int64 v23; // rax
  ULONG_PTR *p_BugCheckParameter3_4; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // r12d
  unsigned int v28; // ecx
  unsigned int *v29; // r12
  unsigned int v30; // r14d
  __int64 v31; // rsi
  unsigned int v32; // [rsp+30h] [rbp-50h]
  unsigned int v33; // [rsp+30h] [rbp-50h]
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-4Ch]
  ULONG_PTR BugCheckParameter3_4; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v36[2]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v37[2]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v38[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v39[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v40[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v41; // [rsp+68h] [rbp-18h]
  __int64 v42; // [rsp+70h] [rbp-10h]
  __int64 v43; // [rsp+78h] [rbp-8h]
  unsigned int v45; // [rsp+C8h] [rbp+48h] BYREF

  v7 = a1;
  v39[1] = 0;
  v39[0] = -1;
  v8 = -1;
  v38[0] = -1;
  v9 = -1;
  BugCheckParameter3 = -1;
  v40[0] = -1;
  a7 = 0;
  v38[1] = 0;
  v45 = 0;
  v40[1] = 0;
  CmpLockTwoSecurityCachesExclusiveShared(a4, a1);
  v12 = a6;
  if ( !CmpFreeKeyValues(a4, a5, a6) )
  {
    CmpUnlockTwoSecurityCaches(a4, v7);
    return 0;
  }
  v14 = a5 >> 31;
  if ( !*(_WORD *)(a3 + 74) || (v15 = *(unsigned int *)(a3 + 48), (_DWORD)v15 == -1) )
  {
LABEL_8:
    *(_DWORD *)(v12 + 48) = v9;
    if ( !CmpFindSecurityCellCacheIndex(v7, *(_DWORD *)(a3 + 44), &v45) )
    {
LABEL_9:
      v17 = a4;
LABEL_10:
      CmpUnlockTwoSecurityCaches(v17, v7);
      v16 = a7;
      goto LABEL_46;
    }
    v18 = *(_DWORD *)(v12 + 44);
    v19 = a5;
    v20 = *(_QWORD *)(*(_QWORD *)(v7 + 1880) + 16LL * v45 + 8);
    *(_DWORD *)(v12 + 44) = -1;
    if ( (int)CmpAssignSecurityDescriptor(a4, v19, v12, (void *)(v20 + 32)) < 0 )
    {
      *(_DWORD *)(v12 + 44) = v18;
      goto LABEL_9;
    }
    v21 = (*(_BYTE *)(v12 + 2) & 4) == 0;
    v22 = *(_DWORD *)(v12 + 44);
    v45 = v22;
    *(_DWORD *)(v12 + 44) = v18;
    if ( v21 || v22 == v18 )
    {
      v27 = v22;
    }
    else
    {
      LODWORD(BugCheckParameter3_4) = -1;
      v36[0] = -1;
      v37[0] = -1;
      HIDWORD(BugCheckParameter3_4) = 0;
      v36[1] = 0;
      v37[1] = 0;
      v41 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, ULONG_PTR *))(a4 + 8))(a4, v22, &BugCheckParameter3_4);
      v17 = a4;
      if ( !v41 )
        goto LABEL_10;
      v23 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v18, v36);
      v42 = v23;
      if ( !v23 )
      {
        p_BugCheckParameter3_4 = &BugCheckParameter3_4;
LABEL_18:
        (*(void (__fastcall **)(unsigned __int64, ULONG_PTR *))(a4 + 16))(a4, p_BugCheckParameter3_4);
        goto LABEL_9;
      }
      v32 = *(_DWORD *)(v23 + 8);
      v43 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v32, v37);
      if ( !v43 )
      {
        (*(void (__fastcall **)(unsigned __int64, ULONG_PTR *))(a4 + 16))(a4, &BugCheckParameter3_4);
        p_BugCheckParameter3_4 = (ULONG_PTR *)v36;
        goto LABEL_18;
      }
      if ( !(unsigned __int8)HvMarkCellDirty(a4, v18, 0LL) || !(unsigned __int8)HvMarkCellDirty(a4, v32, 0LL) )
      {
        (*(void (__fastcall **)(unsigned __int64, ULONG_PTR *))(a4 + 16))(a4, &BugCheckParameter3_4);
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v36);
        p_BugCheckParameter3_4 = (ULONG_PTR *)v37;
        goto LABEL_18;
      }
      v25 = v41;
      *(_DWORD *)(v41 + 8) = v32;
      v26 = v42;
      *(_DWORD *)(v25 + 4) = v18;
      v27 = v45;
      *(_DWORD *)(v26 + 8) = v45;
      *(_DWORD *)(v43 + 4) = v27;
      (*(void (__fastcall **)(unsigned __int64, ULONG_PTR *))(a4 + 16))(a4, &BugCheckParameter3_4);
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v36);
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v37);
    }
    CmpFreeSecurityDescriptor(a4, a5);
    *(_DWORD *)(v12 + 44) = v27;
    CmpUnlockTwoSecurityCaches(a4, v7);
    v28 = *(_DWORD *)(a3 + 36);
    *(_DWORD *)(v12 + 40) = -1;
    *(_DWORD *)(v12 + 36) = 0;
    *(_DWORD *)(v12 + 60) = *(_DWORD *)(a3 + 60);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(a3 + 64);
    v45 = v28;
    if ( !v28 )
      return 1;
    v29 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v7 + 8))(
                            v7,
                            *(unsigned int *)(a3 + 40),
                            v39);
    if ( v29 )
    {
      v30 = 0;
      if ( v45 )
      {
        while ( 1 )
        {
          v33 = CmpCopyValue(v7, *v29, a4, v14);
          if ( v33 == -1 || !(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v33, v40) )
          {
            v8 = *(_DWORD *)(v12 + 40);
            goto LABEL_35;
          }
          if ( (int)CmpAddValueToList(a4, v33, v30, v14, v12 + 36) < 0 )
            break;
          ++v30;
          ++v29;
          if ( v30 >= v45 )
            goto LABEL_34;
        }
        v8 = *(_DWORD *)(v12 + 40);
        if ( v8 != -1 )
        {
          v31 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v8, v38);
          if ( v31 )
          {
            if ( v30 )
            {
              do
                HvFreeCell(a4, *(unsigned int *)(v31 + 4LL * --v30));
              while ( v30 );
              v7 = a1;
            }
            (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v38);
          }
        }
      }
      else
      {
LABEL_34:
        a7 = 1;
      }
LABEL_35:
      (*(void (__fastcall **)(__int64, _DWORD *))(v7 + 16))(v7, v39);
      v16 = a7;
      if ( a7 )
        return v16;
      if ( v8 != -1 )
        HvFreeCell(a4, v8);
    }
    else
    {
      v16 = 0;
    }
LABEL_46:
    if ( BugCheckParameter3 != -1 )
      HvFreeCell(a4, BugCheckParameter3);
    return v16;
  }
  BugCheckParameter3 = CmpCopyCell(v7, v15, a4, v14);
  if ( BugCheckParameter3 != -1 )
  {
    v9 = BugCheckParameter3;
    *(_WORD *)(v12 + 74) = *(_WORD *)(a3 + 74);
    goto LABEL_8;
  }
  CmpUnlockTwoSecurityCaches(a4, v7);
  return a7;
}

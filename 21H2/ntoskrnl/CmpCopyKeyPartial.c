/*
 * XREFs of CmpCopyKeyPartial @ 0x14076FA4C
 * Callers:
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 *     CmpCopySyncTree2 @ 0x1408786F0 (CmpCopySyncTree2.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087CBF0 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087F514 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x1402AB7E0 (CmpFindSecurityCellCacheIndex.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCopyCell @ 0x1405E2220 (CmpCopyCell.c)
 *     CmpAddValueToListEx @ 0x14065C284 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14076FCB8 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x14076FCE8 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpAssignSecurityDescriptor @ 0x140871810 (CmpAssignSecurityDescriptor.c)
 *     CmpCopyValue @ 0x140878E80 (CmpCopyValue.c)
 */

__int64 __fastcall CmpCopyKeyPartial(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        __int16 a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v7; // r15d
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // edx
  int v16; // eax
  char v17; // cl
  __int16 v18; // ax
  unsigned int v19; // r13d
  int v20; // ebx
  unsigned int v21; // r13d
  char v22; // bl
  unsigned int *v24; // rax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  __int64 v27; // r15
  int v28; // [rsp+30h] [rbp-50h]
  int v29; // [rsp+30h] [rbp-50h]
  int v30; // [rsp+34h] [rbp-4Ch]
  unsigned int v31; // [rsp+38h] [rbp-48h] BYREF
  unsigned int *v32; // [rsp+40h] [rbp-40h]
  _DWORD v33[2]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v34[2]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v35[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v36[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v37[2]; // [rsp+68h] [rbp-18h] BYREF
  unsigned int *v38; // [rsp+70h] [rbp-10h]
  __int64 v39; // [rsp+78h] [rbp-8h]
  unsigned int BugCheckParameter3; // [rsp+C0h] [rbp+40h]
  unsigned int v41; // [rsp+C8h] [rbp+48h]
  unsigned int v42; // [rsp+F0h] [rbp+70h]

  v41 = a2;
  v7 = a7;
  v35[1] = 0;
  v36[1] = 0;
  BugCheckParameter3 = -1;
  v35[0] = -1;
  v31 = 0;
  v11 = -1;
  v36[0] = -1;
  v12 = 0LL;
  v38 = 0LL;
  v37[0] = -1;
  v37[1] = 0;
  v34[0] = -1;
  v34[1] = 0;
  v33[0] = -1;
  v33[1] = 0;
  if ( a7 == 2 )
  {
    if ( a4 == -1 )
      v7 = 0;
    else
      v7 = a4 >> 31;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v35);
  v39 = v13;
  v14 = v13;
  if ( !v13 )
    return 0xFFFFFFFFLL;
  v15 = *(unsigned __int16 *)(v13 + 74);
  v28 = *(_DWORD *)(v13 + 44);
  v16 = *(_DWORD *)(v13 + 48);
  if ( (a5 & 2) == 0 )
    v16 = -1;
  LODWORD(v32) = v16;
  v30 = (a5 & 2) != 0 ? v15 : 0;
  v42 = CmpCopyCell(a1, v41, a3, v7);
  if ( v42 == -1 )
  {
    v19 = -1;
    goto LABEL_56;
  }
  if ( v30 )
  {
    BugCheckParameter3 = CmpCopyCell(a1, (unsigned int)v32, a3, v7);
    if ( BugCheckParameter3 == -1 )
    {
      v19 = v42;
LABEL_56:
      v22 = 0;
      goto LABEL_24;
    }
  }
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v42, v36);
  if ( !v12 )
    goto LABEL_39;
  *(_DWORD *)(v12 + 20) = 0;
  *(_DWORD *)(v12 + 24) = 0;
  v17 = a5;
  *(_DWORD *)(v12 + 48) = BugCheckParameter3;
  *(_WORD *)(v12 + 74) = v30;
  *(_DWORD *)(v12 + 44) = -1;
  *(_DWORD *)(v12 + 28) = -1;
  *(_DWORD *)(v12 + 32) = -1;
  *(_DWORD *)(v12 + 16) = a4;
  *(_BYTE *)(v12 + 12) = 0;
  if ( (a5 & 0x100) != 0 )
    *(_BYTE *)(v12 + 13) &= 0xFCu;
  if ( (a5 & 0x80u) != 0 )
    *(_BYTE *)(v12 + 13) |= 0x80u;
  v18 = *(_WORD *)(v14 + 2) & 0x30;
  *(_WORD *)(v12 + 2) = v18;
  if ( (a5 & 0x20) != 0 )
  {
    v18 = *(_WORD *)(v14 + 2) & 0xFFBF;
    *(_WORD *)(v12 + 2) = v18;
  }
  if ( a4 == -1 )
    *(_WORD *)(v12 + 2) = v18 | 0xC;
  if ( (a5 & 0x10) != 0 )
    goto LABEL_20;
  CmpLockTwoSecurityCachesExclusiveShared(a3, a1);
  if ( !CmpFindSecurityCellCacheIndex(a1, v28, &v31) )
  {
    CmpUnlockTwoSecurityCaches(a3, a1);
LABEL_39:
    v19 = v42;
    goto LABEL_31;
  }
  v19 = v42;
  v20 = CmpAssignSecurityDescriptor(a3, v42, v12, *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * v31 + 8) + 32LL);
  CmpUnlockTwoSecurityCaches(a3, a1);
  if ( v20 < 0 )
  {
LABEL_31:
    v22 = 0;
    goto LABEL_24;
  }
  v14 = v39;
  v17 = a5;
LABEL_20:
  if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
    v21 = 0;
  else
    v21 = *(_DWORD *)(v14 + 36);
  *(_DWORD *)(v12 + 36) = 0;
  *(_DWORD *)(v12 + 40) = -1;
  if ( v21 && (v17 & 4) != 0 )
  {
    v24 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(v14 + 40),
                            v37);
    v38 = v24;
    if ( v24 )
    {
      v25 = 0;
      v32 = v24;
      while ( 1 )
      {
        v26 = CmpCopyValue(a1, *v24, a3, v7);
        v29 = v26;
        if ( v26 == -1 || !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v26, v33) )
        {
          v11 = *(_DWORD *)(v12 + 40);
          goto LABEL_39;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v33);
        if ( (int)CmpAddValueToListEx(a3, v29, v25, v7, (unsigned int *)(v12 + 36), v21) < 0 )
          break;
        ++v25;
        v24 = ++v32;
        if ( v25 >= v21 )
          goto LABEL_23;
      }
      v11 = *(_DWORD *)(v12 + 40);
      if ( v11 == -1 )
      {
        v19 = v42;
        v22 = 0;
        goto LABEL_24;
      }
      v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v11, v34);
      if ( v27 )
      {
        while ( v25 )
          HvFreeCell(a3, *(unsigned int *)(v27 + 4LL * --v25));
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v34);
      }
    }
    goto LABEL_39;
  }
LABEL_23:
  v19 = v42;
  v22 = 1;
LABEL_24:
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v35);
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v36);
  if ( v38 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v37);
  if ( v22 )
    return v19;
  if ( v11 != -1 )
    HvFreeCell(a3, v11);
  if ( BugCheckParameter3 != -1 )
    HvFreeCell(a3, BugCheckParameter3);
  if ( v19 != -1 )
    HvFreeCell(a3, v19);
  return 0xFFFFFFFFLL;
}

/*
 * XREFs of CmQueryValueKey @ 0x1407C83F0
 * Callers:
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpSetKcbAtLayerHeight @ 0x1406B98FC (CmpSetKcbAtLayerHeight.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpLockKcbStackShared @ 0x140721B68 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpQueryKeyValueData @ 0x1407C5730 (CmpQueryKeyValueData.c)
 *     CmpFindNameInListFromIndex @ 0x1407C94E0 (CmpFindNameInListFromIndex.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, __int64 a2, int a3, size_t a4, unsigned int a5, __int64 a6)
{
  __int16 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  __int64 v12; // r12
  struct _PRIVILEGE_SET *v13; // rsi
  int v14; // edi
  __int16 v15; // r14
  SIZE_T v16; // rbx
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 Control_high; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _PRIVILEGE_SET *v22; // r12
  int KeyValueData; // edi
  __int64 v24; // r10
  __int64 v25; // r10
  __int16 v26; // di
  char *v27; // rbx
  __int64 v28; // rsi
  char *v29; // rcx
  unsigned __int16 v30; // si
  PPRIVILEGE_SET v31; // rbx
  char v32; // al
  int NameInListFromIndex; // eax
  ULONG_PTR v34; // r13
  unsigned int v35; // edi
  __int64 CellFlat; // rax
  __int64 v37; // rsi
  char *v38; // rbx
  char *v39; // rcx
  int Size; // [rsp+28h] [rbp-A9h]
  PPRIVILEGE_SET v42; // [rsp+48h] [rbp-89h]
  ULONG_PTR BugCheckParameter4; // [rsp+50h] [rbp-81h] BYREF
  __int64 v44; // [rsp+58h] [rbp-79h] BYREF
  __int64 v45; // [rsp+60h] [rbp-71h] BYREF
  __int128 v46; // [rsp+68h] [rbp-69h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+78h] [rbp-59h]
  int v48; // [rsp+88h] [rbp-49h]
  _QWORD v49[2]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-31h]
  size_t v51; // [rsp+A8h] [rbp-29h]
  _OWORD v52[3]; // [rsp+B0h] [rbp-21h] BYREF

  v7 = 0;
  v50 = a6;
  v46 = 0LL;
  v44 = 0LL;
  v49[0] = 0LL;
  BugCheckParameter4 = 0xFFFFFFFF00000000uLL;
  v45 = 0LL;
  v51 = a4;
  v48 = a3;
  v49[1] = a2;
  memset(v52, 0, sizeof(v52));
  WORD1(v46) = -1;
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextReinitialize(&v44);
  HvpGetCellContextReinitialize(v49);
  CmpAttachToRegistryProcess(v52);
  CmpLockRegistry(v9, v8, v10);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 0LL;
  v42 = 0LL;
  v14 = *(__int16 *)(v12 + 66);
  v15 = *(_WORD *)(v12 + 66);
  if ( v14 >= 2 )
  {
    v16 = 8LL * (unsigned int)(v14 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v16, 0x35364D43u, v11);
    v42 = TransientPoolWithTag;
    v13 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v22 = Privileges[1];
      KeyValueData = -1073741670;
      goto LABEL_63;
    }
    memset(TransientPoolWithTag, 0, v16);
    v15 = *(_WORD *)(v12 + 66);
  }
  LOWORD(v46) = v14;
  Privileges[1] = v13;
  WORD1(v46) = v15;
  if ( v15 )
  {
    v24 = *(_QWORD *)(v12 + 192);
    if ( v24 )
    {
      do
      {
        CmpSetKcbAtLayerHeight((__int64)&v46, v15, *(_QWORD *)(v24 + 16));
        v24 = *(_QWORD *)(v25 + 24);
        --v15;
      }
      while ( v24 );
      v13 = Privileges[1];
      v15 = WORD1(v46);
      v42 = Privileges[1];
    }
  }
  else
  {
    *((_QWORD *)&v46 + 1) = v12;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockKcbStackShared((__int64)&v46);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
LABEL_13:
      KeyValueData = -1073740763;
      v22 = v42;
      if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
        KeyValueData = -1073741444;
      goto LABEL_56;
    }
    CmpUnlockKcbStack((__int64)&v46);
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v45);
    if ( KeyValueData < 0 )
    {
      v22 = v42;
      goto LABEL_63;
    }
  }
  v26 = 0;
  if ( v15 >= 0 )
  {
    v27 = (char *)&v46 + 8;
    v28 = (char *)v13 - ((char *)&v46 + 8) - 16;
    do
    {
      v29 = &v27[v28];
      if ( v26 < 2 )
        v29 = v27;
      CmpLockKcbShared(*(_QWORD *)v29);
      ++v26;
      v27 += 8;
    }
    while ( v26 <= v15 );
  }
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v45) )
    goto LABEL_13;
  v30 = *(_WORD *)(v12 + 66);
  v22 = v42;
  if ( (v30 & 0x8000u) != 0 )
  {
LABEL_55:
    KeyValueData = -1073741772;
    goto LABEL_56;
  }
  while ( 1 )
  {
    v31 = v30 < 2u ? Privileges[v30 - 1] : (PPRIVILEGE_SET)*((_QWORD *)v42 + v30 - 2);
    Control_high = (unsigned int)SHIWORD(v31[3].Control);
    if ( (_DWORD)Control_high == *(unsigned __int16 *)(a1 + 4) )
    {
      v32 = BYTE1(v31[3].Control);
      if ( !v32 )
        goto LABEL_33;
    }
    else
    {
      if ( !HIWORD(v31[3].Control) )
        goto LABEL_33;
      v32 = BYTE1(v31[3].Control);
    }
    if ( v32 == 1 )
      goto LABEL_40;
LABEL_33:
    if ( v31[2].PrivilegeCount == -1 )
      goto LABEL_39;
    NameInListFromIndex = CmpFindNameInListFromIndex(
                            *(_QWORD *)&v31[1].Privilege[0].Luid.HighPart,
                            Size,
                            (__int64)&BugCheckParameter4,
                            (__int64)&BugCheckParameter4 + 4);
    KeyValueData = NameInListFromIndex;
    if ( NameInListFromIndex >= 0 )
      break;
    if ( NameInListFromIndex != -1073741772 )
      goto LABEL_56;
    Control_high = (unsigned int)SHIWORD(v31[3].Control);
    if ( (_DWORD)Control_high == *(unsigned __int16 *)(a1 + 4) || HIWORD(v31[3].Control) && BYTE1(v31[3].Control) )
    {
LABEL_40:
      v34 = 0LL;
      goto LABEL_41;
    }
LABEL_39:
    if ( (--v30 & 0x8000u) != 0 )
      goto LABEL_40;
  }
  *(_DWORD *)(a1 + 100) = BugCheckParameter4;
  v34 = *(_QWORD *)&v31[1].Privilege[0].Luid.HighPart;
LABEL_41:
  v35 = HIDWORD(BugCheckParameter4);
  if ( HIDWORD(BugCheckParameter4) == -1 )
    goto LABEL_55;
  if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v34, HIDWORD(BugCheckParameter4), &v44);
  else
    CellFlat = HvpGetCellPaged(v34);
  v37 = CellFlat;
  if ( (*(_DWORD *)(v34 + 160) & 0x80000) != 0 && (*(_BYTE *)(CellFlat + 16) & 2) != 0 )
  {
    KeyValueData = -1073741772;
  }
  else
  {
    KeyValueData = CmpQueryKeyValueData((__int64)v31, v35, CellFlat, v48, (_DWORD *)v51, a5, (unsigned int *)v50);
    if ( KeyValueData >= 0 )
      KeyValueData = 0;
  }
  if ( v37 )
  {
    if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v34, &v44);
    else
      HvpReleaseCellPaged(v34, &v44);
  }
LABEL_56:
  if ( v15 >= 0 )
  {
    v38 = (char *)&v46 + 8;
    do
    {
      v39 = &v38[(char *)v22 - ((char *)&v46 + 8) - 16];
      if ( v7 < 2 )
        v39 = v38;
      CmpUnlockKcb(*(_QWORD *)v39);
      ++v7;
      v38 += 8;
    }
    while ( v7 <= v15 );
  }
LABEL_63:
  CmpUnlockRegistry(v19, Control_high, v20, v21);
  CmpDetachFromRegistryProcess(v52);
  if ( v22 )
    CmSiFreeMemory(v22);
  return (unsigned int)KeyValueData;
}

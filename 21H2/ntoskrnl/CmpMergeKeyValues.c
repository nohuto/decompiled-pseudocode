/*
 * XREFs of CmpMergeKeyValues @ 0x14091FCD8
 * Callers:
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmpCopySyncTree2 @ 0x14091EEC4 (CmpCopySyncTree2.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpCopyValue @ 0x14065B108 (CmpCopyValue.c)
 *     CmpInitializeValueNameString @ 0x14065DBC8 (CmpInitializeValueNameString.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1407221B0 (CmpFindNameInListWithStatus.c)
 *     CmpAddValueToListEx @ 0x14079B920 (CmpAddValueToListEx.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpSyncKeyValues @ 0x1409207EC (CmpSyncKeyValues.c)
 */

__int64 __fastcall CmpMergeKeyValues(
        ULONG_PTR BugCheckParameter3,
        int a2,
        _DWORD *a3,
        struct _LOOKASIDE_LIST_EX *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // r15d
  __int64 v8; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int NameInListWithStatus; // ebx
  unsigned int v13; // r14d
  ULONG_PTR v14; // rdx
  unsigned int v15; // r12d
  __int64 CellFlat; // rax
  __int64 v17; // r13
  unsigned int *v18; // rsi
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rax
  __int16 v22; // [rsp+30h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  unsigned int *v25; // [rsp+50h] [rbp-20h]
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-18h]
  __int128 v27; // [rsp+60h] [rbp-10h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+C8h] [rbp+58h]

  BugCheckParameter3a = (ULONG_PTR)a4;
  LODWORD(v28) = a2;
  v6 = 0;
  v8 = a6;
  v24 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v10 = a3[15];
  LODWORD(v29) = 0;
  LODWORD(v28) = 0;
  v27 = 0LL;
  if ( *(_DWORD *)(a6 + 60) < v10 )
    *(_DWORD *)(a6 + 60) = v10;
  v11 = a3[16];
  if ( *(_DWORD *)(v8 + 64) < v11 )
    *(_DWORD *)(v8 + 64) = v11;
  v25 = (unsigned int *)(v8 + 36);
  if ( *(_DWORD *)(v8 + 36) )
  {
    v13 = a3[9];
    if ( !v13 )
      return 0;
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithTag(PagedPool, 0x7FFFuLL, 0x20204D43u, a4);
    if ( Privileges )
    {
      v14 = (unsigned int)a3[10];
      v15 = a5 >> 31;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v14, &v24);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, v14, (unsigned int *)&v24);
      v17 = CellFlat;
      v18 = (unsigned int *)CellFlat;
      while ( 1 )
      {
        v19 = *v18;
        v20 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
            ? HvpGetCellFlat(BugCheckParameter3, v19, &v23)
            : HvpGetCellPaged(BugCheckParameter3, v19, (unsigned int *)&v23);
        CmpInitializeValueNameString(v20, (__int64)&v27, (__int64)Privileges);
        NameInListWithStatus = CmpFindNameInListWithStatus(
                                 BugCheckParameter3a,
                                 v25,
                                 (__int64)&v27,
                                 0,
                                 (__int64)&v28,
                                 (__int64)&a6);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v23);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
        if ( NameInListWithStatus < 0 )
        {
          if ( NameInListWithStatus != -1073741772 )
            break;
          NameInListWithStatus = CmpCopyValue(BugCheckParameter3, *v18, BugCheckParameter3a, v15, (unsigned int *)&v29);
          if ( NameInListWithStatus < 0 )
            break;
          NameInListWithStatus = CmpAddValueToListEx(BugCheckParameter3a, v29, v28, v15, v25, 1);
          if ( NameInListWithStatus < 0 )
            break;
        }
        ++v6;
        ++v18;
        if ( v6 >= v13 )
        {
          NameInListWithStatus = 0;
          break;
        }
      }
      if ( v17 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v24);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v24);
      }
      CmSiFreeMemory(Privileges);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    NameInListWithStatus = CmpSyncKeyValues(BugCheckParameter3, a5, v8, v22);
    if ( NameInListWithStatus >= 0 )
      return 0;
  }
  return (unsigned int)NameInListWithStatus;
}

/*
 * XREFs of CmpMarkIndexDirty @ 0x140715A2C
 * Callers:
 *     CmpMarkKeyDirty @ 0x140716758 (CmpMarkKeyDirty.c)
 *     CmpMarkKeyParentDirty @ 0x14091F9DC (CmpMarkKeyParentDirty.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140715BA0 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpCopyCompressedName @ 0x140718AE8 (CmpCopyCompressedName.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpMarkIndexDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, unsigned int a3)
{
  unsigned int v5; // r15d
  struct _PRIVILEGE_SET *v6; // r14
  __int64 CellFlat; // rax
  struct _LOOKASIDE_LIST_EX *v8; // r9
  __int64 v9; // rdi
  unsigned __int16 v10; // si
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 CellPaged; // rax
  int v13; // esi
  unsigned int i; // edi
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v5 = BugCheckParameter4;
  v6 = 0LL;
  HvpGetCellContextReinitialize(&v16);
  HvpGetCellContextReinitialize(&v17);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3, &v17);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v9 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) == 0 )
    goto LABEL_7;
  v10 = 2 * *(_WORD *)(CellFlat + 72);
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v10, 0x20394D43u, v8);
  v6 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    CmpCopyCompressedName(TransientPoolWithTag, v10, v9 + 76, *(unsigned __int16 *)(v9 + 72));
LABEL_7:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v5, &v16);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    if ( CellPaged )
    {
      v13 = 0;
      for ( i = -1073741772; v13 < *(_DWORD *)(BugCheckParameter3 + 216); ++v13 )
      {
        i = CmpMarkIndexDirtyInStorageType(BugCheckParameter3, v13);
        if ( i != -1073741772 )
          break;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v16);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v16);
    }
    else
    {
      i = -1073741670;
    }
    if ( v6 )
      CmSiFreeMemory(v6);
    goto LABEL_16;
  }
  i = -1073741670;
LABEL_16:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v17);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v17);
  return i;
}

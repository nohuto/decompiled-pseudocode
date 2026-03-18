/*
 * XREFs of CmpAddValueKeyNew @ 0x14079B758
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x14079B2C0 (CmpSetValueKeyNew.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     CmpNameSize @ 0x1406AD650 (CmpNameSize.c)
 *     CmpSetValueDataNew @ 0x1406BE2FC (CmpSetValueDataNew.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpCopyName @ 0x14079B8C0 (CmpCopyName.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvAllocateCell @ 0x14079C8A4 (HvAllocateCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpAddValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        unsigned __int16 *a2,
        int a3,
        void *a4,
        size_t Size,
        int a6,
        int *a7)
{
  unsigned __int16 v11; // ax
  int Cell; // eax
  _WORD *v13; // rbx
  int v14; // r14d
  void *v15; // rcx
  unsigned __int16 v16; // ax
  unsigned int v17; // edi
  int v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v21; // [rsp+40h] [rbp-10h] BYREF

  v19 = -1;
  v20 = 0LL;
  v21 = 0LL;
  HvpGetCellContextReinitialize(&v20);
  v11 = CmpNameSize(a2);
  Cell = HvAllocateCell(
           BugCheckParameter2,
           (unsigned int)v11 + 20,
           a6,
           (unsigned int)&v19,
           (__int64)&v21,
           (__int64)&v20);
  v13 = v21;
  v14 = Cell;
  if ( Cell >= 0 )
  {
    v15 = v21 + 10;
    *v21 = 27510;
    v16 = CmpCopyName(v15);
    v13[1] = v16;
    v13[8] = v16 < *a2;
    *((_DWORD *)v13 + 3) = a3;
    if ( (unsigned int)Size <= 4 )
    {
      *((_DWORD *)v13 + 1) = Size + 0x80000000;
      *((_DWORD *)v13 + 2) = 0;
      memmove(v13 + 4, a4, (unsigned int)Size);
LABEL_6:
      v17 = -1;
      v14 = 0;
      *a7 = v19;
      goto LABEL_7;
    }
    v14 = CmpSetValueDataNew(BugCheckParameter2, (char *)a4, (unsigned int)Size, a6, (_DWORD *)v13 + 2);
    if ( v14 >= 0 )
    {
      *((_DWORD *)v13 + 1) = Size;
      goto LABEL_6;
    }
  }
  v17 = v19;
LABEL_7:
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v20);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v20);
  }
  if ( v17 != -1 )
    HvFreeCell(BugCheckParameter2, v17);
  return (unsigned int)v14;
}

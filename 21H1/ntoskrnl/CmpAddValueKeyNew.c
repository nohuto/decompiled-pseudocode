/*
 * XREFs of CmpAddValueKeyNew @ 0x14069804C
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140656F34 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpSetValueKeyNew @ 0x140697F98 (CmpSetValueKeyNew.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     CmpSetValueDataNew @ 0x140697D70 (CmpSetValueDataNew.c)
 *     CmpCopyName @ 0x14069818C (CmpCopyName.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140698D38 (HvAllocateCell.c)
 *     CmpNameSize @ 0x1406C22BC (CmpNameSize.c)
 */

__int64 __fastcall CmpAddValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        unsigned __int16 *a2,
        int a3,
        void *a4,
        size_t Size,
        int a6)
{
  unsigned __int16 v10; // ax
  unsigned int Cell; // ebp
  _WORD *v12; // rbx
  void *v13; // rcx
  unsigned __int16 v14; // ax
  _DWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v17; // [rsp+38h] [rbp-20h] BYREF

  v16[0] = -1;
  v17 = 0LL;
  v16[1] = 0;
  v10 = CmpNameSize(a2);
  Cell = HvAllocateCell(BugCheckParameter2, (unsigned int)v10 + 20, a6, (unsigned int)&v17, (__int64)v16);
  if ( Cell != -1 )
  {
    v12 = v17;
    v13 = v17 + 10;
    *v17 = 27510;
    v14 = CmpCopyName(v13);
    v12[1] = v14;
    v12[8] = v14 < *a2;
    if ( (unsigned int)Size <= 4 )
    {
      *((_DWORD *)v12 + 1) = Size + 0x80000000;
      *((_DWORD *)v12 + 2) = 0;
      memmove(v12 + 4, a4, (unsigned int)Size);
    }
    else
    {
      if ( (int)CmpSetValueDataNew(BugCheckParameter2, (char *)a4, (unsigned int)Size, a6, (_DWORD *)v12 + 2) < 0 )
      {
        HvFreeCell(BugCheckParameter2, Cell);
        Cell = -1;
        goto LABEL_8;
      }
      *((_DWORD *)v12 + 1) = Size;
    }
    *((_DWORD *)v12 + 3) = a3;
LABEL_8:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
    return Cell;
  }
  return 0xFFFFFFFFLL;
}

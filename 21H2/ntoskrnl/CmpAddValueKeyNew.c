/*
 * XREFs of CmpAddValueKeyNew @ 0x140721380
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1405E1D18 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x140721520 (CmpSetValueKeyNew.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpNameSize @ 0x1405F26FC (CmpNameSize.c)
 *     CmpSetValueDataNew @ 0x14065DC94 (CmpSetValueDataNew.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpCopyName @ 0x1407214C0 (CmpCopyName.c)
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
  unsigned int v11; // ebp
  _WORD *v12; // rbx
  void *v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v17; // [rsp+38h] [rbp-20h] BYREF

  v16 = 0xFFFFFFFFLL;
  v17 = 0LL;
  v10 = CmpNameSize(a2);
  v11 = HvAllocateCell(BugCheckParameter2, (unsigned int)v10 + 20, a6, &v17, &v16);
  if ( v11 != -1 )
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
        HvFreeCell(BugCheckParameter2, v11);
        v11 = -1;
        goto LABEL_8;
      }
      *((_DWORD *)v12 + 1) = Size;
    }
    *((_DWORD *)v12 + 3) = a3;
LABEL_8:
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
    return v11;
  }
  return 0xFFFFFFFFLL;
}

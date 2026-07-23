/*
 * XREFs of CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpGetSecurityDescriptorNode @ 0x140662970 (CmpGetSecurityDescriptorNode.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140729950 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpAssignSecurityDescriptor @ 0x140871810 (CmpAssignSecurityDescriptor.c)
 * Callees:
 *     CmpKeySecurityIncrementReferenceCount @ 0x1403F094C (CmpKeySecurityIncrementReferenceCount.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1403F8690 (RtlLengthSecurityDescriptorStrict.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpInsertSecurityCellList @ 0x14061A7B0 (CmpInsertSecurityCellList.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindMatchingDescriptorCell @ 0x1406629A8 (CmpFindMatchingDescriptorCell.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNodeEx(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        char a6,
        unsigned int *a7)
{
  unsigned int v9; // r14d
  int v12; // eax
  unsigned int Cell; // edi
  unsigned int v14; // eax
  _DWORD *v15; // rcx
  __int64 v16; // rax
  int v17; // esi
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v20; // [rsp+40h] [rbp-10h] BYREF

  LODWORD(BugCheckParameter3) = 0;
  v20 = 0LL;
  v19[0] = -1;
  v19[1] = 0;
  v9 = a2;
  if ( !(unsigned __int8)HvpMarkCellDirty(a1, a2) )
    return 3221225853LL;
  CmpUpdateKeyNodeAccessBits(a1, a3, v9);
  if ( !(unsigned __int8)CmpFindMatchingDescriptorCell(a1, Src, a4, &BugCheckParameter3, 0LL) )
  {
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(a1 + 4152) & 0x20) != 0 && *(_DWORD *)(a1 + 1864) > 1u )
      return 3221225506LL;
    v12 = RtlLengthSecurityDescriptorStrict();
    Cell = HvAllocateCell(a1, v12 + 20, a4, (unsigned int)&v20, (__int64)v19);
    if ( Cell != -1 )
    {
      v14 = RtlLengthSecurityDescriptorStrict();
      v15 = v20;
      *v20 = 27507;
      v15[3] = 1;
      v15[4] = v14;
      memmove(v15 + 5, Src, v14);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v19);
      if ( !(unsigned __int8)CmpInsertSecurityCellList(a1) )
      {
        HvFreeCell(a1, Cell);
        return 3221225853LL;
      }
      goto LABEL_16;
    }
    return 3221225626LL;
  }
  Cell = BugCheckParameter3;
  if ( !(unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)BugCheckParameter3) )
    return 3221225853LL;
  v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, Cell, v19);
  if ( !v16 )
    return 3221225626LL;
  v17 = CmpKeySecurityIncrementReferenceCount(v16, a1, Cell, 0);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v19);
  if ( v17 < 0 )
    return (unsigned int)v17;
LABEL_16:
  *a7 = Cell;
  return 0LL;
}

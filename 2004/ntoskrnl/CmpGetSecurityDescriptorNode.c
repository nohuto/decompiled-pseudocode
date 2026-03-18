/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x14063E6C4
 * Callers:
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140717A50 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpAssignSecurityDescriptor @ 0x14086E388 (CmpAssignSecurityDescriptor.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14087CA18 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405E2CC4 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindMatchingDescriptorCell @ 0x14063E868 (CmpFindMatchingDescriptorCell.c)
 *     RtlLengthSecurityDescriptor @ 0x140669A30 (RtlLengthSecurityDescriptor.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14069EE08 (HvAllocateCell.c)
 *     CmpInsertSecurityCellList @ 0x140709570 (CmpInsertSecurityCellList.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNode(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        void *a4,
        char a5,
        unsigned int *a6)
{
  unsigned int v8; // esi
  unsigned int Cell; // edi
  __int64 v11; // rax
  ULONG v13; // eax
  ULONG v14; // eax
  _DWORD *v15; // rcx
  unsigned int v16; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v18; // [rsp+40h] [rbp-10h] BYREF

  v16 = 0;
  v18 = 0LL;
  v17[0] = -1;
  v17[1] = 0;
  v8 = a2;
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a2, 0LL) )
    return 3221225853LL;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter2, a3, v8);
  if ( !(unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter2, a4, v8 >> 31, &v16, 0LL) )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0
      && *(_DWORD *)(BugCheckParameter2 + 1864) > 1u )
    {
      return 3221225506LL;
    }
    v13 = RtlLengthSecurityDescriptor(a4);
    Cell = HvAllocateCell(BugCheckParameter2, v13 + 20, v8 >> 31, (unsigned int)&v18, (__int64)v17);
    if ( Cell == -1 )
      return 3221225626LL;
    v14 = RtlLengthSecurityDescriptor(a4);
    v15 = v18;
    *v18 = 27507;
    v15[3] = 1;
    v15[4] = v14;
    memmove(v15 + 5, a4, v14);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
    if ( (unsigned __int8)CmpInsertSecurityCellList(BugCheckParameter2) )
      goto LABEL_6;
    HvFreeCell(BugCheckParameter2, Cell);
    return 3221225853LL;
  }
  Cell = v16;
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v16, 0LL) )
    return 3221225853LL;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, Cell, v17);
  if ( v11 )
  {
    ++*(_DWORD *)(v11 + 12);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
LABEL_6:
    *a6 = Cell;
    return 0LL;
  }
  return 3221225626LL;
}

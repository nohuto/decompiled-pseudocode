/*
 * XREFs of CmpGetSecurityDescriptorNode @ 0x1405E1B48
 * Callers:
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140725A10 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpAssignSecurityDescriptor @ 0x140873E74 (CmpAssignSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140873F78 (CmpCopySaclToVirtualKey.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1408825D0 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     RtlLengthSecurityDescriptorStrict @ 0x1403F6B2C (RtlLengthSecurityDescriptorStrict.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     CmpFindMatchingDescriptorCell @ 0x1405E1D18 (CmpFindMatchingDescriptorCell.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140670160 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpInsertSecurityCellList @ 0x1406DBAD0 (CmpInsertSecurityCellList.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140707168 (HvAllocateCell.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNode(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        const void *a4,
        char a5,
        unsigned int *a6)
{
  unsigned int v8; // esi
  int v11; // eax
  unsigned int Cell; // edi
  unsigned int v13; // eax
  _DWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v20; // [rsp+40h] [rbp-10h] BYREF

  v18 = 0;
  v20 = 0LL;
  v19[0] = -1;
  v19[1] = 0;
  v8 = a2;
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a2, 0LL) )
    return 3221225853LL;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter2, a3, v8);
  if ( !(unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter2, a4, v8 >> 31, &v18, 0LL) )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x20) != 0
      && *(_DWORD *)(BugCheckParameter2 + 1864) > 1u )
    {
      return 3221225506LL;
    }
    v11 = RtlLengthSecurityDescriptorStrict();
    Cell = HvAllocateCell(BugCheckParameter2, v11 + 20, v8 >> 31, (unsigned int)&v20, (__int64)v19);
    if ( Cell != -1 )
    {
      v13 = RtlLengthSecurityDescriptorStrict();
      v14 = v20;
      *v20 = 27507;
      v14[3] = 1;
      v14[4] = v13;
      memmove(v14 + 5, a4, v13);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
      if ( !(unsigned __int8)CmpInsertSecurityCellList(BugCheckParameter2) )
      {
        HvFreeCell(BugCheckParameter2, Cell);
        return 3221225853LL;
      }
      goto LABEL_17;
    }
    return 3221225626LL;
  }
  Cell = v18;
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v18, 0LL) )
    return 3221225853LL;
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, Cell, v19);
  v16 = v15;
  if ( !v15 )
    return 3221225626LL;
  v17 = *(_DWORD *)(v15 + 12) + 1;
  if ( !v17 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
    return 3221225621LL;
  }
  *(_DWORD *)(v16 + 12) = v17;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
LABEL_17:
  *a6 = Cell;
  return 0LL;
}

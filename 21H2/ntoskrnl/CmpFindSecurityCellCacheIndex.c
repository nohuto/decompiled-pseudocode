/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x1402AB7E0
 * Callers:
 *     CmpResetCachedSecurity @ 0x1405CD224 (CmpResetCachedSecurity.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpRemoveFromSecurityCache @ 0x14061B030 (CmpRemoveFromSecurityCache.c)
 *     CmpAssignSecurityToKcb @ 0x14065EF50 (CmpAssignSecurityToKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 *     CmpAddSecurityCellToCache @ 0x140662770 (CmpAddSecurityCellToCache.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpCheckKey @ 0x1406E0950 (CmpCheckKey.c)
 *     CmpCopyKeyPartial @ 0x14076FA4C (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140879F8C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpFindLowerBoundInSortedArray @ 0x1403F09F8 (CmpFindLowerBoundInSortedArray.c)
 */

char __fastcall CmpFindSecurityCellCacheIndex(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r14
  char result; // al
  __int64 v8; // rdx
  __int64 v9; // rbx
  _DWORD *LowerBoundInSortedArray; // rax
  unsigned __int64 v11; // rcx
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *(unsigned int *)(a1 + 1864);
  if ( (_DWORD)v3 )
  {
    v8 = *(int *)(a1 + 1872);
    if ( (int)v8 >= 0 && (unsigned int)v8 < (unsigned int)v3 && *(_DWORD *)(*(_QWORD *)(a1 + 1880) + 16 * v8) == a2 )
    {
      *a3 = v8;
      return 1;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 1880);
      LowerBoundInSortedArray = (_DWORD *)CmpFindLowerBoundInSortedArray(&v12, v9, v3);
      v11 = ((unsigned __int64)LowerBoundInSortedArray - v9) >> 4;
      if ( (unsigned int)v11 < (unsigned int)v3 && *LowerBoundInSortedArray == a2 )
      {
        *(_DWORD *)(a1 + 1872) = v11;
        result = 1;
        *a3 = v11;
      }
      else
      {
        *a3 = v11;
        return 0;
      }
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}

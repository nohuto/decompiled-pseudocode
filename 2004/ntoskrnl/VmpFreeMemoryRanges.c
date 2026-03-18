/*
 * XREFs of VmpFreeMemoryRanges @ 0x14092C098
 * Callers:
 *     VmpInsertMemoryRange @ 0x14059E4B0 (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x14059EE70 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14059F984 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14059FC74 (VmpSplitMemoryRange.c)
 *     VmCreateMemoryRange @ 0x14092B800 (VmCreateMemoryRange.c)
 *     VmFreePreallocationForRangeCreate @ 0x14092BA20 (VmFreePreallocationForRangeCreate.c)
 *     VmpAllocateMemoryRanges @ 0x14092BF4C (VmpAllocateMemoryRanges.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall VmpFreeMemoryRanges(char *P)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  v2 = (_QWORD **)(P + 40);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    ExFreePoolWithTag(v3, 0);
  }
  ExFreePoolWithTag(P, 0);
}

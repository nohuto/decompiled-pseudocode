/*
 * XREFs of VfAvlEnumerateNodes @ 0x1409E3668
 * Callers:
 *     ViTargetFreeContiguousMemory @ 0x1409DA3F4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1409DA7FC (ViTargetWMIDeregister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409DC8F0 (VfSuspectDriversGetVerifierInformation.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x140328760 (RtlEnumerateGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403716CC (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371700 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x14037175C (ViAvlRaiseIrqlSafe.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall VfAvlEnumerateNodes(__int64 a1, __int64 a2, unsigned int (__fastcall *a3)(PVOID, __int64), __int64 a4)
{
  unsigned int v7; // ebp
  __int64 i; // rbx
  __int64 v9; // rdi
  BOOLEAN j; // dl
  PVOID v11; // rax

  ViAvlRaiseIrqlSafe(a2);
  v7 = dword_140C1CF38;
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    v9 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_140C1CF30, a2);
    for ( j = 1; ; j = 0 )
    {
      v11 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v9 + qword_140C1CF30), j);
      if ( !v11 )
        break;
      if ( !a3(v11, a4) )
        return;
    }
    ViAvlReleaseTableLockFromDpcLevel(v9 + qword_140C1CF30, a2);
  }
}

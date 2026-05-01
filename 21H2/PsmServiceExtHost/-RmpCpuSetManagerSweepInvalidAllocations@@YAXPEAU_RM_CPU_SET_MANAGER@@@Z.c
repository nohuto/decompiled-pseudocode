/*
 * XREFs of ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18006E220
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040694 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180040AD8 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180040B44 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006D4A0 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 */

void __fastcall RmpCpuSetManagerSweepInvalidAllocations(struct _RM_CPU_SET_MANAGER *a1)
{
  __int64 v2; // rsi
  char v3; // r15
  __int64 v4; // r14
  char *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _RM_OBJECT_HEADER *Next; // rbx
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  RmpObjectTableEnumerationBegin(
    (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v10);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v10);
    if ( !Next )
      break;
    v2 = 0LL;
    v3 = 0;
    v4 = 20LL;
    do
    {
      v5 = (char *)Next + v2;
      v6 = *(_QWORD *)((_BYTE *)Next + v2 + 104) & ~*(_QWORD *)((char *)a1 + v2 + 88);
      if ( v6 )
      {
        v3 = 1;
        *((_QWORD *)v5 + 13) &= ~v6;
        *((_DWORD *)Next + 66) -= RtlNumberOfSetBitsUlongPtr(v6, v5, v7, v8);
      }
      v2 += 8LL;
      --v4;
    }
    while ( v4 );
    if ( v3 )
      RmpCpuSetManagerInvalidateAllocation(a1, Next);
    RmpObjectRelease((char *)Next);
  }
  RtlReleaseSRWLockShared(v10[0] + 16LL);
  RmpCpuSetManagerApplyAllPolicyChanges(a1);
}

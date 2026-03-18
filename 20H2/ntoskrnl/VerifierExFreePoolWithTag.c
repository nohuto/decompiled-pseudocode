/*
 * XREFs of VerifierExFreePoolWithTag @ 0x1409D8230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x14052E9B8 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x1409E3084 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409E371C (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x1409EFF50 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(PVOID P, ULONG Tag, __int64 a3)
{
  VfFreePoolNotification(P, 0LL, a3);
  VfIrpDatabaseCheckExFreePool((ULONG_PTR)P);
  if ( (unsigned int)MmKernelVerifierEnabled() )
  {
    ExFreePoolWithTag(P, Tag);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P);
    ((void (__fastcall *)(PVOID, _QWORD))pXdvExFreePoolWithTag)(P, Tag);
  }
}

/*
 * XREFs of VerifierExFreePoolWithTag @ 0x1409D2210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x14052AFE8 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x1409DD064 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409DD6FC (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x1409E9F30 (ExFreePoolSanityChecks.c)
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

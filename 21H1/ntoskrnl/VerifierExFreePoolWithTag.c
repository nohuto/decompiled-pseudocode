/*
 * XREFs of VerifierExFreePoolWithTag @ 0x1409D21B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x14052A998 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x1409DD004 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409DD69C (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x1409E9ED0 (ExFreePoolSanityChecks.c)
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

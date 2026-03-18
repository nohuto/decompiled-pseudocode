/*
 * XREFs of VerifierExFreePool @ 0x1409D2180
 * Callers:
 *     VerifierExFreePoolEx @ 0x1409D21F0 (VerifierExFreePoolEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x14052AFE8 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x1409DD064 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409DD6FC (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x1409E9F30 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePool(PVOID P)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( (unsigned int)MmKernelVerifierEnabled()
    || (VfFreePoolNotification(v2, 0LL, v3),
        VfIrpDatabaseCheckExFreePool((ULONG_PTR)P),
        (unsigned int)MmKernelVerifierEnabled()) )
  {
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P);
    ((void (__fastcall *)(PVOID))pXdvExFreePool)(P);
  }
}

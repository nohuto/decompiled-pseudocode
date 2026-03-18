/*
 * XREFs of VerifierExFreePool @ 0x1409D81A0
 * Callers:
 *     VerifierExFreePoolEx @ 0x1409D8210 (VerifierExFreePoolEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x14052E9B8 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x1409E3084 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409E371C (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x1409EFF50 (ExFreePoolSanityChecks.c)
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

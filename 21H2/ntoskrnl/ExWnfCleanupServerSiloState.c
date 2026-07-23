/*
 * XREFs of ExWnfCleanupServerSiloState @ 0x14095CC50
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x14090640C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ExpWnfDeleteScopeInstances @ 0x14095CDBC (ExpWnfDeleteScopeInstances.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

int __fastcall ExWnfCleanupServerSiloState(PVOID *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  PVOID v6; // rax

  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*a1, 2LL);
    ExpWnfDeleteScopeInstances(*a1, 0LL);
    ExFreePoolWithTag(*a1, 0x20666E57u);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
  }
  if ( a1[1] )
    ZwClose(a1[1]);
  v6 = a1[2];
  if ( v6 )
    LODWORD(v6) = ZwClose(a1[2]);
  return (int)v6;
}

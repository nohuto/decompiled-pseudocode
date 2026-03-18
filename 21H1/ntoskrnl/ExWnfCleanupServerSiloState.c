/*
 * XREFs of ExWnfCleanupServerSiloState @ 0x1409580B0
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409020A4 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ExpWnfDeleteScopeInstances @ 0x14095821C (ExpWnfDeleteScopeInstances.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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

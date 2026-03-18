/*
 * XREFs of ExWnfCleanupServerSiloState @ 0x14095F210
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x140908AFC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ExpWnfDeleteScopeInstances @ 0x14095F37C (ExpWnfDeleteScopeInstances.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

int __fastcall ExWnfCleanupServerSiloState(PVOID *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v3; // rax

  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*a1, 2LL);
    ExpWnfDeleteScopeInstances(*a1, 0LL);
    ExFreePoolWithTag(*a1, 0x20666E57u);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a1[1] )
    ZwClose(a1[1]);
  v3 = a1[2];
  if ( v3 )
    LODWORD(v3) = ZwClose(a1[2]);
  return (int)v3;
}

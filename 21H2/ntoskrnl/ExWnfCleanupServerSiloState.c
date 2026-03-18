/*
 * XREFs of ExWnfCleanupServerSiloState @ 0x140A08260
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409ABFB0 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ExpWnfDeleteScopeInstances @ 0x140A083CC (ExpWnfDeleteScopeInstances.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( a1[1] )
    ZwClose(a1[1]);
  v3 = a1[2];
  if ( v3 )
    LODWORD(v3) = ZwClose(a1[2]);
  return (int)v3;
}

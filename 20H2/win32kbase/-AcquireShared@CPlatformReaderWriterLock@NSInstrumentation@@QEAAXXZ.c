/*
 * XREFs of ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C0082EE0
 * Callers:
 *     ?IsAllocationBusy@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00D0144 (-IsAllocationBusy@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@QEAA_NPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0118920 (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0118A44 (-Allocate@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0118B68 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0118CA8 (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0118DC4 (-Free@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0118EE0 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0120CFC (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0120E14 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013DD44 (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C013DE68 (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013EC70 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C013ED94 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013FAC8 (-Allocate@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C013FC94 (-Free@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014021C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014A618 (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014A73C (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C014A8A0 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C014AA48 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(
        NSInstrumentation::CPlatformReaderWriterLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
}

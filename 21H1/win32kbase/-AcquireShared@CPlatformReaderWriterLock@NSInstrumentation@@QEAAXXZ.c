/*
 * XREFs of ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C0009580
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01212BC (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01213E0 (-Allocate@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0121504 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0121648 (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0121764 (-Free@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0121880 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C012902C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0129144 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01463E4 (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0146508 (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0147480 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01475A4 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01482E0 (-Allocate@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01484B4 (-Free@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0148A4C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0152E48 (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0152F6C (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01530D0 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0153278 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(
        NSInstrumentation::CPlatformReaderWriterLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
}

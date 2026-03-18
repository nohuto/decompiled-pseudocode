/*
 * XREFs of GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0045840
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0118920 (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0118A44 (-Allocate@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0118B68 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013DD44 (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013EC70 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013FAC8 (-Allocate@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014021C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014A618 (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014A73C (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreEnterCriticalRegionAndAcquirePushLockExclusive(__int64 a1)
{
  KeEnterCriticalRegion();
  return ExAcquirePushLockExclusiveEx(a1, 0LL);
}

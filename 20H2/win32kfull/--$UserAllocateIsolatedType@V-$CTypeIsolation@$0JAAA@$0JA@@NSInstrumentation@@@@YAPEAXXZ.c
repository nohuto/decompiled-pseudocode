/*
 * XREFs of ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C015BB08
 * Callers:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C00D3654 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00F28E0 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

void *__fastcall UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(__int64 a1, void *a2)
{
  if ( *gpUserTypeIsolation )
    return NSInstrumentation::CTypeIsolation<36864,144>::Allocate((__int64)*gpUserTypeIsolation, a2);
  else
    return 0LL;
}

/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@@@YGXPAX@Z @ 0xF1822
 * Callers:
 *     ?ClassAlloc@@YGPAXPAUtagDESKTOP@@KK@Z @ 0x4756E (-ClassAlloc@@YGPAXPAUtagDESKTOP@@KK@Z.c)
 *     ?ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z @ 0x479A8 (-ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEXPAX@Z @ 0x97C26 (-Free@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEXPAX@Z.c)
 */

void __thiscall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<20480,80>>(void *this)
{
  if ( *gpUserTypeIsolation )
    NSInstrumentation::CTypeIsolation<20480,80>::Free(*gpUserTypeIsolation, this);
}

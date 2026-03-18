/*
 * XREFs of ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@@@YGPAXXZ @ 0xF180E
 * Callers:
 *     ?ClassAlloc@@YGPAXPAUtagDESKTOP@@KK@Z @ 0x4756E (-ClassAlloc@@YGPAXPAUtagDESKTOP@@KK@Z.c)
 * Callees:
 *     <none>
 */

void *UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<20480,80>>()
{
  if ( *gpUserTypeIsolation )
    return NSInstrumentation::CTypeIsolation<20480,80>::Allocate(*gpUserTypeIsolation);
  else
    return 0;
}

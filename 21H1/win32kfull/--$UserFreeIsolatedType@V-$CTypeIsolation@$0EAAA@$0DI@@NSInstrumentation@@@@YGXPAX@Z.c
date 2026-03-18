/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z @ 0xF42A0
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _MNAllocPopup@4 @ 0x184482 (_MNAllocPopup@4.c)
 *     _MNFlushDestroyedPopups@4 @ 0x184561 (_MNFlushDestroyedPopups@4.c)
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEXPAX@Z @ 0x184183 (-Free@-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEXPAX@Z.c)
 */

unsigned __int8 **__thiscall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<16384,56>>(void *this)
{
  unsigned __int8 **result; // eax

  result = gpUserTypeIsolation;
  if ( gpUserTypeIsolation[4] )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<16384,56>::Free(this);
  return result;
}

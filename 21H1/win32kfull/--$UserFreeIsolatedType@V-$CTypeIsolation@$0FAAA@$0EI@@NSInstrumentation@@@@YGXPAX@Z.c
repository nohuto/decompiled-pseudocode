/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@@@YGXPAX@Z @ 0xF55A4
 * Callers:
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEXPAX@Z @ 0x1A2979 (-Free@-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEXPAX@Z.c)
 */

unsigned __int8 **__thiscall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<20480,72>>(void *this)
{
  unsigned __int8 **result; // eax

  result = gpUserTypeIsolation;
  if ( gpUserTypeIsolation[5] )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<20480,72>::Free(this);
  return result;
}

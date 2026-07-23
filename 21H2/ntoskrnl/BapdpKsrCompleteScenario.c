/*
 * XREFs of BapdpKsrCompleteScenario @ 0x1405B2290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BapdpKsrCompleteScenario(int a1, int a2)
{
  if ( (a1 & 0x3000000) != 0 && (a2 & 0x3000000) == 0 && *(&xmmword_140C19750 + 1) )
    return ((__int64 (*)(void))*(&xmmword_140C19750 + 1))();
  else
    return 3221225659LL;
}

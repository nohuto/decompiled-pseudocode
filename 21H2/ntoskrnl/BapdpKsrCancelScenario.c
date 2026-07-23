/*
 * XREFs of BapdpKsrCancelScenario @ 0x1405B21F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BapdpKsrCancelScenario(int a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 & 0x3000000;
  if ( !(_DWORD)v2 || (a2 & 0x3000000) != 0 || !xmmword_140C19750 )
    return 3221225659LL;
  result = xmmword_140C19750(v2, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
    ExSoftRebootFlags &= ~4u;
  return result;
}

/*
 * XREFs of HalpApicTimerArm @ 0x1403051B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpApicTimerArm(unsigned __int8 *a1, int a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rdx

  v3 = *a1;
  HalpApicWrite(992LL, *((unsigned int *)a1 + 1));
  HalpApicWrite(896LL, a3);
  v6 = v3;
  LODWORD(v6) = v3 | 0x20000;
  if ( a2 != 2 )
    v6 = v3;
  HalpApicWrite(800LL, v6);
  return 0LL;
}

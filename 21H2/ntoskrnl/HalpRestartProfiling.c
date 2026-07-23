/*
 * XREFs of HalpRestartProfiling @ 0x1403867A8
 * Callers:
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A9408 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpRestartProfiling()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 **v2; // r11
  __int64 *i; // r9
  unsigned int j; // r10d
  __int64 v6; // r8

  v0 = (*((__int64 (**)(void))HalpProfileInterface[0] + 6))();
  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v2 = (__int64 **)(HalpCounterSetInfo + 24 * v0);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    for ( j = 0; j < *((_DWORD *)i + 5); *(__int64 *)((char *)i + v6 + 32) = __readpmc(v1) )
    {
      v6 = j++;
      v6 *= 32LL;
      v1 = *(unsigned int *)((char *)i + v6 + 28);
    }
  }
  LOBYTE(v1) = 1;
  return ((__int64 (__fastcall *)(__int64))off_140C009A8[0])(v1);
}

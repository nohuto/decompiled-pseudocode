/*
 * XREFs of HalpApicTimerInitialize @ 0x1403198C0
 * Callers:
 *     HalpApicTimerStop @ 0x140319890 (HalpApicTimerStop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpApicTimerInitialize(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rbx

  v1 = a1;
  HalpApicWrite(992LL, *((unsigned int *)a1 + 1));
  LODWORD(v1) = *v1 | 0x30000;
  HalpApicWrite(896LL, 0xFFFFFFFFLL);
  HalpApicWrite(800LL, (unsigned int)v1);
  return 0LL;
}

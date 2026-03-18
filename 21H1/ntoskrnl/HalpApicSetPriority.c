/*
 * XREFs of HalpApicSetPriority @ 0x14039E7E0
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x14039E5C0 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

struct _KPRCB *__fastcall HalpApicSetPriority(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  struct _KPRCB *result; // rax

  v2 = a2;
  HalpApicWrite(128LL, 16 * a2);
  ((void (__fastcall *)(__int64))HalpApicRead)(128LL);
  result = KeGetCurrentPrcb();
  if ( result->CpuVendor == 1 )
    __writecr8(v2);
  return result;
}

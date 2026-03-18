/*
 * XREFs of CheckAndProcessSurfaceComplete @ 0x1C01FD030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CheckAndProcessSurfaceComplete())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02579A8;
  if ( qword_1C02579A8 )
    return (__int64 (*)(void))qword_1C02579A8();
  return result;
}

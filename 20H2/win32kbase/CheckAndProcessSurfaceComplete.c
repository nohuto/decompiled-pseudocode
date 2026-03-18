/*
 * XREFs of CheckAndProcessSurfaceComplete @ 0x1C01F5CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CheckAndProcessSurfaceComplete())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C024F9E8;
  if ( qword_1C024F9E8 )
    return (__int64 (*)(void))qword_1C024F9E8();
  return result;
}

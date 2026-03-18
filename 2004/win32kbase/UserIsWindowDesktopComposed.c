/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C00C6080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserIsWindowDesktopComposed())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0252D20;
  if ( qword_1C0252D20 )
    return (__int64 (*)(void))qword_1C0252D20();
  return result;
}

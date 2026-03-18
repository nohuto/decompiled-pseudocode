/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C00C58F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserIsWindowDesktopComposed())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0258CE0;
  if ( qword_1C0258CE0 )
    return (__int64 (*)(void))qword_1C0258CE0();
  return result;
}

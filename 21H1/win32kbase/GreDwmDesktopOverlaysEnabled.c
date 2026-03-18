/*
 * XREFs of GreDwmDesktopOverlaysEnabled @ 0x1C01FD230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreDwmDesktopOverlaysEnabled())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02579A0;
  if ( qword_1C02579A0 )
    return (__int64 (*)(void))qword_1C02579A0();
  return result;
}

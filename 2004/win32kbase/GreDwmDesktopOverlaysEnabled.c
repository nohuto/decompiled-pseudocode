/*
 * XREFs of GreDwmDesktopOverlaysEnabled @ 0x1C01F7800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreDwmDesktopOverlaysEnabled())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02519E0;
  if ( qword_1C02519E0 )
    return (__int64 (*)(void))qword_1C02519E0();
  return result;
}

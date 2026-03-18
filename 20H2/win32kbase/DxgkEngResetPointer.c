/*
 * XREFs of DxgkEngResetPointer @ 0x1C014BDC0
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x1C00B94C8 (IsUserResetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngResetPointer())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))IsUserResetPointerSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C024EF38;
    if ( qword_1C024EF38 )
      return (__int64 (*)(void))qword_1C024EF38();
  }
  return result;
}

/*
 * XREFs of DxgkEngResetPointer @ 0x1C014E210
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x1C0055338 (IsUserResetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngResetPointer())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))IsUserResetPointerSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C0250F38;
    if ( qword_1C0250F38 )
      return (__int64 (*)(void))qword_1C0250F38();
  }
  return result;
}

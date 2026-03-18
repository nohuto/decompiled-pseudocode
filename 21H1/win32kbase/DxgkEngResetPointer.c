/*
 * XREFs of DxgkEngResetPointer @ 0x1C0154560
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x1C0047B38 (IsUserResetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngResetPointer())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))IsUserResetPointerSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C0256EF8;
    if ( qword_1C0256EF8 )
      return (__int64 (*)(void))qword_1C0256EF8();
  }
  return result;
}

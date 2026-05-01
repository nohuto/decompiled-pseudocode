/*
 * XREFs of ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x18045FC10
 * Callers:
 *     ?IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE1@Z @ 0x1800ED0BC (-IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@DU-$char_traits@D.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall std::wstring::resize(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *result; // rax

  result = a1 + 2;
  if ( a2 > a1[2] )
    return std::wstring::append(a1, a2 - *result, 0);
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  *result = a2;
  *((_WORD *)a1 + a2) = 0;
  return result;
}

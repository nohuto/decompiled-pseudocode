/*
 * XREFs of CempListRemoveHeadAndClear @ 0x180011DE0
 * Callers:
 *     RmpClientWnfDestroySubscription @ 0x1800022D0 (RmpClientWnfDestroySubscription.c)
 *     HamDisconnectForExtendedExecution @ 0x180004680 (HamDisconnectForExtendedExecution.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CempListRemoveHeadAndClear(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  result = *a1;
  if ( *a1 == a1 || (_QWORD **)result[1] != a1 || (v2 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
    __fastfail(3u);
  *a1 = v2;
  v2[1] = a1;
  *(_OWORD *)result = 0LL;
  return result;
}

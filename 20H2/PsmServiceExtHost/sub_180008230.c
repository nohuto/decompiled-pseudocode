/*
 * XREFs of sub_180008230 @ 0x180008230
 * Callers:
 *     sub_180008268 @ 0x180008268 (sub_180008268.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180008230(__int64 a1, int a2)
{
  _QWORD *result; // rax
  _DWORD *v3; // rcx

  result = (_QWORD *)(a1 + 704);
  if ( (_QWORD *)*result != result && (a2 || !*(_DWORD *)(a1 + 720)) )
  {
    v3 = (_DWORD *)(a1 + 724);
    ++*v3;
    return (_QWORD *)RtlWakeAddressAll(v3);
  }
  return result;
}

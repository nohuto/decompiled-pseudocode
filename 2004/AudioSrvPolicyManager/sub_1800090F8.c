/*
 * XREFs of sub_1800090F8 @ 0x1800090F8
 * Callers:
 *     ?dtor$0@?0???1SchedulerProxy@details@Concurrency@@IEAA@XZ@4HA @ 0x18003B200 (-dtor$0@-0---1SchedulerProxy@details@Concurrency@@IEAA@XZ@4HA.c)
 *     sub_18003B56C @ 0x18003B56C (sub_18003B56C.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall sub_1800090F8(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    do
    {
      v2 = (_QWORD *)*result;
      sub_180039D98(result);
      result = v2;
    }
    while ( v2 );
  }
  return result;
}

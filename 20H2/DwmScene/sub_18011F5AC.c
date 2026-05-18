/*
 * XREFs of sub_18011F5AC @ 0x18011F5AC
 * Callers:
 *     ?cancel_current_task@Concurrency@@YAXXZ_0 @ 0x18011F5EC (-cancel_current_task@Concurrency@@YAXXZ_0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18011F5AC(_QWORD *a1)
{
  a1[2] = 0LL;
  a1[1] = "bad array new length";
  *a1 = &std::bad_array_new_length::`vftable';
  return a1;
}

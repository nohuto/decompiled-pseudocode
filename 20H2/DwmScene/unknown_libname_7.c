/*
 * XREFs of unknown_libname_7 @ 0x1800F9390
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F7354 @ 0x1800F7354 (sub_1800F7354.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_7(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    sub_1800F7354(*(_QWORD **)(a1 + 16), a2);
    return j__o_free(v2);
  }
  return result;
}

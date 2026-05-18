/*
 * XREFs of unknown_libname_7 @ 0x1800FEC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FCC24 @ 0x1800FCC24 (sub_1800FCC24.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_7(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    sub_1800FCC24(*(_QWORD **)(a1 + 16), a2);
    return j__o_free(v2);
  }
  return result;
}

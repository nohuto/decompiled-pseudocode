/*
 * XREFs of unknown_libname_6 @ 0x180089A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180085CBC @ 0x180085CBC (sub_180085CBC.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_6(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    sub_180085CBC(*(_QWORD *)(a1 + 16));
    return j__o_free(v1);
  }
  return result;
}

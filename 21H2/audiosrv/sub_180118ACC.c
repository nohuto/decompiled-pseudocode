/*
 * XREFs of sub_180118ACC @ 0x180118ACC
 * Callers:
 *     sub_18007AB71 @ 0x18007AB71 (sub_18007AB71.c)
 *     unknown_libname_54 @ 0x18007AB83 (unknown_libname_54.c)
 *     sub_18007AD8B @ 0x18007AD8B (sub_18007AD8B.c)
 *     sub_18007ADA4 @ 0x18007ADA4 (sub_18007ADA4.c)
 *     sub_18011B091 @ 0x18011B091 (sub_18011B091.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_180118ACC(void **a1)
{
  _DWORD *v1; // rbx
  BOOL result; // eax

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_QWORD *)v1 )
    {
      _o_free(*(_QWORD *)v1);
      *(_QWORD *)v1 = 0LL;
    }
    v1[2] = 0;
    v1[3] = 0;
    result = sub_18006A148(v1);
  }
  *a1 = 0LL;
  return result;
}

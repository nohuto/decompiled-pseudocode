/*
 * XREFs of unknown_libname_345 @ 0x180118B24
 * Callers:
 *     sub_18011B0A9 @ 0x18011B0A9 (sub_18011B0A9.c)
 *     sub_18011C661 @ 0x18011C661 (sub_18011C661.c)
 * Callees:
 *     sub_180119D08 @ 0x180119D08 (sub_180119D08.c)
 */

// Microsoft VisualC v7/14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_345(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = sub_180119D08(v2);
  *a1 = 0LL;
  return result;
}

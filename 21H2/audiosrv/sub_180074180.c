/*
 * XREFs of sub_180074180 @ 0x180074180
 * Callers:
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 *     sub_1800F9C14 @ 0x1800F9C14 (sub_1800F9C14.c)
 *     sub_1800F9D30 @ 0x1800F9D30 (sub_1800F9D30.c)
 *     sub_1801001B8 @ 0x1801001B8 (sub_1801001B8.c)
 *     sub_180104404 @ 0x180104404 (sub_180104404.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_180074180(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CloseHandle(v2);
    *a1 = 0LL;
  }
  return result;
}

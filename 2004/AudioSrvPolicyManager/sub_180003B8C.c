/*
 * XREFs of sub_180003B8C @ 0x180003B8C
 * Callers:
 *     sub_180003C0C @ 0x180003C0C (sub_180003C0C.c)
 *     sub_180003FA4 @ 0x180003FA4 (sub_180003FA4.c)
 *     sub_180004AC4 @ 0x180004AC4 (sub_180004AC4.c)
 *     sub_180004E28 @ 0x180004E28 (sub_180004E28.c)
 *     sub_180005028 @ 0x180005028 (sub_180005028.c)
 * Callees:
 *     sub_180003B08 @ 0x180003B08 (sub_180003B08.c)
 */

BOOL __fastcall sub_180003B8C(void *a1)
{
  BOOL result; // eax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
  {
    sub_180003B08(retaddr, 2342, v2, v3);
    JUMPOUT(0x180003BB5LL);
  }
  return result;
}

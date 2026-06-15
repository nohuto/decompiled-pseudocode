/*
 * XREFs of sub_180003BBC @ 0x180003BBC
 * Callers:
 *     sub_180003BEC @ 0x180003BEC (sub_180003BEC.c)
 *     sub_180004AC4 @ 0x180004AC4 (sub_180004AC4.c)
 *     sub_180004E28 @ 0x180004E28 (sub_180004E28.c)
 * Callees:
 *     sub_180003B08 @ 0x180003B08 (sub_180003B08.c)
 */

BOOL __fastcall sub_180003BBC(void *a1)
{
  BOOL result; // eax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
  {
    sub_180003B08(retaddr, 2352, v2, v3);
    JUMPOUT(0x180003BE5LL);
  }
  return result;
}

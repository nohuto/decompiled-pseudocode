/*
 * XREFs of sub_180077B94 @ 0x180077B94
 * Callers:
 *     sub_18012AD6D @ 0x18012AD6D (sub_18012AD6D.c)
 *     sub_18012AFA4 @ 0x18012AFA4 (sub_18012AFA4.c)
 * Callees:
 *     sub_180072924 @ 0x180072924 (sub_180072924.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180077B94(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    sub_180072924((__int64 *)(v1 + 16), v1 + 16);
    return j__o_free(v1);
  }
  return result;
}

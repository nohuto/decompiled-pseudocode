/*
 * XREFs of sub_18000336C @ 0x18000336C
 * Callers:
 *     sub_18000343C @ 0x18000343C (sub_18000343C.c)
 *     sub_1800034C8 @ 0x1800034C8 (sub_1800034C8.c)
 *     sub_1800081FC @ 0x1800081FC (sub_1800081FC.c)
 *     sub_180008538 @ 0x180008538 (sub_180008538.c)
 *     sub_18000870C @ 0x18000870C (sub_18000870C.c)
 *     sub_180008A2C @ 0x180008A2C (sub_180008A2C.c)
 *     sub_180008E88 @ 0x180008E88 (sub_180008E88.c)
 *     sub_180008FFC @ 0x180008FFC (sub_180008FFC.c)
 *     sub_180010070 @ 0x180010070 (sub_180010070.c)
 *     sub_18001124C @ 0x18001124C (sub_18001124C.c)
 * Callees:
 *     sub_1800032C0 @ 0x1800032C0 (sub_1800032C0.c)
 */

BOOL __fastcall sub_18000336C(void *a1)
{
  BOOL result; // eax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
  {
    sub_1800032C0(retaddr, 2342, v2, v3);
    JUMPOUT(0x180003395LL);
  }
  return result;
}

/*
 * XREFs of sub_18000339C @ 0x18000339C
 * Callers:
 *     sub_1800033CC @ 0x1800033CC (sub_1800033CC.c)
 *     sub_1800081FC @ 0x1800081FC (sub_1800081FC.c)
 *     sub_180008538 @ 0x180008538 (sub_180008538.c)
 *     sub_18000870C @ 0x18000870C (sub_18000870C.c)
 *     sub_180008A2C @ 0x180008A2C (sub_180008A2C.c)
 * Callees:
 *     sub_1800032C0 @ 0x1800032C0 (sub_1800032C0.c)
 */

BOOL __fastcall sub_18000339C(void *a1)
{
  BOOL result; // eax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
  {
    sub_1800032C0(retaddr, 2352, v2, v3);
    JUMPOUT(0x1800033C5LL);
  }
  return result;
}

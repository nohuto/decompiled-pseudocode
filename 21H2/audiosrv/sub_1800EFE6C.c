/*
 * XREFs of sub_1800EFE6C @ 0x1800EFE6C
 * Callers:
 *     sub_1800F0039 @ 0x1800F0039 (sub_1800F0039.c)
 *     sub_1800F0320 @ 0x1800F0320 (sub_1800F0320.c)
 *     sub_1800F070C @ 0x1800F070C (sub_1800F070C.c)
 *     sub_1800F08F0 @ 0x1800F08F0 (sub_1800F08F0.c)
 *     sub_1800F14D4 @ 0x1800F14D4 (sub_1800F14D4.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_1800EFE6C(__int64 **a1, __int64 **a2)
{
  __int64 **v3; // rbx
  __int64 *v4; // rdi
  BOOL result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        sub_18000F708(*v3);
        result = sub_18006A148(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}

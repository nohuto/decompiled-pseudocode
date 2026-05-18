/*
 * XREFs of sub_18000B4E0 @ 0x18000B4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180111184 @ 0x180111184 (sub_180111184.c)
 */

int sub_18000B4E0()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  sub_180111184(&unk_180221890, &v2, &v1);
  return atexit(sub_180139120);
}

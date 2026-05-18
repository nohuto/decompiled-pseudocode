/*
 * XREFs of sub_180071F8C @ 0x180071F8C
 * Callers:
 *     sub_180079020 @ 0x180079020 (sub_180079020.c)
 *     sub_180115DF0 @ 0x180115DF0 (sub_180115DF0.c)
 * Callees:
 *     ?__ExceptionPtrCopy@@YAXPEAXPEBX@Z @ 0x18011FA74 (-__ExceptionPtrCopy@@YAXPEAXPEBX@Z.c)
 */

void *__fastcall sub_180071F8C(void *a1, const void *a2)
{
  __ExceptionPtrCopy(a1, a2);
  return a1;
}

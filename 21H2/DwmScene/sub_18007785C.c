/*
 * XREFs of sub_18007785C @ 0x18007785C
 * Callers:
 *     sub_18007E8F0 @ 0x18007E8F0 (sub_18007E8F0.c)
 *     sub_18011B6C0 @ 0x18011B6C0 (sub_18011B6C0.c)
 * Callees:
 *     ?__ExceptionPtrCopy@@YAXPEAXPEBX@Z @ 0x180125344 (-__ExceptionPtrCopy@@YAXPEAXPEBX@Z.c)
 */

void *__fastcall sub_18007785C(void *a1, const void *a2)
{
  __ExceptionPtrCopy(a1, a2);
  return a1;
}

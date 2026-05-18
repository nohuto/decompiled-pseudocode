/*
 * XREFs of memcpy @ 0x180123964
 * Callers:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180012C60 @ 0x180012C60 (sub_180012C60.c)
 *     sub_180012DD0 @ 0x180012DD0 (sub_180012DD0.c)
 *     sub_180013670 @ 0x180013670 (sub_180013670.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18002625C @ 0x18002625C (sub_18002625C.c)
 *     sub_180026344 @ 0x180026344 (sub_180026344.c)
 *     sub_180026480 @ 0x180026480 (sub_180026480.c)
 *     sub_180028C30 @ 0x180028C30 (sub_180028C30.c)
 *     sub_180029210 @ 0x180029210 (sub_180029210.c)
 *     sub_18002C714 @ 0x18002C714 (sub_18002C714.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_180037300 @ 0x180037300 (sub_180037300.c)
 *     sub_1800491D4 @ 0x1800491D4 (sub_1800491D4.c)
 *     sub_180049504 @ 0x180049504 (sub_180049504.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     sub_180075B70 @ 0x180075B70 (sub_180075B70.c)
 *     sub_180081860 @ 0x180081860 (sub_180081860.c)
 *     sub_1800A75D4 @ 0x1800A75D4 (sub_1800A75D4.c)
 *     sub_1800B95D4 @ 0x1800B95D4 (sub_1800B95D4.c)
 *     sub_1800D2864 @ 0x1800D2864 (sub_1800D2864.c)
 *     sub_1800D311C @ 0x1800D311C (sub_1800D311C.c)
 *     sub_1800F3E78 @ 0x1800F3E78 (sub_1800F3E78.c)
 *     sub_1800F3EE4 @ 0x1800F3EE4 (sub_1800F3EE4.c)
 *     sub_180102DF8 @ 0x180102DF8 (sub_180102DF8.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 *     sub_18011B9C8 @ 0x18011B9C8 (sub_18011B9C8.c)
 *     sub_18011BCE4 @ 0x18011BCE4 (sub_18011BCE4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}

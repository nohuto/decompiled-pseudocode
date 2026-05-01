/*
 * XREFs of atexit @ 0x180044EE8
 * Callers:
 *     sub_180001000 @ 0x180001000 (sub_180001000.c)
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 *     sub_180001030 @ 0x180001030 (sub_180001030.c)
 *     sub_180001140 @ 0x180001140 (sub_180001140.c)
 *     sub_180001150 @ 0x180001150 (sub_180001150.c)
 * Callees:
 *     sub_180044E54 @ 0x180044E54 (sub_180044E54.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (sub_180044E54((__int64)a1) != 0) - 1;
}

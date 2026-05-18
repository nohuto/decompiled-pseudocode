/*
 * XREFs of memcmp @ 0x18012398E
 * Callers:
 *     sub_18001B4B8 @ 0x18001B4B8 (sub_18001B4B8.c)
 *     sub_18001BCF4 @ 0x18001BCF4 (sub_18001BCF4.c)
 *     sub_18001CC40 @ 0x18001CC40 (sub_18001CC40.c)
 *     sub_18006A434 @ 0x18006A434 (sub_18006A434.c)
 *     sub_18006BF54 @ 0x18006BF54 (sub_18006BF54.c)
 *     sub_180073894 @ 0x180073894 (sub_180073894.c)
 *     sub_180073C84 @ 0x180073C84 (sub_180073C84.c)
 *     sub_180074B90 @ 0x180074B90 (sub_180074B90.c)
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_180075FA4 @ 0x180075FA4 (sub_180075FA4.c)
 *     sub_18007A9C0 @ 0x18007A9C0 (sub_18007A9C0.c)
 *     sub_1800A2B70 @ 0x1800A2B70 (sub_1800A2B70.c)
 *     sub_1800A3148 @ 0x1800A3148 (sub_1800A3148.c)
 *     sub_1800A337C @ 0x1800A337C (sub_1800A337C.c)
 *     sub_1800A36E8 @ 0x1800A36E8 (sub_1800A36E8.c)
 *     sub_1800A3914 @ 0x1800A3914 (sub_1800A3914.c)
 *     sub_1800A3BC8 @ 0x1800A3BC8 (sub_1800A3BC8.c)
 *     sub_1800A3CA0 @ 0x1800A3CA0 (sub_1800A3CA0.c)
 *     sub_1800A3D78 @ 0x1800A3D78 (sub_1800A3D78.c)
 *     sub_1800A754C @ 0x1800A754C (sub_1800A754C.c)
 *     sub_1800AB508 @ 0x1800AB508 (sub_1800AB508.c)
 *     sub_1800AB5F4 @ 0x1800AB5F4 (sub_1800AB5F4.c)
 *     sub_1800AF1E0 @ 0x1800AF1E0 (sub_1800AF1E0.c)
 *     sub_1800BC02C @ 0x1800BC02C (sub_1800BC02C.c)
 *     sub_1800BC41C @ 0x1800BC41C (sub_1800BC41C.c)
 *     sub_1800C2B80 @ 0x1800C2B80 (sub_1800C2B80.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800D1E80 @ 0x1800D1E80 (sub_1800D1E80.c)
 *     sub_1800D3EFC @ 0x1800D3EFC (sub_1800D3EFC.c)
 *     sub_1800D42EC @ 0x1800D42EC (sub_1800D42EC.c)
 *     sub_1800D46D0 @ 0x1800D46D0 (sub_1800D46D0.c)
 *     sub_1800F0AB0 @ 0x1800F0AB0 (sub_1800F0AB0.c)
 *     sub_1800F3DC0 @ 0x1800F3DC0 (sub_1800F3DC0.c)
 *     sub_1800F3E78 @ 0x1800F3E78 (sub_1800F3E78.c)
 *     sub_1800F3EE4 @ 0x1800F3EE4 (sub_1800F3EE4.c)
 *     ??$_Traits_find@U?$char_traits@D@std@@@std@@YA_KQEBD_K101@Z @ 0x1801031B4 (--$_Traits_find@U-$char_traits@D@std@@@std@@YA_KQEBD_K101@Z.c)
 *     sub_1801042DC @ 0x1801042DC (sub_1801042DC.c)
 *     sub_18010510C @ 0x18010510C (sub_18010510C.c)
 *     sub_180108118 @ 0x180108118 (sub_180108118.c)
 *     sub_180108270 @ 0x180108270 (sub_180108270.c)
 *     sub_18010CE84 @ 0x18010CE84 (sub_18010CE84.c)
 *     sub_180111048 @ 0x180111048 (sub_180111048.c)
 *     sub_18011AFEC @ 0x18011AFEC (sub_18011AFEC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}

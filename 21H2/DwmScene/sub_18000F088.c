/*
 * XREFs of sub_18000F088 @ 0x18000F088
 * Callers:
 *     sub_18000BE54 @ 0x18000BE54 (sub_18000BE54.c)
 *     sub_18000CF94 @ 0x18000CF94 (sub_18000CF94.c)
 *     sub_18000DF30 @ 0x18000DF30 (sub_18000DF30.c)
 *     sub_18000E160 @ 0x18000E160 (sub_18000E160.c)
 *     sub_18000EECC @ 0x18000EECC (sub_18000EECC.c)
 *     sub_18001A0B4 @ 0x18001A0B4 (sub_18001A0B4.c)
 *     sub_18001A684 @ 0x18001A684 (sub_18001A684.c)
 *     sub_18001B4B8 @ 0x18001B4B8 (sub_18001B4B8.c)
 *     sub_18001C2F4 @ 0x18001C2F4 (sub_18001C2F4.c)
 *     sub_18001FBE4 @ 0x18001FBE4 (sub_18001FBE4.c)
 *     sub_180020350 @ 0x180020350 (sub_180020350.c)
 *     sub_180020FF0 @ 0x180020FF0 (sub_180020FF0.c)
 *     sub_180021070 @ 0x180021070 (sub_180021070.c)
 *     sub_18003A420 @ 0x18003A420 (sub_18003A420.c)
 *     sub_18003CAC0 @ 0x18003CAC0 (sub_18003CAC0.c)
 *     sub_18003D340 @ 0x18003D340 (sub_18003D340.c)
 *     sub_18003DD20 @ 0x18003DD20 (sub_18003DD20.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     memset @ 0x18012396A (memset.c)
 */

__int64 __fastcall sub_18000F088(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = (unsigned int *)o__errno();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    o__invalid_parameter_noinfo();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = (unsigned int *)o__errno();
    v9 = 34;
    goto LABEL_5;
  }
  return 22LL;
}

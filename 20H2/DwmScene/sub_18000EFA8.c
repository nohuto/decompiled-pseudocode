/*
 * XREFs of sub_18000EFA8 @ 0x18000EFA8
 * Callers:
 *     sub_18000BD94 @ 0x18000BD94 (sub_18000BD94.c)
 *     sub_18000CEB4 @ 0x18000CEB4 (sub_18000CEB4.c)
 *     sub_18000DE50 @ 0x18000DE50 (sub_18000DE50.c)
 *     sub_18000E080 @ 0x18000E080 (sub_18000E080.c)
 *     sub_18000EDEC @ 0x18000EDEC (sub_18000EDEC.c)
 *     sub_180034B50 @ 0x180034B50 (sub_180034B50.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_180037A70 @ 0x180037A70 (sub_180037A70.c)
 *     sub_180038450 @ 0x180038450 (sub_180038450.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18011E029 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     memset @ 0x18011E09A (memset.c)
 */

__int64 __fastcall sub_18000EFA8(void *a1, size_t a2, const void *a3, size_t a4)
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

/*
 * XREFs of sub_180036244 @ 0x180036244
 * Callers:
 *     sub_1800343E0 @ 0x1800343E0 (sub_1800343E0.c)
 *     sub_1800346C0 @ 0x1800346C0 (sub_1800346C0.c)
 *     sub_180034970 @ 0x180034970 (sub_180034970.c)
 *     sub_180034A74 @ 0x180034A74 (sub_180034A74.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     memcpy @ 0x18003AE0F (memcpy.c)
 */

void __fastcall sub_180036244(void *a1, size_t a2, const void *a3, size_t a4)
{
  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_3;
    if ( !a3 || a2 < a4 )
    {
      memset(a1, 0, a2);
      if ( a3 )
      {
        if ( a2 >= a4 )
          goto LABEL_12;
        *(_DWORD *)o__errno(a1, a2) = 34;
LABEL_11:
        o__invalid_parameter_noinfo();
LABEL_12:
        sub_18000A174(-2147024809);
      }
LABEL_3:
      *(_DWORD *)o__errno(a1, a2) = 22;
      goto LABEL_11;
    }
    memcpy(a1, a3, a4);
  }
}

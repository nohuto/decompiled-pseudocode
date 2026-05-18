/*
 * XREFs of sub_180027CD0 @ 0x180027CD0
 * Callers:
 *     sub_180025C58 @ 0x180025C58 (sub_180025C58.c)
 *     sub_180025E40 @ 0x180025E40 (sub_180025E40.c)
 *     sub_18002CF70 @ 0x18002CF70 (sub_18002CF70.c)
 *     sub_18002D158 @ 0x18002D158 (sub_18002D158.c)
 *     sub_18002D340 @ 0x18002D340 (sub_18002D340.c)
 *     sub_18002D468 @ 0x18002D468 (sub_18002D468.c)
 *     sub_18002F8D8 @ 0x18002F8D8 (sub_18002F8D8.c)
 *     sub_180030058 @ 0x180030058 (sub_180030058.c)
 *     sub_180037C00 @ 0x180037C00 (sub_180037C00.c)
 *     sub_180037DE8 @ 0x180037DE8 (sub_180037DE8.c)
 *     sub_180067614 @ 0x180067614 (sub_180067614.c)
 *     sub_1800677FC @ 0x1800677FC (sub_1800677FC.c)
 *     sub_18006A434 @ 0x18006A434 (sub_18006A434.c)
 *     sub_18006EBC4 @ 0x18006EBC4 (sub_18006EBC4.c)
 *     sub_18006EDAC @ 0x18006EDAC (sub_18006EDAC.c)
 *     sub_1800736AC @ 0x1800736AC (sub_1800736AC.c)
 *     sub_180073894 @ 0x180073894 (sub_180073894.c)
 *     sub_180073C84 @ 0x180073C84 (sub_180073C84.c)
 *     sub_180074074 @ 0x180074074 (sub_180074074.c)
 *     sub_180074250 @ 0x180074250 (sub_180074250.c)
 *     sub_18007442C @ 0x18007442C (sub_18007442C.c)
 *     sub_18007468C @ 0x18007468C (sub_18007468C.c)
 *     sub_180074874 @ 0x180074874 (sub_180074874.c)
 *     sub_180074A5C @ 0x180074A5C (sub_180074A5C.c)
 *     sub_180074B90 @ 0x180074B90 (sub_180074B90.c)
 *     sub_180074DC4 @ 0x180074DC4 (sub_180074DC4.c)
 *     sub_180074EFC @ 0x180074EFC (sub_180074EFC.c)
 *     sub_180075050 @ 0x180075050 (sub_180075050.c)
 *     sub_1800751B0 @ 0x1800751B0 (sub_1800751B0.c)
 *     sub_1800752E4 @ 0x1800752E4 (sub_1800752E4.c)
 *     sub_18008A90C @ 0x18008A90C (sub_18008A90C.c)
 *     sub_18008AB40 @ 0x18008AB40 (sub_18008AB40.c)
 *     sub_180091058 @ 0x180091058 (sub_180091058.c)
 *     sub_180091248 @ 0x180091248 (sub_180091248.c)
 *     sub_1800A2B70 @ 0x1800A2B70 (sub_1800A2B70.c)
 *     sub_1800A2F60 @ 0x1800A2F60 (sub_1800A2F60.c)
 *     sub_1800A3148 @ 0x1800A3148 (sub_1800A3148.c)
 *     sub_1800A337C @ 0x1800A337C (sub_1800A337C.c)
 *     sub_1800A35B0 @ 0x1800A35B0 (sub_1800A35B0.c)
 *     sub_1800A36E8 @ 0x1800A36E8 (sub_1800A36E8.c)
 *     sub_1800A3914 @ 0x1800A3914 (sub_1800A3914.c)
 *     sub_1800A81F8 @ 0x1800A81F8 (sub_1800A81F8.c)
 *     sub_1800A83E0 @ 0x1800A83E0 (sub_1800A83E0.c)
 *     sub_1800A8520 @ 0x1800A8520 (sub_1800A8520.c)
 *     sub_1800AC1D8 @ 0x1800AC1D8 (sub_1800AC1D8.c)
 *     sub_1800AC3FC @ 0x1800AC3FC (sub_1800AC3FC.c)
 *     sub_1800B4104 @ 0x1800B4104 (sub_1800B4104.c)
 *     sub_1800B42E0 @ 0x1800B42E0 (sub_1800B42E0.c)
 *     sub_1800BC02C @ 0x1800BC02C (sub_1800BC02C.c)
 *     sub_1800BC41C @ 0x1800BC41C (sub_1800BC41C.c)
 *     sub_1800D3EFC @ 0x1800D3EFC (sub_1800D3EFC.c)
 *     sub_1800D42EC @ 0x1800D42EC (sub_1800D42EC.c)
 *     sub_1800D523C @ 0x1800D523C (sub_1800D523C.c)
 *     sub_1800D7C80 @ 0x1800D7C80 (sub_1800D7C80.c)
 *     sub_18011EE64 @ 0x18011EE64 (sub_18011EE64.c)
 *     sub_18011F04C @ 0x18011F04C (sub_18011F04C.c)
 *     sub_18011F280 @ 0x18011F280 (sub_18011F280.c)
 *     sub_18011F3D0 @ 0x18011F3D0 (sub_18011F3D0.c)
 *     sub_180120300 @ 0x180120300 (sub_180120300.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_180027CD0(__int64 **a1)
{
  __int64 *v1; // rax
  __int64 *v3; // rcx
  __int64 *v4; // r8
  __int64 *v5; // r9
  __int64 *i; // rax

  v1 = *a1;
  if ( *((_BYTE *)*a1 + 25) )
  {
    *a1 = (__int64 *)v1[2];
    return a1;
  }
  v3 = (__int64 *)*v1;
  if ( !*(_BYTE *)(*v1 + 25) )
  {
    for ( i = (__int64 *)v3[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
      v3 = i;
LABEL_13:
    *a1 = v3;
    return a1;
  }
  v3 = (__int64 *)v1[1];
  if ( !*((_BYTE *)v3 + 25) )
  {
    v4 = v1;
    v5 = v1;
    do
    {
      v1 = v5;
      if ( v4 != (__int64 *)*v3 )
        break;
      v4 = v3;
      *a1 = v3;
      v3 = (__int64 *)v3[1];
      v5 = v4;
      v1 = v4;
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  if ( !*((_BYTE *)v1 + 25) )
    goto LABEL_13;
  return a1;
}

/*
 * XREFs of sub_18002BCF8 @ 0x18002BCF8
 * Callers:
 *     sub_18002A260 @ 0x18002A260 (sub_18002A260.c)
 * Callees:
 *     sub_180028910 @ 0x180028910 (sub_180028910.c)
 *     ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@1@@Z @ 0x18002C16C (-make_error_code@std@@YA-AVerror_code@1@W4io_errc@1@@Z.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall sub_18002BCF8(__int64 a1)
{
  __int128 v1; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v2[16]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( !*(_QWORD *)a1 )
  {
    v1 = *(_OWORD *)std::make_error_code(v2, 1LL);
    sub_180028910(pExceptionObject, &v1);
    throw (std::system_error *)pExceptionObject;
  }
  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_OWORD *)std::make_error_code(v2, 36LL);
    sub_180028910(pExceptionObject, &v1);
    throw (std::system_error *)pExceptionObject;
  }
}

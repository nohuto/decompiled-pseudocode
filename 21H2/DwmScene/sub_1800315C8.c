/*
 * XREFs of sub_1800315C8 @ 0x1800315C8
 * Callers:
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 * Callees:
 *     sub_18002E1E0 @ 0x18002E1E0 (sub_18002E1E0.c)
 *     ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@1@@Z @ 0x180031A3C (-make_error_code@std@@YA-AVerror_code@1@W4io_errc@1@@Z.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall sub_1800315C8(__int64 a1)
{
  __int128 v1; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v2[16]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( !*(_QWORD *)a1 )
  {
    v1 = *(_OWORD *)std::make_error_code(v2, 1LL);
    sub_18002E1E0(pExceptionObject, &v1);
    throw (std::system_error *)pExceptionObject;
  }
  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_OWORD *)std::make_error_code(v2, 36LL);
    sub_18002E1E0(pExceptionObject, &v1);
    throw (std::system_error *)pExceptionObject;
  }
}

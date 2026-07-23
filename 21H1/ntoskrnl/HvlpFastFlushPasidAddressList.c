/*
 * XREFs of HvlpFastFlushPasidAddressList @ 0x1404F1B7C
 * Callers:
 *     HvlSvmFlushPasid @ 0x1404F1470 (HvlSvmFlushPasid.c)
 * Callees:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpFastFlushPasidAddressList(int a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 *v6; // rdx
  __int64 v8; // [rsp+30h] [rbp-98h]
  _DWORD v9[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v10; // [rsp+48h] [rbp-80h]
  _BYTE v11[96]; // [rsp+50h] [rbp-78h] BYREF

  v10 = 0LL;
  v9[1] = a1;
  v9[0] = a2;
  if ( a3 )
  {
    v4 = a3;
    v5 = a4 - (_QWORD)v11;
    v6 = (__int64 *)v11;
    do
    {
      *v6 = *(__int64 *)((char *)v6 + v5) & 0x800 | (*(__int64 *)((char *)v6 + v5)
                                                   + (*(__int64 *)((char *)v6 + v5) & 0xC00));
      ++v6;
      --v4;
    }
    while ( v4 );
  }
  LODWORD(v8) = 65697;
  HIDWORD(v8) = a3 & 0xFFF;
  return HvcallFastExtended(v8, (__int64)v9, 8 * a3 + 16, 0, 0);
}

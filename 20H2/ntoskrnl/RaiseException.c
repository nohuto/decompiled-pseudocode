/*
 * XREFs of RaiseException @ 0x1403D5A70
 * Callers:
 *     _raise_exc_ex @ 0x1403D5B60 (_raise_exc_ex.c)
 * Callees:
 *     RtlRaiseException @ 0x1402E5480 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall RaiseException(int a1, char a2, unsigned int a3, const void *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+20h] [rbp-C8h] BYREF
  void *v13; // [rsp+30h] [rbp-B8h]
  __int64 v14[17]; // [rsp+38h] [rbp-B0h] BYREF

  memset((char *)v14 + 4, 0, 0x7CuLL);
  HIDWORD(v12) = 0;
  v13 = &RaiseException;
  LODWORD(v12) = a1;
  *(_QWORD *)((char *)&v12 + 4) = a2 & 1;
  if ( a4 )
  {
    if ( a3 > 0xF )
      a3 = 15;
    LODWORD(v14[0]) = a3;
    if ( a3 )
      memmove(&v14[1], a4, 8LL * a3);
  }
  else
  {
    LODWORD(v14[0]) = 0;
  }
  return RtlRaiseException(
           (__int64)&v12,
           v8,
           v9,
           v10,
           v12,
           *((__int64 *)&v12 + 1),
           (__int64)v13,
           v14[0],
           v14[1],
           v14[2],
           v14[3],
           v14[4],
           v14[5],
           v14[6],
           v14[7],
           v14[8],
           v14[9],
           v14[10],
           v14[11],
           v14[12],
           v14[13],
           v14[14],
           v14[15],
           v14[16]);
}

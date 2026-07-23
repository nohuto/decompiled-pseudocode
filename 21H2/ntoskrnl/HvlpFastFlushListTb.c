/*
 * XREFs of HvlpFastFlushListTb @ 0x140390194
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1403900FC (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 *     HvlpCopyFlushVaList @ 0x1403906AC (HvlpCopyFlushVaList.c)
 *     VslFastFlushSecureRangeList @ 0x140390744 (VslFastFlushSecureRangeList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall HvlpFastFlushListTb(__int128 *a1, char a2, __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v8; // xmm1_8
  ULONG v9; // eax
  __int128 v10; // [rsp+40h] [rbp-88h] BYREF
  __int64 v11; // [rsp+50h] [rbp-78h]
  _BYTE v12[88]; // [rsp+58h] [rbp-70h] BYREF

  if ( (_BYTE)a3 )
  {
    v8 = *((_QWORD *)a1 + 2);
    v10 = *a1;
    v11 = v8;
    v9 = (HvlpFlags >> 13) & 1;
    if ( !v9 )
      *((_QWORD *)&v10 + 1) |= 8uLL;
    LOBYTE(a3) = v9;
    HvlpCopyFlushVaList(a4, a5, a3, v12);
    HvcallFastExtended(65539, (unsigned int)&v10, 8 * a6 + 24, 0, 0);
  }
  if ( a2 )
    VslFastFlushSecureRangeList(a5, a4);
}

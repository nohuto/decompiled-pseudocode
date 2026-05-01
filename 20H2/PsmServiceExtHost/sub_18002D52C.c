/*
 * XREFs of sub_18002D52C @ 0x18002D52C
 * Callers:
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18002CC90 @ 0x18002CC90 (sub_18002CC90.c)
 * Callees:
 *     sub_18002D660 @ 0x18002D660 (sub_18002D660.c)
 *     sub_18002E008 @ 0x18002E008 (sub_18002E008.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002D52C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  unsigned int v8; // edi
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // ebx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+50h] [rbp-31h] BYREF
  __int64 v17; // [rsp+58h] [rbp-29h] BYREF
  __int64 v18; // [rsp+60h] [rbp-21h] BYREF
  __int64 v19; // [rsp+68h] [rbp-19h] BYREF
  __int64 v20; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v21[3]; // [rsp+78h] [rbp-9h] BYREF

  v6 = a1 + 168;
  v8 = 0;
  v16 = 0LL;
  sub_18002D660(a1 + 168, a2, a2, (unsigned int)&v16, (__int64)&v17, (__int64)&v18);
  if ( v16 != v6 )
  {
    v11 = *(_QWORD *)(v16 + 584);
    v21[2] = a5;
    v21[0] = a3;
    v21[1] = a4;
    v13 = RtlPublishWnfStateData(v11, 0LL, v21, 24LL, 0LL);
    if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v18 = *(_QWORD *)(a2 + 544);
      v19 = a5;
      v20 = a4;
      v17 = a3;
      LODWORD(v16) = v13;
      sub_18002E008(
        v12,
        (unsigned int)&unk_18009ADB0,
        v14,
        v15,
        (__int64)&v16,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v20,
        (__int64)&v19);
    }
    if ( v13 >= 0 )
      return 0;
    return (unsigned int)v13;
  }
  return v8;
}

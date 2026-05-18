/*
 * XREFs of sub_1801187E4 @ 0x1801187E4
 * Callers:
 *     sub_180118610 @ 0x180118610 (sub_180118610.c)
 *     sub_180118DA0 @ 0x180118DA0 (sub_180118DA0.c)
 *     sub_1801193F0 @ 0x1801193F0 (sub_1801193F0.c)
 *     sub_180119C90 @ 0x180119C90 (sub_180119C90.c)
 * Callees:
 *     sub_180117510 @ 0x180117510 (sub_180117510.c)
 *     sub_180117588 @ 0x180117588 (sub_180117588.c)
 *     sub_18011A440 @ 0x18011A440 (sub_18011A440.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801187E4(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  GUID v10; // [rsp+20h] [rbp-58h] BYREF
  GUID v11; // [rsp+30h] [rbp-48h] BYREF
  GUID pguid; // [rsp+40h] [rbp-38h] BYREF
  GUID v13; // [rsp+50h] [rbp-28h] BYREF

  LOBYTE(a2) = a2 ^ 1;
  v3 = sub_18011A440(a1, a2);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a1 + v4) );
  v5 = 129LL;
  if ( v3 == 1 )
    v5 = 64LL;
  if ( v4 + 3 > v5 )
    return 0LL;
  if ( v3 == 1 )
  {
    v8 = o__aligned_malloc(160LL, 8LL);
    *(_QWORD *)&pguid.Data1 = v8;
    v7 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 152) = 64LL;
      v13 = 0LL;
      CoCreateGuid(&v13);
      v11 = v13;
      sub_180117588(v7, (__int128 *)&v11);
      goto LABEL_14;
    }
  }
  else
  {
    if ( v3 != 2 )
      return 0LL;
    v6 = o__aligned_malloc(160LL, 8LL);
    *(_QWORD *)&pguid.Data1 = v6;
    v7 = v6;
    if ( v6 )
    {
      *(_QWORD *)(v6 + 152) = 127LL;
      pguid = 0LL;
      CoCreateGuid(&pguid);
      v10 = pguid;
      sub_180117510(v7, (__int128 *)&v10);
      goto LABEL_14;
    }
  }
  v7 = 0LL;
LABEL_14:
  if ( v7 )
  {
    o_strncpy_s(v7, 129LL, a1, v4);
    *(_BYTE *)(v7 + v4) = 46;
    *(_QWORD *)(v7 + 136) = v4 + 1;
    result = v7;
    *(_QWORD *)(v7 + 144) = (v4 + 3) << 32;
    *(_BYTE *)(v7 + *(_QWORD *)(v7 + 136)) = 0;
    return result;
  }
  return 0LL;
}

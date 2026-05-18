/*
 * XREFs of sub_180114548 @ 0x180114548
 * Callers:
 *     sub_180112910 @ 0x180112910 (sub_180112910.c)
 *     sub_180112A90 @ 0x180112A90 (sub_180112A90.c)
 *     sub_180112D40 @ 0x180112D40 (sub_180112D40.c)
 *     sub_1801130A0 @ 0x1801130A0 (sub_1801130A0.c)
 *     sub_180113220 @ 0x180113220 (sub_180113220.c)
 *     sub_1801134D0 @ 0x1801134D0 (sub_1801134D0.c)
 *     sub_180113750 @ 0x180113750 (sub_180113750.c)
 *     sub_180113890 @ 0x180113890 (sub_180113890.c)
 *     sub_180113B20 @ 0x180113B20 (sub_180113B20.c)
 *     sub_180113CB0 @ 0x180113CB0 (sub_180113CB0.c)
 *     sub_1801140B0 @ 0x1801140B0 (sub_1801140B0.c)
 *     sub_1801141F0 @ 0x1801141F0 (sub_1801141F0.c)
 *     sub_1801143C0 @ 0x1801143C0 (sub_1801143C0.c)
 * Callees:
 *     sub_180111C40 @ 0x180111C40 (sub_180111C40.c)
 *     sub_180111CB8 @ 0x180111CB8 (sub_180111CB8.c)
 *     sub_180114B70 @ 0x180114B70 (sub_180114B70.c)
 *     strrchr @ 0x18011E0D6 (strrchr.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180114548(char *Str, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  char *v7; // rax
  _BYTE *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 result; // rax
  GUID v19; // [rsp+20h] [rbp-68h] BYREF
  GUID v20; // [rsp+30h] [rbp-58h] BYREF
  GUID pguid; // [rsp+40h] [rbp-48h] BYREF
  GUID v22; // [rsp+50h] [rbp-38h] BYREF

  LOBYTE(a2) = a2 ^ 1;
  v3 = sub_180114B70(Str, a2);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Str[v5] );
  v6 = 129LL;
  if ( (_BYTE)v4 == 1 )
    v6 = 64LL;
  if ( v5 >= v6 )
    return 0LL;
  v7 = strrchr(Str, 46);
  if ( !v7 )
    return 0LL;
  v8 = v7 + 1;
  o__set_errno(0LL);
  v9 = o_strtol(v8, 0LL, 10LL);
  v12 = v9;
  if ( !v9 && *v8 != 48 && v8[1] )
    return 0LL;
  if ( *(_DWORD *)o__errno(v11, v10) == 34 )
    return 0LL;
  if ( v4 == 1 )
  {
    v15 = o__aligned_malloc(160LL, 8LL);
    *(_QWORD *)&pguid.Data1 = v15;
    v14 = v15;
    if ( v15 )
    {
      *(_QWORD *)(v15 + 152) = 64LL;
      v22 = 0LL;
      CoCreateGuid(&v22);
      v20 = v22;
      sub_180111CB8(v14, (__int128 *)&v20);
      goto LABEL_19;
    }
  }
  else
  {
    if ( v4 != 2 )
      return 0LL;
    v13 = o__aligned_malloc(160LL, 8LL);
    *(_QWORD *)&pguid.Data1 = v13;
    v14 = v13;
    if ( v13 )
    {
      *(_QWORD *)(v13 + 152) = 127LL;
      pguid = 0LL;
      CoCreateGuid(&pguid);
      v19 = pguid;
      sub_180111C40(v14, (__int128 *)&v19);
      goto LABEL_19;
    }
  }
  v14 = 0LL;
LABEL_19:
  if ( v14 )
  {
    v16 = v8 - Str;
    o_strncpy_s(v14, 129LL, Str, v16);
    *(_QWORD *)(v14 + 136) = v16;
    v17 = *(_QWORD *)(v14 + 136);
    result = v14;
    *(_QWORD *)(v14 + 144) = v12 | ((v16 + 2) << 32);
    *(_BYTE *)(v14 + v17) = 0;
    return result;
  }
  return 0LL;
}

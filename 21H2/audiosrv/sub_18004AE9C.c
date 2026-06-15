/*
 * XREFs of sub_18004AE9C @ 0x18004AE9C
 * Callers:
 *     sub_1800019C0 @ 0x1800019C0 (sub_1800019C0.c)
 *     sub_180001D60 @ 0x180001D60 (sub_180001D60.c)
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_18004AA1C @ 0x18004AA1C (sub_18004AA1C.c)
 *     sub_1800D56D8 @ 0x1800D56D8 (sub_1800D56D8.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 *     sub_1800DEF80 @ 0x1800DEF80 (sub_1800DEF80.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 *     sub_1800EC88C @ 0x1800EC88C (sub_1800EC88C.c)
 *     sub_180119B20 @ 0x180119B20 (sub_180119B20.c)
 *     sub_18011FF30 @ 0x18011FF30 (sub_18011FF30.c)
 * Callees:
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     sub_18004B400 @ 0x18004B400 (sub_18004B400.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_18011B780 @ 0x18011B780 (sub_18011B780.c)
 */

__int64 __fastcall sub_18004AE9C(
        __int64 a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  __int64 v9; // rsi
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r15
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r9d
  __int128 v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  int v21; // r12d
  __int64 i; // r14
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // r11
  int v34; // eax
  __int64 v35; // [rsp+20h] [rbp-60h]
  __int64 v37; // [rsp+30h] [rbp-50h]
  __int128 v38; // [rsp+60h] [rbp-20h] BYREF

  v9 = a1 + 1720;
  v11 = a2;
  v38 = *a4;
  v12 = 232LL;
  if ( a2 != 3 )
    v12 = 224LL;
  v13 = a1 + v12;
  v37 = v13;
  v14 = sub_18004B060(a1 + 1720, a2);
  v15 = 0;
  v16 = *(_DWORD *)(v14 + 16);
  if ( v16 > 0 )
  {
    v29 = *(_QWORD *)v14;
    while ( 1 )
    {
      v30 = *(_QWORD *)(v29 + 16LL * v15) - v38;
      if ( !v30 )
        v30 = *(_QWORD *)(v29 + 16LL * v15 + 8) - *((_QWORD *)&v38 + 1);
      if ( !v30 )
        break;
      if ( ++v15 >= v16 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v15 = -1;
  }
  v17 = *a4;
  if ( v15 != -1 )
  {
    v38 = *a4;
    v31 = sub_18004B060(v9, v11);
    v32 = sub_18011B780(v31, &v38);
    if ( v32 == -1 )
    {
      v17 = xmmword_18015B730;
    }
    else
    {
      if ( v32 < 0 || v32 >= *(_DWORD *)(v33 + 16) )
      {
        sub_1800BB2C8(3221225612LL);
        __debugbreak();
      }
      v17 = *(_OWORD *)(*(_QWORD *)(v33 + 8) + 16LL * v32);
    }
  }
  v18 = v17;
  v19 = v17;
  v35 = v17;
  v38 = v17;
  v20 = *((_QWORD *)&v17 + 1);
  if ( !(_QWORD)v17 )
    v19 = *((_QWORD *)&v17 + 1);
  if ( !v19 )
  {
    v38 = xmmword_18015B798;
    v20 = 0xCF56A961137EA8A1uLL;
    v18 = 0x4FD1B4939E90EA20LL;
    v35 = 0x4FD1B4939E90EA20LL;
  }
  v21 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    if ( v21 >= *(_DWORD *)(*(_QWORD *)v13 + 8LL) )
      return 2290679816LL;
    if ( i < 0 )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v23 = *(_QWORD *)(i + **(_QWORD **)v13);
    v24 = *(_QWORD *)v23 - v18;
    if ( *(_QWORD *)v23 == v18 )
      v24 = *(_QWORD *)(v23 + 8) - v20;
    if ( !v24 )
    {
      v25 = 0;
      if ( *(int *)(v23 + 24) > 0 )
        break;
    }
LABEL_43:
    ++v21;
  }
  v26 = 0LL;
  while ( 1 )
  {
    if ( v26 < 0 || v25 >= *(_DWORD *)(v23 + 24) )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v27 = *(_QWORD *)(v26 + *(_QWORD *)(v23 + 16));
    if ( (unsigned int)sub_18004B400(a3, *(_QWORD *)v27) )
      break;
    ++v25;
    v26 += 8LL;
    if ( v25 >= *(_DWORD *)(v23 + 24) )
    {
      v18 = v35;
      v13 = v37;
      goto LABEL_43;
    }
  }
  if ( a6 )
    *a6 = *(_DWORD *)(v27 + 12);
  if ( a7 )
    *a7 = *(_DWORD *)(v27 + 8);
  if ( a8 )
    *a8 = *(_DWORD *)(v27 + 16);
  if ( a9 )
  {
    if ( a5 )
      v34 = *(_DWORD *)(v27 + 24);
    else
      v34 = *(_DWORD *)(v27 + 20);
    *a9 = v34;
  }
  return 0LL;
}

/*
 * XREFs of sub_1800D32F4 @ 0x1800D32F4
 * Callers:
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_180006C80 @ 0x180006C80 (sub_180006C80.c)
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CADB4 @ 0x1800CADB4 (sub_1800CADB4.c)
 *     sub_1800D2F6C @ 0x1800D2F6C (sub_1800D2F6C.c)
 *     sub_1800D3024 @ 0x1800D3024 (sub_1800D3024.c)
 *     sub_1800D3078 @ 0x1800D3078 (sub_1800D3078.c)
 *     sub_1800D3180 @ 0x1800D3180 (sub_1800D3180.c)
 *     sub_1800D4618 @ 0x1800D4618 (sub_1800D4618.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800D32F4(__int64 a1, _WORD *a2)
{
  __int64 v3; // r15
  int v4; // r14d
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // r8
  _WORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  void *v12; // rbx
  __int64 *v14; // rax
  char *v15; // rdx
  volatile signed __int32 *v16; // rcx
  volatile signed __int32 *v17; // r12
  volatile signed __int32 *v18; // rbx
  __int64 v19; // r8
  __int64 *v20; // rax
  unsigned __int16 *v21; // rcx
  char v22; // r14
  int v23; // edi
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rcx
  __int64 v26; // r14
  volatile signed __int32 *v27; // rdi
  int *v28; // rbx
  int *v29; // rbx
  int *v30; // rbx
  int v31; // [rsp+20h] [rbp-198h] BYREF
  void *Src; // [rsp+28h] [rbp-190h] BYREF
  int v33; // [rsp+30h] [rbp-188h]
  unsigned __int16 *v34; // [rsp+38h] [rbp-180h] BYREF
  __int64 v35; // [rsp+40h] [rbp-178h] BYREF
  __int64 v36; // [rsp+48h] [rbp-170h] BYREF
  __int64 v37; // [rsp+50h] [rbp-168h]
  ATL::CAtlException *v38; // [rsp+58h] [rbp-160h] BYREF
  ATL::CAtlException *v39; // [rsp+60h] [rbp-158h] BYREF
  ATL::CAtlException *v40; // [rsp+68h] [rbp-150h] BYREF
  LPCOLESTR lpsz; // [rsp+70h] [rbp-148h] BYREF
  _BYTE v42[264]; // [rsp+78h] [rbp-140h] BYREF

  v3 = a1;
  v37 = a1;
  v4 = 0;
  v33 = 0;
  sub_180003E08(&v34, (__int64)&qword_18019F818);
  sub_180003E08(&Src, (__int64)&qword_18019F818);
  sub_180003E08(&v35, (__int64)&qword_18019F818);
  v5 = -1LL;
  if ( a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
  }
  else
  {
    LODWORD(v6) = 0;
  }
  try
  {
    sub_18002BB70(&v35, a2, v6);
  }
  catch ( ATL::CAtlException *v38 )
  {
    v28 = (int *)v38;
    if ( *(_DWORD *)v38 == -1073741571 )
      o__resetstkoflw();
    v31 = *v28;
    v7 = v31;
    if ( v31 < 0 )
      goto LABEL_16;
    v5 = -1LL;
    v4 = v33;
    v3 = v37;
  }
  *(_OWORD *)(v3 + 16) = xmmword_18015B730;
  v31 = 0;
  if ( (unsigned __int16)sub_1800D3078(&v35, 0) == 124 )
  {
    v9 = &unk_18015C744;
  }
  else
  {
    v14 = sub_1800CADB4(&v35, &v36, v8, &v31);
    v4 = 1;
    v33 = 1;
    v9 = (_WORD *)*v14;
    if ( !*v14 )
    {
      LODWORD(v10) = 0;
      goto LABEL_12;
    }
  }
  v10 = -1LL;
  do
    ++v10;
  while ( v9[v10] );
LABEL_12:
  sub_18002BB70((__int64 *)&v34, v9, v10);
  if ( (v4 & 1) != 0 )
  {
    v4 &= ~1u;
    sub_180006A30((volatile signed __int32 *)(v36 - 24));
  }
  if ( v31 == -1 )
  {
    v7 = -2147467259;
LABEL_16:
    v12 = Src;
LABEL_17:
    sub_18005E8F8((__int64)"CAppAudioSessionId::Initialize", 459, v7);
    goto LABEL_18;
  }
  v15 = (char *)*sub_1800CADB4(&v35, &v36, v11, &v31);
  v16 = (volatile signed __int32 *)(v15 - 24);
  v12 = Src;
  v17 = (volatile signed __int32 *)((char *)Src - 24);
  if ( v15 - 24 != (char *)Src - 24 )
  {
    if ( *((int *)v17 + 4) >= 0 && *(_QWORD *)v16 == *(_QWORD *)v17 )
    {
      v18 = sub_180006C80(v16);
      sub_180006A30(v17);
      v12 = (void *)(v18 + 6);
      Src = v12;
    }
    else
    {
      sub_18002BB70((__int64 *)&Src, v15, *((_DWORD *)v15 - 4));
      v12 = Src;
    }
  }
  sub_180006A30((volatile signed __int32 *)(v36 - 24));
  if ( v31 == -1 )
    goto LABEL_27;
  v20 = sub_1800CADB4(&v35, &v36, v19, &v31);
  v33 = v4 | 2;
  if ( sub_1800D3024(v21, v20) || (v22 = 0, v31 != -1) )
    v22 = 1;
  sub_180006A30((volatile signed __int32 *)(v36 - 24));
  if ( v22 )
  {
LABEL_27:
    v7 = -2147467259;
    goto LABEL_17;
  }
  if ( *((_DWORD *)v34 - 4) == 1 && (unsigned __int16)sub_1800D3180(&v34) == 35 )
  {
    *(_DWORD *)(v3 + 40) = 1;
  }
  else
  {
    try
    {
      sub_1800D4618(&v34);
    }
    catch ( ATL::CAtlException *v39 )
    {
      v29 = (int *)v39;
      if ( *(_DWORD *)v39 == -1073741571 )
        o__resetstkoflw();
      v31 = *v29;
      v7 = v31;
      if ( v31 < 0 )
        goto LABEL_16;
      v5 = -1LL;
      v3 = v37;
    }
  }
  try
  {
    sub_1800D4618(&Src);
  }
  catch ( ATL::CAtlException *v40 )
  {
    v30 = (int *)v40;
    if ( *(_DWORD *)v40 == -1073741571 )
      o__resetstkoflw();
    v31 = *v30;
    v7 = v31;
    if ( v31 < 0 )
      goto LABEL_16;
    v5 = -1LL;
    v3 = v37;
  }
  lpsz = (LPCOLESTR)v42;
  v12 = Src;
  if ( Src )
  {
    do
      ++v5;
    while ( *((_WORD *)Src + v5) );
    v23 = v5 + 1;
    sub_1800D2F6C((__int64 *)&lpsz, v23, (__int64)v42);
    if ( 2LL * v23 )
    {
      if ( !lpsz )
      {
        *(_DWORD *)o__errno(0LL) = 22;
        o__invalid_parameter_noinfo(v24);
        sub_1800B8610(-2147024809);
      }
      memcpy((void *)lpsz, v12, 2LL * v23);
    }
  }
  else
  {
    lpsz = 0LL;
  }
  v7 = CLSIDFromString(lpsz, (LPCLSID)(v3 + 16));
  if ( lpsz != (LPCOLESTR)v42 )
    _o_free(lpsz);
  if ( v7 < 0 )
    goto LABEL_17;
  v25 = (volatile signed __int32 *)(v34 - 12);
  v26 = *(_QWORD *)v3 - 24LL;
  if ( v34 - 12 != (unsigned __int16 *)v26 )
  {
    if ( *(int *)(v26 + 16) >= 0 && *(_QWORD *)v25 == *(_QWORD *)v26 )
    {
      v27 = sub_180006C80(v25);
      sub_180006A30((volatile signed __int32 *)v26);
      *(_QWORD *)v3 = v27 + 6;
    }
    else
    {
      sub_18002BB70((__int64 *)v3, v34, *((_DWORD *)v34 - 4));
    }
  }
  v7 = sub_1800184B0((const GUID *)v3);
  if ( v7 < 0 )
    goto LABEL_17;
LABEL_18:
  sub_180006A30((volatile signed __int32 *)(v35 - 24));
  sub_180006A30((volatile signed __int32 *)v12 - 6);
  sub_180006A30((volatile signed __int32 *)v34 - 6);
  return (unsigned int)v7;
}

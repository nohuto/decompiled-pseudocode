/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180018B00
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180017480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     AudioSessionManagerGetCurrentSession @ 0x18001CC70 (AudioSessionManagerGetCurrentSession.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800D3D54 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800D3E74 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x1800195F0 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001BAF0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001BBA0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18001BDA0 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18002C8BC (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memcpy_s @ 0x180034A94 (memcpy_s.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180045124 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18006B61E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     memmove_0 @ 0x180074C5B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800BB66C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800C7414 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800C9A0C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const GUID *this)
{
  const void *v2; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, __int64); // rax
  _QWORD *v5; // rdi
  BSTR v6; // rbx
  __int64 v7; // rax
  unsigned __int16 v8; // dx
  wchar_t *v9; // r9
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  size_t v13; // r8
  wchar_t *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rsi
  wchar_t *v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rbx
  __int64 v21; // rsi
  wchar_t *v22; // rdx
  wchar_t *v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  const GUID *v26; // rcx
  wchar_t *v27; // rdx
  _QWORD *v28; // rdx
  _DWORD *v30; // rsi
  __int64 v31; // rax
  HINSTANCE StringResourceInstance; // rax
  wchar_t *v33; // rdx
  __int64 v34; // rax
  wchar_t *v35; // r9
  __int64 v36; // r14
  __int64 v37; // rdx
  wchar_t *v38; // rax
  const wchar_t *v39; // r14
  wchar_t *v40; // rax
  wchar_t *v41; // r9
  __int64 v42; // rcx
  wchar_t *v43; // rdx
  __int64 v44; // r12
  wchar_t *v45; // r8
  __int64 v46; // r14
  __int64 v47; // rdx
  wchar_t *v48; // rax
  const wchar_t *v49; // r14
  wchar_t *v50; // rax
  wchar_t *v51; // r12
  __int64 v52; // rcx
  wchar_t *v53; // rdx
  unsigned int v54; // [rsp+20h] [rbp-118h]
  int v55; // [rsp+20h] [rbp-118h]
  int v56; // [rsp+20h] [rbp-118h]
  int v57; // [rsp+20h] [rbp-118h]
  int v58; // [rsp+20h] [rbp-118h]
  wchar_t *Str; // [rsp+28h] [rbp-110h] BYREF
  int v60; // [rsp+30h] [rbp-108h]
  wchar_t *v61; // [rsp+38h] [rbp-100h]
  unsigned __int64 v62; // [rsp+40h] [rbp-F8h]
  _QWORD *v63; // [rsp+48h] [rbp-F0h] BYREF
  wchar_t *v64; // [rsp+50h] [rbp-E8h]
  wchar_t *v65; // [rsp+58h] [rbp-E0h]
  const GUID *v66; // [rsp+60h] [rbp-D8h]
  BSTR v67; // [rsp+68h] [rbp-D0h]
  OLECHAR sz[64]; // [rsp+80h] [rbp-B8h] BYREF

  v66 = this;
  v2 = *(const void **)&this->Data1;
  v3 = (volatile signed __int32 *)(*(_QWORD *)&this->Data1 - 24LL);
  v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 32LL))(*(_QWORD *)v3);
  if ( *((int *)v3 + 4) >= 0 && v4 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3 )
  {
    _InterlockedIncrement(v3 + 4);
  }
  else
  {
    v30 = v3 + 2;
    v31 = (**v4)(v4, *((unsigned int *)v3 + 2), 2LL);
    v3 = (volatile signed __int32 *)v31;
    if ( !v31 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *(_DWORD *)(v31 + 8) = *v30;
    memcpy_s((void *const)(v31 + 24), 2LL * (*v30 + 1), v2, 2LL * (*v30 + 1));
  }
  v5 = v3 + 6;
  v63 = v5;
  if ( !*(_DWORD *)this[2].Data4 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v63,
      L"%",
      L"%%");
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v63,
      L"|",
      L"%b");
    v5 = v63;
  }
  StringFromGUID2(this + 1, sz, 64);
  v6 = SysAllocString(sz);
  v67 = v6;
  if ( !v6 )
    ATL::AtlThrowImpl(-2147024882);
  v7 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
  v9 = (wchar_t *)(v7 + 24);
  Str = (wchar_t *)(v7 + 24);
  if ( (unsigned __int64)v6 < 0x10000 )
  {
    StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v6, v8);
    if ( StringResourceInstance )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        &Str,
        StringResourceInstance,
        (unsigned __int16)v6);
      v14 = Str;
      goto LABEL_20;
    }
LABEL_61:
    v14 = Str;
    goto LABEL_20;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( v6[v10] );
  if ( !(_DWORD)v10 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Empty(&Str);
    goto LABEL_61;
  }
  v54 = *(_DWORD *)(v7 + 8);
  v11 = v6 - v9;
  v12 = (unsigned int)(1 - *(_DWORD *)(v7 + 16));
  if ( (int)(v12 | (*(_DWORD *)(v7 + 12) - v10)) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, (unsigned int)v10);
    v9 = Str;
  }
  v13 = 2LL * (int)v10;
  if ( v11 <= v54 )
  {
    v33 = &v9[v11];
    if ( !v13 )
      goto LABEL_17;
    if ( v9 && v33 )
    {
      memmove_0(v9, v33, v13);
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v13 )
      goto LABEL_17;
    if ( v9 )
    {
      memcpy_0(v9, v6, v13);
      goto LABEL_17;
    }
  }
  *(_DWORD *)_o__errno(v12) = 22;
  invalid_parameter_noinfo();
LABEL_17:
  if ( (int)v10 < 0 || (v14 = Str, (int)v10 > *((_DWORD *)Str - 3)) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)Str - 4) = v10;
  v14[(int)v10] = 0;
LABEL_20:
  SysFreeString(v6);
  v15 = -1LL;
  do
    ++v15;
  while ( SubStr[v15] );
  if ( (_DWORD)v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( asc_18015C598[v16] );
    v55 = 0;
    v61 = &v14[*((int *)Str - 4)];
    if ( v14 < v61 )
    {
      do
      {
        v17 = wcsstr(v14, L"%");
        if ( v17 )
        {
          v34 = 2LL * (int)v15;
          v64 = (wchar_t *)v34;
          do
          {
            ++v55;
            v14 = (wchar_t *)((char *)v17 + v34);
            v17 = wcsstr((wchar_t *)((char *)v17 + v34), L"%");
            v34 = (__int64)v64;
          }
          while ( v17 );
        }
        if ( v14 )
        {
          v18 = -1LL;
          do
            ++v18;
          while ( v14[v18] );
        }
        else
        {
          LODWORD(v18) = 0;
        }
        v14 += (int)v18 + 1;
      }
      while ( v14 < v61 );
      v19 = v55;
      if ( v55 > 0 )
      {
        v35 = Str;
        v36 = *((int *)Str - 4);
        v57 = v36;
        LODWORD(v61) = v36 + v19 * (v16 - v15);
        v37 = (unsigned int)v61;
        if ( (int)v61 <= (int)v36 )
          v37 = (unsigned int)v36;
        if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - (int)v37)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v37);
          v35 = Str;
        }
        v38 = &v35[v36];
        v62 = (unsigned __int64)v38;
        v39 = v35;
        while ( v39 < v38 )
        {
          v65 = (wchar_t *)(int)v16;
          while ( 1 )
          {
            v40 = wcsstr(v39, L"%");
            v41 = v40;
            v64 = v40;
            if ( !v40 )
              break;
            v42 = v40 - Str;
            v60 = v57 - v42 - v15;
            v43 = &v40[(int)v15];
            v39 = &v40[(_QWORD)v65];
            if ( 2LL * v60 )
            {
              if ( !v39 || !v43 )
              {
                *(_DWORD *)_o__errno(v42) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove_0(&v40[(_QWORD)v65], v43, 2LL * v60);
              v41 = v64;
            }
            if ( 2LL * (int)v16 )
            {
              memcpy_0(v41, L"%%", 2LL * (int)v16);
              v41 = v64;
            }
            v41[(int)v16 + v60] = 0;
            v57 += v16 - v15;
          }
          v39 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v39) + 1);
          v38 = (wchar_t *)v62;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, (unsigned int)v61);
      }
    }
    v14 = Str;
  }
  v20 = -1LL;
  do
    ++v20;
  while ( Control[v20] );
  if ( (_DWORD)v20 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( aB[v21] );
    v56 = 0;
    v22 = Str;
    v62 = (unsigned __int64)&v14[*((int *)Str - 4)];
    if ( (unsigned __int64)v14 >= v62 )
      goto LABEL_46;
    do
    {
      v23 = wcsstr(v14, L"|");
      if ( v23 )
      {
        v44 = (int)v20;
        do
        {
          ++v56;
          v14 = &v23[v44];
          v23 = wcsstr(&v23[v44], L"|");
        }
        while ( v23 );
      }
      if ( v14 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( v14[v24] );
      }
      else
      {
        LODWORD(v24) = 0;
      }
      v14 += (int)v24 + 1;
    }
    while ( (unsigned __int64)v14 < v62 );
    v25 = v56;
    if ( v56 > 0 )
    {
      v45 = Str;
      v46 = *((int *)Str - 4);
      v58 = v46;
      v60 = v46 + (v21 - v20) * v25;
      v47 = (unsigned int)v60;
      if ( v60 <= (int)v46 )
        v47 = (unsigned int)v46;
      if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - (int)v47)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v47);
        v45 = Str;
      }
      v48 = &v45[v46];
      v65 = v48;
      v49 = v45;
      while ( v49 < v48 )
      {
        v62 = (int)v21;
        while ( 1 )
        {
          v50 = wcsstr(v49, L"|");
          v51 = v50;
          if ( !v50 )
            break;
          v52 = v50 - Str;
          LODWORD(v61) = v58 - v52 - v20;
          v53 = &v50[(int)v20];
          v49 = &v50[v62];
          if ( 2LL * (int)v61 )
          {
            if ( !v49 || !v53 )
            {
              *(_DWORD *)_o__errno(v52) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove_0(&v50[v62], v53, 2LL * (int)v61);
          }
          if ( 2LL * (int)v21 )
            memcpy_0(v51, L"%b", 2LL * (int)v21);
          v51[(int)v21 + (int)v61] = 0;
          v58 += v21 - v20;
        }
        v49 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v49) + 1);
        v48 = v65;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, (unsigned int)v60);
    }
  }
  v22 = Str;
LABEL_46:
  v26 = v66 + 2;
  if ( *(_DWORD *)v66[2].Data4 )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      v26,
      L"#|%s",
      v22);
  else
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      v26,
      L"%s|%s",
      v5,
      v22);
  v27 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v27 + 8LL))(*(_QWORD *)v27);
  v28 = v63 - 3;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v63 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v28 + 8LL))(*v28);
  return 0LL;
}

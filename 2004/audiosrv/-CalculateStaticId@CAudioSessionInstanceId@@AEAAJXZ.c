/*
 * XREFs of ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180018F20
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180017480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     AudioSessionManagerGetCurrentSession @ 0x18001CC70 (AudioSessionManagerGetCurrentSession.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800D47B8 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800D4854 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800D4BFC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x1800195F0 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800198C8 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001BAF0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001BBA0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18001BDA0 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001BDC0 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001BE70 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180045124 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006B61E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     memmove_0 @ 0x180074C5B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionInstanceId::CalculateStaticId(CAudioSessionInstanceId *this)
{
  wchar_t *v2; // r13
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // r13d
  wchar_t *v7; // r14
  wchar_t *v8; // r12
  wchar_t *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // r12d
  wchar_t *v13; // r14
  wchar_t *v14; // r13
  wchar_t *v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  wchar_t *v18; // r8
  __int64 v19; // r13
  int v20; // r15d
  __int64 v21; // rdx
  wchar_t *v22; // rax
  const wchar_t *v23; // r14
  wchar_t *v24; // r8
  __int64 v25; // rbx
  int v26; // r12d
  wchar_t *v27; // r14
  wchar_t *v28; // r15
  wchar_t *v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned int v33; // r15d
  __int64 v34; // rdx
  wchar_t *v35; // rax
  const wchar_t *v36; // r14
  wchar_t *v37; // rax
  wchar_t *v38; // r12
  __int64 v39; // rax
  wchar_t *v40; // rax
  wchar_t *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // r13d
  wchar_t *v45; // rdx
  __int64 v46; // rcx
  int v47; // r13d
  wchar_t *v48; // rdx
  wchar_t *v49; // rdx
  wchar_t *v50; // rdx
  __int64 v52; // r15
  wchar_t *v53; // r9
  __int64 v54; // r12
  __int64 v55; // rdx
  wchar_t *v56; // rax
  const wchar_t *v57; // r14
  wchar_t *v58; // rax
  wchar_t *v59; // r15
  __int64 v60; // rcx
  int v61; // r13d
  wchar_t *v62; // rdx
  wchar_t *v63; // [rsp+30h] [rbp-68h] BYREF
  wchar_t *Str; // [rsp+38h] [rbp-60h] BYREF
  wchar_t *v65; // [rsp+40h] [rbp-58h]
  wchar_t *v66; // [rsp+48h] [rbp-50h]
  int v68; // [rsp+A8h] [rbp+10h]
  wchar_t *v69; // [rsp+A8h] [rbp+10h]
  int v70; // [rsp+A8h] [rbp+10h]
  unsigned int v71; // [rsp+A8h] [rbp+10h]
  int v72; // [rsp+B0h] [rbp+18h]
  wchar_t *v73; // [rsp+B8h] [rbp+20h] BYREF

  Str = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v63 = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v2 = (wchar_t *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v73 = v2;
  v3 = CAudioEndpointId::ToString(this, &Str);
  if ( v3 < 0 )
    goto LABEL_128;
  v3 = CAppAudioSessionId::ToString((char *)this + 8, &v63);
  if ( v3 < 0 )
    goto LABEL_128;
  v3 = CAppInstanceId::ToString((char *)this + 56, &v73);
  v72 = v3;
  if ( v3 < 0 )
  {
    v2 = v73;
LABEL_128:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::CalculateStaticId", 0x403u, v3);
    goto LABEL_87;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
    &Str,
    L"%",
    L"%%");
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Control[v5] );
  if ( (_DWORD)v5 )
  {
    do
      ++v4;
    while ( aB[v4] );
    v6 = 0;
    v7 = Str;
    v8 = &Str[*((int *)Str - 4)];
    if ( Str >= v8 )
      goto LABEL_15;
    do
    {
      v9 = wcsstr(v7, L"|");
      if ( v9 )
      {
        v52 = (int)v5;
        do
        {
          ++v6;
          v7 = &v9[v52];
          v9 = wcsstr(&v9[v52], L"|");
        }
        while ( v9 );
      }
      if ( v7 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v7[v10] );
      }
      else
      {
        LODWORD(v10) = 0;
      }
      v7 += (int)v10 + 1;
    }
    while ( v7 < v8 );
    if ( v6 > 0 )
    {
      v53 = Str;
      v54 = *((int *)Str - 4);
      v71 = v54 + v6 * (v4 - v5);
      v55 = v71;
      if ( (int)v71 <= (int)v54 )
        v55 = (unsigned int)v54;
      if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - (int)v55)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v55);
        v53 = Str;
      }
      v56 = &v53[v54];
      v66 = v56;
      v57 = v53;
      while ( v57 < v56 )
      {
        v65 = (wchar_t *)(int)v4;
        while ( 1 )
        {
          v58 = wcsstr(v57, L"|");
          v59 = v58;
          if ( !v58 )
            break;
          v60 = v58 - Str;
          v61 = v54 - v60 - v5;
          v62 = &v58[(int)v5];
          v57 = &v58[(_QWORD)v65];
          if ( 2LL * v61 )
          {
            if ( !v57 || !v62 )
            {
              *(_DWORD *)_o__errno(v60) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove_0(&v58[(_QWORD)v65], v62, 2LL * v61);
          }
          if ( 2LL * (int)v4 )
            memcpy_0(v59, L"%b", 2LL * (int)v4);
          v59[(int)v4 + v61] = 0;
          LODWORD(v54) = v4 - v5 + v54;
        }
        v57 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v57) + 1);
        v56 = v66;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, v71);
      v4 = -1LL;
    }
    else
    {
LABEL_15:
      v4 = -1LL;
    }
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
    &v63,
    L"%",
    L"%%");
  v11 = -1LL;
  do
    ++v11;
  while ( Control[v11] );
  if ( (_DWORD)v11 )
  {
    do
      ++v4;
    while ( aB[v4] );
    v12 = 0;
    v13 = v63;
    v14 = &v63[*((int *)v63 - 4)];
    if ( v63 < v14 )
    {
      do
      {
        v15 = wcsstr(v13, L"|");
        if ( v15 )
        {
          v16 = (int)v11;
          do
          {
            ++v12;
            v13 = &v15[v16];
            v15 = wcsstr(&v15[v16], L"|");
          }
          while ( v15 );
        }
        if ( v13 )
        {
          v17 = -1LL;
          do
            ++v17;
          while ( v13[v17] );
        }
        else
        {
          LODWORD(v17) = 0;
        }
        v13 += (int)v17 + 1;
      }
      while ( v13 < v14 );
      if ( v12 > 0 )
      {
        v18 = v63;
        v19 = *((int *)v63 - 4);
        v68 = v19;
        v20 = v19 + v12 * (v4 - v11);
        if ( v20 <= (int)v19 )
          v21 = (unsigned int)v19;
        else
          v21 = (unsigned int)v20;
        if ( ((1 - *((_DWORD *)v63 - 2)) | (*((_DWORD *)v63 - 3) - (int)v21)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v63, v21);
          v18 = v63;
        }
        v22 = &v18[v19];
        v65 = v22;
        v23 = v18;
        while ( v23 < v22 )
        {
          v66 = (wchar_t *)(int)v4;
          while ( 1 )
          {
            v40 = wcsstr(v23, L"|");
            v41 = v40;
            if ( !v40 )
              break;
            v43 = v40 - v63;
            v44 = v19 - v43 - v11;
            v45 = &v40[(int)v11];
            v23 = &v40[(_QWORD)v66];
            if ( 2LL * v44 )
            {
              if ( !v23 || !v45 )
              {
                *(_DWORD *)_o__errno(v43) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove_0(&v40[(_QWORD)v66], v45, 2LL * v44);
            }
            if ( 2LL * (int)v4 )
              memcpy_0(v41, L"%b", 2LL * (int)v4);
            v41[(int)v4 + v44] = 0;
            LODWORD(v19) = v4 - v11 + v68;
            v68 = v19;
          }
          if ( v23 )
          {
            v42 = -1LL;
            do
              ++v42;
            while ( v23[v42] );
          }
          else
          {
            LODWORD(v42) = 0;
          }
          v23 += (int)v42 + 1;
          v22 = v65;
        }
        if ( v20 < 0 || (v24 = v63, v20 > *((_DWORD *)v63 - 3)) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)v63 - 4) = v20;
        v24[v20] = 0;
      }
    }
    v4 = -1LL;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
    &v73,
    L"%",
    L"%%");
  v25 = -1LL;
  do
    ++v25;
  while ( Control[v25] );
  if ( (_DWORD)v25 )
  {
    do
      ++v4;
    while ( aB[v4] );
    v26 = 0;
    v2 = v73;
    v27 = v73;
    v28 = &v73[*((int *)v73 - 4)];
    v69 = v28;
    if ( v73 < v28 )
    {
      do
      {
        v29 = wcsstr(v27, L"|");
        if ( v29 )
        {
          v30 = (int)v25;
          do
          {
            ++v26;
            v27 = &v29[v30];
            v29 = wcsstr(&v29[v30], L"|");
          }
          while ( v29 );
          v28 = v69;
        }
        if ( v27 )
        {
          v31 = -1LL;
          do
            ++v31;
          while ( v27[v31] );
        }
        else
        {
          LODWORD(v31) = 0;
        }
        v27 += (int)v31 + 1;
      }
      while ( v27 < v28 );
      if ( v26 > 0 )
      {
        v32 = *((int *)v2 - 4);
        v70 = v32;
        v33 = v32 + v26 * (v4 - v25);
        if ( (int)v33 <= (int)v32 )
          v34 = (unsigned int)v32;
        else
          v34 = v33;
        if ( ((1 - *((_DWORD *)v2 - 2)) | (*((_DWORD *)v2 - 3) - (int)v34)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v73, v34);
          v2 = v73;
        }
        v35 = &v2[v32];
        v65 = v35;
        v36 = v2;
        while ( v36 < v35 )
        {
          v66 = (wchar_t *)(int)v4;
          while ( 1 )
          {
            v37 = wcsstr(v36, L"|");
            v38 = v37;
            if ( !v37 )
              break;
            v46 = v37 - v2;
            v47 = v70 - v46 - v25;
            v48 = &v37[(int)v25];
            v36 = &v37[(_QWORD)v66];
            if ( 2LL * v47 )
            {
              if ( !v36 || !v48 )
              {
                *(_DWORD *)_o__errno(v46) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove_0(&v37[(_QWORD)v66], v48, 2LL * v47);
            }
            if ( 2LL * (int)v4 )
              memcpy_0(v38, L"%b", 2LL * (int)v4);
            v38[(int)v4 + v47] = 0;
            v70 += v4 - v25;
            v2 = v73;
          }
          if ( v36 )
          {
            v39 = -1LL;
            do
              ++v39;
            while ( v36[v39] );
          }
          else
          {
            LODWORD(v39) = 0;
          }
          v36 += (int)v39 + 1;
          v35 = v65;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v73, v33);
      }
    }
  }
  else
  {
    v2 = v73;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
    (char *)this + 72,
    L"%s|%s|%s",
    Str,
    v63,
    v2);
  v3 = v72;
  if ( v72 < 0 )
    goto LABEL_128;
LABEL_87:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v2 - 3) + 8LL))(*((_QWORD *)v2 - 3));
  v49 = v63 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v63 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v49 + 8LL))(*(_QWORD *)v49);
  v50 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v50 + 8LL))(*(_QWORD *)v50);
  return (unsigned int)v3;
}

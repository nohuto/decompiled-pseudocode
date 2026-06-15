/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800D3E74
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800D4854 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800D4BFC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180004278 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800070F0 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180018B00 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002C1C0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18006B61E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800CB934 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x1800D3AEC (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x1800D3BA4 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800D3BF8 (--A-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800D3D00 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800D5198 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, const unsigned __int16 *a2)
{
  CAppAudioSessionId *v3; // r15
  int v4; // r14d
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // r8
  _WORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  char *v12; // rbx
  __int64 *v14; // rax
  char *v15; // rdx
  volatile signed __int32 *v16; // rcx
  int *v17; // r12
  volatile signed __int32 *v18; // rbx
  __int64 v19; // r8
  __int64 *v20; // rax
  unsigned __int16 *v21; // rcx
  char v22; // r14
  int v23; // edi
  volatile signed __int32 *v24; // rcx
  int *v25; // r14
  volatile signed __int32 *v26; // rdi
  int *v27; // rbx
  int *v28; // rbx
  int *v29; // rbx
  int v30; // [rsp+20h] [rbp-198h] BYREF
  void *Src; // [rsp+28h] [rbp-190h] BYREF
  int v32; // [rsp+30h] [rbp-188h]
  unsigned __int16 *v33; // [rsp+38h] [rbp-180h] BYREF
  __int64 v34; // [rsp+40h] [rbp-178h] BYREF
  __int64 v35; // [rsp+48h] [rbp-170h] BYREF
  CAppAudioSessionId *v36; // [rsp+50h] [rbp-168h]
  ATL::CAtlException *v37; // [rsp+58h] [rbp-160h] BYREF
  ATL::CAtlException *v38; // [rsp+60h] [rbp-158h] BYREF
  ATL::CAtlException *v39; // [rsp+68h] [rbp-150h] BYREF
  LPCOLESTR lpsz; // [rsp+70h] [rbp-148h] BYREF
  _BYTE v41[264]; // [rsp+78h] [rbp-140h] BYREF

  v3 = this;
  v36 = this;
  v4 = 0;
  v32 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v33, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&Src, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v34, (__int64)&ATL::g_strmgr);
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
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v34, a2, v6);
  }
  catch ( ATL::CAtlException *v37 )
  {
    v27 = (int *)v37;
    if ( *(_DWORD *)v37 == -1073741571 )
      _o__resetstkoflw();
    v30 = *v27;
    v7 = v30;
    if ( v30 < 0 )
      goto LABEL_16;
    v5 = -1LL;
    v4 = v32;
    v3 = v36;
  }
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  v30 = 0;
  if ( (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::operator[](&v34, 0) == 124 )
  {
    v9 = &unk_18015D734;
  }
  else
  {
    v14 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
            &v34,
            &v35,
            v8,
            &v30);
    v4 = 1;
    v32 = 1;
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
  ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v33, v9, v10);
  if ( (v4 & 1) != 0 )
  {
    v4 &= ~1u;
    ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  }
  if ( v30 == -1 )
  {
    v7 = -2147467259;
LABEL_16:
    v12 = (char *)Src;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 459, v7);
    goto LABEL_18;
  }
  v15 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v34,
                   &v35,
                   v11,
                   &v30);
  v16 = (volatile signed __int32 *)(v15 - 24);
  v12 = (char *)Src;
  v17 = (int *)((char *)Src - 24);
  if ( v15 - 24 != (char *)Src - 24 )
  {
    if ( v17[4] >= 0 && *(_QWORD *)v16 == *(_QWORD *)v17 )
    {
      v18 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v16);
      ATL::CStringData::Release((ATL::CStringData *)v17);
      v12 = (char *)(v18 + 6);
      Src = v12;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&Src, v15, *((_DWORD *)v15 - 4));
      v12 = (char *)Src;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v30 == -1 )
    goto LABEL_27;
  v20 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v34,
          &v35,
          v19,
          &v30);
  v32 = v4 | 2;
  if ( ATL::operator!=(v21, v20) || (v22 = 0, v30 != -1) )
    v22 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v22 )
  {
LABEL_27:
    v7 = -2147467259;
    goto LABEL_17;
  }
  if ( *((_DWORD *)v33 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&v33) == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v33);
    }
    catch ( ATL::CAtlException *v38 )
    {
      v28 = (int *)v38;
      if ( *(_DWORD *)v38 == -1073741571 )
        _o__resetstkoflw();
      v30 = *v28;
      v7 = v30;
      if ( v30 < 0 )
        goto LABEL_16;
      v5 = -1LL;
      v3 = v36;
    }
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&Src);
  }
  catch ( ATL::CAtlException *v39 )
  {
    v29 = (int *)v39;
    if ( *(_DWORD *)v39 == -1073741571 )
      _o__resetstkoflw();
    v30 = *v29;
    v7 = v30;
    if ( v30 < 0 )
      goto LABEL_16;
    v5 = -1LL;
    v3 = v36;
  }
  lpsz = (LPCOLESTR)v41;
  v12 = (char *)Src;
  if ( Src )
  {
    do
      ++v5;
    while ( *((_WORD *)Src + v5) );
    v23 = v5 + 1;
    ATL::AtlConvAllocMemory<unsigned short>((void **)&lpsz, v23, v41);
    if ( 2LL * v23 )
    {
      if ( !lpsz )
      {
        *(_DWORD *)_o__errno(0LL) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0((void *)lpsz, v12, 2LL * v23);
    }
  }
  else
  {
    lpsz = 0LL;
  }
  v7 = CLSIDFromString(lpsz, (LPCLSID)v3 + 1);
  if ( lpsz != (LPCOLESTR)v41 )
    free((void *)lpsz);
  if ( v7 < 0 )
    goto LABEL_17;
  v24 = (volatile signed __int32 *)(v33 - 12);
  v25 = (int *)(*(_QWORD *)v3 - 24LL);
  if ( v33 - 12 != (unsigned __int16 *)v25 )
  {
    if ( v25[4] >= 0 && *(_QWORD *)v24 == *(_QWORD *)v25 )
    {
      v26 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v24);
      ATL::CStringData::Release((ATL::CStringData *)v25);
      *(_QWORD *)v3 = v26 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v3, v33, *((_DWORD *)v33 - 4));
    }
  }
  v7 = CAppAudioSessionId::CalculateStaticId((const GUID *)v3);
  if ( v7 < 0 )
    goto LABEL_17;
LABEL_18:
  ATL::CStringData::Release((ATL::CStringData *)(v34 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v12 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v33 - 12));
  return (unsigned int)v7;
}

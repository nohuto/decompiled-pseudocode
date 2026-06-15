/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800D3F6C
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x1800D0510 (AudioSessionManagerGetExistingSession.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180003DD8 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006A00 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180006C50 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180018390 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x1800188A0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002BB40 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x1800C6478 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800CACA4 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800D31E4 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800D3790 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800D4508 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionInstanceId::Initialize(CAudioSessionInstanceId *this, const unsigned __int16 *a2)
{
  CAudioSessionInstanceId *v3; // r14
  int v4; // edi
  __int64 v5; // rax
  char *v6; // rdx
  volatile signed __int32 *v7; // rcx
  int *v8; // r15
  volatile signed __int32 *v9; // rbx
  __int64 v10; // r8
  char *v11; // rdx
  volatile signed __int32 *v12; // rcx
  int *v13; // r15
  volatile signed __int32 *v14; // rbx
  __int64 v15; // r8
  char *v16; // rdx
  volatile signed __int32 *v17; // rcx
  int *v18; // r15
  volatile signed __int32 *v19; // rbx
  __int64 v20; // r8
  __int64 *v21; // rax
  bool v22; // bl
  __int64 v23; // rdx
  int *v25; // rbx
  __int64 v26; // r8
  unsigned __int16 *v27; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 *v28; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 *v29; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v31; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v32; // [rsp+48h] [rbp-30h] BYREF
  int v34; // [rsp+88h] [rbp+10h] BYREF
  __int64 v35; // [rsp+90h] [rbp+18h] BYREF
  __int64 v36; // [rsp+98h] [rbp+20h] BYREF

  v3 = this;
  LODWORD(v35) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v29, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v28, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v27, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v36, (__int64)&ATL::g_strmgr);
  v4 = 0;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v36, a2, v5);
  }
  catch ( ATL::CAtlException *v31 )
  {
    v25 = (int *)v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      _o__resetstkoflw();
    v34 = *v25;
    v4 = v34;
    if ( v34 < 0 )
      goto LABEL_36;
    v3 = this;
  }
  v34 = 0;
  v6 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  &v36,
                  &v35,
                  v26,
                  &v34);
  v7 = (volatile signed __int32 *)(v6 - 24);
  v8 = (int *)(v29 - 12);
  if ( v6 - 24 != (char *)(v29 - 12) )
  {
    if ( v8[4] >= 0 && *(_QWORD *)v7 == *(_QWORD *)v8 )
    {
      v9 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v7);
      ATL::CStringData::Release((ATL::CStringData *)v8);
      v29 = (unsigned __int16 *)(v9 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v29, v6, *((_DWORD *)v6 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_14;
  v11 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v36,
                   &v35,
                   v10,
                   &v34);
  v12 = (volatile signed __int32 *)(v11 - 24);
  v13 = (int *)(v28 - 12);
  if ( v11 - 24 != (char *)(v28 - 12) )
  {
    if ( v13[4] >= 0 && *(_QWORD *)v12 == *(_QWORD *)v13 )
    {
      v14 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v12);
      ATL::CStringData::Release((ATL::CStringData *)v13);
      v28 = (unsigned __int16 *)(v14 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v28, v11, *((_DWORD *)v11 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_14;
  v16 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v36,
                   &v35,
                   v15,
                   &v34);
  v17 = (volatile signed __int32 *)(v16 - 24);
  v18 = (int *)(v27 - 12);
  if ( v16 - 24 != (char *)(v27 - 12) )
  {
    if ( v18[4] >= 0 && *(_QWORD *)v17 == *(_QWORD *)v18 )
    {
      v19 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v17);
      ATL::CStringData::Release((ATL::CStringData *)v18);
      v27 = (unsigned __int16 *)(v19 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v27, v16, *((_DWORD *)v16 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_14;
  v21 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v36,
          &v30,
          v20,
          &v34);
  v22 = 1;
  LODWORD(v35) = 1;
  if ( !ATL::operator!=((__int64)v21, v23) )
    v22 = v34 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v30 - 24));
  if ( v22 )
  {
LABEL_14:
    v4 = -2147467259;
LABEL_36:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 790, v4);
    goto LABEL_37;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v29);
    CAudioIdentifier::UnescapeIdentifierString(&v28);
    CAudioIdentifier::UnescapeIdentifierString(&v27);
  }
  catch ( ATL::CAtlException *v32 )
  {
    v34 = *(_DWORD *)v32;
    v3 = this;
    v4 = v34;
  }
  if ( v4 < 0 )
    goto LABEL_36;
  v4 = CAudioEndpointId::Initialize(v3, v29);
  if ( v4 < 0 )
    goto LABEL_36;
  v4 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 8), v28);
  if ( v4 < 0 )
    goto LABEL_36;
  v4 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 56), v27);
  if ( v4 < 0 )
    goto LABEL_36;
  v4 = CAudioSessionInstanceId::CalculateStaticId(v3);
  if ( v4 < 0 )
    goto LABEL_36;
LABEL_37:
  ATL::CStringData::Release((ATL::CStringData *)(v36 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 12));
  return (unsigned int)v4;
}

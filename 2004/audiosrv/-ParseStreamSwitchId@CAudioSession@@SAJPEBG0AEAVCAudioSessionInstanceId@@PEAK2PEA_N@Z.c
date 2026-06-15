/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800CA564
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800D1320 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180004278 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800070F0 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002C1C0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x1800C7108 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800CB934 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800D4854 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800D5198 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSession::ParseStreamSwitchId(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6)
{
  int v7; // edi
  __int64 v8; // rax
  char *v9; // rdx
  volatile signed __int32 *v10; // rcx
  int *v11; // r14
  volatile signed __int32 *v12; // rbx
  __int64 v13; // r8
  char *v14; // rdx
  volatile signed __int32 *v15; // rcx
  int *v16; // r14
  volatile signed __int32 *v17; // rbx
  __int64 v18; // r8
  char *v19; // rdx
  volatile signed __int32 *v20; // rcx
  int *v21; // r14
  volatile signed __int32 *v22; // rbx
  __int64 v23; // r8
  char *v24; // rdx
  volatile signed __int32 *v25; // rcx
  int *v26; // r14
  volatile signed __int32 *v27; // rbx
  __int64 v28; // r8
  __int64 v29; // rax
  bool v30; // bl
  __int64 v31; // rdx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  int *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // [rsp+20h] [rbp-78h] BYREF
  __int64 v39; // [rsp+28h] [rbp-70h] BYREF
  wchar_t *v40; // [rsp+30h] [rbp-68h] BYREF
  wchar_t *v41; // [rsp+38h] [rbp-60h] BYREF
  wchar_t *String; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int16 *v43; // [rsp+48h] [rbp-50h] BYREF
  __int64 v44; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v45; // [rsp+58h] [rbp-40h] BYREF
  ATL::CAtlException *v46; // [rsp+60h] [rbp-38h] BYREF
  int v48; // [rsp+A8h] [rbp+10h] BYREF
  CAudioSessionInstanceId *v49; // [rsp+B0h] [rbp+18h]
  unsigned int *v50; // [rsp+B8h] [rbp+20h]

  v50 = a4;
  v49 = a3;
  LODWORD(v38) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v39, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v43, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&String, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v41, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v40, (__int64)&ATL::g_strmgr);
  v7 = 0;
  if ( a2 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
  }
  else
  {
    LODWORD(v8) = 0;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v39, a2, v8);
  }
  catch ( ATL::CAtlException *v45 )
  {
    v36 = (int *)v45;
    if ( *(_DWORD *)v45 == -1073741571 )
      _o__resetstkoflw();
    v48 = *v36;
    v7 = v48;
    if ( v48 < 0 )
      goto LABEL_35;
  }
  v48 = 0;
  v9 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v39,
                   &v38,
                   v37,
                   &v48);
  v10 = (volatile signed __int32 *)(v9 - 24);
  v11 = (int *)(v43 - 12);
  if ( v9 - 24 != (char *)(v43 - 12) )
  {
    if ( v11[4] >= 0 && *(_QWORD *)v10 == *(_QWORD *)v11 )
    {
      v12 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v10);
      ATL::CStringData::Release((ATL::CStringData *)v11);
      v43 = (unsigned __int16 *)(v12 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v43, v9, *((_DWORD *)v9 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 24));
  if ( v48 == -1 )
    goto LABEL_34;
  v14 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v39,
                    &v38,
                    v13,
                    &v48);
  v15 = (volatile signed __int32 *)(v14 - 24);
  v16 = (int *)(String - 12);
  if ( v14 - 24 != (char *)(String - 12) )
  {
    if ( v16[4] >= 0 && *(_QWORD *)v15 == *(_QWORD *)v16 )
    {
      v17 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v15);
      ATL::CStringData::Release((ATL::CStringData *)v16);
      String = (wchar_t *)(v17 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&String, v14, *((_DWORD *)v14 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 24));
  if ( v48 == -1 )
    goto LABEL_34;
  v19 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v39,
                    &v38,
                    v18,
                    &v48);
  v20 = (volatile signed __int32 *)(v19 - 24);
  v21 = (int *)(v41 - 12);
  if ( v19 - 24 != (char *)(v41 - 12) )
  {
    if ( v21[4] >= 0 && *(_QWORD *)v20 == *(_QWORD *)v21 )
    {
      v22 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v20);
      ATL::CStringData::Release((ATL::CStringData *)v21);
      v41 = (wchar_t *)(v22 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v41, v19, *((_DWORD *)v19 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 24));
  if ( v48 == -1 )
    goto LABEL_34;
  v24 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v39,
                    &v38,
                    v23,
                    &v48);
  v25 = (volatile signed __int32 *)(v24 - 24);
  v26 = (int *)(v40 - 12);
  if ( v24 - 24 != (char *)(v40 - 12) )
  {
    if ( v26[4] >= 0 && *(_QWORD *)v25 == *(_QWORD *)v26 )
    {
      v27 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v25);
      ATL::CStringData::Release((ATL::CStringData *)v26);
      v40 = (wchar_t *)(v27 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v40, v24, *((_DWORD *)v24 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 24));
  if ( v48 == -1 )
    goto LABEL_34;
  v29 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v39,
          &v44,
          v28,
          &v48);
  v30 = 1;
  LODWORD(v38) = 1;
  if ( !ATL::operator!=(v29, v31) )
    v30 = v48 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v44 - 24));
  if ( v30 )
  {
LABEL_34:
    v7 = -2147467259;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v43);
      CAudioIdentifier::UnescapeIdentifierString(&String);
      CAudioIdentifier::UnescapeIdentifierString(&v41);
      CAudioIdentifier::UnescapeIdentifierString(&v40);
    }
    catch ( ATL::CAtlException *v46 )
    {
      v48 = *(_DWORD *)v46;
      v7 = v48;
    }
    if ( v7 >= 0 )
    {
      v7 = CAudioSessionInstanceId::Initialize(v49, a1, v43);
      if ( v7 >= 0 )
      {
        v33 = wcstoul(String, 0LL, 10);
        *v50 = v33;
        v34 = wcstoul(v41, 0LL, 10);
        *a5 = v34;
        v35 = wcstoul(v40, 0LL, 10);
        *a6 = v35 != 0;
        goto LABEL_36;
      }
    }
  }
LABEL_35:
  AudSrvTraceLoggingErrorHelper("CAudioSession::ParseStreamSwitchId", 631, v7);
LABEL_36:
  ATL::CStringData::Release((ATL::CStringData *)(v40 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v41 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v43 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v39 - 24));
  return (unsigned int)v7;
}

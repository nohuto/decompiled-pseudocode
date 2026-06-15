/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800D4360
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800D4794 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800D4B3C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180004278 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800070F0 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002C1C0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800CB874 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x1800D3AE4 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800D3C40 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, const unsigned __int16 *a2)
{
  CAppInstanceId *v3; // r12
  unsigned int v4; // esi
  unsigned int v5; // r14d
  __int64 v6; // rax
  char *v7; // rdx
  volatile signed __int32 *v8; // rcx
  wchar_t *v9; // rdi
  int *v10; // rbx
  volatile signed __int32 *v11; // rdi
  __int64 v12; // r8
  char *v13; // rdx
  volatile signed __int32 *v14; // rcx
  wchar_t *v15; // rbx
  int *v16; // r15
  volatile signed __int32 *v17; // rbx
  __int64 v18; // r8
  __int64 *v19; // rax
  unsigned __int16 *v20; // rcx
  char v21; // r15
  int *v23; // rbx
  __int64 v24; // r8
  wchar_t *v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  wchar_t *EndPtr; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v29; // [rsp+40h] [rbp-48h] BYREF
  int v31; // [rsp+98h] [rbp+10h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+18h] BYREF
  wchar_t *String; // [rsp+A8h] [rbp+20h] BYREF

  v3 = this;
  v4 = 0;
  LODWORD(v32) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v26, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v25, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&String, (__int64)&ATL::g_strmgr);
  v5 = 0;
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
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v26, a2, v6);
  }
  catch ( ATL::CAtlException *v29 )
  {
    v23 = (int *)v29;
    if ( *(_DWORD *)v29 == -1073741571 )
      _o__resetstkoflw();
    v31 = *v23;
    v5 = v31;
    v4 = 0;
    if ( v31 < 0 )
    {
      v9 = v25;
      goto LABEL_32;
    }
    v3 = this;
  }
  v31 = 0;
  v7 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  &v26,
                  &v32,
                  v24,
                  &v31);
  v8 = (volatile signed __int32 *)(v7 - 24);
  v9 = v25;
  v10 = (int *)(v25 - 12);
  if ( v7 - 24 != (char *)(v25 - 12) )
  {
    if ( v10[4] >= 0 && *(_QWORD *)v8 == *(_QWORD *)v10 )
    {
      v11 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8);
      ATL::CStringData::Release((ATL::CStringData *)v10);
      v9 = (wchar_t *)(v11 + 6);
      v25 = v9;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v25, v7, *((_DWORD *)v7 - 4));
      v9 = v25;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v32 - 24));
  if ( v31 == -1 )
  {
    v5 = -2147467259;
LABEL_32:
    v15 = String;
    goto LABEL_33;
  }
  v13 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v26,
                   &v32,
                   v12,
                   &v31);
  v14 = (volatile signed __int32 *)(v13 - 24);
  v15 = String;
  v16 = (int *)(String - 12);
  if ( v13 - 24 != (char *)(String - 12) )
  {
    if ( v16[4] >= 0 && *(_QWORD *)v14 == *(_QWORD *)v16 )
    {
      v17 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v14);
      ATL::CStringData::Release((ATL::CStringData *)v16);
      v15 = (wchar_t *)(v17 + 6);
      String = v15;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&String, v13, *((_DWORD *)v13 - 4));
      v15 = String;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v32 - 24));
  if ( v31 == -1 )
    goto LABEL_21;
  v19 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v26,
          &v27,
          v18,
          &v31);
  LODWORD(v32) = 1;
  if ( ATL::operator!=(v20, v19) || (v21 = 0, v31 != -1) )
    v21 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  if ( v21 )
  {
LABEL_21:
    v5 = -2147467259;
LABEL_33:
    AudSrvTraceLoggingErrorHelper("CAppInstanceId::Initialize", 633, v5);
    goto LABEL_34;
  }
  if ( *((_DWORD *)v15 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&String) == 35 )
    *((_DWORD *)v3 + 2) = 1;
  else
    v4 = wcstoul(v15, &EndPtr, 10);
  *(_DWORD *)v3 = v4;
  *((_DWORD *)v3 + 1) = wcstoul(v9, &EndPtr, 10);
LABEL_34:
  ATL::CStringData::Release((ATL::CStringData *)(v15 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v9 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  return v5;
}

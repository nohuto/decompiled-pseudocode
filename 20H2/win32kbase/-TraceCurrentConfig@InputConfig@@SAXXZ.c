/*
 * XREFs of ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C000B748
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C000E3D8 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01250F0 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C000A89C (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$01@@4@Z @ 0x1C01AD168 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$01@@U2@@-$_tlgWriteTemplate@$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$07@@U1@U3@U1@U?$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$07@@353AEBU?$_tlgWrapSz@D@@33333333@Z @ 0x1C01AD230 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$01@@U2@U-$_tlgWrapperByVal@$0.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01ADE1C (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void InputConfig::TraceCurrentConfig(void)
{
  CInputConfig *v0; // rsi
  __int64 v1; // r8
  __int64 v2; // r9
  CInputConfig *v3; // rbx
  CInputConfig *i; // r14
  _QWORD **v5; // rbx
  _QWORD **v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r9
  _QWORD *j; // rdi
  _DWORD *v10; // rbx
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // r8d
  int v16; // [rsp+C8h] [rbp-80h] BYREF
  int v17; // [rsp+CCh] [rbp-7Ch] BYREF
  int v18; // [rsp+D0h] [rbp-78h] BYREF
  int v19; // [rsp+D4h] [rbp-74h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-70h] BYREF
  int v21; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-60h] BYREF
  int v23; // [rsp+F0h] [rbp-58h] BYREF
  int v24; // [rsp+F4h] [rbp-54h] BYREF
  int v25; // [rsp+F8h] [rbp-50h] BYREF
  int v26; // [rsp+FCh] [rbp-4Ch] BYREF
  int v27; // [rsp+100h] [rbp-48h] BYREF
  int v28; // [rsp+104h] [rbp-44h] BYREF
  int v29; // [rsp+108h] [rbp-40h] BYREF
  int v30; // [rsp+10Ch] [rbp-3Ch] BYREF
  int v31; // [rsp+110h] [rbp-38h] BYREF
  __int64 v32; // [rsp+118h] [rbp-30h] BYREF
  __int64 v33; // [rsp+120h] [rbp-28h] BYREF
  __int64 v34; // [rsp+128h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+138h] [rbp-10h] BYREF
  __int64 *v36; // [rsp+158h] [rbp+10h]
  int v37; // [rsp+160h] [rbp+18h]
  int v38; // [rsp+164h] [rbp+1Ch]
  int *v39; // [rsp+168h] [rbp+20h]
  int v40; // [rsp+170h] [rbp+28h]
  int v41; // [rsp+174h] [rbp+2Ch]
  int *v42; // [rsp+178h] [rbp+30h]
  int v43; // [rsp+180h] [rbp+38h]
  int v44; // [rsp+184h] [rbp+3Ch]
  int *v45; // [rsp+188h] [rbp+40h]
  int v46; // [rsp+190h] [rbp+48h]
  int v47; // [rsp+194h] [rbp+4Ch]

  v0 = gpInputConfig;
  if ( gpInputConfig )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v3 = *(CInputConfig **)v0;
    for ( i = **(CInputConfig ***)v0; v3 != v0; i = *(CInputConfig **)i )
    {
      v5 = (_QWORD **)((char *)v3 + 16);
      if ( !v5 )
        break;
      if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 2LL, v1, v2) )
      {
        v12 = *((unsigned __int8 *)v5 + 1416);
        v47 = 0;
        v44 = 0;
        v41 = 0;
        v38 = 0;
        v17 = v12;
        v16 = *((_DWORD *)v5 + 355);
        v18 = *((_DWORD *)v5 + 2);
        v22 = (__int64)*v5;
        v45 = &v17;
        v42 = &v16;
        v39 = &v18;
        v36 = &v22;
        v46 = 4;
        v43 = 4;
        v40 = 4;
        v37 = 8;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C02190CC, 0, 0, 6u, &v35);
      }
      v6 = v5 + 178;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
      for ( j = v5[178]; j != v6; j = (_QWORD *)*j )
      {
        v10 = j + 2;
        if ( j == (_QWORD *)-16LL )
          break;
        v11 = *((unsigned int *)j + 8);
        if ( (v11 & 2) != 0 )
        {
          if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 2LL, v11, v8) )
          {
            v13 = *((_DWORD *)j + 45);
            v18 = *((_DWORD *)j + 53);
            v23 = *((_DWORD *)j + 52);
            v24 = *((_DWORD *)j + 51);
            v25 = *((_DWORD *)j + 50);
            v26 = *((_DWORD *)j + 49);
            v27 = *((_DWORD *)j + 48);
            v28 = *((_DWORD *)j + 47);
            v29 = *((_DWORD *)j + 46);
            v32 = (__int64)InputTraceLogging::OrientationToString(v13);
            v30 = *((_DWORD *)j + 15);
            v33 = *(_QWORD *)((char *)j + 52);
            v31 = *((_DWORD *)j + 12);
            v34 = j[5];
            LOWORD(v16) = *((_WORD *)j + 19);
            LOWORD(v17) = *((_WORD *)j + 18);
            LODWORD(v20) = *((_DWORD *)j + 7);
            HIDWORD(v20) = *((_DWORD *)j + 6);
            v21 = *((_DWORD *)j + 5);
            LODWORD(v22) = *v10;
            v19 = v14;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (int)&dword_1C0244A70,
              (__int64)&v22,
              (__int64)&v21,
              (__int64)&v20 + 4,
              (__int64)&v20,
              (__int64)&v19,
              (__int64)&v17,
              (__int64)&v16,
              (__int64)&v34,
              (__int64)&v31,
              (__int64)&v33,
              (__int64)&v30,
              (__int64)&v32,
              (__int64)&v29,
              (__int64)&v28,
              (__int64)&v27,
              (__int64)&v26,
              (__int64)&v25,
              (__int64)&v24,
              (__int64)&v23,
              (__int64)&v18);
          }
        }
        else if ( (unsigned int)dword_1C0244A70 > 4 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 2LL, v11, v8) )
          {
            LOWORD(v17) = *((_WORD *)j + 19);
            LOWORD(v16) = *((_WORD *)j + 18);
            v21 = *((_DWORD *)j + 7);
            v20 = *(_QWORD *)((char *)j + 20);
            v19 = *v10;
            LODWORD(v22) = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
              (unsigned int)&dword_1C0244A70,
              (unsigned int)&unk_1C0218F29,
              v11,
              v8,
              (__int64)&v19,
              (__int64)&v20,
              (__int64)&v20 + 4,
              (__int64)&v21,
              (__int64)&v22,
              (__int64)&v16,
              (__int64)&v17);
          }
        }
        if ( *((_BYTE *)j + 504) )
          InputTraceLogging::InputConfig::DisplayPath(
            (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(j + 64),
            v7,
            v11,
            v8);
      }
      ExReleaseResourceLite(CInputConfig::slock);
      KeLeaveCriticalRegion();
      v3 = i;
    }
    ExReleaseResourceLite(CInputConfig::slock);
    KeLeaveCriticalRegion();
  }
}

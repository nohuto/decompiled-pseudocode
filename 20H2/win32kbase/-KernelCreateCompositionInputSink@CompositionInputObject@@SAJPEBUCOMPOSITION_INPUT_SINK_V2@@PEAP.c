/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C0030C84
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C000212C (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C0030018 (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C003468C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0057640 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C0060F80 (UserIsCurrentProcessDwm.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0094F70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C009B53C (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U2@U2@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U3@U1@U2@U2@U1@U1@U4@U?$_tlgWrapSz@G@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@34433AEBU?$_tlgWrapperByRef@$0BA@@@5344336534433653443365344336AEBU?$_tlgWrapSz@G@@7@Z @ 0x1C01F4C40 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U2@U2@U1@U1@U-.c)
 *     ?CompositionInputQueueTypeToString@InputTraceLogging@@CAPEBDW4CompositionInputQueueType@@@Z @ 0x1C01F5148 (-CompositionInputQueueTypeToString@InputTraceLogging@@CAPEBDW4CompositionInputQueueType@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::KernelCreateCompositionInputSink(
        const struct COMPOSITION_INPUT_SINK_V2 *a1,
        void **a2)
{
  _OWORD *v2; // r8
  __int64 v3; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  int v13; // ebx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rcx
  unsigned int v17; // edi
  int v18; // eax
  PVOID v19; // rsi
  __int64 v20; // r9
  _OWORD *v21; // rcx
  __int64 v22; // rdx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  HANDLE v37; // rdi
  __int64 v39; // r8
  __int64 v40; // r9
  PVOID v41; // r14
  const wchar_t *v42; // rax
  const wchar_t *v43; // rax
  PVOID Object; // [rsp+160h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+168h] [rbp-78h] BYREF
  int v46; // [rsp+170h] [rbp-70h] BYREF
  int v47; // [rsp+174h] [rbp-6Ch] BYREF
  int v48; // [rsp+178h] [rbp-68h] BYREF
  int v49; // [rsp+17Ch] [rbp-64h] BYREF
  int v50; // [rsp+180h] [rbp-60h] BYREF
  int v51; // [rsp+184h] [rbp-5Ch] BYREF
  int v52; // [rsp+188h] [rbp-58h] BYREF
  int v53; // [rsp+18Ch] [rbp-54h] BYREF
  int v54; // [rsp+190h] [rbp-50h] BYREF
  _DWORD v55[3]; // [rsp+194h] [rbp-4Ch] BYREF
  __int64 v56; // [rsp+1A0h] [rbp-40h] BYREF
  __int64 v57; // [rsp+1A8h] [rbp-38h] BYREF
  __int64 v58; // [rsp+1B0h] [rbp-30h] BYREF
  __int64 v59; // [rsp+1B8h] [rbp-28h] BYREF
  __int64 v60; // [rsp+1C0h] [rbp-20h] BYREF
  __int64 v61; // [rsp+1C8h] [rbp-18h] BYREF
  __int64 v62; // [rsp+1D0h] [rbp-10h] BYREF
  __int64 v63; // [rsp+1D8h] [rbp-8h] BYREF
  __int64 v64; // [rsp+1E0h] [rbp+0h] BYREF
  __int64 v65; // [rsp+1E8h] [rbp+8h] BYREF
  __int64 v66; // [rsp+1F0h] [rbp+10h] BYREF
  __int64 v67; // [rsp+1F8h] [rbp+18h] BYREF
  __int64 v68; // [rsp+200h] [rbp+20h] BYREF
  __int64 v69; // [rsp+208h] [rbp+28h] BYREF
  __int64 v70; // [rsp+210h] [rbp+30h] BYREF
  __int64 v71; // [rsp+218h] [rbp+38h] BYREF
  __int64 v72; // [rsp+220h] [rbp+40h] BYREF
  __int64 v73; // [rsp+228h] [rbp+48h] BYREF
  __int64 v74; // [rsp+230h] [rbp+50h] BYREF
  __int64 v75; // [rsp+238h] [rbp+58h] BYREF
  __int64 v76; // [rsp+240h] [rbp+60h] BYREF
  __int64 v77; // [rsp+248h] [rbp+68h] BYREF
  __int64 v78; // [rsp+250h] [rbp+70h] BYREF
  __int64 v79; // [rsp+258h] [rbp+78h] BYREF
  __int64 v80; // [rsp+260h] [rbp+80h] BYREF
  __int64 v81; // [rsp+268h] [rbp+88h] BYREF
  __int64 v82; // [rsp+270h] [rbp+90h] BYREF
  __int64 v83; // [rsp+278h] [rbp+98h] BYREF
  _DWORD v84[2]; // [rsp+280h] [rbp+A0h] BYREF
  __int64 v85; // [rsp+288h] [rbp+A8h]
  __int64 v86; // [rsp+290h] [rbp+B0h]
  int v87; // [rsp+298h] [rbp+B8h]
  int v88; // [rsp+29Ch] [rbp+BCh]
  PVOID v89; // [rsp+2A0h] [rbp+C0h]
  __int64 v90; // [rsp+2A8h] [rbp+C8h]
  _BYTE v91[304]; // [rsp+2B0h] [rbp+D0h] BYREF
  _DWORD v92[2]; // [rsp+3E0h] [rbp+200h] BYREF
  unsigned int v93; // [rsp+3E8h] [rbp+208h]
  __int64 v94; // [rsp+3F0h] [rbp+210h]
  int v95; // [rsp+3F8h] [rbp+218h]
  int v96; // [rsp+3FCh] [rbp+21Ch]
  __int64 v97; // [rsp+400h] [rbp+220h]
  __int64 v98; // [rsp+408h] [rbp+228h]
  char v99; // [rsp+410h] [rbp+230h] BYREF
  unsigned int v100; // [rsp+420h] [rbp+240h]
  __int64 v101; // [rsp+428h] [rbp+248h]
  int v102; // [rsp+430h] [rbp+250h]
  int v103; // [rsp+434h] [rbp+254h]
  __int64 v104; // [rsp+438h] [rbp+258h]
  __int64 v105; // [rsp+440h] [rbp+260h]
  char v106; // [rsp+448h] [rbp+268h] BYREF
  unsigned int v107; // [rsp+458h] [rbp+278h]
  __int64 v108; // [rsp+460h] [rbp+280h]
  int v109; // [rsp+468h] [rbp+288h]
  int v110; // [rsp+46Ch] [rbp+28Ch]
  __int64 v111; // [rsp+470h] [rbp+290h]
  __int64 v112; // [rsp+478h] [rbp+298h]
  char v113; // [rsp+480h] [rbp+2A0h] BYREF
  unsigned int v114; // [rsp+490h] [rbp+2B0h]
  __int64 v115; // [rsp+498h] [rbp+2B8h]
  int v116; // [rsp+4A0h] [rbp+2C0h]
  int v117; // [rsp+4A4h] [rbp+2C4h]
  __int64 v118; // [rsp+4A8h] [rbp+2C8h]
  __int64 v119; // [rsp+4B0h] [rbp+2D0h]
  char v120; // [rsp+4B8h] [rbp+2D8h] BYREF
  unsigned int v121; // [rsp+4C8h] [rbp+2E8h]
  __int64 v122; // [rsp+4D0h] [rbp+2F0h]
  int v123; // [rsp+4D8h] [rbp+2F8h]
  int v124; // [rsp+4DCh] [rbp+2FCh]
  __int64 v125; // [rsp+4E0h] [rbp+300h]
  __int64 v126; // [rsp+4E8h] [rbp+308h]
  char v127; // [rsp+4F0h] [rbp+310h] BYREF
  char v128; // [rsp+500h] [rbp+320h]

  Handle = (HANDLE)-1LL;
  v2 = v92;
  v3 = 2LL;
  do
  {
    v5 = *((_OWORD *)a1 + 1);
    *v2 = *(_OWORD *)a1;
    v6 = *((_OWORD *)a1 + 2);
    v2[1] = v5;
    v7 = *((_OWORD *)a1 + 3);
    v2[2] = v6;
    v8 = *((_OWORD *)a1 + 4);
    v2[3] = v7;
    v9 = *((_OWORD *)a1 + 5);
    v2[4] = v8;
    v10 = *((_OWORD *)a1 + 6);
    v2[5] = v9;
    v11 = *((_OWORD *)a1 + 7);
    a1 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 128);
    v2[6] = v10;
    v2 += 8;
    *(v2 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = *((_QWORD *)a1 + 4);
  v13 = 0;
  v14 = *(_OWORD *)a1;
  Object = 0LL;
  v15 = *((_OWORD *)a1 + 1);
  *v2 = v14;
  v2[1] = v15;
  *((_QWORD *)v2 + 4) = v12;
  if ( v92[0] != 232 && (v92[0] != 296 || v121 > 4) || v93 > 4 || v100 > 4 || v107 > 4 || v114 > 4 )
    v13 = -1073741811;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v16 = 0LL;
    v17 = 3;
  }
  else
  {
    v16 = 3221225472LL;
    v17 = -1073741824;
  }
  if ( v13 < 0 )
  {
    v37 = Handle;
LABEL_35:
    if ( v37 != (HANDLE)-1LL )
      NtClose(v37);
    return (unsigned int)v13;
  }
  v18 = UserAllocDefaultCompositionSecurityDescriptor(v16, &Object);
  v19 = Object;
  v13 = v18;
  if ( v18 >= 0 )
  {
    v84[1] = 0;
    v88 = 0;
    v85 = 0LL;
    v87 = 0;
    v86 = 0LL;
    v90 = 0LL;
    v84[0] = 48;
    v89 = Object;
    KeEnterCriticalRegion();
    v21 = v91;
    v22 = 2LL;
    v23 = v92;
    do
    {
      v24 = v23[1];
      *v21 = *v23;
      v25 = v23[2];
      v21[1] = v24;
      v26 = v23[3];
      v21[2] = v25;
      v27 = v23[4];
      v21[3] = v26;
      v28 = v23[5];
      v21[4] = v27;
      v29 = v23[6];
      v21[5] = v28;
      v30 = v23[7];
      v23 += 8;
      v21[6] = v29;
      v21 += 8;
      *(v21 - 1) = v30;
      --v22;
    }
    while ( v22 );
    v31 = *v23;
    LOBYTE(v20) = 1;
    v32 = v23[1];
    v33 = *((_QWORD *)v23 + 4);
    *v21 = v31;
    v21[1] = v32;
    *((_QWORD *)v21 + 4) = v33;
    v13 = CompositionObject::Create(v21, v84, v17, v20, 2, 200, CompositionInputObject::ObjectInit, v91, &Handle);
    KeLeaveCriticalRegion();
    if ( v13 >= 0 )
    {
      v37 = Handle;
      *a2 = Handle;
      if ( !(unsigned __int8)InputTraceLogging::Enabled(0LL, v34, v35, v36) )
        goto LABEL_18;
      Object = 0LL;
      if ( (int)CompositionInputObject::ResolveHandle(v37, 1u, 1, (struct CompositionInputObject **)&Object) >= 0 )
      {
        v41 = Object;
        if ( (unsigned int)dword_1C0244A70 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 4LL, v39, v40) )
        {
          v42 = L"FallbackInteraction";
          if ( (v128 & 2) == 0 )
            v42 = &word_1C0209C50;
          *(_QWORD *)&v55[1] = v42;
          v43 = L"Implicit";
          if ( (v128 & 1) == 0 )
            v43 = &word_1C0209C50;
          v56 = (__int64)v43;
          v57 = (__int64)&v127;
          v58 = v126;
          v59 = v125;
          v50 = v124;
          v46 = v123;
          v60 = v122;
          v61 = InputTraceLogging::CompositionInputQueueTypeToString(v121);
          v62 = (__int64)&v120;
          v63 = v119;
          v64 = v118;
          v47 = v117;
          v48 = v116;
          v65 = v115;
          v66 = InputTraceLogging::CompositionInputQueueTypeToString(v114);
          v67 = (__int64)&v113;
          v68 = v112;
          v69 = v111;
          v49 = v110;
          v55[0] = v109;
          v70 = v108;
          v71 = InputTraceLogging::CompositionInputQueueTypeToString(v107);
          v72 = (__int64)&v106;
          v73 = v105;
          v74 = v104;
          v51 = v103;
          v52 = v102;
          v75 = v101;
          v76 = InputTraceLogging::CompositionInputQueueTypeToString(v100);
          v77 = (__int64)&v99;
          v78 = v98;
          v79 = v97;
          v53 = v96;
          v54 = v95;
          v80 = v94;
          v81 = InputTraceLogging::CompositionInputQueueTypeToString(v93);
          LODWORD(Object) = v92[1];
          v82 = (__int64)v37;
          v83 = (__int64)v41;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
            (int)&dword_1C0244A70,
            (int)&dword_1C021A6F3,
            (__int64)&v83,
            (__int64)&v82,
            (__int64)&Object,
            (__int64)&v81,
            (__int64)&v80,
            (__int64)&v54,
            (__int64)&v53,
            (__int64)&v79,
            (__int64)&v78,
            (__int64)&v77,
            (__int64)&v76,
            (__int64)&v75,
            (__int64)&v52,
            (__int64)&v51,
            (__int64)&v74,
            (__int64)&v73,
            (__int64)&v72,
            (__int64)&v71,
            (__int64)&v70,
            (__int64)v55,
            (__int64)&v49,
            (__int64)&v69,
            (__int64)&v68,
            (__int64)&v67,
            (__int64)&v66,
            (__int64)&v65,
            (__int64)&v48,
            (__int64)&v47,
            (__int64)&v64,
            (__int64)&v63,
            (__int64)&v62,
            (__int64)&v61,
            (__int64)&v60,
            (__int64)&v46,
            (__int64)&v50,
            (__int64)&v59,
            (__int64)&v58,
            (__int64)&v57,
            (__int64)&v56,
            (__int64)&v55[1]);
        }
        ObfDereferenceObject(v41);
      }
    }
  }
  v37 = Handle;
LABEL_18:
  if ( v19 )
  {
    Win32FreePool(v19);
    v37 = Handle;
  }
  if ( v13 < 0 )
    goto LABEL_35;
  return (unsigned int)v13;
}

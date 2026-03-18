/*
 * XREFs of ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801D6C2C
 * Callers:
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x1801D54C0 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x1801D64F0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1801D6810 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x180023D60 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18003943C (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18009A50C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801C7620 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444444444444444@Z @ 0x1801D4F14 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_1801D4F14.c)
 */

__int64 __fastcall CManipulation::_SendUpdateToRenderThread(
        CManipulation *this,
        char a2,
        const struct D2DVector3 *a3,
        const struct D2DVector3 *a4)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD *v7; // rdx
  __int128 v8; // xmm0
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  CComposition *v11; // rbx
  int ManipulationManager; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  struct CManipulationManager *v15; // rbx
  __int64 v16; // rbx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  unsigned int v28; // [rsp+20h] [rbp-1C0h]
  struct CManipulationManager *v29; // [rsp+160h] [rbp-80h] BYREF
  struct IMessageCallSendHost *v30; // [rsp+168h] [rbp-78h] BYREF
  int v31; // [rsp+170h] [rbp-70h] BYREF
  int v32; // [rsp+174h] [rbp-6Ch] BYREF
  int v33; // [rsp+178h] [rbp-68h] BYREF
  int v34; // [rsp+17Ch] [rbp-64h] BYREF
  int v35; // [rsp+180h] [rbp-60h] BYREF
  int v36; // [rsp+184h] [rbp-5Ch] BYREF
  int v37; // [rsp+188h] [rbp-58h] BYREF
  int v38; // [rsp+18Ch] [rbp-54h] BYREF
  int v39; // [rsp+190h] [rbp-50h] BYREF
  int v40; // [rsp+194h] [rbp-4Ch] BYREF
  int v41; // [rsp+198h] [rbp-48h] BYREF
  int v42; // [rsp+19Ch] [rbp-44h] BYREF
  int v43; // [rsp+1A0h] [rbp-40h] BYREF
  int v44; // [rsp+1A4h] [rbp-3Ch] BYREF
  int v45; // [rsp+1A8h] [rbp-38h] BYREF
  int v46; // [rsp+1ACh] [rbp-34h] BYREF
  int v47; // [rsp+1B0h] [rbp-30h] BYREF
  int v48; // [rsp+1B4h] [rbp-2Ch] BYREF
  int v49; // [rsp+1B8h] [rbp-28h] BYREF
  int v50; // [rsp+1BCh] [rbp-24h] BYREF
  int v51; // [rsp+1C0h] [rbp-20h] BYREF
  int v52; // [rsp+1C4h] [rbp-1Ch] BYREF
  int v53; // [rsp+1C8h] [rbp-18h] BYREF
  int v54; // [rsp+1CCh] [rbp-14h] BYREF
  int v55; // [rsp+1D0h] [rbp-10h] BYREF
  int v56; // [rsp+1D4h] [rbp-Ch] BYREF
  int v57; // [rsp+1D8h] [rbp-8h] BYREF
  int v58; // [rsp+1DCh] [rbp-4h] BYREF
  int v59; // [rsp+1E0h] [rbp+0h] BYREF
  int v60; // [rsp+1E4h] [rbp+4h] BYREF
  int v61; // [rsp+1E8h] [rbp+8h] BYREF
  int v62; // [rsp+1ECh] [rbp+Ch] BYREF
  int v63; // [rsp+1F0h] [rbp+10h] BYREF
  __int64 v64; // [rsp+1F8h] [rbp+18h] BYREF
  int v65; // [rsp+200h] [rbp+20h] BYREF
  int v66; // [rsp+204h] [rbp+24h] BYREF
  CManipulation *v67; // [rsp+208h] [rbp+28h] BYREF
  __int128 v68; // [rsp+210h] [rbp+30h]
  __int128 v69; // [rsp+220h] [rbp+40h]
  __int128 v70; // [rsp+230h] [rbp+50h]
  __int128 v71; // [rsp+240h] [rbp+60h]
  __int128 v72; // [rsp+250h] [rbp+70h]
  __int128 v73; // [rsp+260h] [rbp+80h]
  __int128 v74; // [rsp+270h] [rbp+90h]
  __int128 v75; // [rsp+280h] [rbp+A0h]
  __int128 v76; // [rsp+290h] [rbp+B0h]
  __int128 v77; // [rsp+2A0h] [rbp+C0h]
  __int128 v78; // [rsp+2B0h] [rbp+D0h]
  __int64 v79; // [rsp+2C0h] [rbp+E0h]
  _OWORD v80[4]; // [rsp+2D0h] [rbp+F0h] BYREF
  _BYTE v81[64]; // [rsp+310h] [rbp+130h] BYREF

  if ( a2 )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      a3,
      a4,
      (CManipulation *)((char *)this + 124),
      (struct D2DMatrix *)v81);
    D2DMatrixMultiply((struct D2DMatrix *)v80, (CManipulation *)((char *)this + 136), (const struct D2DMatrix *)v81);
    v5 = v80[1];
    v6 = v80[2];
    *v7 = v80[0];
    v7[1] = v5;
    v8 = v80[3];
    v7[2] = v6;
    v7[3] = v8;
  }
  if ( (unsigned int)dword_180342EF0 > 4 && (qword_180342F00 & 2) != 0 && (qword_180342F08 & 2) == qword_180342F08 )
  {
    v60 = *((_DWORD *)this + 111);
    v9 = *((_BYTE *)this + 252);
    v67 = this;
    v66 = (v9 >> 1) & 1;
    v10 = v9 & 1;
    v32 = *((_DWORD *)this + 58);
    v33 = *((_DWORD *)this + 62);
    v34 = *((_DWORD *)this + 61);
    v35 = *((_DWORD *)this + 60);
    v36 = *((_DWORD *)this + 57);
    v37 = *((_DWORD *)this + 49);
    v38 = *((_DWORD *)this + 48);
    v39 = *((_DWORD *)this + 47);
    v40 = *((_DWORD *)this + 46);
    v41 = *((_DWORD *)this + 45);
    v42 = *((_DWORD *)this + 44);
    v43 = *((_DWORD *)this + 43);
    v44 = *((_DWORD *)this + 42);
    v45 = *((_DWORD *)this + 41);
    v46 = *((_DWORD *)this + 40);
    v47 = *((_DWORD *)this + 39);
    v48 = *((_DWORD *)this + 38);
    v49 = *((_DWORD *)this + 37);
    v50 = *((_DWORD *)this + 36);
    v51 = *((_DWORD *)this + 35);
    v52 = *((_DWORD *)this + 34);
    v53 = *((_DWORD *)this + 56);
    v54 = *((_DWORD *)this + 55);
    v55 = *((_DWORD *)this + 54);
    v56 = *((_DWORD *)this + 53);
    v57 = *((_DWORD *)this + 52);
    v58 = *((_DWORD *)this + 51);
    v59 = *((_DWORD *)this + 50);
    v65 = *((_DWORD *)this + 30);
    v61 = *((_DWORD *)this + 26);
    v62 = *((_DWORD *)this + 25);
    v63 = *((_DWORD *)this + 24);
    LODWORD(v64) = *((_DWORD *)this + 20);
    LODWORD(v29) = *((_DWORD *)this + 19);
    LODWORD(v30) = *((_DWORD *)this + 18);
    v31 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_1802E7006,
      (__int64)a3,
      (__int64)a4,
      (__int64)&v67,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v64,
      (__int64)&v63,
      (__int64)&v62,
      (__int64)&v61,
      (__int64)&v65,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v66,
      (__int64)&v60);
  }
  v11 = (CComposition *)*((_QWORD *)this + 2);
  v29 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  ManipulationManager = CComposition::GetManipulationManager(v11, &v29);
  v14 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v28 = 313;
    goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  v15 = v29;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v29, &v30);
  v14 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v28 = 315;
    goto LABEL_16;
  }
  v16 = *((_QWORD *)v15 + 7);
  if ( v16 )
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v67 = this;
    v17 = *(_OWORD *)((char *)this + 72);
    v18 = *(_OWORD *)((char *)this + 88);
    v64 = v16;
    v68 = v17;
    v19 = *(_OWORD *)((char *)this + 104);
    v69 = v18;
    v20 = *(_OWORD *)((char *)this + 120);
    v70 = v19;
    v21 = *(_OWORD *)((char *)this + 136);
    v71 = v20;
    v22 = *(_OWORD *)((char *)this + 152);
    v72 = v21;
    v23 = *(_OWORD *)((char *)this + 168);
    v73 = v22;
    v74 = v23;
    v75 = *(_OWORD *)((char *)this + 184);
    v24 = *(_OWORD *)((char *)this + 216);
    v76 = *(_OWORD *)((char *)this + 200);
    v25 = *(_OWORD *)((char *)this + 232);
    v26 = *((_QWORD *)this + 31);
    v77 = v24;
    v78 = v25;
    v79 = v26;
    ManipulationManager = CoreUICallSend(v30, &v64, 1LL, 10LL, 0, &unk_1802CCE16);
    v14 = ManipulationManager;
    if ( ManipulationManager >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 504LL) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 504LL),
        0LL,
        0x4000LL);
      goto LABEL_17;
    }
    v28 = 327;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, ManipulationManager, v28, 0LL);
    goto LABEL_17;
  }
  v14 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147467259, 0x13Eu, 0LL);
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  return v14;
}

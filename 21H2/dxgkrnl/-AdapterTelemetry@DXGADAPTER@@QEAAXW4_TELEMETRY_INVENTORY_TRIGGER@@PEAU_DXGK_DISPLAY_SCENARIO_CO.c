/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC7F0
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C03043F0 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U2@U?$_tlgWrapSz@G@@U1@U3@U3@U3@U3@U3@U3@U3@U3@U2@U3@U2@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U1@U2@U2@U3@U1@U1@U1@U2@U2@U2@U4@U4@U4@U4@U4@U3@U1@U1@U1@U4@U_tlgWrapperBinary@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@55554AEBU?$_tlgWrapSz@G@@355555555454555555554434453334446666653336AEBU_tlgWrapperBinary@@3@Z @ 0x1C002642C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U-$.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1C0026B04 (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0179770 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DxgkCountInterfaceFunctions @ 0x1C01FD070 (DxgkCountInterfaceFunctions.c)
 *     DpiGetDriverFullPath @ 0x1C01FD0D4 (DpiGetDriverFullPath.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0222D62 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, __int64 a3)
{
  int v3; // r14d
  bool v4; // zf
  int v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r13d
  int v11; // r15d
  __int64 v12; // rbx
  int v13; // r12d
  unsigned int v14; // r12d
  _DWORD *v15; // rax
  unsigned __int16 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned int v20; // ecx
  __int64 v21; // rcx
  BOOL v22; // eax
  GUID *p_ActivityId; // r8
  __int16 v24; // [rsp+1F0h] [rbp-80h] BYREF
  __int16 v25; // [rsp+1F2h] [rbp-7Eh] BYREF
  __int16 v26; // [rsp+1F4h] [rbp-7Ch] BYREF
  int v27; // [rsp+1F8h] [rbp-78h] BYREF
  __int16 v28; // [rsp+1FCh] [rbp-74h] BYREF
  __int16 v29; // [rsp+1FEh] [rbp-72h] BYREF
  __int16 v30; // [rsp+200h] [rbp-70h] BYREF
  __int16 v31; // [rsp+202h] [rbp-6Eh] BYREF
  __int16 v32; // [rsp+204h] [rbp-6Ch] BYREF
  int v33; // [rsp+208h] [rbp-68h] BYREF
  int v34; // [rsp+20Ch] [rbp-64h] BYREF
  unsigned int v35; // [rsp+210h] [rbp-60h] BYREF
  unsigned int v36; // [rsp+214h] [rbp-5Ch] BYREF
  __int64 v37; // [rsp+218h] [rbp-58h] BYREF
  unsigned __int16 *v38; // [rsp+220h] [rbp-50h] BYREF
  unsigned __int16 *v39; // [rsp+228h] [rbp-48h] BYREF
  unsigned __int16 *v40; // [rsp+230h] [rbp-40h] BYREF
  unsigned __int16 *v41; // [rsp+238h] [rbp-38h] BYREF
  __int64 v42; // [rsp+240h] [rbp-30h] BYREF
  __int64 v43; // [rsp+248h] [rbp-28h] BYREF
  __int64 v44; // [rsp+250h] [rbp-20h] BYREF
  unsigned __int16 *v45; // [rsp+258h] [rbp-18h] BYREF
  unsigned int v46; // [rsp+260h] [rbp-10h] BYREF
  unsigned int v47; // [rsp+264h] [rbp-Ch] BYREF
  int v48; // [rsp+268h] [rbp-8h] BYREF
  int v49; // [rsp+26Ch] [rbp-4h] BYREF
  int v50; // [rsp+270h] [rbp+0h] BYREF
  int v51; // [rsp+274h] [rbp+4h] BYREF
  int v52; // [rsp+278h] [rbp+8h] BYREF
  int v53; // [rsp+27Ch] [rbp+Ch] BYREF
  BOOL v54; // [rsp+280h] [rbp+10h] BYREF
  int v55; // [rsp+284h] [rbp+14h] BYREF
  __int64 v56; // [rsp+288h] [rbp+18h] BYREF
  BOOL v57; // [rsp+290h] [rbp+20h] BYREF
  int v58; // [rsp+294h] [rbp+24h] BYREF
  int v59; // [rsp+298h] [rbp+28h] BYREF
  int v60; // [rsp+29Ch] [rbp+2Ch] BYREF
  int v61; // [rsp+2A0h] [rbp+30h] BYREF
  unsigned int v62; // [rsp+2A4h] [rbp+34h] BYREF
  int v63; // [rsp+2A8h] [rbp+38h] BYREF
  __int64 v64; // [rsp+2B0h] [rbp+40h] BYREF
  __int64 v65; // [rsp+2B8h] [rbp+48h] BYREF
  __int64 v66; // [rsp+2C0h] [rbp+50h] BYREF
  DXGADAPTER *v67[2]; // [rsp+2C8h] [rbp+58h] BYREF
  __int128 v68; // [rsp+2D8h] [rbp+68h] BYREF
  __int64 v69; // [rsp+2E8h] [rbp+78h]
  __int64 v70; // [rsp+2F0h] [rbp+80h] BYREF
  unsigned __int16 *v71; // [rsp+2F8h] [rbp+88h] BYREF
  __int64 v72; // [rsp+300h] [rbp+90h] BYREF
  __int64 v73; // [rsp+308h] [rbp+98h] BYREF
  __int64 v74; // [rsp+310h] [rbp+A0h] BYREF
  unsigned __int16 *v75; // [rsp+318h] [rbp+A8h] BYREF
  unsigned __int16 *v76; // [rsp+320h] [rbp+B0h] BYREF
  unsigned __int16 *v77; // [rsp+328h] [rbp+B8h] BYREF
  unsigned __int16 *v78; // [rsp+330h] [rbp+C0h] BYREF
  PVOID *v79; // [rsp+338h] [rbp+C8h] BYREF
  __int64 v80; // [rsp+340h] [rbp+D0h] BYREF
  __int64 v81; // [rsp+348h] [rbp+D8h] BYREF
  __int64 v82; // [rsp+350h] [rbp+E0h] BYREF
  __int64 v83; // [rsp+358h] [rbp+E8h] BYREF
  __int64 v84; // [rsp+360h] [rbp+F0h] BYREF
  _WORD *v85; // [rsp+368h] [rbp+F8h] BYREF
  unsigned __int16 *v86; // [rsp+370h] [rbp+100h] BYREF
  PVOID P[2]; // [rsp+378h] [rbp+108h] BYREF
  __int128 v88; // [rsp+388h] [rbp+118h] BYREF
  int v89; // [rsp+398h] [rbp+128h]
  int *v90; // [rsp+3A0h] [rbp+130h] BYREF
  __int16 v91; // [rsp+3A8h] [rbp+138h]
  GUID ActivityId; // [rsp+3B0h] [rbp+140h] BYREF

  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 436) & 0x20000) == 0;
  v33 = *(_DWORD *)(a1 + 2692);
  v56 = *(_QWORD *)(a1 + 896);
  v6 = 1;
  v36 = *(_DWORD *)(a1 + 288);
  v69 = a3;
  v34 = a2;
  if ( !v4 || (v7 = *(_DWORD *)(a1 + 2664) >> 1, v27 = 0, (v7 & 1) != 0) )
    v27 = 1;
  v89 = 0;
  v88 = 0LL;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)a1, (int *)&v35);
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)&v88);
  v8 = *(_QWORD *)(a1 + 2800);
  if ( v8 || *(_QWORD *)(a1 + 2792) )
  {
    v9 = *(_QWORD *)(a1 + 2792);
    v66 = 0LL;
    v65 = 0LL;
    LOWORD(v10) = 0;
    v64 = 0LL;
    LOWORD(v11) = 0;
    v26 = 0;
    v12 = 0LL;
    v25 = 0;
    v13 = 0;
    LOBYTE(v24) = 0;
    *(_OWORD *)P = 0LL;
    v68 = 0LL;
    if ( v9 )
    {
      v14 = *(_DWORD *)(v9 + 24);
      v26 = *(_WORD *)(a1 + 1544);
      v25 = *(_WORD *)(a1 + 1548);
      v13 = (v14 >> 5) & 1;
    }
    if ( (*(_DWORD *)(a1 + 436) & 0x100) != 0 )
    {
      v67[0] = 0LL;
      if ( DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER *)a1, 0, (struct DXGADAPTER_REFERENCE *)v67) >= 0 )
        v12 = *(_QWORD *)((char *)v67[0] + 404);
      DXGADAPTER_REFERENCE::Assign(v67, 0LL);
      v8 = *(_QWORD *)(a1 + 2800);
    }
    if ( !v8 )
      goto LABEL_27;
    if ( !*(_BYTE *)(a1 + 209) )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v8 + 648) + 8LL) + 80LL))(
        *(_QWORD *)(v8 + 656),
        0LL,
        &v37,
        &v37,
        &v37,
        &v66,
        &v65,
        &v64);
      v8 = *(_QWORD *)(a1 + 2800);
    }
    LOBYTE(v24) = *(_BYTE *)(v8 + 1744);
    v15 = *(_DWORD **)(a1 + 2696);
    v11 = (*v15 >> 18) & 3;
    v10 = (*v15 >> 15) & 3;
    v3 = (*v15 >> 20) & 1;
    if ( v8 )
    {
      v40 = (unsigned __int16 *)(v8 + 320);
      v39 = (unsigned __int16 *)(v8 + 336);
      v38 = (unsigned __int16 *)(v8 + 352);
      v41 = (unsigned __int16 *)(v8 + 368);
      v16 = (unsigned __int16 *)(v8 + 448);
    }
    else
    {
LABEL_27:
      v40 = (unsigned __int16 *)&v68;
      v39 = (unsigned __int16 *)&v68;
      v38 = (unsigned __int16 *)&v68;
      v41 = (unsigned __int16 *)&v68;
      v16 = (unsigned __int16 *)&v68;
    }
    v17 = *(_QWORD *)(a1 + 216);
    v45 = v16;
    LODWORD(v37) = DpiGetDriverFullPath(v17, P);
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    DxgkCountInterfaceFunctions(a1 + 280, &v42, &v43, &v44);
    v58 = **(_DWORD **)(a1 + 2696);
    ++DXGADAPTER::sTelemetrySeqId;
    if ( (unsigned int)dword_1C012F9C0 > 5 && tlgKeywordOn((__int64)&dword_1C012F9C0, 0x800000000004LL) )
    {
      v70 = v12;
      v90 = &v58;
      v91 = 4;
      v71 = v45;
      v72 = v44;
      v73 = v43;
      v74 = v42;
      v59 = *(_DWORD *)(a1 + 1968);
      v75 = v41;
      v76 = v38;
      v77 = v39;
      v78 = v40;
      v79 = P;
      v28 = *(_WORD *)(a1 + 1552);
      v80 = v64;
      v81 = v65;
      v82 = v66;
      v60 = v34;
      v29 = *(_WORD *)(a1 + 2620);
      v30 = *(_WORD *)(a1 + 2616);
      v83 = *(_QWORD *)(a1 + 404);
      v31 = v33;
      v32 = *(_WORD *)(a1 + 1744);
      v61 = v27;
      v62 = (v35 >> 1) & 1;
      LOWORD(v33) = v11;
      v63 = v35 & 1;
      v47 = (v35 >> 3) & 1;
      v46 = (v35 >> 2) & 1;
      v20 = *(_DWORD *)(a1 + 436);
      v49 = v3;
      v48 = (v20 >> 7) & 1;
      LOWORD(v34) = v10;
      v50 = v13;
      v36 = v36 > 1;
      v51 = (unsigned __int8)v24;
      v57 = v56 != 0;
      v52 = *(unsigned __int8 *)(a1 + 2636);
      v53 = *(unsigned __int8 *)(a1 + 2631);
      v54 = BYTE8(v88) == 0;
      v21 = (v20 >> 6) & 1;
      LODWORD(v56) = *(_DWORD *)(a1 + 1704);
      v84 = *(_QWORD *)(a1 + 1696);
      v85 = *(_WORD **)(a1 + 1688);
      v24 = *(_WORD *)(a1 + 428);
      LODWORD(v40) = *(_DWORD *)(a1 + 424);
      LODWORD(v39) = *(_DWORD *)(a1 + 420);
      LODWORD(v38) = *(_DWORD *)(a1 + 416);
      LODWORD(v41) = *(_DWORD *)(a1 + 412);
      v86 = *(unsigned __int16 **)(a1 + 1616);
      v55 = v21;
      v22 = (_DWORD)v18 && tlgKeywordOn(v19, 0x200000000000LL);
      LODWORD(v42) = v22;
      if ( !(_DWORD)v18 || !tlgKeywordOn(v19, 0x400000000000LL) )
        v6 = 0;
      LODWORD(v44) = DXGADAPTER::sTelemetrySeqId;
      LODWORD(v43) = v6;
      LODWORD(v45) = MEMORY[0xFFFFF780000002C4];
      LOWORD(v27) = 14;
      v67[0] = (DXGADAPTER *)2048;
      p_ActivityId = (GUID *)(v69 + 8);
      if ( !v69 )
        p_ActivityId = &ActivityId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperByVal<8>>(
        v21,
        byte_1C0097130,
        p_ActivityId,
        v18,
        (__int64)v67,
        (__int64)&v27,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v42,
        &v86,
        (__int64)&v41,
        (__int64)&v38,
        (__int64)&v39,
        (__int64)&v40,
        (__int64)&v24,
        &v85,
        (__int64)&v84,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v57,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v34,
        (__int64)&v49,
        (__int64)&v33,
        (__int64)&v36,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v63,
        (__int64)&v62,
        (__int64)&v35,
        (__int64)&v61,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v83,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v60,
        (__int64)&v82,
        (__int64)&v81,
        (__int64)&v80,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v28,
        (unsigned __int16 **)&v79,
        &v78,
        &v77,
        &v76,
        &v75,
        (__int64)&v59,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v72,
        &v71,
        (__int64 *)&v90,
        (__int64)&v70);
    }
    if ( (int)v37 >= 0 )
      ExFreePoolWithTag(P[1], 0);
  }
}

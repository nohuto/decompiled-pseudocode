/*
 * XREFs of ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C0206274
 * Callers:
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C02061E4 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0027054 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x1C002A02C (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U3@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@45445AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1C002A828 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U3@U2@U2@.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::ProcessHPDFiltering(__int64 a1, __int64 a2, __int64 a3, char a4, const GUID *a5)
{
  __int64 v5; // r14
  _QWORD *v10; // r14
  DMMVIDEOPRESENTTARGETSET *v11; // rcx
  unsigned int v12; // edx
  int *TargetById; // r9
  int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  bool v17; // al
  int v18; // r8d
  __int64 v19; // r9
  bool v20; // al
  __int64 v21; // r9
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 v29; // rcx
  int v31; // eax
  __int64 v32; // r8
  int v33; // ecx
  int v34; // eax
  __int64 v35; // rax
  int v36; // edx
  struct _LUID *v37; // rdx
  struct _LUID *v38; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v40; // r9
  int v41; // eax
  unsigned int v42; // edi
  __int64 v43; // rax
  unsigned __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  int v45; // [rsp+78h] [rbp-88h] BYREF
  int v46; // [rsp+7Ch] [rbp-84h] BYREF
  int v47; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+84h] [rbp-7Ch] BYREF
  struct _GUID *v49; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h] BYREF
  int v53; // [rsp+B0h] [rbp-50h] BYREF
  int v54; // [rsp+B4h] [rbp-4Ch]
  _BYTE v55[24]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  int v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+E4h] [rbp-1Ch]
  BOOL v61; // [rsp+E8h] [rbp-18h]
  int v62; // [rsp+ECh] [rbp-14h]
  __int64 v63; // [rsp+F0h] [rbp-10h]
  struct _GUID v64; // [rsp+100h] [rbp+0h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(_QWORD *)(a1 + 8);
  }
  v10 = *(_QWORD **)(v5 + 16);
  v11 = *(DMMVIDEOPRESENTTARGETSET **)(a1 + 120);
  v12 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  memset(v55, 0, sizeof(v55));
  v58 = 0;
  TargetById = (int *)DMMVIDEOPRESENTTARGETSET::GetTargetById(v11, v12);
  if ( !TargetById )
  {
    WdLogSingleEntry1(2LL, *(_DWORD *)(a2 + 8) & 0xFFFFFFLL);
    return 0LL;
  }
  v14 = 0;
  v15 = *(_DWORD *)(a3 + 40) & 0xFFEFFFFF | (a4 == 0 ? 0x100000 : 0);
  *(_DWORD *)(a3 + 40) = v15;
  v16 = v15 & 0xFEFFFFFF | (TargetById[25] != 4 ? 0x1000000 : 0);
  *(_DWORD *)(a3 + 40) = v16;
  if ( TargetById[21] == 15 )
    v14 = 0x200000;
  *(_DWORD *)(a3 + 40) = v16 & 0xFFDFFFFF | v14;
  v17 = IsAnalogueVideoOutput(TargetById[20]);
  *(_DWORD *)(a3 + 40) = v18 ^ (v18 ^ (v17 << 22)) & 0x400000;
  v20 = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v19 + 80));
  v23 = v22 ^ (v22 ^ (v20 << 23)) & 0x800000;
  *(_DWORD *)(a3 + 40) = v23;
  v24 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
  v25 = *(_QWORD *)(v21 + 424);
  *(_QWORD *)(a3 + 24) = v25;
  v26 = v24 - v25;
  v27 = *(_QWORD *)(v21 + 432);
  *(_QWORD *)(a3 + 32) = v27;
  if ( v24 - v25 < 100000000 || v24 - v27 < 100000000 )
  {
    v31 = *(_DWORD *)(a3 + 40);
    if ( (*(_DWORD *)(a2 + 8) & 0xF000000) == 0x8000000 )
      v31 |= 0x40000u;
    *(_DWORD *)(a3 + 40) = v31 | 0x80000;
  }
  v28 = *(unsigned int *)(v10[349] + 524LL);
  v29 = (unsigned int)(v28 + 100000000);
  if ( v26 < v29 || v24 - v27 < v29 )
    *(_DWORD *)(a3 + 40) |= 0x80000u;
  *(_BYTE *)(a3 + 40) = *(_BYTE *)(a2 + 11) & 0xF;
  if ( v23 )
    return 0LL;
  v32 = *(_QWORD *)(v21 + 536);
  v33 = *(_DWORD *)(a2 + 8);
  v34 = v33 & 0xF000000;
  if ( *(_BYTE *)(v32 + 172) )
  {
    if ( v34 == 0x8000000 )
    {
      *(_BYTE *)(v32 + 172) = 0;
      WdLogSingleEntry2(7LL, *(unsigned int *)(v21 + 24), 0LL);
      v33 = *(_DWORD *)(a2 + 8);
      v42 = 2;
    }
    else
    {
      v42 = 3;
    }
    v43 = *(_QWORD *)((char *)v10 + 404);
    v53 = 30;
    v60 = v33 & 0xFFFFFF;
    v54 = 72;
    v57 = 0;
    v56 = 0LL;
    memset(v55, 0, sizeof(v55));
    v61 = v42 == 3;
    v59 = 103;
    v62 = 0;
    v63 = v43;
    v44 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v10, 0LL, 0LL, &v44);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v53, v44);
    *(_DWORD *)(a3 + 40) |= 0x20000u;
    return v42;
  }
  if ( v34 != 0x8000000 )
    return 0LL;
  if ( v26 >= v28 && v24 - v27 >= v28 )
  {
    WdLogSingleEntry4(7LL, v33 & 0xFFFFFF, v10, v25, v24 - v25);
    return 0LL;
  }
  v35 = *(_QWORD *)((char *)v10 + 404);
  v53 = 30;
  v36 = *(_DWORD *)(a3 + 16);
  v60 = v33 & 0xFFFFFF;
  v54 = 72;
  v57 = 0;
  v61 = v25 >= v27;
  v37 = (struct _LUID *)(unsigned int)(v36 - v25);
  v56 = 0LL;
  v59 = 102;
  memset(v55, 0, sizeof(v55));
  v62 = (int)v37;
  v63 = v35;
  v44 = 0LL;
  DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v10, v37, 0LL, &v44);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v53, v44);
  v44 = 0LL;
  DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v10, v38, 0LL, &v44);
  v45 = 0;
  v64 = 0LL;
  Global = DXGGLOBAL_GetGlobal();
  RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
    (struct DXGGLOBAL *)((char *)Global + 305224),
    0,
    (enum _DXGK_RAPID_HPD_TYPE *)&v45,
    &v64,
    0LL);
  if ( (unsigned int)dword_1C012F918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C012F918, 0x400000000080LL) )
    {
      v46 = -1;
      v49 = &v64;
      v50 = v44;
      v52 = *(_QWORD *)((char *)v10 + 404);
      v41 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
      v47 = 1;
      LODWORD(v44) = v41;
      v51 = 2LL;
      v48 = 0;
      LOWORD(v45) = 3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
        (__int64)&v45,
        byte_1C009A6DF,
        a5,
        v40,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v52,
        (__int64)&v48,
        (__int64)&v51,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v50,
        (__int64 *)&v49);
    }
  }
  *(_DWORD *)(a3 + 40) |= 0x10000u;
  return 1LL;
}

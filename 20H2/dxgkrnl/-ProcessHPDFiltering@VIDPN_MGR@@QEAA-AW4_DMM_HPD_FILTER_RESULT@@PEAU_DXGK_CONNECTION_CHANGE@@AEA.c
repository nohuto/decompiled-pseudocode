/*
 * XREFs of ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C0174A44
 * Callers:
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C01749B4 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0009BB8 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D03C (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3433@Z @ 0x1C0024108 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E5554 (-SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::ProcessHPDFiltering(__int64 a1, __int64 a2, __int64 a3, char a4, const GUID *a5)
{
  __int64 v5; // rsi
  _QWORD *v10; // rsi
  DMMVIDEOPRESENTTARGETSET *v11; // rcx
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *TargetById; // r9
  __int64 v16; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // r8d
  unsigned int v21; // ecx
  bool v22; // al
  int v23; // r8d
  __int64 v24; // r9
  bool v25; // al
  DMMVIDEOPRESENTTARGET *v26; // r9
  int v27; // edx
  int v28; // r15d
  __int64 v29; // r8
  __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // r10
  int v33; // eax
  __int64 v34; // r11
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rax
  int v40; // edx
  struct _LUID *v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rax
  unsigned int v44; // r14d
  int v45; // [rsp+50h] [rbp-71h] BYREF
  int v46; // [rsp+54h] [rbp-6Dh] BYREF
  int v47; // [rsp+58h] [rbp-69h] BYREF
  int v48; // [rsp+5Ch] [rbp-65h] BYREF
  unsigned __int64 v49; // [rsp+60h] [rbp-61h] BYREF
  unsigned __int64 v50; // [rsp+68h] [rbp-59h] BYREF
  __int64 v51; // [rsp+70h] [rbp-51h] BYREF
  __int64 v52; // [rsp+78h] [rbp-49h] BYREF
  int v53; // [rsp+80h] [rbp-41h] BYREF
  int v54; // [rsp+84h] [rbp-3Dh]
  _BYTE v55[24]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-21h]
  int v57; // [rsp+A8h] [rbp-19h]
  int v58; // [rsp+ACh] [rbp-15h]
  int v59; // [rsp+B0h] [rbp-11h]
  int v60; // [rsp+B4h] [rbp-Dh]
  BOOL v61; // [rsp+B8h] [rbp-9h]
  int v62; // [rsp+BCh] [rbp-5h]
  __int64 v63; // [rsp+C0h] [rbp-1h]

  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v18);
    v5 = *(_QWORD *)(a1 + 8);
  }
  v10 = *(_QWORD **)(v5 + 16);
  v11 = *(DMMVIDEOPRESENTTARGETSET **)(a1 + 80);
  v12 = *(_DWORD *)(a2 + 8);
  memset(v55, 0, sizeof(v55));
  v58 = 0;
  TargetById = (int *)DMMVIDEOPRESENTTARGETSET::GetTargetById(v11, v12 & 0xFFFFFF);
  if ( !TargetById )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = *(_DWORD *)(a2 + 8) & 0xFFFFFFLL;
    WdLogEvent5_WdError(v16);
    return 0LL;
  }
  v19 = *(_DWORD *)(a3 + 40) & 0xFFEFFFFF | (a4 == 0 ? 0x100000 : 0);
  *(_DWORD *)(a3 + 40) = v19;
  v20 = 0;
  v21 = v19 & 0xFEFFFFFF | (TargetById[24] != 4 ? 0x1000000 : 0);
  *(_DWORD *)(a3 + 40) = v21;
  if ( TargetById[21] == 15 )
    v20 = 0x200000;
  *(_DWORD *)(a3 + 40) = v21 & 0xFFDFFFFF | v20;
  v22 = IsAnalogueVideoOutput(TargetById[20]);
  *(_DWORD *)(a3 + 40) = v23 ^ (v23 ^ (v22 << 22)) & 0x400000;
  v25 = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v24 + 80));
  v28 = v27 ^ (v27 ^ (v25 << 23)) & 0x800000;
  *(_DWORD *)(a3 + 40) = v28;
  v29 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
  v30 = *((_QWORD *)v26 + 53);
  *(_QWORD *)(a3 + 24) = v30;
  v31 = v29 - v30;
  v32 = *((_QWORD *)v26 + 54);
  *(_QWORD *)(a3 + 32) = v32;
  if ( v29 - v30 < 100000000 || v29 - v32 < 100000000 )
  {
    v33 = *(_DWORD *)(a3 + 40);
    if ( (*(_DWORD *)(a2 + 8) & 0xF000000) == 0x8000000 )
      v33 |= 0x40000u;
    *(_DWORD *)(a3 + 40) = v33 | 0x80000;
  }
  v34 = *(unsigned int *)(v10[337] + 452LL);
  v35 = (unsigned int)(v34 + 100000000);
  if ( v31 < v35 || v29 - v32 < v35 )
    *(_DWORD *)(a3 + 40) |= 0x80000u;
  *(_BYTE *)(a3 + 40) = *(_BYTE *)(a2 + 11) & 0xF;
  if ( v28 )
    return 0LL;
  v36 = *(unsigned int *)(a2 + 8);
  v37 = *(_DWORD *)(a2 + 8) & 0xF000000;
  if ( *(_BYTE *)(*((_QWORD *)v26 + 67) + 172LL) )
  {
    if ( (_DWORD)v37 == 0x8000000 )
    {
      DMMVIDEOPRESENTTARGET::SetUnplugHiding(v26, 0);
      LODWORD(v36) = *(_DWORD *)(a2 + 8);
      v44 = 2;
    }
    else
    {
      v44 = 3;
    }
    v63 = *(_QWORD *)((char *)v10 + 316);
    v60 = v36 & 0xFFFFFF;
    v53 = 30;
    v54 = 72;
    v57 = 0;
    v56 = 0LL;
    v61 = v44 == 3;
    memset(v55, 0, sizeof(v55));
    v59 = 103;
    v62 = 0;
    v50 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v10, (struct _LUID *)(v44 == 3), 0LL, &v50);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v53, v50);
    *(_DWORD *)(a3 + 40) |= 0x20000u;
    return v44;
  }
  else
  {
    if ( (_DWORD)v37 != 0x8000000 )
      return 0LL;
    if ( v31 >= v34 && v29 - v32 >= v34 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v37, v36);
      v38[3] = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
      v38[4] = v10;
      v38[5] = *(_QWORD *)(a3 + 24);
      v38[6] = *(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 24);
      WdLogEvent5_WdDmmEvent(v38);
      return 0LL;
    }
    v39 = *(_QWORD *)((char *)v10 + 316);
    v53 = 30;
    v60 = v36 & 0xFFFFFF;
    v40 = *(_DWORD *)(a3 + 16);
    v54 = 72;
    v61 = v30 >= v32;
    v41 = (struct _LUID *)(unsigned int)(v40 - v30);
    v57 = 0;
    v56 = 0LL;
    memset(v55, 0, sizeof(v55));
    v59 = 102;
    v62 = (int)v41;
    v63 = v39;
    v49 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v10, v41, 0LL, &v49);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v53, v49);
    if ( (unsigned int)dword_1C00AFA90 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00AFA90, 0x400000000080LL) )
      {
        v43 = *(_QWORD *)((char *)v10 + 316);
        v45 = -1;
        v52 = v43;
        LODWORD(v43) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
        v46 = 1;
        v48 = v43;
        v51 = 2LL;
        v47 = 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&v48,
          byte_1C00802C3,
          a5,
          v42,
          (__int64)&v48,
          (__int64)&v52,
          (__int64)&v47,
          (__int64)&v51,
          (__int64)&v46,
          (__int64)&v45);
      }
    }
    *(_DWORD *)(a3 + 40) |= 0x10000u;
    return 1LL;
  }
}

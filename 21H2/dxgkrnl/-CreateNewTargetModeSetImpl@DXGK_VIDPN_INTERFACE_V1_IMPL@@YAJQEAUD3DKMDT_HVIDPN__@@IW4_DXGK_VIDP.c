/*
 * XREFs of ?CreateNewTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C01A9E04
 * Callers:
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C01A9F70 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C03A6E70 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0010BF0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010C68 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C001179C (-CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewTargetModeSetImpl(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        unsigned __int64 *a4,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a5)
{
  int v6; // edi
  __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ **v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v16; // r14
  DMMVIDPNTARGET *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  DMMVIDPNTARGET *v20; // rdi
  int v21; // eax
  unsigned int v22; // ebx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // [rsp+20h] [rbp-20h] BYREF
  __int64 v29; // [rsp+28h] [rbp-18h]
  char v30; // [rsp+30h] [rbp-10h]
  struct DMMVIDPNTARGETMODESET *v31; // [rsp+70h] [rbp+30h] BYREF

  v28 = -1;
  v29 = 0LL;
  v6 = a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 7050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7050);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 7050);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v12 = a5;
  v11[3] = this;
  v11[4] = a4;
  v11[5] = v12;
  if ( a4 && v12 )
  {
    *a4 = 0LL;
    *v12 = 0LL;
    v13 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v14 = v13;
    if ( v13 )
    {
      v15 = *(_QWORD *)(v13 + 48);
      if ( v6 == 1 )
        v16 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v15 + 440);
      else
        v16 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v15 + 448);
      v17 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v14 + 312), v7);
      v20 = v17;
      if ( v17 )
      {
        a5 = 0LL;
        v31 = 0LL;
        v21 = DMMVIDPNTARGET::CreateNewCofuncModeSet(v17, &v31, v18, v19);
        v22 = v21;
        if ( v21 < 0 )
        {
          WdLogSingleEntry2(7LL, *((unsigned int *)v20 + 6), v21);
        }
        else
        {
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a5, (__int64)v31);
          v23 = (unsigned __int64)a5;
          v24 = -(__int64)((struct D3DKMDT_HVIDPNTARGETMODESET__ **)((char *)a5 + 137) != 0LL);
          a5 = 0LL;
          *a4 = v23 & v24;
          v22 = 0;
          *v12 = v16;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a5, 0LL);
      }
      else
      {
        WdLogSingleEntry1(2LL, v7);
        v22 = -1071774971;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v22 = -1071774973;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v22 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 )
  {
    LOBYTE(v25) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v28);
  }
  return v22;
}

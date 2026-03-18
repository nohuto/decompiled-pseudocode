/*
 * XREFs of ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C01208D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B08 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0007F78 (-CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0008194 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v17; // r12
  DMMVIDPNTARGET *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  DMMVIDPNTARGET *v21; // rsi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-20h] BYREF
  __int64 v36; // [rsp+28h] [rbp-18h]
  char v37; // [rsp+30h] [rbp-10h]
  __int64 v38; // [rsp+70h] [rbp+30h] BYREF
  struct DMMVIDPNTARGETMODESET *v39; // [rsp+80h] [rbp+40h] BYREF

  v35 = -1;
  v36 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 7050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7050);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 7050LL);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = v6;
  v12[4] = a3;
  v12[5] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v15 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(v6);
    if ( v15 )
    {
      v17 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(*(_QWORD *)(v15 + 48) + 392LL);
      v18 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v15 + 312), v7);
      v21 = v18;
      if ( v18 )
      {
        v38 = 0LL;
        v39 = 0LL;
        v22 = DMMVIDPNTARGET::CreateNewCofuncModeSet(v18, &v39);
        v6 = v22;
        if ( v22 < 0 )
        {
          v34 = WdLogNewEntry5_WdDmmEvent(v24, v23);
          *(_QWORD *)(v34 + 24) = *((unsigned int *)v21 + 6);
          *(_QWORD *)(v34 + 32) = v6;
          WdLogEvent5_WdDmmEvent(v34);
        }
        else
        {
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v38, (__int64)v39);
          v25 = v38;
          v26 = -(__int64)(v38 != -137);
          v38 = 0LL;
          *a3 = v25 & v26;
          LODWORD(v6) = 0;
          *a4 = v17;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v38, 0LL);
      }
      else
      {
        v33 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v33 + 24) = v7;
        WdLogEvent5_WdError(v33);
        LODWORD(v6) = -1071774971;
      }
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(0LL, v16);
      *(_QWORD *)(v32 + 24) = v6;
      WdLogEvent5_WdError(v32);
      LODWORD(v6) = -1071774973;
    }
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v31 + 24) = 0LL;
    *(_QWORD *)(v31 + 32) = v6;
    WdLogEvent5_WdError(v31);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v27);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v35);
  return (unsigned int)v6;
}

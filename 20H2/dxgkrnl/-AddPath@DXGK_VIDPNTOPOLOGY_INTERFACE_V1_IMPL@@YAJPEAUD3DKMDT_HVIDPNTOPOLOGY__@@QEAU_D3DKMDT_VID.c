/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E6900
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C0007B48 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0007F40 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0120FD8 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0146B70 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0154F48 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  DMMVIDPNTOPOLOGY *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v36; // [rsp+20h] [rbp-20h] BYREF
  __int64 v37; // [rsp+28h] [rbp-18h]
  char v38; // [rsp+30h] [rbp-10h]
  struct DMMVIDPNPRESENTPATH *v39; // [rsp+78h] [rbp+38h] BYREF
  struct DMMVIDPNPRESENTPATH *v40; // [rsp+80h] [rbp+40h] BYREF

  v36 = -1;
  v4 = (__int64)this;
  v37 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 7041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7041);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 7041LL);
  if ( a2 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v11[3] = *(_DWORD *)a2;
    v11[4] = *((unsigned int *)a2 + 1);
    v11[5] = a2;
    v11[6] = v4;
    v15 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4);
    if ( v15 )
    {
      if ( !*((_DWORD *)a2 + 16) )
      {
        v17 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v17 + 24) = a2;
        WdLogEvent5_WdWarning(v17);
        *((_DWORD *)a2 + 16) = 255;
      }
      if ( !*((_DWORD *)a2 + 17) )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
        v18[3] = *(_DWORD *)a2;
        v18[4] = *((unsigned int *)a2 + 1);
        v18[5] = v4;
        WdLogEvent5_WdWarning(v18);
        memset(a2 + 19, 0, 0x100uLL);
        *((_DWORD *)a2 + 83) = 0;
        *((_DWORD *)a2 + 83) |= 1u;
        *(_QWORD *)(a2 + 17) = 1LL;
      }
      if ( *((_DWORD *)a2 + 84) != 1 || *((_QWORD *)a2 + 43) || *((_QWORD *)a2 + 44) )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
        v19[3] = *((int *)a2 + 84);
        v19[4] = *(_DWORD *)a2;
        v19[5] = *((unsigned int *)a2 + 1);
        v19[6] = v4;
        WdLogEvent5_WdWarning(v19);
        *((_DWORD *)a2 + 84) = 1;
        *((_QWORD *)a2 + 43) = 0LL;
        *((_QWORD *)a2 + 44) = 0LL;
      }
      v39 = 0LL;
      v40 = 0LL;
      v20 = DMMVIDPNTOPOLOGY::CreateNewPath(v15, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, &v40);
      v25 = v20;
      LODWORD(v4) = -1071774970;
      if ( v20 == -1071774970 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
        v26[3] = *(_DWORD *)a2;
        v26[4] = *((unsigned int *)a2 + 1);
        v26[5] = -1071774970LL;
        WdLogEvent5_WdError(v26);
      }
      else if ( v20 >= 0 )
      {
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v39,
          (__int64 (__fastcall ***)(_QWORD, __int64))v40);
        v29 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPNTOPOLOGY **)v15, v39, 2LL, v28);
        v4 = v29;
        if ( v29 >= 0 )
        {
          v39 = 0LL;
          LODWORD(v4) = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v15, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2);
        }
        else
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v31, v30);
          v32[3] = *(_DWORD *)a2;
          v32[4] = *((unsigned int *)a2 + 1);
          v32[5] = v15;
          v32[6] = v4;
          WdLogEvent5_WdDmmEvent(v32);
        }
      }
      else
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
        LODWORD(v4) = v25;
        v27[3] = *(_DWORD *)a2;
        v27[4] = *((unsigned int *)a2 + 1);
        v27[5] = v25;
      }
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v39);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v16 + 24) = v4;
      WdLogEvent5_WdError(v16);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = v4;
    WdLogEvent5_WdError(v9);
    LODWORD(v4) = -1071774951;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v10);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v36);
  return (unsigned int)v4;
}

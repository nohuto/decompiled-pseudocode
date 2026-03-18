/*
 * XREFs of ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C01541C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010CB0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0010CD0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001975C (-ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DMMVIDPNSOURCEMODESET *v12; // rsi
  DMMVIDPNSOURCE *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rbp
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-28h] BYREF
  __int64 v34; // [rsp+28h] [rbp-20h]
  char v35; // [rsp+30h] [rbp-18h]
  __int64 v36; // [rsp+60h] [rbp+18h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 6035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6035);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 6035LL);
  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v8 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 48) + 88LL) == v5 )
    {
      v24 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v24 + 24) = v8;
      WdLogEvent5_WdError(v24);
      v19 = -1071774909;
    }
    else
    {
      v9 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)a2);
      v12 = (struct DMMVIDPNSOURCEMODESET *)v9;
      if ( v9 )
      {
        v13 = *(DMMVIDPNSOURCE **)(v9 + 112);
        if ( !v13 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v11, v10);
          WdLogEvent5_WdAssertion(v26);
        }
        v14 = *((_QWORD *)v13 + 5);
        if ( !v14 )
        {
          v27 = WdLogNewEntry5_WdAssertion(0LL, v10);
          WdLogEvent5_WdAssertion(v27);
          v14 = *((_QWORD *)v13 + 5);
        }
        if ( ContainedBy<DMMVIDPN>::GetContainer(v14 + 64, v10) == v8 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v36, *(_QWORD *)(v8 + 48));
          DMMVIDPNSOURCE::ReleaseModeSet(v13, v12);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40), v17);
          v19 = 0;
        }
        else
        {
          v28 = WdLogNewEntry5_WdError(v16, v15);
          v30 = *((_QWORD *)v13 + 5);
          v31 = (_QWORD *)v28;
          if ( !v30 )
          {
            v32 = WdLogNewEntry5_WdAssertion(0LL, v29);
            WdLogEvent5_WdAssertion(v32);
            v30 = *((_QWORD *)v13 + 5);
          }
          v31[3] = ContainedBy<DMMVIDPN>::GetContainer(v30 + 64, v29);
          v31[4] = v12;
          v31[5] = v8;
          WdLogEvent5_WdError(v31);
          v19 = -1071774928;
        }
      }
      else
      {
        v25 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v25 + 24) = a2;
        WdLogEvent5_WdError(v25);
        v19 = -1071774968;
      }
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    v19 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v18);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v33);
  return v19;
}

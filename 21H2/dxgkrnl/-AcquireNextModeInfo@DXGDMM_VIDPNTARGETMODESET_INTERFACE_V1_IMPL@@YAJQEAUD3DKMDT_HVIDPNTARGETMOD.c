/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C01255D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0005EC0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0008424 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C012593C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        __int64 a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  _DWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  bool v30; // zf
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  struct DMMVIDPNSOURCEMODE *(__fastcall *v39)(DMMVIDPNSOURCEMODESET *, const struct DMMVIDPNSOURCEMODE *const); // [rsp+20h] [rbp-50h] BYREF
  int v40; // [rsp+28h] [rbp-48h]
  __int64 v41; // [rsp+30h] [rbp-40h]
  int v42; // [rsp+40h] [rbp-30h] BYREF
  __int64 v43; // [rsp+48h] [rbp-28h]
  char v44; // [rsp+50h] [rbp-20h]
  __int64 v45; // [rsp+68h] [rbp-8h]
  __int64 v46; // [rsp+A0h] [rbp+30h] BYREF

  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 6011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6011);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 6011LL);
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v11 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      v12 = a2 - 16;
      v13 = -a2;
      v14 = (_DWORD *)(v12 & -(__int64)(v13 != 0));
      if ( v14 && *v14 == 305419896 )
      {
        v15 = *(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 8);
        if ( !v15 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v10, v9);
          WdLogEvent5_WdAssertion(v33);
        }
        if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
               v11 + 32,
               v15) )
        {
          v40 = 0;
          v46 = 0LL;
          v39 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v45 = v15;
          v41 = v15;
          v18 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
                  v11,
                  &v39,
                  &v46);
          v23 = v18;
          if ( v18 == -1071774902 )
          {
            v28 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
            v30 = v46 == 0;
            *(_QWORD *)(v28 + 24) = v11;
            if ( !v30 )
            {
              v35 = WdLogNewEntry5_WdAssertion(v29, v19);
              WdLogEvent5_WdAssertion(v35);
            }
            v23 = 1075708748;
          }
          else if ( v18 < 0 )
          {
            v36 = WdLogNewEntry5_WdDmmEvent(v20, v19);
            *(_QWORD *)(v36 + 24) = v14;
            *(_QWORD *)(v36 + 32) = v11;
            WdLogEvent5_WdDmmEvent(v36);
          }
          else
          {
            v24 = v46;
            if ( !v46 )
            {
              v37 = WdLogNewEntry5_WdAssertion(v20, v19);
              WdLogEvent5_WdAssertion(v37);
            }
            *(_QWORD *)&a3->Id = v24;
            v23 = 0;
          }
        }
        else
        {
          v34 = WdLogNewEntry5_WdError(v17, v16);
          *(_QWORD *)(v34 + 24) = v14;
          *(_QWORD *)(v34 + 32) = v11;
          WdLogEvent5_WdError(v34);
          v23 = -1071774928;
        }
      }
      else
      {
        v38 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v38 + 24) = v14;
        WdLogEvent5_WdError(v38);
        v23 = -1071774959;
      }
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v32 + 24) = this;
      WdLogEvent5_WdError(v32);
      v23 = -1071774967;
    }
  }
  else
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v31[3] = 0LL;
    v31[4] = a2;
    v31[5] = this;
    WdLogEvent5_WdError(v31);
    v23 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v19);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v42);
  return v23;
}

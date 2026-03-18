/*
 * XREFs of ?AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@PEAPEBU3@@Z @ 0x1C02E0BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C00231CC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDelete.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C0023320 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedSourceInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C02E8CA4 (--$AcquireDdiEnumeratorCachedSourceInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VD.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireNextSourceInfo(
        DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // rax
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DMMVIDPNTARGET *(__fastcall *v37)(DMMVIDPNTARGETSET *, const struct DMMVIDPNTARGET *const); // [rsp+20h] [rbp-50h] BYREF
  int v38; // [rsp+28h] [rbp-48h]
  __int64 v39; // [rsp+30h] [rbp-40h]
  int v40; // [rsp+40h] [rbp-30h] BYREF
  __int64 v41; // [rsp+48h] [rbp-28h]
  char v42; // [rsp+50h] [rbp-20h]
  __int64 v43; // [rsp+68h] [rbp-8h]
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v44; // [rsp+A0h] [rbp+30h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 6042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6042);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 6042LL);
  if ( !a3 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v9[3] = 0LL;
    v9[4] = a2;
    v9[5] = this;
    WdLogEvent5_WdError(v9);
    v11 = -1073741811;
LABEL_25:
    v23 = v11;
    goto LABEL_26;
  }
  *a3 = 0LL;
  v14 = ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    v11 = -1071774955;
    goto LABEL_25;
  }
  v16 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
  if ( !v16 || *(_DWORD *)v16 != 305419896 )
  {
    v33 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v33 + 24) = v16;
    WdLogEvent5_WdError(v33);
    v11 = -1071774972;
    goto LABEL_25;
  }
  v17 = *(_QWORD *)(v16 + 8);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::ContainsByReference(
          v14 + 8,
          v17) )
  {
    v21 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v21 + 24) = v16;
    *(_QWORD *)(v21 + 32) = v14;
    WdLogEvent5_WdError(v21);
    v11 = -1071774928;
    goto LABEL_25;
  }
  v38 = 0;
  v44 = 0LL;
  v37 = DMMVIDPNTARGETSET::GetNextTarget;
  v43 = v17;
  v39 = v17;
  v23 = DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET,DMMVIDEOPRESENTSOURCE const *>>>(
          v14,
          &v37,
          &v44);
  if ( v23 == -1071774972 )
  {
    v26 = WdLogNewEntry5_WdTrace(v22, v10, v24, v25);
    v28 = v44 == 0LL;
    *(_QWORD *)(v26 + 24) = v14;
    if ( !v28 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27, v10);
      WdLogEvent5_WdAssertion(v29);
    }
    v11 = 1075708748;
    goto LABEL_25;
  }
  if ( v23 >= 0 )
  {
    v31 = v44;
    if ( !*(_QWORD *)&v44 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v22, v10);
      WdLogEvent5_WdAssertion(v32);
    }
    *a3 = v31;
    v23 = 0;
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v22, v10);
    *(_QWORD *)(v30 + 24) = v16;
    *(_QWORD *)(v30 + 32) = v14;
    WdLogEvent5_WdError(v30);
  }
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v10);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v40);
  return (unsigned int)v23;
}

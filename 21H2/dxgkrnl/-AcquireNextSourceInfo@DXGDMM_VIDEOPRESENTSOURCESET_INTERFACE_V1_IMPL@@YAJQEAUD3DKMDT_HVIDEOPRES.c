/*
 * XREFs of ?AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@PEAPEBU3@@Z @ 0x1C03A0EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0028DB8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDelete.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C0028F0C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedSourceInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C03A8A38 (--$AcquireDdiEnumeratorCachedSourceInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VD.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireNextSourceInfo(
        DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a4)
{
  int v7; // eax
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  bool v15; // zf
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DMMVIDPNTARGET *(__fastcall *v20)(DMMVIDPNTARGETSET *, const struct DMMVIDPNTARGET *const); // [rsp+20h] [rbp-50h] BYREF
  int v21; // [rsp+28h] [rbp-48h]
  __int64 v22; // [rsp+30h] [rbp-40h]
  int v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  char v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-8h]
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v27; // [rsp+A0h] [rbp+30h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 6042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6042);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 6042);
  if ( !a3 )
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    v7 = -1073741811;
LABEL_25:
    v13 = v7;
    goto LABEL_26;
  }
  *a3 = 0LL;
  v8 = ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v7 = -1071774955;
    goto LABEL_25;
  }
  v9 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
  if ( !v9 || *(_DWORD *)v9 != 305419896 )
  {
    WdLogSingleEntry1(2LL, v9);
    v7 = -1071774972;
    goto LABEL_25;
  }
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
    WdLogSingleEntry0(1LL);
  if ( !DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::ContainsByReference(
          v8 + 8,
          v10) )
  {
    WdLogSingleEntry2(2LL, v9, v8);
    v7 = -1071774928;
    goto LABEL_25;
  }
  v21 = 0;
  v27 = 0LL;
  v20 = DMMVIDPNTARGETSET::GetNextTarget;
  v26 = v10;
  v22 = v10;
  v13 = DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET,DMMVIDEOPRESENTSOURCE const *>>>(
          v8,
          &v20,
          &v27);
  if ( v13 == -1071774972 )
  {
    v14 = WdLogNewEntry5_WdTrace(v12, v11);
    v15 = v27 == 0LL;
    *(_QWORD *)(v14 + 24) = v8;
    if ( !v15 )
      WdLogSingleEntry0(1LL);
    v7 = 1075708748;
    goto LABEL_25;
  }
  if ( v13 >= 0 )
  {
    v16 = v27;
    if ( !*(_QWORD *)&v27 )
      WdLogSingleEntry0(1LL);
    *a3 = v16;
    v13 = 0;
  }
  else
  {
    WdLogSingleEntry2(2LL, v9, v8);
  }
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v23);
  }
  return (unsigned int)v13;
}

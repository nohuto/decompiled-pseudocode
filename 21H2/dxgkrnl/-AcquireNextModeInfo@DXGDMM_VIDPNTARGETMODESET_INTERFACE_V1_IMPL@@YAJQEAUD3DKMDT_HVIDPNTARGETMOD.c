/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C01A8A40
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0010EB8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C001123C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01A8B9C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        __int64 a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  _DWORD *v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  bool v21; // zf
  struct DMMVIDPNSOURCEMODE *(__fastcall *v22)(DMMVIDPNSOURCEMODESET *, const struct DMMVIDPNSOURCEMODE *const); // [rsp+20h] [rbp-50h] BYREF
  int v23; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+30h] [rbp-40h]
  int v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h]
  char v27; // [rsp+50h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-8h]
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 6011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6011);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 6011);
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v7 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v7 )
    {
      v8 = a2 - 16;
      v9 = -a2;
      v10 = (_DWORD *)(v8 & -(__int64)(v9 != 0));
      if ( v10 && *v10 == 305419896 )
      {
        v11 = *(_QWORD *)((v8 & -(__int64)(v9 != 0)) + 8);
        if ( !v11 )
          WdLogSingleEntry0(1LL);
        if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
               v7 + 32,
               v11) )
        {
          v23 = 0;
          v29 = 0LL;
          v22 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v28 = v11;
          v24 = v11;
          v12 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
                  v7,
                  &v22,
                  &v29);
          v15 = v12;
          if ( v12 == -1071774902 )
          {
            v20 = WdLogNewEntry5_WdTrace(v14, v13);
            v21 = v29 == 0;
            *(_QWORD *)(v20 + 24) = v7;
            if ( !v21 )
              WdLogSingleEntry0(1LL);
            v15 = 1075708748;
          }
          else if ( v12 < 0 )
          {
            WdLogSingleEntry2(7LL, v10, v7);
          }
          else
          {
            v16 = v29;
            if ( !v29 )
              WdLogSingleEntry0(1LL);
            *(_QWORD *)&a3->Id = v16;
            v15 = 0;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v10, v7);
          v15 = -1071774928;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v8 & -(__int64)(v9 != 0));
        v15 = -1071774959;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v15 = -1071774967;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    v15 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v25);
  }
  return v15;
}

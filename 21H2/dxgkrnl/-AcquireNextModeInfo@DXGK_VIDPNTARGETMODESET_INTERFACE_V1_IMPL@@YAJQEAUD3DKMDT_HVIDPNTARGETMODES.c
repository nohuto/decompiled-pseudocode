/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C01ED230
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0010EB8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C001123C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01A8B9C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        __int64 a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  _DWORD *v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  bool v26; // zf
  __int128 v27; // [rsp+20h] [rbp-50h]
  int v28; // [rsp+38h] [rbp-38h] BYREF
  __int64 v29; // [rsp+40h] [rbp-30h]
  char v30; // [rsp+48h] [rbp-28h]
  __int128 v31; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10h]
  __int64 v33; // [rsp+90h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 31);
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 7010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerEnter, v8, 7010);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 7010);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = a2;
  v11[4] = this;
  v11[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v12 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v12 )
    {
      v13 = a2 - 16;
      v14 = -a2;
      v15 = (_DWORD *)(v13 & -(__int64)(v14 != 0));
      if ( v15 && *v15 == 305419896 )
      {
        v16 = *(_QWORD *)((v13 & -(__int64)(v14 != 0)) + 8);
        if ( !v16 )
          WdLogSingleEntry0(1LL);
        if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
               v12 + 32,
               v16) )
        {
          DWORD2(v27) = 0;
          v33 = 0LL;
          *(_QWORD *)&v27 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v31 = v27;
          v32 = v16;
          v17 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
                  v12,
                  (__int64)&v31,
                  &v33);
          v20 = v17;
          if ( v17 == -1071774902 )
          {
            v25 = WdLogNewEntry5_WdTrace(v19, v18);
            v26 = v33 == 0;
            *(_QWORD *)(v25 + 24) = v12;
            if ( !v26 )
              WdLogSingleEntry0(1LL);
            v20 = 1075708748;
          }
          else if ( v17 < 0 )
          {
            WdLogSingleEntry3(2LL, v15, v12, v17);
          }
          else
          {
            v21 = v33;
            if ( !v33 )
              WdLogSingleEntry0(1LL);
            *(_QWORD *)&a3->Id = v21;
            v20 = 0;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v15, v12);
          v20 = -1071774928;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v13 & -(__int64)(v14 != 0));
        v20 = -1071774959;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v20 = -1071774967;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    v20 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v28);
  }
  return v20;
}

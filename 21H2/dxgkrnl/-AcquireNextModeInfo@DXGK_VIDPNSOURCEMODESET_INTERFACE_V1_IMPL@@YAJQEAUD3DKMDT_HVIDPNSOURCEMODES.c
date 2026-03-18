/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C03A6190
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0011B2C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C001A4EC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01AAF4C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rsi
  _DWORD *v14; // rdi
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int128 v25; // [rsp+20h] [rbp-50h]
  int v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h]
  char v28; // [rsp+48h] [rbp-28h]
  __int128 v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h]
  __int64 v31; // [rsp+90h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 27);
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerEnter, v8, 7002);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 7002);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = a2;
  v11[4] = this;
  v11[5] = a3;
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v13 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v13 )
    {
      v14 = (_DWORD *)((unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL));
      if ( v14 && *v14 == 305419896 )
      {
        v15 = *(_QWORD *)(((unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL)) + 8);
        if ( !v15 )
          WdLogSingleEntry0(1LL);
        if ( DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
               v13 + 32,
               v15) )
        {
          DWORD2(v25) = 0;
          v31 = 0LL;
          *(_QWORD *)&v25 = DMMVIDPNSOURCEMODESET::GetNextMode;
          v29 = v25;
          v30 = v15;
          v16 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
                  v13,
                  (__int64)&v29,
                  &v31);
          v12 = v16;
          if ( v16 == -1071774902 )
          {
            v19 = WdLogNewEntry5_WdTrace(v18, v17);
            v20 = v31 == 0;
            *(_QWORD *)(v19 + 24) = v13;
            if ( !v20 )
              WdLogSingleEntry0(1LL);
            v12 = 1075708748;
          }
          else if ( v16 >= 0 )
          {
            v21 = v31;
            if ( !v31 )
              WdLogSingleEntry0(1LL);
            *(_QWORD *)&a3->Id = v21;
            v12 = 0;
          }
          else
          {
            WdLogSingleEntry3(2LL, v14, v13, v16);
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v14, v13);
          v12 = -1071774928;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, a2);
        v12 = -1071774960;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v12 = -1071774968;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    v12 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v26);
  }
  return v12;
}

/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0147D40
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000F784 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0019800 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v12; // rbp
  struct D3DKMDT_HVIDPN__ *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi
  DXGK_VIDPN_INTERFACE_V1_IMPL *v16; // rax
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  int v18; // ebx
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
  _QWORD *v31; // rsi
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r11
  _QWORD *v39; // rax
  __int64 v40; // rcx
  int v41; // [rsp+20h] [rbp-28h] BYREF
  __int64 v42; // [rsp+28h] [rbp-20h]
  char v43; // [rsp+30h] [rbp-18h]

  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 7044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7044);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 7044LL);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
    v12 = this;
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v23 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    v19 = -1071774973;
    goto LABEL_24;
  }
  if ( a2 && *((_DWORD *)a2 + 32) == 1833173004 )
    v13 = a2;
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v24 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v24 + 24) = a2;
    WdLogEvent5_WdError(v24);
    v19 = -1071774968;
    goto LABEL_24;
  }
  v14 = *((_QWORD *)v13 + 14);
  if ( !v14 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v25);
  }
  v15 = *(_QWORD *)(v14 + 40);
  if ( !v15 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v26);
    v15 = *(_QWORD *)(v14 + 40);
  }
  v16 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v15 + 72);
  if ( !v16 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v27);
    v16 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v15 + 72);
  }
  if ( v16 == v12 )
  {
    if ( *((_QWORD *)v13 + 14) == v14 )
    {
      if ( v13 == *(struct D3DKMDT_HVIDPN__ **)(v14 + 120) )
      {
        v35 = WdLogNewEntry5_WdDmmEvent(v11);
        *(_QWORD *)(v35 + 24) = v13;
        *(_QWORD *)(v35 + 32) = *(unsigned int *)(v14 + 24);
        WdLogEvent5_WdDmmEvent(v35);
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)(v14 + 120), 0LL);
        if ( *((_DWORD *)v13 + 24) != 1 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v36, v10);
          WdLogEvent5_WdAssertion(v37);
        }
      }
      if ( *((_DWORD *)v13 + 24) == 1
        && DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
             *(_QWORD *)(v14 + 112),
             (__int64)v13) )
      {
        v39 = v13 + 2;
        v40 = *((_QWORD *)v13 + 1);
        if ( *(struct D3DKMDT_HVIDPN__ **)(v40 + 8) != v13 + 2
          || (v10 = (_QWORD *)*((_QWORD *)v13 + 2), (_QWORD *)*v10 != v39) )
        {
          __fastfail(3u);
        }
        *v10 = v40;
        *(_QWORD *)(v40 + 8) = v10;
        *v39 = 0LL;
        *((_QWORD *)v13 + 2) = 0LL;
        --*(_QWORD *)(v38 + 32);
      }
      v17 = (void (__fastcall ***)(_QWORD, __int64))(v13 + 22);
      v18 = _InterlockedDecrement((volatile signed __int32 *)v13 + 24);
      if ( !v18 )
      {
        if ( v17 )
          (**v17)(v17, 1LL);
        goto LABEL_23;
      }
      if ( v18 >= 0 )
      {
LABEL_23:
        v19 = 0;
        goto LABEL_24;
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v17, v10);
      v34 = v18;
    }
    else
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v34 = *((_QWORD *)v13 + 14);
      v33[4] = v13;
      v33[5] = v14;
    }
    v33[3] = v34;
    WdLogEvent5_WdError(v33);
    goto LABEL_23;
  }
  v28 = WdLogNewEntry5_WdError(v11, v10);
  v30 = *(_QWORD *)(v14 + 40);
  v31 = (_QWORD *)v28;
  if ( !v30 )
  {
    v32 = WdLogNewEntry5_WdAssertion(0LL, v29);
    WdLogEvent5_WdAssertion(v32);
    v30 = *(_QWORD *)(v14 + 40);
  }
  v31[3] = ContainedBy<DMMVIDPN>::GetContainer(v30 + 64, v29);
  v31[4] = v13;
  v31[5] = v12;
  WdLogEvent5_WdError(v31);
  v19 = -1071774928;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, (__int64)v10);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v41);
  return v19;
}

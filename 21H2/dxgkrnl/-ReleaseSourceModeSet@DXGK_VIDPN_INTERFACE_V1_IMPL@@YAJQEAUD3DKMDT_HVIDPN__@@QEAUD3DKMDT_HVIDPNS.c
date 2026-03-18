/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C01D1A10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001D700 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbp
  DXGK_VIDPN_INTERFACE_V1_IMPL *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 Container; // rax
  __int64 v19; // r11
  struct D3DKMDT_HVIDPN__ *v20; // rax
  struct D3DKMDT_HVIDPN__ *v21; // rcx
  struct D3DKMDT_HVIDPN__ **v22; // rdx
  __int64 v23; // rbx
  int v24; // [rsp+50h] [rbp-38h] BYREF
  __int64 v25; // [rsp+58h] [rbp-30h]
  char v26; // [rsp+60h] [rbp-28h]

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 7044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7044);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 7044);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
  {
    if ( a2 && *((_DWORD *)a2 + 32) == 1833173004 )
    {
      v8 = *((_QWORD *)a2 + 14);
      if ( !v8 )
        WdLogSingleEntry0(1LL);
      v9 = *(_QWORD *)(v8 + 40);
      if ( !v9 )
      {
        WdLogSingleEntry0(1LL);
        v9 = *(_QWORD *)(v8 + 40);
      }
      v10 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v9 + 72);
      if ( !v10 )
      {
        WdLogSingleEntry0(1LL);
        v10 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v9 + 72);
      }
      if ( v10 == this )
      {
        v11 = *((_QWORD *)a2 + 14);
        if ( v11 == v8 )
        {
          if ( a2 == *(struct D3DKMDT_HVIDPN__ *const *)(v8 + 120) )
          {
            WdLogSingleEntry2(7LL, a2, *(unsigned int *)(v8 + 24));
            auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)(v8 + 120), 0LL);
            if ( *((_DWORD *)a2 + 24) != 1 )
              WdLogSingleEntry0(1LL);
          }
          if ( *((_DWORD *)a2 + 24) == 1
            && DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
                 *(_QWORD *)(v8 + 112),
                 (__int64)a2) )
          {
            v20 = a2 + 2;
            v21 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)a2 + 1);
            if ( *((struct D3DKMDT_HVIDPN__ *const *)v21 + 1) != a2 + 2
              || (v22 = (struct D3DKMDT_HVIDPN__ **)*((_QWORD *)a2 + 2), *v22 != v20) )
            {
              __fastfail(3u);
            }
            *v22 = v21;
            *((_QWORD *)v21 + 1) = v22;
            *(_QWORD *)v20 = 0LL;
            *((_QWORD *)a2 + 2) = 0LL;
            --*(_QWORD *)(v19 + 32);
          }
          v12 = _InterlockedDecrement((volatile signed __int32 *)a2 + 24);
          if ( v12 )
          {
            if ( v12 < 0 )
            {
              v23 = v12;
              WdLogSingleEntry1(2LL, v12);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
                v23,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else if ( a2 != (struct D3DKMDT_HVIDPN__ *const)-88LL )
          {
            (**((void (__fastcall ***)(struct D3DKMDT_HVIDPN__ *const, __int64))a2 + 11))(a2 + 22, 1LL);
          }
        }
        else
        {
          WdLogSingleEntry3(2LL, v11, a2, v8);
        }
        v13 = 0;
      }
      else
      {
        v17 = *(_QWORD *)(v8 + 40);
        if ( !v17 )
        {
          WdLogSingleEntry0(1LL);
          v17 = *(_QWORD *)(v8 + 40);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(v17 + 64);
        WdLogSingleEntry3(2LL, Container, a2, this);
        v13 = -1071774928;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a2);
      v13 = -1071774968;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    v13 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v24);
  }
  return v13;
}

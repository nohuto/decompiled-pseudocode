/*
 * XREFs of ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800EA500
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A44D0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002B018 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _lambda_18e6b4387c3745596cadcb99ee9f0265_::operator() @ 0x1800EA224 (_lambda_18e6b4387c3745596cadcb99ee9f0265_--operator().c)
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800EA29C (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIUnknown@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801525E4 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A5348 (--$_Resize@U_Value_init_tag@std@@@-$vector@UComputeScribbleLatencyData@@V-$allocator@UComputeScr.c)
 *     ?AcquireForScribble@CComputeScribbleFramebuffer@@AEAA_N_K@Z @ 0x1801A58D0 (-AcquireForScribble@CComputeScribbleFramebuffer@@AEAA_N_K@Z.c)
 *     ?LockForDraw@CComputeScribbleFramebuffer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1801A5EA4 (-LockForDraw@CComputeScribbleFramebuffer@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 *     ?WaitForCommandList@CComputeScribbleFramebuffer@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801A611C (-WaitForCommandList@CComputeScribbleFramebuffer@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x1801A6388 (McTemplateU0xxxq_EventWriteTransfer.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1801A9928 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x18020D190 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::DispatchScribbles(
        CComputeScribbleFramebuffer *this,
        struct ID3D12CommandQueue *a2,
        CComputeScribbleStopwatch *a3,
        unsigned __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct ID3D12CommandQueueVtbl *lpVtbl; // rax
  __int64 v13; // rdx
  HRESULT (__stdcall *Wait)(ID3D12CommandQueue *, ID3D12Fence *, UINT64); // rax
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  __int64 v18; // rdx
  int v20; // eax
  enum D3D12_RESOURCE_STATES v21; // r8d
  __int64 v22; // rdi
  float ElapsedTimeMs; // xmm0_4
  unsigned __int64 v24; // rax
  float v25; // xmm0_4
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  int v30; // ecx
  float v31; // xmm0_4
  int v32; // [rsp+20h] [rbp-40h]
  RTL_SRWLOCK *v33; // [rsp+30h] [rbp-30h] BYREF
  __int64 v34; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v35[3]; // [rsp+40h] [rbp-20h] BYREF
  char v36; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( CComputeScribbleFramebuffer::AcquireForScribble(this, a4) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0xq_EventWriteTransfer(
        v10,
        &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Start,
        a4,
        *((unsigned int *)this + 59));
    v11 = *((_QWORD *)this + 9);
    lpVtbl = a2->lpVtbl;
    v35[0] = this;
    v35[1] = a2;
    v13 = *(_QWORD *)(v11 + 24);
    Wait = lpVtbl->Wait;
    v35[2] = a4;
    v15 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, __int64, unsigned __int64))Wait)(a2, v13, a4);
    v16 = v15;
    if ( v15 >= 0 )
    {
      CComputeScribbleFramebuffer::LockForDraw(this, &v33);
      if ( *((_BYTE *)this + 232)
        && (v17 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _QWORD, unsigned __int64))a2->lpVtbl->Wait)(
                    a2,
                    *(_QWORD *)(*((_QWORD *)this + 27) + 24LL),
                    a4),
            v16 = v17,
            v17 < 0) )
      {
        v18 = 313LL;
      }
      else
      {
        a6[1] = *a6;
        std::vector<ComputeScribbleLatencyData>::_Resize<std::_Value_init_tag>(
          a6,
          (__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 3);
        v17 = CComputeScribbleFramebuffer::BuildCommandList((__int64)this, (__int64)a3, a5, (__int64)a6);
        v16 = v17;
        if ( v17 >= 0 )
        {
          v34 = *((_QWORD *)this + 5);
          ((void (__fastcall *)(struct ID3D12CommandQueue *, __int64, __int64 *))a2->lpVtbl->ExecuteCommandLists)(
            a2,
            1LL,
            &v34);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v33);
          v36 = 0;
          lambda_18e6b4387c3745596cadcb99ee9f0265_::operator()((__int64)v35);
          v20 = CComputeScribbleFramebuffer::WaitForCommandList(this, a2);
          v16 = v20;
          if ( v20 >= 0 )
          {
            if ( g_LockAndReadComputeScribble )
              DebugInspectSurface(a2, *((struct ID3D12Resource **)this + 3), v21);
            v22 = *((_QWORD *)a3 + 6);
            ElapsedTimeMs = CComputeScribbleStopwatch::GetElapsedTimeMs(a3);
            v24 = 0LL;
            v25 = (float)(ElapsedTimeMs / 1000.0) * *((float *)a3 + 2);
            if ( v25 >= 9.223372e18 )
            {
              v25 = v25 - 9.223372e18;
              if ( v25 < 9.223372e18 )
                v24 = 0x8000000000000000uLL;
            }
            v26 = a6[1];
            v27 = v24 + (unsigned int)(int)v25;
            v28 = *a6;
            v29 = *((_QWORD *)a3 + 6) + v27;
            while ( v28 != v26 )
            {
              *(_QWORD *)(v28 + 32) = v29;
              v28 += 56LL;
            }
            v31 = CComputeScribbleStopwatch::GetElapsedTimeMs(a3) * 1000.0;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
              McTemplateU0xxxq_EventWriteTransfer(
                v30,
                (unsigned int)&EVTDESC_COMPUTESCRIBBLE_GPUFINISHED,
                a4,
                v22,
                v29,
                (int)v31);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x147,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
            (const char *)(unsigned int)v20,
            v32);
          return v16;
        }
        v18 = 319LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
        (const char *)(unsigned int)v17,
        v32);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v33);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x130,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
        (const char *)(unsigned int)v15,
        v32);
    }
    v36 = 0;
    lambda_18e6b4387c3745596cadcb99ee9f0265_::operator()((__int64)v35);
    return v16;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0xq_EventWriteTransfer(
      v10,
      &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCHCANCELED,
      a4,
      *((unsigned int *)this + 59));
  return 0LL;
}

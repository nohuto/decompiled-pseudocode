/*
 * XREFs of ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAJ_K@Z @ 0x1801A610C
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x18019FCD0 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E9464 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014E76C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180185460 (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?AcquireForScribble@CComputeScribbleFramebuffer@@AEAA_N_K@Z @ 0x1801A62A0 (-AcquireForScribble@CComputeScribbleFramebuffer@@AEAA_N_K@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801A69D8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801A6D2C (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::AcquireForRender(CComputeScribbleFramebuffer *this, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  void *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // edi
  DWORD v11; // eax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 208) )
    goto LABEL_8;
  if ( CComputeScribbleFramebuffer::AcquireForScribble(this, *((_QWORD *)this + 25)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0xqq_EventWriteTransfer(
        v4,
        &EVTDESC_COMPUTESCRIBBLE_FRAMECOMPLETED,
        *((_QWORD *)this + 25),
        *((_DWORD *)this + 59),
        0);
LABEL_8:
    std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear((char *)this + 104);
    *((_WORD *)this + 116) = 0;
    result = 0LL;
    *((_BYTE *)this + 208) = 0;
    *((_QWORD *)this + 25) = a2;
    return result;
  }
  v5 = *((_QWORD *)this + 25);
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 10) + 24LL) + 64LL))(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL)) >= v5 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0xqq_EventWriteTransfer(v7, &EVTDESC_COMPUTESCRIBBLE_FRAMECOMPLETED, v5, *((_DWORD *)this + 59), 1);
    goto LABEL_8;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0xqq_EventWriteTransfer(v7, &EVTDESC_COMPUTESCRIBBLE_FRAMECOMPLETED, v5, *((_DWORD *)this + 59), 2);
  wil::details::ResetEvent(*((wil::details **)this + 11), v6);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 10) + 24LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 10) + 24LL),
         *((_QWORD *)this + 25),
         *((_QWORD *)this + 11));
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = WaitForSingleObjectEx(*((HANDLE *)this + 11), 0xFFFFFFFF, 0);
    if ( v11 != 258 )
    {
      if ( v11 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xA09,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
          v12);
        __debugbreak();
      }
      goto LABEL_8;
    }
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xB8,
             (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
             v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}

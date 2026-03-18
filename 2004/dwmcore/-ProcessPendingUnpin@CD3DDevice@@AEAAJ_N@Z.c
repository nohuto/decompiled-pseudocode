/*
 * XREFs of ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x1800AF994
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800AFA10 (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180064188 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800D4B70 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x1801F99E8 (--$emplace_back@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com_.c)
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDevice@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDevice@@@2@@Z @ 0x18023F35C (-erase@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDevice@@$0.c)
 */

__int64 __fastcall CD3DDevice::ProcessPendingUnpin(CD3DDevice *this, char a2)
{
  unsigned int v2; // edi
  char *v3; // r14
  __int64 v4; // rbx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (char *)this + 1232;
  v4 = *((_QWORD *)this + 154);
  v11 = 0LL;
  v12 = 0LL;
  while ( v4 != *((_QWORD *)this + 155) )
  {
    if ( *(_QWORD *)(v4 + 8) <= GetCurrentFrameId() || a2 )
    {
      std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
        &v11,
        v4);
      v13 = v4;
      v4 = *(_QWORD *)detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
                        v3,
                        &v14,
                        &v13);
    }
    else
    {
      v4 += 16LL;
    }
  }
  if ( v11 != (_QWORD)v12 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 73) + 32LL))(
           *((_QWORD *)this + 73),
           v11,
           ((__int64)v12 - v11) >> 3);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xF98u, 0LL);
    v2 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v10, 0);
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(&v11);
  return v2;
}

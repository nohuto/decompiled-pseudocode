/*
 * XREFs of ?OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000D570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x18017F904 (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x18017FEA4 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnFocusRequest(
        InputRedirectionProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v4; // esi
  char *v5; // r15
  __int64 i; // rbx
  InputRedirectionTarget *v10; // rbp
  __int64 (__fastcall *v11)(InputRedirectionTarget *, GUID *, char *); // rdi
  int v12; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  *(_DWORD *)a4 = 0;
  v5 = (char *)this + 80;
  for ( i = *((_QWORD *)this + 10); i != *((_QWORD *)this + 11); i += 16LL )
  {
    if ( (*((_DWORD *)a2 + 1) & *(_DWORD *)i) != 0 )
    {
      v10 = *(InputRedirectionTarget **)(i + 8);
      if ( InputRedirectionTarget::IsValid(v10) )
      {
        if ( *((_DWORD *)v10 + 16) != *((_DWORD *)a2 + 4) )
        {
          v11 = **(__int64 (__fastcall ***)(InputRedirectionTarget *, GUID *, char *))v10;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 1);
          v12 = v11(v10, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
          if ( v12 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x1AB,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection"
                            "\\system\\lib\\inputredirectionprocessor.cpp",
              (const char *)(unsigned int)v12,
              v13);
            __debugbreak();
          }
          LOBYTE(v4) = (*(unsigned __int8 (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v10 + 32LL))(v10) != 0;
          *(_DWORD *)a4 = v4 + 2;
        }
      }
      else
      {
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase(v5, &v15, i);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return 0LL;
    }
  }
  return 0LL;
}

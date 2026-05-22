/*
 * XREFs of ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x1800186AC
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180017EB0 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0InputSiteTarget@@QEAA@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x180019BE0 (--0InputSiteTarget@@QEAA@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180079288 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 *__fastcall InputSiteTarget::Create(__int64 *a1, __int64 a2)
{
  void *v4; // rax
  const char *v5; // r9
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4
    || (v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))InputSiteTarget::InputSiteTarget(v4, a2),
        (v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v6) == 0LL) )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0xF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputsitetarget.cpp",
      v5);
    JUMPOUT(0x18001876ALL);
  }
  *a1 = 0LL;
  v8 = **v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  v9 = v8(v7, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a1);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputsitetarget.cpp",
      (const char *)(unsigned int)v9,
      v11);
    __debugbreak();
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v7)[2])(v7);
  return a1;
}

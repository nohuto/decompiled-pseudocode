/*
 * XREFs of ?InitializeTargetInfoWithPointerInfo@@YAXPEBUtagMANIPULATION_POINTER_INFO@@PEAPEAUIInputTarget@@@Z @ 0x1800B0618
 * Callers:
 *     _lambda_a3b8ebf0ea7227d18a15fa2b24c62f92_::operator() @ 0x180041268 (_lambda_a3b8ebf0ea7227d18a15fa2b24c62f92_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800183E0 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x180029FB8 (-CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x1800337B0 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall InitializeTargetInfoWithPointerInfo(
        const struct tagMANIPULATION_POINTER_INFO *a1,
        struct IInputTarget **a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IInputTarget *v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  v10 = 0LL;
  v4 = DWMInputTarget::CreateHelper((int)a1 + 152, &v10, 0, 0, &v8);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2221LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v9 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v8,
         &v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2224LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 80LL))(v9, *((unsigned int *)a1 + 48));
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2228LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef((__int64 *)&v8);
  *a2 = v8;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
}

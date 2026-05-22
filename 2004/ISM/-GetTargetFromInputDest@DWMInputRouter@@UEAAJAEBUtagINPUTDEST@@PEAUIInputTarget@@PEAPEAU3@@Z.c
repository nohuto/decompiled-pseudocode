/*
 * XREFs of ?GetTargetFromInputDest@DWMInputRouter@@UEAAJAEBUtagINPUTDEST@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x180138200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x1800B7740 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?Create@InputDestTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x18013A41C (-Create@InputDestTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::GetTargetFromInputDest(
        DWMInputRouter *this,
        const struct tagINPUTDEST *a2,
        void (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64 *),
        struct IInputTarget **a4)
{
  void (__fastcall *v7)(struct IInputTarget *, GUID *, __int64 *); // rbx
  struct IInputTarget *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IInputTarget *v14; // [rsp+60h] [rbp+30h] BYREF

  v14 = 0LL;
  if ( a3 )
  {
    v12[0] = 0LL;
    v7 = **a3;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v12);
    v7((struct IInputTarget *)a3, &GUID_245edb10_c010_455c_a24c_6780cdaecce8, v12);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagINPUTDEST *))(*(_QWORD *)v12[0] + 24LL))(
           v12[0],
           a2) )
    {
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)&v14, (__int64)a3);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v12);
    v8 = v14;
    if ( v14 )
      goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  v9 = InputDestTarget::Create(a2, &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v8 = v14;
LABEL_8:
    v14 = 0LL;
    *a4 = v8;
    v10 = 0;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x694,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)(unsigned int)v9);
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return v10;
}

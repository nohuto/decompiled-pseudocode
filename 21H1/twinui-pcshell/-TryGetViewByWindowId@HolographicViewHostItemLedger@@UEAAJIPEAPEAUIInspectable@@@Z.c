/*
 * XREFs of ?TryGetViewByWindowId@HolographicViewHostItemLedger@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x180225F90
 * Callers:
 *     ?TryGetProcessIdByWindowId@HolographicViewHostItemLedger@@UEAAJIPEAI@Z @ 0x180225D90 (-TryGetProcessIdByWindowId@HolographicViewHostItemLedger@@UEAAJIPEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180225CF0 (-TryFindViewHostItem@HolographicViewHostItemLedger@@UEAA-AV-$ComPtr@UIViewHostItem@Holographic@S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicViewHostItemLedger::TryGetViewByWindowId(
        HolographicViewHostItemLedger *this,
        int a2,
        struct IInspectable **a3)
{
  __int64 result; // rax
  int (*v6)(void); // rbx
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct IInspectable **); // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v12 = 0LL;
  v6 = *(int (**)(void))(**((_QWORD **)this + 8) + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v12);
  try
  {
    if ( v6() >= 0 )
    {
      HolographicViewHostItemLedger::TryFindViewHostItem((__int64)this + 8, (__int64 *)&v13, v12);
      v7 = (__int64)v13;
      if ( v13 )
      {
        v8 = (**v13)(v13, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a3);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC3,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
            (const char *)(unsigned int)v8);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
          return v9;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC9,
                           (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
                           v10);
  }
  return result;
}

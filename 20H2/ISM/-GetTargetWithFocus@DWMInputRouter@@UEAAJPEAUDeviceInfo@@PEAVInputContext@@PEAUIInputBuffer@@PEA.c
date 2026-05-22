/*
 * XREFs of ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800483E0
 * Callers:
 *     ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180041DC0 (-GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F088 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CF0 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x1800337B0 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::GetTargetWithFocus(
        DWMInputRouter *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget **v9; // rdi
  struct IInputTarget **v11; // rbx
  __int64 *v12; // rsi
  ContextualProcessorManager **v13; // rbx
  struct IInputTarget **v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = a5;
  if ( a5 )
  {
    v11 = (struct IInputTarget **)((char *)this + 272);
    if ( a2 )
    {
      a5 = 0LL;
      v12 = (__int64 *)((char *)a3 + 16);
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)a3 + 2, (__int64 *)this + 34);
      v13 = (ContextualProcessorManager **)*((_QWORD *)this + 32);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
      if ( (int)ContextualProcessorManager::OnFocusRequest(v13, a2, a3, a4, (struct IInputTarget **)&a5) >= 0 )
      {
        Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef((__int64 *)&a5);
        v14 = a5;
      }
      else
      {
        Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(v12);
        v14 = (struct IInputTarget **)*v12;
      }
      *v9 = (struct IInputTarget *)v14;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
    }
    else
    {
      Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef((__int64 *)this + 34);
      *v9 = *v11;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x660,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}

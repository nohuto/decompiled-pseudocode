/*
 * XREFs of ??$SendUiaPropertyEvent@_N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@H_N1@Z @ 0x1803BB170
 * Callers:
 *     ?UpdateViewport@CScrollViewer@@UEAAXXZ @ 0x1803BBF30 (-UpdateViewport@CScrollViewer@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ElementHelpers::SendUiaPropertyEvent<bool>(__int64 a1, __int64 a2, char a3, char a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT v9; // eax
  IRawElementProviderSimple *pProvider; // [rsp+28h] [rbp-29h] BYREF
  VARIANTARG pvarg; // [rsp+30h] [rbp-21h] BYREF
  VARIANTARG v13; // [rsp+48h] [rbp-9h] BYREF
  VARIANT newValue; // [rsp+68h] [rbp+17h] BYREF
  VARIANT oldValue; // [rsp+88h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  if ( a3 == a4
    || !UiaClientsAreListening()
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1) )
  {
    return 0LL;
  }
  pProvider = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  v7 = (*(__int64 (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)a1 + 376LL))(
         a1,
         &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
         &pProvider);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v13.vt = 11;
    v13.iVal = -1;
    if ( !a3 )
      v13.iVal = 0;
    pvarg.vt = 11;
    pvarg.iVal = -1;
    if ( !a4 )
      pvarg.iVal = 0;
    newValue = pvarg;
    oldValue = v13;
    v9 = UiaRaiseAutomationPropertyChangedEvent(pProvider, 30058, &oldValue, &newValue);
    v8 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ElementHelpers.h",
        (const char *)(unsigned int)v9);
    VariantClear(&pvarg);
    VariantClear(&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ElementHelpers.h",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  return v8;
}

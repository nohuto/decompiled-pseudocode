/*
 * XREFs of ?GetActiveInputTypeListAsync@MPCConstantManagerClient@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x180114AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING________Windows::Foundation::Collections::IVector_HSTRING________Windows::Internal::ComTaskPoolHandler__lambda_de6bcc426287dbdda407399e3f0c7994___ @ 0x18010EE80 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult__ea_18010EE80.c)
 */

__int64 __fastcall MPCConstantManagerClient::GetActiveInputTypeListAsync(__int64 a1, __int64 *a2)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 184LL) )
  {
    v6 = a1;
    v3 = 4LL;
    v4 = 0;
    return Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING________Windows::Foundation::Collections::IVector_HSTRING________Windows::Internal::ComTaskPoolHandler__lambda_de6bcc426287dbdda407399e3f0c7994___(
             (__int64)&v3,
             a2,
             0LL,
             &v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}

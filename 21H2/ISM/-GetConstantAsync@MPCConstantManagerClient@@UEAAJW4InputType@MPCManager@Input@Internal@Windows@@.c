/*
 * XREFs of ?GetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@6@@Z @ 0x180115130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue__Windows::Foundation::IPropertyValue___Windows::Internal::ComTaskPoolHandler__lambda_7c875662d6abaa9f8d1386a75bd755d7___ @ 0x18010F370 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult__ea_18010F370.c)
 */

__int64 __fastcall MPCConstantManagerClient::GetConstantAsync(__int64 a1, int a2, HSTRING a3, __int64 *a4)
{
  __int64 v8; // r8
  _DWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  HSTRING v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING newString; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 184LL) )
  {
    WindowsDuplicateString(a3, &newString);
    v9[1] = 0;
    v9[2] = 0;
    v12 = newString;
    v10 = a1;
    v11 = a2;
    v9[0] = 4;
    return Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue__Windows::Foundation::IPropertyValue___Windows::Internal::ComTaskPoolHandler__lambda_7c875662d6abaa9f8d1386a75bd755d7___(
             (__int64)v9,
             a4,
             v8,
             (__int64)&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}

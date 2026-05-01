/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UWindowTabDataModelActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_bd0895ad6d8416644174f66c64660633_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1800CC520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelActiveTabChangedEventArgs>,_lambda_bd0895ad6d8416644174f66c64660633_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h]
  __int64 v6; // [rsp+40h] [rbp+18h]

  v6 = a3;
  v5 = a2;
  try
  {
    (*(void (**)(void))(a1 + 16))();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}

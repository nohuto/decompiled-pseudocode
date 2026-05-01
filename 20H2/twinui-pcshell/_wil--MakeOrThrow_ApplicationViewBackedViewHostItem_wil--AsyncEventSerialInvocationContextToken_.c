/*
 * XREFs of _wil::MakeOrThrow_ApplicationViewBackedViewHostItem_wil::AsyncEventSerialInvocationContextToken_&__::_1_::dtor$0 @ 0x1802571DA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@QEAA@XZ @ 0x1802572F0 (--1-$MakeSafelyCopyableResult@V-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAV.c)
 */

__int64 __fastcall wil::MakeOrThrow_ApplicationViewBackedViewHostItem_wil::AsyncEventSerialInvocationContextToken____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>::~MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>(*(_QWORD *)(a2 + 64));
  }
  return result;
}

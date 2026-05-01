/*
 * XREFs of ?GetAt@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180060E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v4; // esi
  _DWORD *v5; // rdi
  __int64 result; // rax

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  v4 = *(_DWORD *)(a1 + 48);
  v5 = *(_DWORD **)(a1 + 40);
  if ( v4 < 0 )
  {
    RoOriginateError((unsigned int)v4, 0LL);
    return (unsigned int)v4;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 48LL))(*(_QWORD *)(a1 + 40), a2, a3);
    if ( *(_DWORD *)(a1 + 52) != v5[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( (int)result < 0 )
      {
        RoTransformError((unsigned int)result, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *(_OWORD *)a3 = 0LL;
        *(_OWORD *)(a3 + 16) = 0LL;
        *(_OWORD *)(a3 + 32) = 0LL;
        *(_QWORD *)(a3 + 48) = 0LL;
      }
      return 2147483660LL;
    }
  }
  return result;
}

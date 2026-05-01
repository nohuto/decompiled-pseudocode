/*
 * XREFs of ?SetAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x18036C840
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180055E88 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180055EA4 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180154874 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x18015A438 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // rbp
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  RTL_SRWLOCK *v11; // rcx
  _BYTE v13[4]; // [rsp+30h] [rbp-68h] BYREF
  int v14; // [rsp+34h] [rbp-64h] BYREF
  RTL_SRWLOCK *v15; // [rsp+38h] [rbp-60h] BYREF
  _BYTE Destination[56]; // [rsp+40h] [rbp-58h] BYREF

  v14 = 0;
  v4 = a2;
  XWinRT::SerializingLockPolicy::Write(&v15, (RTL_SRWLOCK *)(a1 + 72), &v14);
  v6 = v14;
  if ( v14 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v13);
      v7 = 56 * v4;
      v6 = 0;
      if ( memmove_s(Destination, 0x38uLL, (const void *const)(56 * v4 + *(_QWORD *)(a1 + 56)), 0x38uLL) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 56);
        v9 = *(_OWORD *)(a3 + 16);
        *(_OWORD *)(v8 + 56 * v4) = *(_OWORD *)a3;
        v10 = *(_OWORD *)(a3 + 32);
        *(_OWORD *)(v8 + v7 + 16) = v9;
        *(_QWORD *)&v9 = *(_QWORD *)(a3 + 48);
        *(_OWORD *)(v8 + v7 + 32) = v10;
        *(_QWORD *)(v8 + v7 + 48) = v9;
        ++*(_DWORD *)(a1 + 88);
      }
    }
  }
  if ( v15 )
  {
    v11 = v15 + 1;
    if ( LODWORD(v15->Ptr) == 1 )
      LODWORD(v11->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v11);
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}

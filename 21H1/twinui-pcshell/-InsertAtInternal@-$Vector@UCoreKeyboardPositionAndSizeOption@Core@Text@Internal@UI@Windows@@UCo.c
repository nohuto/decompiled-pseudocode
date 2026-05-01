/*
 * XREFs of ?InsertAtInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@_N@Z @ 0x18004D250
 * Callers:
 *     ?Append@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x18004D200 (-Append@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboard.c)
 *     ?InsertAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x18034B5A0 (-InsertAt@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboa.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18004D3D8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18004D3F4 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x180136078 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rbx
  unsigned int v9; // eax
  int v10; // r12d
  unsigned int v11; // r8d
  unsigned int v12; // eax
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // rcx
  __int128 v16; // xmm0
  int v18; // ebp
  __int64 v19; // rcx
  unsigned int v20; // ebp
  void *v21; // rax
  char v22[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a1 + 72;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*(_DWORD *)(a1 + 80) )
      *(_DWORD *)(a1 + 80) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  v9 = *(_DWORD *)(a1 + 40);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 40);
  if ( a2 > v9 )
  {
    v10 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else if ( v9 >= 0x7FFFFFFF )
  {
    v10 = -2147024882;
  }
  else
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v22, *(unsigned __int8 *)(a1 + 93), a1 + 96);
    v10 = 0;
    v11 = *(_DWORD *)(a1 + 44);
    if ( *(_DWORD *)(a1 + 40) + 1 <= v11 )
      goto LABEL_9;
    v18 = 1;
    v19 = *(_QWORD *)(a1 + 56);
    if ( v11 + 1 <= (v11 >> 1) + v11 )
      v18 = v11 >> 1;
    v20 = v11 + v18;
    v21 = v19 ? (void *)_o_realloc(v19, 56LL * v20) : malloc(56LL * v20);
    if ( v21 )
    {
      *(_QWORD *)(a1 + 56) = v21;
      *(_DWORD *)(a1 + 44) = v20;
    }
    else
    {
      v10 = -2147024882;
    }
    if ( v10 >= 0 )
    {
LABEL_9:
      v12 = *(_DWORD *)(a1 + 40);
      if ( a2 < v12
        && memmove_s(
             (void *const)(*(_QWORD *)(a1 + 56) + 56LL * (a2 + 1)),
             56LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 56) + 56LL * a2),
             56LL * (v12 - a2)) )
      {
        v10 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 56);
        v14 = *(_OWORD *)(a3 + 16);
        v15 = 56LL * a2;
        *(_OWORD *)(v15 + v13) = *(_OWORD *)a3;
        v16 = *(_OWORD *)(a3 + 32);
        *(_OWORD *)(v15 + v13 + 16) = v14;
        *(_QWORD *)&v14 = *(_QWORD *)(a3 + 48);
        *(_OWORD *)(v15 + v13 + 32) = v16;
        *(_QWORD *)(v15 + v13 + 48) = v14;
        ++*(_DWORD *)(a1 + 40);
        ++*(_DWORD *)(a1 + 88);
      }
    }
  }
  if ( v4 )
  {
    if ( *(_DWORD *)v4 == 1 )
      *(_DWORD *)(v4 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v4 + 8));
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  else
    return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent(
             (unsigned __int8)v22[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             a2);
}

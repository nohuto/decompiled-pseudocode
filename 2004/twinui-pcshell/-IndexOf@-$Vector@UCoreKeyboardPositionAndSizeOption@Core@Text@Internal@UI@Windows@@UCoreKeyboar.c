/*
 * XREFs of ?IndexOf@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x18036C810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008E3B4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18014F224 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?IndexOfInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@IU678295@PEAIPEAE@Z @ 0x18036C9B8 (-IndexOfInternal@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCor.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOf(
        __int64 a1,
        __int128 *a2,
        _DWORD *a3,
        _BYTE *a4)
{
  char *v8; // rsi
  int v9; // r15d
  const struct std::nothrow_t *i; // rdx
  RTL_SRWLOCK *v11; // rcx
  int v12; // ebx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  size_t v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h]
  __int128 v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  int v26; // [rsp+B0h] [rbp+40h] BYREF
  RTL_SRWLOCK *v27; // [rsp+C0h] [rbp+50h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read(&v27, (RTL_SRWLOCK *)(a1 + 72), &v26);
  v12 = v26;
  if ( v26 >= 0 )
  {
    v13 = *(unsigned int *)(a1 + 40);
    if ( *(_DWORD *)(a1 + 48) )
    {
      v17 = 56 * v13;
      if ( !is_mul_ok(v13, 0x38uLL) )
        v17 = -1LL;
      v8 = (char *)operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL;
              (unsigned int)i < *(_DWORD *)(a1 + 40);
              *(RTL_SRWLOCK *)&v8[(_QWORD)v11 + 48] = *(RTL_SRWLOCK *)((char *)v11 + v18 + 48) )
        {
          if ( v12 < 0 )
            break;
          v12 = 0;
          v11 = (RTL_SRWLOCK *)(56LL * (unsigned int)i);
          v18 = *(_QWORD *)(a1 + 56);
          ++v9;
          i = (const struct std::nothrow_t *)(unsigned int)((_DWORD)i + 1);
          *(_OWORD *)&v8[(_QWORD)v11] = *(_OWORD *)((char *)&v11->Ptr + v18);
          *(_OWORD *)&v8[(_QWORD)v11 + 16] = *(_OWORD *)((char *)&v11[2].Ptr + v18);
          *(_OWORD *)&v8[(_QWORD)v11 + 32] = *(_OWORD *)((char *)&v11[4].Ptr + v18);
        }
      }
      else
      {
        v12 = -2147024882;
      }
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 56);
      v15 = a2[1];
      v22 = *a2;
      v16 = a2[2];
      v23 = v15;
      *(_QWORD *)&v15 = *((_QWORD *)a2 + 6);
      v24 = v16;
      v25 = v15;
      v12 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOfInternal(
              (_DWORD)v11,
              v14,
              v13,
              (unsigned int)&v22,
              (__int64)a3,
              (__int64)a4);
    }
  }
  if ( v27 )
  {
    v11 = v27 + 1;
    if ( LODWORD(v27->Ptr) == 1 )
      --LODWORD(v11->Ptr);
    else
      ReleaseSRWLockShared(v11);
  }
  if ( v12 >= 0 && v9 )
  {
    v19 = a2[1];
    v22 = *a2;
    v20 = a2[2];
    v23 = v19;
    *(_QWORD *)&v19 = *((_QWORD *)a2 + 6);
    v24 = v20;
    v25 = v19;
    v12 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOfInternal(
            (_DWORD)v11,
            (_DWORD)v8,
            v9,
            (unsigned int)&v22,
            (__int64)a3,
            (__int64)a4);
  }
  operator delete(v8, i);
  return (unsigned int)v12;
}

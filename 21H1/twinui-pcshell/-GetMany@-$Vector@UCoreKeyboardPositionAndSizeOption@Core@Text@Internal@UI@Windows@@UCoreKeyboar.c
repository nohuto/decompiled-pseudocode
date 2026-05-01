/*
 * XREFs of ?GetMany@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x18034AFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008DAB4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18012AB34 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // r12d
  unsigned int v7; // r15d
  _OWORD *v8; // rsi
  size_t v9; // rdi
  unsigned __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // xmm1_8
  __int64 v17; // rcx
  __int64 v18; // rax
  RTL_SRWLOCK *v19; // rcx
  unsigned int i; // ecx
  void *v22; // [rsp+20h] [rbp-48h]
  RTL_SRWLOCK *v23; // [rsp+28h] [rbp-40h] BYREF
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+80h] [rbp+18h]

  v5 = 0;
  v25 = 0;
  v7 = 0;
  v24 = 0;
  v8 = a4;
  v9 = a3;
  if ( a3 )
    memset_0(a4, 0, 56LL * a3);
  v22 = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v23, (RTL_SRWLOCK *)(a1 + 72), &v24);
  if ( !*(_DWORD *)(a1 + 48) || (v22 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v13 = v24;
  }
  else
  {
    v13 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v13 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( a2 > v7 )
    {
      v13 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v13 >= 0 && a3 )
    {
      v12 = a2;
      if ( *(_DWORD *)(a1 + 48) )
      {
        do
        {
          if ( (unsigned int)v12 >= v7 )
            break;
          v13 = 0;
          v14 = 56LL * (unsigned int)v12;
          v15 = *(_QWORD *)(a1 + 56);
          v12 = (unsigned int)(v12 + 1);
          *v8 = *(_OWORD *)(v14 + v15);
          v8[1] = *(_OWORD *)(v14 + v15 + 16);
          v8[2] = *(_OWORD *)(v14 + v15 + 32);
          v16 = *(_QWORD *)(v14 + v15 + 48);
          LODWORD(v15) = v25 + 1;
          *((_QWORD *)v8 + 6) = v16;
          v8 = (_OWORD *)((char *)v8 + 56);
          v25 = v15;
        }
        while ( (unsigned int)v15 < a3 );
      }
      else
      {
        do
        {
          if ( (unsigned int)v12 >= v7 )
            break;
          v13 = 0;
          v17 = 56LL * (unsigned int)v12;
          v18 = *(_QWORD *)(a1 + 56);
          ++v5;
          v12 = (unsigned int)(v12 + 1);
          *v8 = *(_OWORD *)(v17 + v18);
          v8[1] = *(_OWORD *)(v17 + v18 + 16);
          v8[2] = *(_OWORD *)(v17 + v18 + 32);
          *((_QWORD *)v8 + 6) = *(_QWORD *)(v17 + v18 + 48);
          v8 = (_OWORD *)((char *)v8 + 56);
        }
        while ( v5 < a3 );
      }
    }
  }
  if ( v23 )
  {
    v19 = v23 + 1;
    if ( LODWORD(v23->Ptr) == 1 )
      --LODWORD(v19->Ptr);
    else
      ReleaseSRWLockShared(v19);
  }
  if ( v13 >= 0 )
  {
    if ( v25 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v7 )
          break;
        v13 = 0;
        ++v5;
      }
    }
    *a5 = v5;
  }
  operator delete(v22, (const struct std::nothrow_t *)v12);
  return (unsigned int)v13;
}

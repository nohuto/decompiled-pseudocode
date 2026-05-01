/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180019EC0
 * Callers:
 *     ?RemoveAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180019080 (-RemoveAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Inter_ea_180019080.c)
 *     ?RemoveAtEnd@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1800190B0 (-RemoveAtEnd@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@In_ea_1800190B0.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000D9D8 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DAAC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18001AC18 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@_ea_18001AC18.c)
 *     _invalid_parameter_noinfo @ 0x18004547E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180045DBF (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  HSTRING v3; // rdi
  _DWORD *v4; // rbx
  RTL_SRWLOCK *v6; // r14
  unsigned int v9; // eax
  int v10; // ebp
  int v11; // r8d
  __int64 v12; // rdx
  void *v13; // rcx
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  char v18; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (_DWORD *)(a1 + 72);
  v6 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  v9 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    a2 = v9 - 1;
  if ( a2 >= v9 )
  {
    v10 = -2147483637;
LABEL_14:
    RoOriginateError((unsigned int)v10, 0LL);
    goto LABEL_20;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v18);
  v10 = 0;
  v3 = *(HSTRING *)(*(_QWORD *)(a1 + 56) + 8LL * a2);
  WindowsDeleteString(0LL);
  v11 = *(_DWORD *)(a1 + 40);
  if ( a2 < v11 - 1 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    v13 = (void *)(v12 + 8LL * a2);
    if ( 8LL * (v11 - a2 - 1) )
    {
      if ( !v13 || !(v12 + 8LL * (a2 + 1)) )
      {
        *(_DWORD *)_o__errno(v13, v12) = 22;
        invalid_parameter_noinfo();
        v10 = -2147418113;
        goto LABEL_14;
      }
      memmove_0(v13, (const void *)(v12 + 8LL * (a2 + 1)), 8LL * (v11 - a2 - 1));
      v11 = *(_DWORD *)(a1 + 40);
    }
  }
  ++*(_DWORD *)(a1 + 88);
  v14 = v11 - 1;
  v15 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = v14;
  v16 = v15 / 3;
  if ( v14 < v15 / 3 )
  {
    if ( v15 - 1 < v15 - v16 )
      v16 = 1;
    v10 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::ResizeStorage(
            a1,
            v15 - v16);
  }
LABEL_20:
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
  }
  WindowsDeleteString(v3);
  if ( v10 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v10;
}

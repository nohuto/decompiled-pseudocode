/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAI@Z @ 0x18001B6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // rdx
  int v7; // ebx
  _DWORD *v8; // rsi
  int v9; // eax
  _DWORD *v10; // rax
  __int64 i; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v16; // [rsp+68h] [rbp+38h]

  v16 = a4;
  v5 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      *(_QWORD *)(a4 + 8 * v5) = 0LL;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= a3 )
        break;
      a4 = v16;
    }
  }
  *a5 = 0;
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD **)(a1 + 40);
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD *))(*(_QWORD *)v8 + 128LL))(
           *(_QWORD *)(a1 + 40),
           a2,
           a3,
           v16,
           a5);
    v7 = v9;
    if ( *(_DWORD *)(a1 + 52) != v8[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v10 = a5;
        for ( i = 0LL; (unsigned int)i < *a5; v10 = a5 )
        {
          v12 = v16;
          v13 = *(_QWORD *)(v16 + 8 * i);
          if ( v13 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            *(_QWORD *)(v16 + 8 * i) = 0LL;
            v12 = v16;
          }
          *(_QWORD *)(v12 + 8 * i) = 0LL;
          i = (unsigned int)(i + 1);
        }
        *v10 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v7, 0LL);
  }
  return (unsigned int)v7;
}

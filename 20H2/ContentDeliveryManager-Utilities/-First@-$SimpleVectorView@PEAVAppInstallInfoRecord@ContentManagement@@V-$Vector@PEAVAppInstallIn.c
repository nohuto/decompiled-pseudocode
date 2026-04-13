/*
 * XREFs of ?First@?$SimpleVectorView@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVAppInstallInfoRecord@ContentManagement@@@345@@Z @ 0x18005F450
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e45e9e1ec08466e4f5c3085a0150e023_::operator() @ 0x18005F518 (_lambda_e45e9e1ec08466e4f5c3085a0150e023_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>::First(
        __int64 a1,
        __int64 *a2)
{
  int v2; // ebx
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 56);
  v8[0] = a1 - 16;
  v8[1] = &v9;
  if ( v2 >= 0 )
  {
    v5 = lambda_e45e9e1ec08466e4f5c3085a0150e023_::operator()(v8);
    v2 = v5;
    if ( *(_DWORD *)(a1 + 68) != *(_DWORD *)(v4 + 120) )
    {
      *(_DWORD *)(a1 + 64) = -2147483636;
      if ( v5 < 0 )
      {
        RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v6 = *v9;
        *v9 = 0LL;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v2, 0LL);
  }
  return (unsigned int)v2;
}

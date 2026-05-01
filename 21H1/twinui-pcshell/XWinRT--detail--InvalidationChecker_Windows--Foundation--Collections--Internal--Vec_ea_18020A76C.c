/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___0_1_0____XWinRT::IntVersionTag_::Do__lambda_e8f76fd7315c1e3a36f92b1b05a6051e___lambda_984adf696d896f4ec7bf4041a34bd0fe___ @ 0x18020A76C
 * Callers:
 *     ?First@?$SimpleVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@V?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@345@@Z @ 0x18020EC90 (-First@-$SimpleVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     _lambda_e8f76fd7315c1e3a36f92b1b05a6051e_::operator() @ 0x18020D494 (_lambda_e8f76fd7315c1e3a36f92b1b05a6051e_--operator().c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___0_1_0____XWinRT::IntVersionTag_::Do__lambda_e8f76fd7315c1e3a36f92b1b05a6051e___lambda_984adf696d896f4ec7bf4041a34bd0fe___(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // rcx

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = lambda_e8f76fd7315c1e3a36f92b1b05a6051e_::operator()(a3);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = **a4;
        v10 = *v9;
        *v9 = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}

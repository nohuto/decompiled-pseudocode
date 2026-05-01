/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::VectorOptions_unsigned_int_0_1_0____XWinRT::IntVersionTag_::Do__lambda_50d47402265d04ef4954bf0807805341___lambda_a3c8e308188640b6b3d4061a76232d7c___ @ 0x1802ADFCC
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAI0@Z @ 0x1802B55F0 (-GetMany@-$SimpleVectorIterator@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@F.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_1f25bd8ee63fa3be7e8e4d81566d165a___lambda_a3c8e308188640b6b3d4061a76232d7c___ @ 0x1802ADDA4 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_1f25bd8ee63fa3be7e8e4d81566d165a___lambda_a3.c)
 *     _lambda_a3c8e308188640b6b3d4061a76232d7c_::operator() @ 0x1802B1B60 (_lambda_a3c8e308188640b6b3d4061a76232d7c_--operator().c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_unsigned_int_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_unsigned_int__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_unsigned_int__Windows::Foundation::Collections::Internal::VectorOptions_unsigned_int_0_1_0____XWinRT::IntVersionTag_::Do__lambda_50d47402265d04ef4954bf0807805341___lambda_a3c8e308188640b6b3d4061a76232d7c___(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  int updated; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v15[0] = &v16;
    v15[1] = a3[1];
    v15[2] = a3[2];
    v9 = a3[3];
    v10 = a3[4];
    v16 = v8;
    v15[3] = v9;
    updated = XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_1f25bd8ee63fa3be7e8e4d81566d165a___lambda_a3c8e308188640b6b3d4061a76232d7c___(
                (volatile signed __int32 *)(v8 + 72),
                (__int64)v15,
                v10);
    v4 = updated;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( updated < 0 )
      {
        RoTransformError((unsigned int)updated, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        lambda_a3c8e308188640b6b3d4061a76232d7c_::operator()(a4, v12, v13);
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

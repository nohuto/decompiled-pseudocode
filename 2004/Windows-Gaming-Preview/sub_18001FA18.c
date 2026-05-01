/*
 * XREFs of sub_18001FA18 @ 0x18001FA18
 * Callers:
 *     sub_18001BFA0 @ 0x18001BFA0 (sub_18001BFA0.c)
 *     sub_18001C160 @ 0x18001C160 (sub_18001C160.c)
 *     sub_1800387F0 @ 0x1800387F0 (sub_1800387F0.c)
 * Callees:
 *     sub_18001DDD8 @ 0x18001DDD8 (sub_18001DDD8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001FA18(_QWORD *a1, __int64 a2, RTL_SRWLOCK *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 *i; // r14
  unsigned int v9; // eax
  int MatchingRestrictedErrorInfo; // ecx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 12));
    v6 = a2;
    v14 = a2;
  }
  v7 = *(_QWORD *)(v6 + 32);
  for ( i = *(__int64 **)(v6 + 16); i != *(__int64 **)(v6 + 24); ++i )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *a1);
    v5 = v9;
    if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 || v9 == -2147418105 || v9 == -2147418094 )
    {
      RoTransformError(v9, 0LL, 0LL);
      sub_18001DDD8(a3, *i);
      v5 = 0;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v15 = 0LL;
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v15);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v15);
        v11 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v11 = v5;
        v5 = v11;
        v12 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v6 = v14;
        break;
      }
      RoTransformError(v5, 0LL, 0LL);
      v5 = 0;
    }
    v7 += 8LL;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v5;
}

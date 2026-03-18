/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1802475A0
 * Callers:
 *     ??$IterateOnChunks@V_lambda_eda52849211e48fcc6ebfb474f023ee7_@@V_lambda_029b11a614e8d181bc695eeec47f77e0_@@@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_eda52849211e48fcc6ebfb474f023ee7_@@V_lambda_029b11a614e8d181bc695eeec47f77e0_@@@Z @ 0x180242318 (--$IterateOnChunks@V_lambda_eda52849211e48fcc6ebfb474f023ee7_@@V_lambda_029b11a614e8d181bc695eee.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  bool v4; // di
  __int64 v8; // rbx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0LL;
  v4 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  while ( (unsigned int)v8 < v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v8 + 16);
    v14 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *, __int64))(*(_QWORD *)v10 + 48LL))(v10, &v14, a3, v3);
    v3 = (unsigned int)v11;
    if ( v11 >= 0 )
    {
      v12 = *a2 - v14;
      if ( *a2 == (_QWORD)v14 )
        v12 = a2[1] - *((_QWORD *)&v14 + 1);
      v4 = v12 == 0;
      v3 = 0LL;
      if ( !v12 )
      {
        LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *, _QWORD))(*(_QWORD *)v10 + 56LL))(
                        v10,
                        a3,
                        a3,
                        0LL);
        break;
      }
    }
    v8 = (unsigned int)(v8 + 1);
    if ( (int)v3 < 0 )
      break;
  }
  if ( (int)v3 < 0 )
    goto LABEL_14;
  if ( !v4 )
    LODWORD(v3) = -2147483637;
  if ( (int)v3 < 0 )
LABEL_14:
    *a3 = 0LL;
  return (unsigned int)v3;
}

/*
 * XREFs of ?RemoveHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXPEBV?$function@$$A6AXXZ@std@@0@Z @ 0x180163300
 * Callers:
 *     wil::details::lambda_call__lambda_27c13b3ab3cd98c6277acab12c7fb549___::_lambda_call__lambda_27c13b3ab3cd98c6277acab12c7fb549___ @ 0x1801574E4 (wil--details--lambda_call__lambda_27c13b3ab3cd98c6277acab12c7fb549___--_lambda_call__lambda_27c1.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162598 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEBV?$function@$$A6AXXZ@std@@@std@@@std@@@std@@PEBV?$function@$$A6AXXZ@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEBV?$function@$$A6AXXZ@std@@@std@@@std@@@0@V10@V10@AEBQEBV?$function@$$A6AXXZ@0@@Z @ 0x1801561CC (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEBV-$function@$$A6AXXZ@std@@@std@.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::RemoveHandleOpenCloseCallbacks(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v3 = (RTL_SRWLOCK *)(a1 + 56);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 56));
  if ( a2 )
  {
    std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::function<void (void)> const *>>>,std::function<void (void)> const *>(
      &v7,
      *(_QWORD **)(a1 + 88),
      *(_QWORD *)(a1 + 96),
      &v8);
    *(_QWORD *)(a1 + 96) = v7;
  }
  if ( a3 )
  {
    std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::function<void (void)> const *>>>,std::function<void (void)> const *>(
      &v8,
      *(_QWORD **)(a1 + 64),
      *(_QWORD *)(a1 + 72),
      &v9);
    *(_QWORD *)(a1 + 72) = v8;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}

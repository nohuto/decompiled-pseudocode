/*
 * XREFs of _lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_ @ 0x180007F30
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180004158 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 */

void __fastcall lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  RTL_SRWLOCK *v7; // [rsp+38h] [rbp+10h] BYREF
  void (__stdcall *v8)(PSRWLOCK); // [rsp+48h] [rbp+20h] BYREF

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 5;
    AcquireSRWLockExclusive(Context + 5);
    if ( (PVOID)((char *)Context[32].Ptr - (char *)Context[31].Ptr) >= (PVOID)0xC )
    {
      wil_details_WriteSRUMWnfUsageBuffer(&Context[31].Ptr, v5, v6);
      Context[32].Ptr = Context[31].Ptr;
    }
    LOBYTE(Context[8].Ptr) = 0;
    if ( v4 )
    {
      v8 = ReleaseSRWLockExclusive;
      v7 = v4;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v8, &v7);
    }
  }
}

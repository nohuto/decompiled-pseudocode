/*
 * XREFs of ?Unregister@InputAttemptedTargetManager@@QEAAXAEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@Z @ 0x180103E94
 * Callers:
 *     ?OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x180102E60 (-OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180103D2C (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 *__fastcall InputAttemptedTargetManager::Unregister(__int64 a1, __int64 **a2)
{
  __int64 *result; // rax
  char *v3; // rdi
  __int64 *v5; // rbx
  char *i; // rsi
  char *v8; // rsi
  __int64 *j; // rdi
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v3 = *(char **)(a1 + 24);
  v5 = *(__int64 **)(a1 + 16);
  if ( v5 != (__int64 *)v3 )
  {
    result = *a2;
    do
    {
      if ( (__int64 *)*v5 == result )
        break;
      ++v5;
    }
    while ( v5 != (__int64 *)v3 );
    if ( v5 != (__int64 *)v3 )
    {
      for ( i = (char *)(v5 + 1); i != v3; i += 8 )
      {
        result = *a2;
        if ( *(__int64 **)i != *a2 )
          result = Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(v5++, i);
      }
    }
  }
  v8 = *(char **)(a1 + 24);
  if ( v3 != v8 )
  {
    do
    {
      result = Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(v5++, v3);
      v3 += 8;
    }
    while ( v3 != v8 );
    v8 = *(char **)(a1 + 24);
  }
  for ( j = v5; j != (__int64 *)v8; ++j )
  {
    v10 = *j;
    if ( *j )
    {
      *j = 0LL;
      result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  *(_QWORD *)(a1 + 24) = v5;
  return result;
}

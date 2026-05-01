/*
 * XREFs of ?Resolve@?$weak_ref@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180441680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z @ 0x180304B00 (-_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1>::Resolve(__int64 a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 result; // rax
  unsigned int i; // [rsp+40h] [rbp+8h] BYREF

  v3 = (volatile signed __int32 *)(a1 + 24);
  result = *(unsigned int *)(a1 + 24);
  for ( i = *(_DWORD *)(a1 + 24); ; result = i )
  {
    if ( !(_DWORD)result )
    {
      *a3 = 0LL;
      return result;
    }
    if ( (unsigned int)std::_Atomic_compare_exchange_strong_4(v3, (signed __int32 *)&i, (int)result + 1, 2, 0) )
      break;
  }
  result = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD *))(a1 + 16))(*(_QWORD *)(a1 + 16), a2, a3);
  _InterlockedExchangeAdd(v3, 0xFFFFFFFF);
  return result;
}

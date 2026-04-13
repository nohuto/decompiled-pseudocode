/*
 * XREFs of ?NoopTriggerTransition@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800687E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::NoopTriggerTransition(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax

  v2 = *(volatile signed __int32 **)(a2 + 8);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return result;
}

/*
 * XREFs of ?Close@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18001D9A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Close(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  signed __int32 v4; // ecx
  unsigned __int32 v6; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 12);
  v2 = 0;
  v6 = -2;
  _InterlockedCompareExchange((volatile signed __int32 *)&v6, v1, -2);
  v3 = v6;
  if ( v6 - 1 <= 3 && (_DWORD)v3 == _InterlockedCompareExchange(a1 + 12, 4, v6) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 144LL))(
      a1,
      v3,
      4294967294LL,
      4LL);
  }
  else
  {
    v4 = *((_DWORD *)a1 + 12);
    v7 = -2;
    _InterlockedCompareExchange(&v7, v4, -2);
    if ( v7 != 4 )
    {
      v2 = -2147483635;
      RoOriginateError(2147483661LL, 0LL);
    }
  }
  return v2;
}

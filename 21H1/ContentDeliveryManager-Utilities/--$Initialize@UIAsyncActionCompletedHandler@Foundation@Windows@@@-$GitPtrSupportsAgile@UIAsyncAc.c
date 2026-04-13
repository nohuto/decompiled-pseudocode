/*
 * XREFs of ??$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@2@@Z @ 0x18001EF08
 * Callers:
 *     ?PutOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18001D640 (-PutOnComplete@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCausa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::Initialize<Windows::Foundation::IAsyncActionCompletedHandler>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // rcx

  v2 = *a1;
  v3 = 0;
  *a1 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v5 = *a1;
  }
  if ( a2 )
  {
    if ( v5 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return (unsigned int)RoGetAgileReference(0LL, &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7, a2, a1);
  }
  else
  {
    *a1 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v3;
}

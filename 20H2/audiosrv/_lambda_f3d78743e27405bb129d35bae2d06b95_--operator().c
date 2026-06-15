/*
 * XREFs of _lambda_f3d78743e27405bb129d35bae2d06b95_::operator() @ 0x1800EA5B0
 * Callers:
 *     wil::details::lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___::_lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___ @ 0x1800EA40C (wil--details--lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___--_lambda_call__lambda_f3d7.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ED288 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CD47C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f3d78743e27405bb129d35bae2d06b95_::operator()(_QWORD **a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  (*(void (__fastcall **)(struct IDeviceGraphStore *, __int128 *))(*(_QWORD *)g_DeviceGraphStore + 56LL))(
    g_DeviceGraphStore,
    &v4);
  v2 = (__int64 *)*((_QWORD *)&v4 + 1);
  v3 = (__int64 *)v4;
  if ( (_QWORD)v4 != *((_QWORD *)&v4 + 1) )
  {
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v3 + 376LL))(*v3, **a1);
      ++v3;
    }
    while ( v3 != v2 );
    v2 = (__int64 *)*((_QWORD *)&v4 + 1);
    v3 = (__int64 *)v4;
  }
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v3, v2);
    std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)((v5 - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}

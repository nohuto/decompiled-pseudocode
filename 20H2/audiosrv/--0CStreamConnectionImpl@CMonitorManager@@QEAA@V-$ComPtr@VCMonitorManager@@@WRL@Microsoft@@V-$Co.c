/*
 * XREFs of ??0CStreamConnectionImpl@CMonitorManager@@QEAA@V?$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V?$ComPtr@VCaptureMonitor@CMonitorManager@@@34@@Z @ 0x1800F98C0
 * Callers:
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x1800FA8B8 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047588 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorManager::CStreamConnectionImpl::CStreamConnectionImpl(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)a1 = &CMonitorManager::CStreamConnectionImpl::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  v6 = (__int64 *)(a1 + 24);
  *v6 = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v6);
  *(_QWORD *)(a1 + 32) = *a3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 32));
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return a1;
}

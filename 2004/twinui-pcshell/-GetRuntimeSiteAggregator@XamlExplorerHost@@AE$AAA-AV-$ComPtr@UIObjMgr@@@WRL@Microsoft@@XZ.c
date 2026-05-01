/*
 * XREFs of ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x1802EDF44
 * Callers:
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1802EDB44 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x1802EDCBC (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___ @ 0x1802ECBE0 (std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall XamlExplorerHost::GetRuntimeSiteAggregator(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = (__int64)a2;
  v6 = __abi_winrt_ptr_ctor(a1);
  std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___((struct std::once_flag *)(a1 + 56), (__int64)&v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v4 = *(_QWORD *)(a1 + 48);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}

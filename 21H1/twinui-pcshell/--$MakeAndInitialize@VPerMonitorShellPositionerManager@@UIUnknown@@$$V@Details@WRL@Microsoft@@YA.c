/*
 * XREFs of ??$MakeAndInitialize@VPerMonitorShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803B5FFC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPerMonitorShellPositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803B6230 (-CreateInstance@-$SimpleClassFactory@VPerMonitorShellPositionerManager@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0PerMonitorShellPositionerManager@@QEAA@XZ @ 0x1803B6154 (--0PerMonitorShellPositionerManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@PerMonitorShellPositionerManager@@QEAAJXZ @ 0x1803B62B8 (-RuntimeClassInitialize@PerMonitorShellPositionerManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PerMonitorShellPositionerManager,IUnknown,>(_QWORD *a1)
{
  PerMonitorShellPositionerManager *v2; // rax
  int v3; // edi
  PerMonitorShellPositionerManager *v4; // rbx

  *a1 = 0LL;
  v2 = (PerMonitorShellPositionerManager *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = PerMonitorShellPositionerManager::PerMonitorShellPositionerManager(v2);
    v3 = PerMonitorShellPositionerManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(PerMonitorShellPositionerManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(PerMonitorShellPositionerManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}

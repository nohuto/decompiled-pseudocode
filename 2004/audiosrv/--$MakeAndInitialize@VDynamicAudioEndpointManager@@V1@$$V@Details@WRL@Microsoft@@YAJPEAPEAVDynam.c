/*
 * XREFs of ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x180065690
 * Callers:
 *     ?RuntimeClassInitialize@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180065238 (-RuntimeClassInitialize@CAudioSessionManagerProvider@@QEAAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@DynamicAudioEndpointManager@@QEAAJXZ @ 0x180065734 (-RuntimeClassInitialize@DynamicAudioEndpointManager@@QEAAJXZ.c)
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x180065A7C (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DynamicAudioEndpointManager,DynamicAudioEndpointManager,>(
        DynamicAudioEndpointManager **a1)
{
  DynamicAudioEndpointManager *v2; // rax
  DynamicAudioEndpointManager *v3; // rbx
  int v4; // edi

  *a1 = 0LL;
  v2 = (DynamicAudioEndpointManager *)operator new(0x3E0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = DynamicAudioEndpointManager::DynamicAudioEndpointManager(v2);
    v4 = DynamicAudioEndpointManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
    if ( v3 )
      (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}

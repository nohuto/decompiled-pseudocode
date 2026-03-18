/*
 * XREFs of ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C02922E8
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0216FBC (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C028FFF8 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 * Callees:
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1C00D5234 (-DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z @ 0x1C00D7070 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT_CBLT@@SAXPEAU1@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::Stop(DXGADAPTERSYNCOBJECT *this)
{
  signed __int64 v1; // rdi
  __int64 v3; // r8
  __int64 v4; // rcx
  void *v5; // rdx

  v1 = *((_QWORD *)this + 4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, 0LL, v1) )
  {
    if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
    {
      v4 = *((_QWORD *)this + 5);
      if ( v4 )
      {
        v5 = *(void **)(v4 + 48);
        if ( v5 )
        {
          ADAPTER_RENDER::DdiDestroyCpuEvent(*((ADAPTER_RENDER **)this + 2), v5, v3);
          v4 = *((_QWORD *)this + 5);
        }
        DXG_SIGNAL_GUEST_CPU_EVENT_CBLT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)v4);
        *((_QWORD *)this + 5) = 0LL;
      }
    }
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 616LL) + 8LL) + 616LL))(v1);
  }
}

/*
 * XREFs of ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C0225512
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02C49B8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C033F3E0 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004BA80 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1C02C7F7C (-DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::Stop(DXGADAPTERSYNCOBJECT *this)
{
  signed __int64 v1; // rdi
  __int64 v3; // rcx
  void *v4; // rdx

  v1 = *((_QWORD *)this + 4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, 0LL, v1) )
  {
    v3 = *((_QWORD *)this + 5);
    if ( v3 )
    {
      v4 = *(void **)(v3 + 32);
      if ( v4 )
      {
        ADAPTER_RENDER::DdiDestroyCpuEvent(*((ADAPTER_RENDER **)this + 2), v4);
        v3 = *((_QWORD *)this + 5);
      }
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v3);
      *((_QWORD *)this + 5) = 0LL;
    }
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL) + 8LL) + 616LL))(v1);
  }
}

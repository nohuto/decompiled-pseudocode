/*
 * XREFs of ??0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z @ 0x180425164
 * Callers:
 *     ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x180425748 (-CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1804250C8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UIT.c)
 */

CDragVisual *__fastcall CDragVisual::CDragVisual(CDragVisual *this, struct IDragVisualHost *a2)
{
  CDragVisual *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>((__int64)this);
  *(_QWORD *)this = &CDragVisual::`vftable';
  *((_QWORD *)this + 3) = &CDragVisual::`vftable'{for `IDragVisual'};
  *((_QWORD *)this + 4) = &CDragVisual::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>'};
  *((_QWORD *)this + 5) = &CDragVisual::`vftable'{for `IImmersiveApplicationNotification'};
  *((_QWORD *)this + 6) = &CDragVisual::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITempAppVisualHost>'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDragVisualHost *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *(_QWORD *)((char *)this + 284) = 100LL;
  *((_DWORD *)this + 86) = 100;
  result = this;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_BYTE *)this + 280) = 0;
  *(_QWORD *)((char *)this + 292) = 0LL;
  *(_QWORD *)((char *)this + 300) = 0LL;
  *(_QWORD *)((char *)this + 308) = 0LL;
  *(_QWORD *)((char *)this + 316) = 0LL;
  *(_QWORD *)((char *)this + 324) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 36) = -1;
  *((_DWORD *)this + 37) = -1;
  *((_DWORD *)this + 83) = -1;
  return result;
}

/*
 * XREFs of ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x1800BD5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071964 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMeterHardware::ProviderFinalRelease(CMeterHardware *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::WeakRef::~WeakRef((CMeterHardware *)((char *)this + 32));
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}

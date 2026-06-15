/*
 * XREFs of ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x1800BF020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 */

void __fastcall CMuteHardware::ProviderFinalRelease(CMuteHardware *this)
{
  Microsoft::WRL::WeakRef *v1; // rdi
  __int64 v3; // rcx

  v1 = (CMuteHardware *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) && *((_DWORD *)this + 16) )
  {
    v3 = *(_QWORD *)v1;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        (__int64)&WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids,
        this);
      v3 = *(_QWORD *)v1;
    }
    (*(void (__fastcall **)(__int64, CMuteHardware *))(*(_QWORD *)v3 + 120LL))(v3, this);
    *((_DWORD *)this + 16) = 0;
  }
  Microsoft::WRL::WeakRef::~WeakRef(v1);
}

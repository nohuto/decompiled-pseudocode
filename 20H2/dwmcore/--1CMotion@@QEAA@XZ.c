/*
 * XREFs of ??1CMotion@@QEAA@XZ @ 0x1802029DC
 * Callers:
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x180202A20 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180203150 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMotion::~CMotion(CMotion *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
}

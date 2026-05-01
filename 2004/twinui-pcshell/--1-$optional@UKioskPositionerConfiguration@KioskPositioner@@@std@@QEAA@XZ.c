/*
 * XREFs of ??1?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ @ 0x1800B605C
 * Callers:
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$1 @ 0x1800B681B (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$1.c)
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1803DD4F4 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 *     _KioskPositioner::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1803DD600 (_KioskPositioner--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x1803DAA90 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 */

__int64 __fastcall std::optional<KioskPositioner::KioskPositionerConfiguration>::~optional<KioskPositioner::KioskPositionerConfiguration>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( *(_QWORD *)a1 )
      return std::default_delete<PrimaryAppProxyBase>::operator()();
  }
  return result;
}

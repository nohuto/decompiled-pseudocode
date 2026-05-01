/*
 * XREFs of ??1?$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ @ 0x18015FE44
 * Callers:
 *     _CImmersiveMode::RegisterForDesktopVisibilityChanges_::_1_::dtor$1 @ 0x180160E98 (_CImmersiveMode--RegisterForDesktopVisibilityChanges_--_1_--dtor$1.c)
 * Callees:
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x18016031C (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 */

CImmersiveMode::DesktopVisibilityChangeListener *__fastcall CAutoMemPtr<CImmersiveMode::DesktopVisibilityChangeListener>::~CAutoMemPtr<CImmersiveMode::DesktopVisibilityChangeListener>(
        CImmersiveMode::DesktopVisibilityChangeListener **a1,
        unsigned int a2)
{
  CImmersiveMode::DesktopVisibilityChangeListener *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CImmersiveMode::DesktopVisibilityChangeListener *)CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'(
                                                                result,
                                                                a2);
  return result;
}

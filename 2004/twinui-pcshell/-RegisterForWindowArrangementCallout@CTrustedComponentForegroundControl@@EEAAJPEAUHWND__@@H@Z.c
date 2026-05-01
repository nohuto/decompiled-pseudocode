/*
 * XREFs of ?RegisterForWindowArrangementCallout@CTrustedComponentForegroundControl@@EEAAJPEAUHWND__@@H@Z @ 0x18015CD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTrustedComponentForegroundControl::RegisterForWindowArrangementCallout(
        CTrustedComponentForegroundControl *this,
        HWND a2)
{
  return (*(__int64 (__fastcall **)(PVOID, HWND))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 32LL))(
           CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
           a2);
}

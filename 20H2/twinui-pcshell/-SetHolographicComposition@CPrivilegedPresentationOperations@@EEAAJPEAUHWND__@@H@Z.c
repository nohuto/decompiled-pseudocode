/*
 * XREFs of ?SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z @ 0x18022B9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z @ 0x18022BA90 (-SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetHolographicComposition(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return CPrivilegedPresentationOperations::SetWindowCompositionAttribute(this, a2, 0x17u, &v4, 4u);
}

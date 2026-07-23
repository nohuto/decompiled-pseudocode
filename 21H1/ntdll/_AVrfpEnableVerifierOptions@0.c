/*
 * XREFs of _AVrfpEnableVerifierOptions@0 @ 0x4B338EAB
 * Callers:
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _AVrfpEnableHandleVerifier@0 @ 0x4B338DD3 (_AVrfpEnableHandleVerifier@0.c)
 *     _AVrfpEnableHeapVerifier@0 @ 0x4B338E2C (_AVrfpEnableHeapVerifier@0.c)
 *     _AVrfpEnableStackVerifier@0 @ 0x4B338E7B (_AVrfpEnableStackVerifier@0.c)
 */

int __stdcall AVrfpEnableVerifierOptions()
{
  int v0; // ebx
  int v1; // esi
  NTSTATUS v2; // eax

  v0 = AVrfpVerifierFlags;
  v1 = 0;
  if ( (AVrfpVerifierFlags & 0x8001) != 0 && !AVrfpEnableHeapVerifier() )
    v1 = -1073741823;
  if ( (v0 & 4) != 0 )
  {
    v2 = AVrfpEnableHandleVerifier();
    v0 = AVrfpVerifierFlags;
    v1 = v2;
  }
  if ( (v0 & 8) != 0 && !AVrfpEnableStackVerifier() )
    v1 = -1073741823;
  if ( (v0 & 0x40000) != 0 )
    RtlpCriticalSectionVerifier = 1;
  return v1;
}

/*
 * XREFs of ?IsCaptureSession@CAudioSession@@UEAAHXZ @ 0x1800477B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAudioSession::IsCaptureSession(CAudioSession *this)
{
  return (*((_DWORD *)this + 77) & 8) == 0;
}

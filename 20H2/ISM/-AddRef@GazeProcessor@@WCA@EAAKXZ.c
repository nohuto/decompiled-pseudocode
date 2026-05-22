/*
 * XREFs of ?AddRef@GazeProcessor@@WCA@EAAKXZ @ 0x18004C4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::AddRef(__int64 a1)
{
  return DWMFocusedInputTarget::AddRef((DWMFocusedInputTarget *)(a1 - 32));
}

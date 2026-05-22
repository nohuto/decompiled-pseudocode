/*
 * XREFs of ?ResetConfigValues@DragRecognizer@@UEAAXXZ @ 0x180184EF0
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x180182744 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DragRecognizer::ResetConfigValues(DragRecognizer *this)
{
  *((_WORD *)this + 8) = DragRecognizer::s_initialDragThreshold;
  *((_WORD *)this + 9) = DragRecognizer::s_orientationBias;
  *((_WORD *)this + 11) = DragRecognizer::s_directionLockThreshold;
  *((_WORD *)this + 12) = DragRecognizer::s_directionLockMinorThreshold;
  *((_WORD *)this + 13) = DragRecognizer::s_minimumUpdateThreshold;
  *((_WORD *)this + 14) = DragRecognizer::s_jitterDeadZoneThreshold;
  DragRecognizer::RecomputeOrientationBiasPixels(this);
}

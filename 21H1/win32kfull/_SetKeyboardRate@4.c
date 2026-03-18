/*
 * XREFs of _SetKeyboardRate@4 @ 0xD696C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxInitWindowStation@0 @ 0xD69D6 (_xxxInitWindowStation@0.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int SetKeyboardRate()
{
  unsigned int v0; // ebx
  int result; // eax

  v0 = ((unsigned int)gnKeyboardSpeed >> 5) & 3;
  _gktp[1] = _gKeyboardInfo[9]
           + (gnKeyboardSpeed & 0x1F) * (_gKeyboardInfo[12] - (unsigned int)_gKeyboardInfo[9]) / 0x1F;
  _gktp[2] = _gKeyboardInfo[10] + v0 * (_gKeyboardInfo[13] - _gKeyboardInfo[10]) / 3;
  result = _gdwUpdateKeyboard;
  _gdwUpdateKeyboard |= 1u;
  return result;
}

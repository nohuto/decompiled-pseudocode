/*
 * XREFs of SetKeyboardRate @ 0x1C000C75C
 * Callers:
 *     xxxInitWindowStation @ 0x1C000C67C (xxxInitWindowStation.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetKeyboardRate()
{
  unsigned int v0; // r9d
  __int64 result; // rax

  v0 = ((unsigned int)gnKeyboardSpeed >> 5) & 3;
  gktp[1] = gKeyboardInfo[9] + (gnKeyboardSpeed & 0x1F) * (gKeyboardInfo[12] - (unsigned int)gKeyboardInfo[9]) / 0x1F;
  gktp[2] = gKeyboardInfo[10] + v0 * (gKeyboardInfo[13] - gKeyboardInfo[10]) / 3;
  result = gdwUpdateKeyboard;
  gdwUpdateKeyboard |= 1u;
  return result;
}

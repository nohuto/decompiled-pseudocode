/*
 * XREFs of _SetNewForegroundPti@4 @ 0x141A1B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall SetNewForegroundPti(int a1)
{
  int DLT; // eax
  int result; // eax

  DLT = DLT_FOREGROUND::getDLT();
  GetDomainLockRef(DLT);
  result = _gptiForeground;
  _gptiForeground = a1;
  return result;
}

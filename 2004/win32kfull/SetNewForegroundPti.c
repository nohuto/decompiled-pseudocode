/*
 * XREFs of SetNewForegroundPti @ 0x1C01D31F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundPti(__int64 a1)
{
  unsigned int DLT; // eax
  __int64 result; // rax

  DLT = DLT_FOREGROUND::getDLT();
  GetDomainLockRef(DLT);
  result = gptiForeground;
  gptiForeground = a1;
  return result;
}

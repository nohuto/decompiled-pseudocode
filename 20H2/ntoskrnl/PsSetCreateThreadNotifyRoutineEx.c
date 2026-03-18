/*
 * XREFs of PsSetCreateThreadNotifyRoutineEx @ 0x140790370
 * Callers:
 *     <none>
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403ADF80 (MmVerifyCallbackFunctionCheckFlags.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1407907E4 (PspSetCreateThreadNotifyRoutine.c)
 */

__int64 __fastcall PsSetCreateThreadNotifyRoutineEx(int a1, unsigned __int64 a2)
{
  unsigned int v3; // ebx

  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221225485LL;
    v3 = 2;
  }
  else
  {
    v3 = 1;
  }
  if ( (unsigned int)MmVerifyCallbackFunctionCheckFlags(a2, 32) )
    return PspSetCreateThreadNotifyRoutine(a2, v3);
  else
    return 3221225506LL;
}

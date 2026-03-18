/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x14037FD40
 * Callers:
 *     PopDiagTracePowerTransitionTime @ 0x140760404 (PopDiagTracePowerTransitionTime.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1408E207C (PopCalculateWakeTimeAdjustment.c)
 * Callees:
 *     PopQpcTimeInMs @ 0x14098CE2C (PopQpcTimeInMs.c)
 */

unsigned __int64 __fastcall PopPowerTransitionTimesInMs(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdi
  _DWORD *v12; // rbx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned __int64)KeGetCurrentPrcb();
  v11 = 1000LL * *(unsigned int *)(result + 68);
  if ( a1 )
  {
    result = PopQpcTimeInMs(&qword_140C238E8, &qword_140C238F0);
    *a1 = result;
  }
  if ( a2 )
  {
    result = PopQpcTimeInMs(&qword_140C23908, &qword_140C23910);
    *a2 = result;
  }
  v12 = a5;
  if ( a5 )
  {
    v13 = 0LL;
    result = PopQpcTimeInMs(&v13, &qword_140C23928);
    *v12 = result;
    if ( dword_140C23B30 )
    {
      result = (unsigned int)(qword_140C239A8 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_140C23970 / v11;
    *a3 = qword_140C23970 / v11;
  }
  if ( a4 )
  {
    result = (qword_140C23AA8 + qword_140C239E0) / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = qword_140C23950 / v11;
    *a6 = qword_140C23950 / v11;
  }
  return result;
}

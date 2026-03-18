/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x140380580
 * Callers:
 *     PopDiagTracePowerTransitionTime @ 0x140761CE4 (PopDiagTracePowerTransitionTime.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1408E32FC (PopCalculateWakeTimeAdjustment.c)
 * Callees:
 *     PopQpcTimeInMs @ 0x14098D644 (PopQpcTimeInMs.c)
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
    result = PopQpcTimeInMs(&qword_140C23328, &qword_140C23330);
    *a1 = result;
  }
  if ( a2 )
  {
    result = PopQpcTimeInMs(&qword_140C23348, &qword_140C23350);
    *a2 = result;
  }
  v12 = a5;
  if ( a5 )
  {
    v13 = 0LL;
    result = PopQpcTimeInMs(&v13, &qword_140C23368);
    *v12 = result;
    if ( dword_140C23570 )
    {
      result = (unsigned int)(qword_140C233E8 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_140C233B0 / v11;
    *a3 = qword_140C233B0 / v11;
  }
  if ( a4 )
  {
    result = (qword_140C234E8 + qword_140C23420) / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = qword_140C23390 / v11;
    *a6 = qword_140C23390 / v11;
  }
  return result;
}

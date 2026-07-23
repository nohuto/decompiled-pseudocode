/*
 * XREFs of _RtlReportCriticalFailure@12 @ 0x4B3669C7
 * Callers:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlRestoreThreadPreferredUILanguages@4 @ 0x4B352D50 (_RtlRestoreThreadPreferredUILanguages@4.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 * Callees:
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _RtlReportFatalFailure@4 @ 0x4B366A5D (_RtlReportFatalFailure@4.c)
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn RtlReportCriticalFailure(int a1, int a2, int a3)
{
  _DWORD v5[23]; // [esp+18h] [ebp-74h] BYREF
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  if ( NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 3) == 3 )
  {
    DbgPrintEx(0x65u, 0, (int)"Critical error detected %lx\n", a1);
    if ( a3 )
    {
      __debugbreak();
      ms_exc.registration.TryLevel = -2;
    }
  }
  v5[0] = a1;
  v5[1] = 1;
  v5[2] = 0;
  v5[3] = RtlRaiseException;
  v5[4] = 1;
  v5[5] = a2;
  ((void (__thiscall __noreturn *)(_DWORD *))RtlReportFatalFailure)(v5);
}

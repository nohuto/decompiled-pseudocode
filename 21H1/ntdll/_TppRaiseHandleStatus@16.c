/*
 * XREFs of _TppRaiseHandleStatus@16 @ 0x4B384839
 * Callers:
 *     _TppSetupNextWait@12 @ 0x4B2B7C92 (_TppSetupNextWait@12.c)
 *     _TppWaitTimerExpiration@4 @ 0x4B2ECC37 (_TppWaitTimerExpiration@4.c)
 *     _TppJobpRundownJob@4 @ 0x4B3839D3 (_TppJobpRundownJob@4.c)
 * Callees:
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

void __fastcall __noreturn TppRaiseHandleStatus(unsigned int a1, unsigned int a2, unsigned int a3, int a4)
{
  void (__stdcall *v4)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, TP_WAIT_RESULT); // edi
  unsigned int v5; // eax
  EXCEPTION_RECORD ExceptionRecord; // [esp+8h] [ebp-58h] BYREF

  if ( a3 )
  {
    v4 = *(void (__stdcall **)(PTP_CALLBACK_INSTANCE, _BYTE *, PTP_WAIT, TP_WAIT_RESULT))(a3 + 48);
    ExceptionRecord.NumberParameters = 5;
    if ( v4 == RtlpTpWaitCallback )
      v5 = *(_DWORD *)(*(_DWORD *)(a3 + 52) + 16);
    else
      v5 = 0;
    if ( v5 )
      ExceptionRecord.ExceptionInformation[4] = v5;
    else
      ExceptionRecord.ExceptionInformation[4] = (unsigned int)v4;
  }
  else
  {
    ExceptionRecord.NumberParameters = 4;
  }
  ExceptionRecord.ExceptionRecord = 0;
  ExceptionRecord.ExceptionInformation[3] = 0;
  ExceptionRecord.ExceptionCode = -1073740022;
  ExceptionRecord.ExceptionInformation[0] = a1;
  ExceptionRecord.ExceptionInformation[1] = a2;
  ExceptionRecord.ExceptionInformation[2] = a3;
  ExceptionRecord.ExceptionFlags = 1;
  RtlRaiseException(&ExceptionRecord);
}

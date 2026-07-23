/*
 * XREFs of HalpBlkPoPerformPpmOperation @ 0x140A1ADC4
 * Callers:
 *     HalpBlkHandleIpi @ 0x140A1B190 (HalpBlkHandleIpi.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperationForIoPort @ 0x140A1AE50 (HalpBlkPoPerformPpmOperationForIoPort.c)
 *     HalpBlkPoPerformPpmOperationForMsr @ 0x140A1AEE0 (HalpBlkPoPerformPpmOperationForMsr.c)
 */

char HalpBlkPoPerformPpmOperation()
{
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // rdi
  int Handler; // eax
  char result; // al

  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&ExceptionList[139], 2, 1) != 1 )
    return 0;
  if ( HIDWORD(ExceptionList[139].Next) == 3 )
  {
    KeGetPcr()->NtTib.ExceptionList[141].Next = ExceptionList[140].Next;
  }
  else
  {
    Handler = (int)ExceptionList[139].Handler;
    if ( Handler == 1 )
    {
      HalpBlkPoPerformPpmOperationForMsr(&ExceptionList[138].Handler);
    }
    else if ( Handler == 2 )
    {
      HalpBlkPoPerformPpmOperationForIoPort(&ExceptionList[138].Handler);
    }
    else
    {
      __debugbreak();
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)&ExceptionList[8]);
  result = 1;
  _InterlockedExchange((volatile __int32 *)&ExceptionList[139], 0);
  return result;
}

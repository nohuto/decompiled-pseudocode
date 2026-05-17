/*
 * XREFs of _RtlpAllocateHeapRaiseException@4 @ 0x4B35D445
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 * Callees:
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

void __thiscall __noreturn RtlpAllocateHeapRaiseException(void *this)
{
  EXCEPTION_RECORD ExceptionRecord; // [esp+0h] [ebp-58h] BYREF

  ExceptionRecord.ExceptionRecord = 0;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionCode = -1073741801;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = (unsigned int)this;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  RtlRaiseException(&ExceptionRecord);
}

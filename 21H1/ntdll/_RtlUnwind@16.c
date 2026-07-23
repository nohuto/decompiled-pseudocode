/*
 * XREFs of _RtlUnwind@16 @ 0x4B2E8E30
 * Callers:
 *     _KiUserCallbackExceptionHandler@16 @ 0x4B2F4D80 (_KiUserCallbackExceptionHandler@16.c)
 *     @_EH4_GlobalUnwind@4 @ 0x4B2F6FD4 (@_EH4_GlobalUnwind@4.c)
 *     __global_unwind2 @ 0x4B2FB800 (__global_unwind2.c)
 * Callees:
 *     _RtlIsValidHandler@12 @ 0x4B2E9163 (_RtlIsValidHandler@12.c)
 *     _RtlpGetStackLimits@8 @ 0x4B2E92BF (_RtlpGetStackLimits@8.c)
 *     _ZwContinue@8 @ 0x4B2F2DB0 (_ZwContinue@8.c)
 *     _ZwRaiseException@12 @ 0x4B2F3FE0 (_ZwRaiseException@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpExecuteHandlerForUnwind@20 @ 0x4B308748 (_RtlpExecuteHandlerForUnwind@20.c)
 *     _RtlpCaptureContext@4 @ 0x4B308850 (_RtlpCaptureContext@4.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  PEXCEPTION_RECORD v4; // edi
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // edx
  _EXCEPTION_DISPOSITION (__stdcall *Handler)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *); // ecx
  int v9; // eax
  unsigned int v10; // [esp+Ch] [ebp-38Ch]
  unsigned int v11; // [esp+10h] [ebp-388h]
  unsigned int v12; // [esp+14h] [ebp-384h] BYREF
  unsigned int v13; // [esp+18h] [ebp-380h] BYREF
  _EXCEPTION_REGISTRATION_RECORD *v14; // [esp+1Ch] [ebp-37Ch] BYREF
  EXCEPTION_RECORD v15; // [esp+20h] [ebp-378h] BYREF
  _DWORD v16[20]; // [esp+70h] [ebp-328h] BYREF
  _CONTEXT ContextRecord; // [esp+C0h] [ebp-2D8h] BYREF
  _UNKNOWN *retaddr; // [esp+39Ch] [ebp+4h]

  v4 = ExceptionRecord;
  RtlpCaptureContext(&ContextRecord);
  ContextRecord.Esp += 16;
  ContextRecord.Eax = (unsigned int)ReturnValue;
  RtlpGetStackLimits(&v13, &v12);
  if ( !ExceptionRecord )
  {
    v4 = (PEXCEPTION_RECORD)v16;
    v16[0] = -1073741785;
    v16[1] = 0;
    v16[2] = 0;
    v16[3] = retaddr;
    v16[4] = 0;
  }
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v4->ExceptionFlags |= 4 * (TargetFrame == 0) + 2;
  if ( ExceptionList != (_EXCEPTION_REGISTRATION_RECORD *)-1 )
  {
    v6 = v12;
    v7 = v13;
    v10 = v12;
    v11 = v13;
    do
    {
      if ( ExceptionList == TargetFrame )
      {
        ZwContinue(&ContextRecord, 0);
        v6 = v10;
        v7 = v11;
      }
      else if ( TargetFrame && TargetFrame < ExceptionList )
      {
        v15.NumberParameters = 0;
        v15.ExceptionCode = -1073741783;
        v15.ExceptionFlags = 1;
        v15.ExceptionRecord = v4;
        RtlRaiseException(&v15);
      }
      if ( (unsigned int)ExceptionList < v7
        || (unsigned int)&ExceptionList[1] > v6
        || ((unsigned __int8)ExceptionList & 3) != 0
        || (Handler = ExceptionList->Handler, (unsigned int)Handler < v10) && (unsigned int)Handler >= v7
        || !(unsigned __int8)RtlIsValidHandler(Handler, &ContextRecord) )
      {
        v15.NumberParameters = 0;
        v15.ExceptionCode = -1073741784;
        v15.ExceptionFlags = 1;
        v15.ExceptionRecord = v4;
        RtlRaiseException(&v15);
      }
      v9 = RtlpExecuteHandlerForUnwind(v4, ExceptionList, &ContextRecord, &v14, ExceptionList->Handler) - 1;
      if ( v9 )
      {
        if ( v9 != 2 )
        {
          v15.NumberParameters = 0;
          v15.ExceptionCode = -1073741786;
          v15.ExceptionFlags = 1;
          v15.ExceptionRecord = v4;
          RtlRaiseException(&v15);
        }
        ExceptionList = v14;
      }
      ExceptionList = ExceptionList->Next;
      v7 = v11;
      v6 = v10;
    }
    while ( ExceptionList != (_EXCEPTION_REGISTRATION_RECORD *)-1 );
  }
  if ( TargetFrame == (PVOID)-1 )
    ZwContinue(&ContextRecord, 0);
  else
    ZwRaiseException(v4, &ContextRecord, 0);
}

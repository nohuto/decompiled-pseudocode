/*
 * XREFs of _RtlDispatchException@8 @ 0x4B2E8F8C
 * Callers:
 *     _KiUserExceptionDispatcher@8 @ 0x4B2F4E70 (_KiUserExceptionDispatcher@8.c)
 * Callees:
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _RtlIsValidHandler@12 @ 0x4B2E9163 (_RtlIsValidHandler@12.c)
 *     _RtlpIsValidExceptionChain@16 @ 0x4B2E9254 (_RtlpIsValidExceptionChain@16.c)
 *     _RtlpGetStackLimits@8 @ 0x4B2E92BF (_RtlpGetStackLimits@8.c)
 *     _RtlpIsUserCallTargetBitMapCheckFault@4 @ 0x4B2E92EB (_RtlpIsUserCallTargetBitMapCheckFault@4.c)
 *     _RtlGuardIsValidStackPointer@8 @ 0x4B2E92F5 (_RtlGuardIsValidStackPointer@8.c)
 *     _RtlpCallVectoredHandlers@12 @ 0x4B2ECCA1 (_RtlpCallVectoredHandlers@12.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpExecuteHandlerForException@20 @ 0x4B308740 (_RtlpExecuteHandlerForException@20.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 *     _RtlpGetUserCallTargetBitMapRet@0 @ 0x4B366643 (_RtlpGetUserCallTargetBitMapRet@0.c)
 *     _RtlpReportInvalidExceptionChain@8 @ 0x4B366649 (_RtlpReportInvalidExceptionChain@8.c)
 *     _RtlpLogExceptionDispatch@8 @ 0x4B368A0D (_RtlpLogExceptionDispatch@8.c)
 *     _RtlpLogExceptionHandler@16 @ 0x4B368AB5 (_RtlpLogExceptionHandler@16.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v2; // bl
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  _EXCEPTION_REGISTRATION_RECORD *Next; // ecx
  _EXCEPTION_DISPOSITION (__stdcall *Handler)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *); // ecx
  int v8; // ecx
  int v9; // eax
  _EXCEPTION_REGISTRATION_RECORD *v10; // edx
  int v12; // eax
  char v13; // [esp+Fh] [ebp-79h]
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+14h] [ebp-74h]
  int ProcessInformation; // [esp+18h] [ebp-70h] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-6Ch] BYREF
  unsigned int v17; // [esp+20h] [ebp-68h] BYREF
  _EXCEPTION_REGISTRATION_RECORD *v18; // [esp+24h] [ebp-64h]
  int v19; // [esp+28h] [ebp-60h]
  _EXCEPTION_REGISTRATION_RECORD *v20; // [esp+2Ch] [ebp-5Ch] BYREF
  EXCEPTION_RECORD v21; // [esp+30h] [ebp-58h] BYREF

  v2 = 0;
  v13 = 0;
  if ( ExceptionRecord->ExceptionCode == -1073741818
    || !(unsigned __int8)RtlpIsUserCallTargetBitMapCheckFault(ExceptionRecord->ExceptionAddress) )
  {
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
    {
      v13 = 1;
      RtlpLogExceptionDispatch(ExceptionRecord);
    }
    LOBYTE(v4) = LdrControlFlowGuardEnforced();
    if ( v4 && !RtlGuardIsValidStackPointer(ContextRecord->Esp) )
      __fastfail(0xDu);
    if ( (unsigned __int8)RtlpCallVectoredHandlers(0) )
    {
LABEL_26:
      v2 = 1;
    }
    else
    {
      RtlpGetStackLimits(&v16, &v17);
      ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
      ProcessInformation = 0;
      if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessExecuteFlags, &ProcessInformation, 4u, 0) < 0 )
        ProcessInformation = 0;
      if ( (ProcessInformation & 0x40) != 0 || (unsigned __int8)RtlpIsValidExceptionChain(v17, v5) )
      {
LABEL_11:
        Next = ExceptionList;
        v18 = 0;
        while ( Next != (_EXCEPTION_REGISTRATION_RECORD *)-1 )
        {
          if ( (unsigned int)Next < v16
            || (unsigned int)&Next[1] > v17
            || ((unsigned __int8)Next & 3) != 0
            || (Handler = Next->Handler, (unsigned int)Handler < v17) && v16 <= (unsigned int)Handler
            || !(unsigned __int8)RtlIsValidHandler(Handler, ContextRecord) )
          {
            ExceptionRecord->ExceptionFlags |= 8u;
            goto LABEL_27;
          }
          v19 = 0;
          if ( v13 )
            v19 = RtlpLogExceptionHandler(v8, ExceptionList->Handler);
          v9 = RtlpExecuteHandlerForException(
                 ExceptionRecord,
                 ExceptionList,
                 ContextRecord,
                 &v20,
                 ExceptionList->Handler);
          if ( v19 )
            *(_DWORD *)(v19 + 800) = v9;
          v10 = v18;
          if ( v18 == ExceptionList )
          {
            ExceptionRecord->ExceptionFlags &= ~0x10u;
            v10 = 0;
            v18 = 0;
          }
          if ( !v9 )
          {
            if ( (ExceptionRecord->ExceptionFlags & 1) != 0 )
            {
              v21.ExceptionFlags = 1;
              v21.ExceptionCode = -1073741787;
              v21.ExceptionRecord = ExceptionRecord;
              v21.NumberParameters = 0;
              RtlRaiseException(&v21);
            }
            goto LABEL_26;
          }
          v12 = v9 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
            {
              v21.ExceptionCode = -1073741786;
              v21.ExceptionFlags = 1;
              v21.ExceptionRecord = ExceptionRecord;
              v21.NumberParameters = 0;
              RtlRaiseException(&v21);
            }
            ExceptionRecord->ExceptionFlags |= 0x10u;
            if ( v20 > v10 )
              v18 = v20;
          }
          else if ( (ExceptionRecord->ExceptionFlags & 8) != 0 )
          {
            goto LABEL_27;
          }
          Next = ExceptionList->Next;
          ExceptionList = ExceptionList->Next;
        }
        goto LABEL_27;
      }
      ExceptionRecord->ExceptionFlags |= 8u;
      if ( RtlpProcessECVPolicy == 2 )
      {
        if ( !_InterlockedCompareExchange(&RtlpECVRecorded, 1, 0) )
          RtlpReportInvalidExceptionChain(ExceptionRecord, ContextRecord);
        ExceptionRecord->ExceptionFlags &= ~8u;
        goto LABEL_11;
      }
    }
LABEL_27:
    RtlpCallVectoredHandlers(1);
    return v2;
  }
  RtlpHandleInvalidUserCallTarget(*(PVOID *)(v3 + 172));
  ContextRecord->Eip = RtlpGetUserCallTargetBitMapRet();
  return 1;
}

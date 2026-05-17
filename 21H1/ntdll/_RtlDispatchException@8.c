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

char __stdcall RtlDispatchException(_EXCEPTION_RECORD *a1, int a2)
{
  char v2; // bl
  int v3; // edx
  int v4; // ecx
  _EXCEPTION_REGISTRATION_RECORD *Next; // ecx
  unsigned int Handler; // ecx
  int v7; // ecx
  int v8; // eax
  _EXCEPTION_REGISTRATION_RECORD *v9; // edx
  int v11; // eax
  char v12; // [esp+Fh] [ebp-79h]
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+14h] [ebp-74h]
  int v14; // [esp+18h] [ebp-70h] BYREF
  unsigned int v15; // [esp+1Ch] [ebp-6Ch] BYREF
  unsigned int v16; // [esp+20h] [ebp-68h] BYREF
  _EXCEPTION_REGISTRATION_RECORD *v17; // [esp+24h] [ebp-64h]
  int v18; // [esp+28h] [ebp-60h]
  _EXCEPTION_REGISTRATION_RECORD *v19; // [esp+2Ch] [ebp-5Ch] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+30h] [ebp-58h] BYREF

  v2 = 0;
  v12 = 0;
  if ( a1->ExceptionCode == -1073741818 || !(unsigned __int8)RtlpIsUserCallTargetBitMapCheckFault(a1->ExceptionAddress) )
  {
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
    {
      v12 = 1;
      RtlpLogExceptionDispatch(a1);
    }
    if ( LdrControlFlowGuardEnforced() && !RtlGuardIsValidStackPointer(*(_DWORD *)(a2 + 196)) )
      __fastfail(0xDu);
    if ( (unsigned __int8)RtlpCallVectoredHandlers(0) )
    {
LABEL_26:
      v2 = 1;
    }
    else
    {
      RtlpGetStackLimits(&v15, &v16);
      ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
      v14 = 0;
      if ( (int)ZwQueryInformationProcess(-1, 34, &v14, 4, 0) < 0 )
        v14 = 0;
      if ( (v14 & 0x40) != 0 || (unsigned __int8)RtlpIsValidExceptionChain(v16, v4) )
      {
LABEL_11:
        Next = ExceptionList;
        v17 = 0;
        while ( Next != (_EXCEPTION_REGISTRATION_RECORD *)-1 )
        {
          if ( (unsigned int)Next < v15
            || (unsigned int)&Next[1] > v16
            || ((unsigned __int8)Next & 3) != 0
            || (Handler = (unsigned int)Next->Handler, Handler < v16) && v15 <= Handler
            || !(unsigned __int8)RtlIsValidHandler(a2) )
          {
            a1->ExceptionFlags |= 8u;
            goto LABEL_27;
          }
          v18 = 0;
          if ( v12 )
            v18 = RtlpLogExceptionHandler(v7, ExceptionList->Handler);
          v8 = RtlpExecuteHandlerForException(a1, ExceptionList, a2, &v19, ExceptionList->Handler);
          if ( v18 )
            *(_DWORD *)(v18 + 800) = v8;
          v9 = v17;
          if ( v17 == ExceptionList )
          {
            a1->ExceptionFlags &= ~0x10u;
            v9 = 0;
            v17 = 0;
          }
          if ( !v8 )
          {
            if ( (a1->ExceptionFlags & 1) != 0 )
            {
              ExceptionRecord.ExceptionFlags = 1;
              ExceptionRecord.ExceptionCode = -1073741787;
              ExceptionRecord.ExceptionRecord = a1;
              ExceptionRecord.NumberParameters = 0;
              RtlRaiseException(&ExceptionRecord);
            }
            goto LABEL_26;
          }
          v11 = v8 - 1;
          if ( v11 )
          {
            if ( v11 != 1 )
            {
              ExceptionRecord.ExceptionCode = -1073741786;
              ExceptionRecord.ExceptionFlags = 1;
              ExceptionRecord.ExceptionRecord = a1;
              ExceptionRecord.NumberParameters = 0;
              RtlRaiseException(&ExceptionRecord);
            }
            a1->ExceptionFlags |= 0x10u;
            if ( v19 > v9 )
              v17 = v19;
          }
          else if ( (a1->ExceptionFlags & 8) != 0 )
          {
            goto LABEL_27;
          }
          Next = ExceptionList->Next;
          ExceptionList = ExceptionList->Next;
        }
        goto LABEL_27;
      }
      a1->ExceptionFlags |= 8u;
      if ( RtlpProcessECVPolicy == 2 )
      {
        if ( !_InterlockedCompareExchange(&RtlpECVRecorded, 1, 0) )
          RtlpReportInvalidExceptionChain(a1, a2);
        a1->ExceptionFlags &= ~8u;
        goto LABEL_11;
      }
    }
LABEL_27:
    RtlpCallVectoredHandlers(1);
    return v2;
  }
  RtlpHandleInvalidUserCallTarget(*(_DWORD *)(v3 + 172));
  *(_DWORD *)(a2 + 184) = RtlpGetUserCallTargetBitMapRet();
  return 1;
}

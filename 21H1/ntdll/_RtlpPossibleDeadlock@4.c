/*
 * XREFs of _RtlpPossibleDeadlock@4 @ 0x4B34A99E
 * Callers:
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 *     _RtlAcquireResourceShared@8 @ 0x4B2EB3B0 (_RtlAcquireResourceShared@8.c)
 *     _RtlAcquireResourceExclusive@8 @ 0x4B2EBDC0 (_RtlAcquireResourceExclusive@8.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlCaptureContext@4 @ 0x4B308820 (_RtlCaptureContext@4.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 */

void __thiscall RtlpPossibleDeadlock(void *this)
{
  int v2; // esi
  int v3; // edx
  int InformationProcess; // eax
  int v5; // esi
  signed __int32 v6; // ecx
  int v7; // eax
  _BYTE v8[16]; // [esp+14h] [ebp-384h] BYREF
  int v9; // [esp+24h] [ebp-374h]
  int v10; // [esp+44h] [ebp-354h] BYREF
  int v11; // [esp+48h] [ebp-350h] BYREF
  int v12; // [esp+4Ch] [ebp-34Ch]
  int (__stdcall *v13)(int); // [esp+54h] [ebp-344h]
  EXCEPTION_RECORD ExceptionRecord; // [esp+58h] [ebp-340h] BYREF
  CONTEXT ContextRecord; // [esp+A8h] [ebp-2F0h] BYREF
  CPPEH_RECORD ms_exc; // [esp+380h] [ebp-18h]

  v2 = RtlpUnhandledExceptionFilter;
  v3 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    InformationProcess = ZwQueryInformationProcess(-1, 36, (int)&v10, 4, 0);
    if ( InformationProcess < 0 )
      RtlRaiseStatus(InformationProcess);
    v3 = v10;
    `RtlpGetCookieValue'::`2'::CookieValue = v10;
  }
  v5 = __ROR4__(v2, 32 - (v3 & 0x1F));
  v13 = (int (__stdcall *)(int))(v5 ^ v3);
  if ( v5 == v3 )
    v13 = RtlUnhandledExceptionFilter;
  ExceptionRecord.ExceptionCode = -1073741420;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = (unsigned int)this;
  v6 = _InterlockedIncrement(&PossibleDeadlockReportCounter);
  if ( PossibleDeadlockReportThreshold )
  {
    if ( v6 == PossibleDeadlockReportThreshold )
    {
      PossibleDeadlockReportThreshold = ((5 * PossibleDeadlockReportThreshold) & 0x40000000) != 0
                                      ? 0
                                      : 10 * PossibleDeadlockReportThreshold;
      RtlCaptureContext(&ContextRecord);
      v11 = 0;
      v12 = 0;
      if ( !LdrpIsSecureProcess )
      {
        if ( ZwQueryInformationProcess(-1, 37, (int)v8, 48, 0) >= 0 && v9 == 1 )
        {
          v7 = 1;
          v11 = -300000000;
          v12 = -1;
        }
        else
        {
          v7 = 0;
        }
        RtlReportExceptionHelper(&ExceptionRecord, &ContextRecord, 0xFu, v7 != 0 ? (unsigned int)&v11 : 0);
      }
    }
  }
  ms_exc.registration.TryLevel = 0;
  if ( RtlpRaiseExceptionOnPossibleDeadlock )
    RtlRaiseException(&ExceptionRecord);
}

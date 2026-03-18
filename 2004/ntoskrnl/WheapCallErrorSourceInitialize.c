/*
 * XREFs of WheapCallErrorSourceInitialize @ 0x1403B79B0
 * Callers:
 *     WheapInitializeDeferredErrorSources @ 0x1405B587C (WheapInitializeDeferredErrorSources.c)
 *     WheaAddErrorSource @ 0x1407971E0 (WheaAddErrorSource.c)
 *     WheaInitializeProcessor @ 0x1409B0834 (WheaInitializeProcessor.c)
 *     WheaInitialize @ 0x140A5A6DC (WheaInitialize.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1403B7AF0 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallErrorSourceInitialize(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *v4)(_QWORD, __int64, _QWORD); // rax
  __int64 result; // rax
  __int64 (__fastcall *ErrorSourceFunction)(_QWORD, _QWORD); // r8

  if ( *(_DWORD *)(a1 + 40) == 16 )
  {
    ErrorSourceFunction = (__int64 (__fastcall *)(_QWORD, _QWORD))WheapGetErrorSourceFunction(a1, 1LL);
    result = 0LL;
    if ( ErrorSourceFunction )
      result = ErrorSourceFunction(*(_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 124));
  }
  else
  {
    v4 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))WheapGetErrorSourceFunction(a1, 1LL);
    if ( v4 )
      result = v4(a2, a1 + 96, *(_QWORD *)(a1 + 56));
    else
      result = 3221225474LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}

/*
 * XREFs of __BlockInput@4 @ 0x147ED5
 * Callers:
 *     _NtUserBlockInput@4 @ 0x15FC2F (_NtUserBlockInput@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall _BlockInput(void *this)
{
  struct _NT_TIB *v2; // eax
  struct _NT_TIB *v4; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v5[1] = -1;
  v5[0] = 12288;
  if ( this
    && PsGetCurrentProcess() != _gpepCSRSS
    && (*(_DWORD *)(_gptiCurrent + 248) != _grpdeskRitInput
     || !RtlAreAllAccessesGranted(*(_DWORD *)(_gptiCurrent + 496), 0x20u)) )
  {
    v2 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v2);
    return 0;
  }
  if ( !(unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, v5) )
  {
    v4 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v4);
    EtwTraceUIPISystemError(*(_DWORD *)(_gptiCurrent + 232), 0, 2);
    return 0;
  }
  if ( this )
  {
    if ( _gptiBlockInput || (*(_BYTE *)(_gptiCurrent + 264) & 1) != 0 )
      return 0;
    _gptiBlockInput = _gptiCurrent;
  }
  else
  {
    if ( _gptiBlockInput != _gptiCurrent )
      return 0;
    _gptiBlockInput = 0;
  }
  return 1;
}

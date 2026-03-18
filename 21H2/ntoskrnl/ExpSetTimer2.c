/*
 * XREFs of ExpSetTimer2 @ 0x1402D5824
 * Callers:
 *     NtSetIRTimer @ 0x14025D390 (NtSetIRTimer.c)
 *     NtSetTimer2 @ 0x1402D5800 (NtSetTimer2.c)
 *     NtCancelTimer2 @ 0x1402D6200 (NtCancelTimer2.c)
 * Callees:
 *     ExpSetTimerObject2 @ 0x1402D594C (ExpSetTimerObject2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h]

  v9 = 0LL;
  if ( a2 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      v5 = 0x7FFFFFFF0000LL;
      if ( a4 )
      {
        if ( a4 < 0x7FFFFFFF0000LL )
          v5 = a4;
        v9 = *(_OWORD *)v5;
      }
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, ExpIRTimerObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
    return ExpSetTimerObject2(Object);
  return result;
}

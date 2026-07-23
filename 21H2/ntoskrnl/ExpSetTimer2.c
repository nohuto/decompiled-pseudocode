/*
 * XREFs of ExpSetTimer2 @ 0x14026E384
 * Callers:
 *     NtCancelTimer2 @ 0x140250950 (NtCancelTimer2.c)
 *     NtSetIRTimer @ 0x1402511B0 (NtSetIRTimer.c)
 *     NtSetTimer2 @ 0x14026E360 (NtSetTimer2.c)
 * Callees:
 *     ExpSetTimerObject2 @ 0x14026E4AC (ExpSetTimerObject2.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  __int128 v8; // [rsp+50h] [rbp-28h]

  v8 = 0LL;
  if ( a2 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      v4 = a4;
      if ( a4 )
      {
        if ( a4 >= 0x7FFFFFFF0000LL )
          v4 = 0x7FFFFFFF0000LL;
        v8 = *(_OWORD *)v4;
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

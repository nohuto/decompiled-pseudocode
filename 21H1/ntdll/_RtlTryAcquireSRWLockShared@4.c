/*
 * XREFs of _RtlTryAcquireSRWLockShared@4 @ 0x4B2EA860
 * Callers:
 *     _EtwpFindRegistration@8 @ 0x4B2AE6F5 (_EtwpFindRegistration@8.c)
 *     _EtwpGetNextRegistration@4 @ 0x4B2EF857 (_EtwpGetNextRegistration@4.c)
 * Callees:
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  BOOLEAN v1; // bl
  unsigned int Value; // ecx
  int v4; // eax
  signed __int32 v5; // edx
  unsigned int v6; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  v6 = 0;
  Value = _InterlockedCompareExchange((volatile signed __int32 *)SRWLock, 17, 0);
  if ( !Value )
    return 1;
  while ( 1 )
  {
    v4 = (Value >> 1) & 1;
    if ( (Value & 1) != 0 && (v4 || (Value & 0xFFFFFFF0) == 0) )
      break;
    v5 = Value | 1;
    if ( !v4 )
      v5 += 16;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)SRWLock, v5, Value) == Value )
      return 1;
    RtlBackoff(&v6);
    Value = SRWLock->Value;
  }
  return v1;
}

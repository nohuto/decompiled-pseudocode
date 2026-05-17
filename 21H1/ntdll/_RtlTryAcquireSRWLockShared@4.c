/*
 * XREFs of _RtlTryAcquireSRWLockShared@4 @ 0x4B2EA860
 * Callers:
 *     _EtwpFindRegistration@8 @ 0x4B2AE6F5 (_EtwpFindRegistration@8.c)
 *     _EtwpGetNextRegistration@4 @ 0x4B2EF857 (_EtwpGetNextRegistration@4.c)
 * Callees:
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 */

char __stdcall RtlTryAcquireSRWLockShared(volatile signed __int32 *a1)
{
  char v1; // bl
  unsigned __int32 v2; // ecx
  int v4; // eax
  signed __int32 v5; // edx
  unsigned int v6; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  v6 = 0;
  v2 = _InterlockedCompareExchange(a1, 17, 0);
  if ( !v2 )
    return 1;
  while ( 1 )
  {
    v4 = (v2 >> 1) & 1;
    if ( (v2 & 1) != 0 && (v4 || (v2 & 0xFFFFFFF0) == 0) )
      break;
    v5 = v2 | 1;
    if ( !v4 )
      v5 += 16;
    if ( _InterlockedCompareExchange(a1, v5, v2) == v2 )
      return 1;
    RtlBackoff(&v6);
    v2 = *a1;
  }
  return v1;
}

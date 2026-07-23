/*
 * XREFs of _RtlpStdLogCapturedStackTrace@12 @ 0x4B3694C1
 * Callers:
 *     _RtlStdLogStackTrace@8 @ 0x4B369040 (_RtlStdLogStackTrace@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 *     _RtlpStdGetSpaceForTrace@8 @ 0x4B369414 (_RtlpStdGetSpaceForTrace@8.c)
 */

_RTL_SRWLOCK *__fastcall RtlpStdLogCapturedStackTrace(PRTL_SRWLOCK SRWLock, int a2, unsigned int a3)
{
  unsigned int v5; // edx
  int v6; // ecx
  _RTL_SRWLOCK *Value; // esi
  int v8; // eax
  __int16 v9; // cx
  _RTL_SRWLOCK *v10; // ecx
  SIZE_T v12; // [esp-4h] [ebp-18h]
  _RTL_SRWLOCK *v13; // [esp+Ch] [ebp-8h]
  int Size; // [esp+10h] [ebp-4h]

  v5 = a3 % SRWLock[94].Value;
  v6 = 4 * *(unsigned __int16 *)(a2 + 10);
  Size = v6;
  Value = &SRWLock[2 * v5 + 95];
  v13 = Value;
  _InterlockedIncrement((volatile signed __int32 *)&SRWLock[23]);
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive(Value + 1);
    v6 = Size;
  }
  while ( 1 )
  {
    Value = (_RTL_SRWLOCK *)Value->Value;
    if ( !Value )
      break;
    if ( HIWORD(Value[2].Value) == *(_WORD *)(a2 + 10) )
    {
      LODWORD(v12) = v6;
      v8 = RtlCompareMemory(&Value[3], (const void *)(a2 + 12), v12);
      v6 = Size;
      if ( v8 == Size )
        goto LABEL_8;
    }
  }
  Value = (_RTL_SRWLOCK *)RtlpStdGetSpaceForTrace(SRWLock, *(_WORD *)(a2 + 10));
  if ( !Value )
  {
    _InterlockedIncrement((volatile signed __int32 *)&SRWLock[28]);
    goto LABEL_11;
  }
  LODWORD(v12) = Size;
  memcpy(&Value[3], (const void *)(a2 + 12), v12);
  v9 = *(_WORD *)(a2 + 10);
  *(_WORD *)&Value[1].0 &= 0xF800u;
  HIWORD(Value[2].Value) = v9;
  v10 = &SRWLock[2 * (a3 % SRWLock[94].Value)];
  Value->0 = v10[95].0;
  v10[95].Value = (unsigned int)Value;
LABEL_8:
  if ( (*(_WORD *)&Value[1].0 & 0x7FF) != 0x7FF )
    *(_WORD *)&Value[1].0 ^= (*(_WORD *)&Value[1].0 ^ (*(_WORD *)&Value[1].0 + 1)) & 0x7FF;
LABEL_11:
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive(v13 + 1);
  return Value;
}

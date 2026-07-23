/*
 * XREFs of RtlpHpHeapExtendContext @ 0x180003030
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x180003020 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlpHpMetadataCommit @ 0x1800059A8 (RtlpHpMetadataCommit.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007E890 (RtlAcquireReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(_RTL_SRWLOCK *a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rsi
  signed __int64 Value; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int128 v9; // xmm0
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+10h] BYREF

  v2 = a1 + 28;
  RtlAcquireReleaseSRWLockExclusive(a1 + 28);
  while ( 1 )
  {
    while ( 1 )
    {
      Value = a1[29].Value;
      if ( Value + a2 > a1[30].Value )
        break;
      if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[29], Value + a2, Value) )
        return Value;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = a1[29].Value;
    v8 = a1[30].Value;
    if ( v7 + a2 > v8 )
      break;
LABEL_10:
    RtlReleaseSRWLockExclusive(v2);
  }
  v9 = *(_OWORD *)&a1->0;
  v10 = v7 - v8;
  BaseAddress = a1[30].Ptr;
  v11 = (v10 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( (BYTE6(a1[3].Ptr) & 1) != 0 )
  {
    v13 = v9;
    v12 = RtlpHpMetadataCommit((_DWORD)a1, v8, (v10 + a2 + 4095) & 0xFFFFF000, (unsigned int)&v13, 1);
  }
  else
  {
    *(_OWORD *)v14 = v9;
    v12 = RtlpHpAllocVA(&BaseAddress, 4u, (__int64)v14);
  }
  if ( v12 >= 0 )
  {
    a1[30].Value += v11;
    goto LABEL_10;
  }
  Value = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return Value;
}

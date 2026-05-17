/*
 * XREFs of RtlPosixBarrier @ 0x1800ED9D8
 * Callers:
 *     RtlBarrier @ 0x1800ED960 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800ED970 (RtlBarrierForDelete.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpWakeByAddress @ 0x18006471C (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddress @ 0x180064BA4 (RtlpWaitOnAddress.c)
 */

char __fastcall RtlPosixBarrier(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  int v6; // edi
  int v7; // esi
  unsigned __int64 v8; // rax
  unsigned int v9; // r8d
  unsigned __int64 v10; // rcx
  char v11; // bp
  unsigned __int64 v12; // rtt
  _DWORD *v13; // rdi
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v4 )
    return 0;
  v6 = *(_DWORD *)(v4 + 16);
  v7 = a2 & 0x10000;
  if ( (a2 & 0x10000) != 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(v4 + 8), a2, a3, a4);
  v8 = *(_QWORD *)v4;
  do
  {
    v9 = v8 + 1;
    v10 = HIDWORD(v8);
    v11 = 0;
    LODWORD(v15) = HIDWORD(v8);
    if ( (_DWORD)v8 + 1 == v6 )
    {
      v9 = 0;
      v11 = 1;
      LODWORD(v10) = HIDWORD(v8) + 1;
      LODWORD(v15) = HIDWORD(v8) + 1;
    }
    v12 = v8;
    v8 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)v4,
           v9 | ((unsigned __int64)(unsigned int)v10 << 32),
           v8);
  }
  while ( v12 != v8 );
  v13 = (_DWORD *)(v4 + 4);
  if ( v11 )
  {
    _InterlockedOr(v14, 0);
    RtlpWakeByAddress(v4 + 4, 1);
  }
  else
  {
    while ( (_DWORD)v15 == *v13 )
      RtlpWaitOnAddress((_QWORD *)(v4 + 4), &v15, 4LL, 0LL, RtlpWaitOnAddressSpinCycleCount);
  }
  if ( v7 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v4 + 8));
  return v11;
}

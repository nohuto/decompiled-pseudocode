/*
 * XREFs of _RtlPosixBarrier@8 @ 0x4B35031D
 * Callers:
 *     _RtlBarrier@8 @ 0x4B350280 (_RtlBarrier@8.c)
 *     _RtlBarrierForDelete@8 @ 0x4B3502A0 (_RtlBarrierForDelete@8.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 *     _RtlpWaitOnAddress@20 @ 0x4B2DF747 (_RtlpWaitOnAddress@20.c)
 */

char __fastcall RtlPosixBarrier(int a1, int a2)
{
  unsigned int v2; // esi
  int v4; // ebx
  signed __int64 v5; // rax
  unsigned int i; // edi
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  char v9; // bl
  signed __int32 v10; // [esp+4h] [ebp-18h] BYREF
  int v11; // [esp+8h] [ebp-14h]
  int v12; // [esp+Ch] [ebp-10h]
  unsigned int v13; // [esp+10h] [ebp-Ch]
  unsigned int v14; // [esp+14h] [ebp-8h] BYREF
  char v15; // [esp+1Bh] [ebp-1h]

  v2 = (a1 + 7) & 0xFFFFFFF8;
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 12);
  v12 = v4;
  v11 = a2 & 0x10000;
  if ( (a2 & 0x10000) != 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v2 + 8));
  LODWORD(v5) = *(_DWORD *)v2;
  for ( i = *(_DWORD *)(v2 + 4); ; i = HIDWORD(v5) )
  {
    HIDWORD(v5) = v5 + 1;
    v13 = v5;
    v14 = i;
    v7 = i;
    v15 = 0;
    if ( (_DWORD)v5 + 1 == v4 )
    {
      v7 = i + 1;
      v15 = 1;
      HIDWORD(v5) = 0;
      v14 = i + 1;
    }
    v8 = HIDWORD(v5);
    HIDWORD(v5) = i;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v2, __SPAIR64__(v7, v8), v5);
    if ( v5 == __PAIR64__(i, v13) )
      break;
    v4 = v12;
  }
  v9 = v15;
  if ( v15 )
  {
    _InterlockedOr(&v10, 0);
    RtlpWakeByAddress(v2 + 4, 1, 0);
  }
  else
  {
    while ( v14 == *(_DWORD *)(v2 + 4) )
      RtlpWaitOnAddress((volatile signed __int64 *)(v2 + 4), (int)&v14, 4u, 0, RtlpWaitOnAddressSpinCycleCount);
  }
  if ( v11 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v2 + 8));
  return v9;
}

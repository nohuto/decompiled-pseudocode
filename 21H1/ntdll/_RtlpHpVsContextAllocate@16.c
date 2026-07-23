/*
 * XREFs of _RtlpHpVsContextAllocate@16 @ 0x4B37F139
 * Callers:
 *     _RtlpHpAllocateHeapInternal@20 @ 0x4B3781B0 (_RtlpHpAllocateHeapInternal@20.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpVsContextAllocateInternal@24 @ 0x4B37F180 (_RtlpHpVsContextAllocateInternal@24.c)
 */

int __thiscall RtlpHpVsContextAllocate(_RTL_SRWLOCK *this, int a2, int a3)
{
  int Internal; // esi
  int v5; // [esp+8h] [ebp-10h] BYREF
  PRTL_SRWLOCK SRWLock; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h] BYREF

  v8 = 0;
  v5 = 0;
  SRWLock = 0;
  v7 = 0;
  Internal = RtlpHpVsContextAllocateInternal(this, a2, a3, (int)&v5, (int)&v8);
  if ( v8 && (a3 & 1) == 0 )
    RtlReleaseSRWLockExclusive(SRWLock);
  return Internal;
}

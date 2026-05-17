/*
 * XREFs of _RtlpHpVsContextAllocate@16 @ 0x4B37F139
 * Callers:
 *     _RtlpHpAllocateHeapInternal@20 @ 0x4B3781B0 (_RtlpHpAllocateHeapInternal@20.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpVsContextAllocateInternal@24 @ 0x4B37F180 (_RtlpHpVsContextAllocateInternal@24.c)
 */

int __stdcall RtlpHpVsContextAllocate(int a1, int a2)
{
  int v2; // esi
  int v4; // [esp+8h] [ebp-10h] BYREF
  volatile signed __int32 *v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h] BYREF

  v7 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v2 = RtlpHpVsContextAllocateInternal(a1, a2, &v4, &v7);
  if ( v7 && (a2 & 1) == 0 )
    RtlReleaseSRWLockExclusive(v5);
  return v2;
}

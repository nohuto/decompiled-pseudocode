/*
 * XREFs of _RtlpHpSegMgrVaCtxInsert@8 @ 0x4B37C7EB
 * Callers:
 *     _RtlpHpSegMgrAllocate@12 @ 0x4B37BE2B (_RtlpHpSegMgrAllocate@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 */

signed __int32 __fastcall RtlpHpSegMgrVaCtxInsert(int a1, int a2)
{
  unsigned __int16 *v3; // edx
  int v4; // edi
  unsigned __int16 *v5; // ecx
  unsigned __int16 *v7; // [esp+Ch] [ebp-4h] BYREF

  RtlpHpQueryVA(a2, &v7, 0, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
  v3 = v7;
  if ( (*v7 & 0x8000u) != 0 )
  {
    *v7 ^= (*v7 ^ (*v7 + 1)) & 0x7FF;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 16)), 1u);
  }
  v4 = *v3 >> 15;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 88));
  v5 = v7 + 2;
  *((_DWORD *)v7 + 1) = *(_DWORD *)(a1 + 4 * v4 + 92);
  *(_DWORD *)(a1 + 4 * v4 + 92) = v5;
  return RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 88));
}

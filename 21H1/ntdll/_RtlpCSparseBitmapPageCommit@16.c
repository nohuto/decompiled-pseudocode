/*
 * XREFs of _RtlpCSparseBitmapPageCommit@16 @ 0x4B37E46E
 * Callers:
 *     _RtlCSparseBitmapBitmaskWrite@16 @ 0x4B37DD69 (_RtlCSparseBitmapBitmaskWrite@16.c)
 *     _RtlSparseArrayElementAllocate@12 @ 0x4B37E34C (_RtlSparseArrayElementAllocate@12.c)
 * Callees:
 *     _RtlpWaitOnAddress@20 @ 0x4B2DF747 (_RtlpWaitOnAddress@20.c)
 *     _RtlpHpEnvAllocVA@36 @ 0x4B3723C3 (_RtlpHpEnvAllocVA@36.c)
 *     _RtlpCSparseBitmapLock@12 @ 0x4B38003A (_RtlpCSparseBitmapLock@12.c)
 *     _RtlpCSparseBitmapUnlock@4 @ 0x4B380071 (_RtlpCSparseBitmapUnlock@4.c)
 */

NTSTATUS __fastcall RtlpCSparseBitmapPageCommit(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  const signed __int32 *v6; // ecx
  NTSTATUS v7; // edi
  int v8; // ecx
  unsigned int v10; // [esp+10h] [ebp-10h] BYREF
  unsigned int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h] BYREF
  int v13; // [esp+1Ch] [ebp-4h] BYREF
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  v10 = a2;
  v6 = (const signed __int32 *)(a1 + 32);
  v11 = a2 >> 15;
  if ( !_bittest(v6, a2 >> 15) )
  {
    v12 = *(_DWORD *)a1 + (a2 >> 15 << 12);
    v13 = 4096;
    v7 = RtlpHpEnvAllocVA(
           (ULONG_PTR *)&v13,
           (PVOID *)&v12,
           (int)&savedregs,
           0,
           1073745920,
           4u,
           (int)v6,
           (int)v6,
           0,
           (int)v6);
    if ( v7 < 0 )
      return v7;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 32), v11);
  }
  *a4 = 0;
  a4[1] = 0;
  while ( 1 )
  {
    RtlpCSparseBitmapLock(a3);
    if ( *(_DWORD *)(a1 + 16) != a2 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpWaitOnAddress((volatile signed __int64 *)(a1 + 16), (int)&v10, 4u, 0, RtlpWaitOnAddressSpinCycleCount);
  }
  if ( !_bittest(*(const signed __int32 **)a1, a2) )
  {
    v13 = 4096;
    v12 = *(_DWORD *)(a1 + 4) + (a2 << 12);
    v7 = RtlpHpEnvAllocVA((ULONG_PTR *)&v13, (PVOID *)&v12, (int)&savedregs, 0, 1073745920, 4u, v8, v8, 0, v8);
    if ( v7 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      return v7;
    }
    _interlockedbittestandset(*(volatile signed __int32 **)a1, a2);
  }
  return 0;
}

/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x140361800
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x140360BD4 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x1403614D4 (RtlSparseArrayElementAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1402B13CC (RtlpHpEnvAllocVA.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x140361578 (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x1403615BC (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x14036195C (RtlpCSparseBitmapLock.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x1403619D8 (RtlCSparseBitmapEnterLockingRegion.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x14058FC48 (RtlpCSparseBitmapWaitOnAddress.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, int *a3, __int128 *a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rsi
  int v9; // edi
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+20h] [rbp-60h]
  __int64 v17; // [rsp+28h] [rbp-58h]
  int v18; // [rsp+30h] [rbp-50h]
  unsigned __int64 v19; // [rsp+38h] [rbp-48h]
  __int64 v20[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v22[16]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp+38h] BYREF

  v24 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    v23 = 4096LL;
    v20[0] = *(_QWORD *)a1 + (v5 << 12);
    v9 = RtlpHpEnvAllocVA(
           v20,
           &v23,
           0LL,
           1073745920,
           4,
           *(unsigned __int8 *)(a1 + 49),
           *(unsigned __int8 *)(a1 + 50),
           v19,
           0);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v5);
    v7 = v24;
  }
  *a4 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(v22, a1);
  while ( 1 )
  {
    RtlpCSparseBitmapLock(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 32) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpCSparseBitmapWaitOnAddress(a1 + 32, &v24, v12, a1, v16, v17);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, v7) )
  {
    v11 = *(unsigned __int8 *)(a1 + 49);
    v20[0] = *(_QWORD *)(a1 + 8) + (v7 << 12);
    v18 = *(unsigned __int8 *)(a1 + 50);
    v23 = 4096LL;
    v9 = RtlpHpEnvAllocVA(v20, &v23, 0LL, 1073745920, 4, v11, v18, v19, 0);
    if ( v9 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      v21 = *a4;
      RtlCSparseBitmapLeaveLockingRegion((unsigned __int8 *)&v21, v13, v14, v15);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, v7);
  }
  return 0;
}

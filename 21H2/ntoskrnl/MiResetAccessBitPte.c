/*
 * XREFs of MiResetAccessBitPte @ 0x1403C48E0
 * Callers:
 *     <none>
 * Callees:
 *     MiWalkVaCheckCommon @ 0x140227020 (MiWalkVaCheckCommon.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResetAccessBitPteWorker @ 0x1403C49DC (MiResetAccessBitPteWorker.c)
 *     MiResetAccessBitsTail @ 0x1403CA3D0 (MiResetAccessBitsTail.c)
 *     MiInsertVmAccessedEntry @ 0x14045BBAE (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiResetAccessBitPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 24);
  v12 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v12 & 0x20) == 0 )
    return 0LL;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  if ( !(unsigned int)MiWalkVaCheckCommon(v5, a2, v8, a3 == 0, &v12) )
    return 0LL;
  v9 = *(_QWORD *)(v3 + 16);
  v10 = (__int64)(a2 << 25) >> 16;
  if ( !v9 || v10 > 0x7FFFFFFEFFFFLL )
  {
    MiResetAccessBitPteWorker(v5, a2, v10, v8, v3, 0);
    return 0LL;
  }
  if ( !(unsigned int)MiInsertVmAccessedEntry(v9, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  return MiResetAccessBitsTail(a1);
}

/*
 * XREFs of MiDeleteEmptyPageTable @ 0x1403F49E0
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbListEarly @ 0x1402063F8 (MiFlushTbListEarly.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiIsPageTableDeletable @ 0x1403100A0 (MiIsPageTableDeletable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsle @ 0x140341B00 (MiTerminateWsle.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiDeleteEmptyPageTable(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  BOOL v9; // esi
  int v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp+20h]

  v2 = (unsigned __int64 *)a1[21];
  v11 = 0;
  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = v5;
  if ( (v5 & 1) != 0 && (v5 & 0x80u) == 0LL )
  {
    if ( (unsigned int)MiIsPageTableDeletable((__int64)a1, a2) )
    {
      v7 = a1[2];
      if ( (unsigned int)MiTerminateWsle(a1[3], (__int64)(a2 << 25) >> 16, 0, &v11) )
      {
        if ( v11 == 1 )
          MiInsertTbFlushEntry(v7, (__int64)(a2 << 25) >> 16, 1LL, 0);
        v8 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v9 = 0;
        v12 = v8;
        if ( MiPteInShadowRange(a2) )
          v9 = MiPteHasShadow() != 0;
        *(_QWORD *)a2 = v8;
        if ( v9 )
          MiWritePteShadow(a2, v8);
        MiFlushTbListEarly(v7, 0);
        _bittestandset64((signed __int64 *)v2 + 3, (a2 >> 3) & 0x1FF);
        if ( !*v2 )
          *v2 = a2;
      }
    }
  }
  return 0LL;
}

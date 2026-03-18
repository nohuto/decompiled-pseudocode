/*
 * XREFs of MiDeleteEmptyPageTable @ 0x1403EED30
 * Callers:
 *     <none>
 * Callees:
 *     MiTerminateWsle @ 0x140234900 (MiTerminateWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiIsPageTableDeletable @ 0x140245F90 (MiIsPageTableDeletable.c)
 *     MiFlushTbListEarly @ 0x14027C660 (MiFlushTbListEarly.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

__int64 __fastcall MiDeleteEmptyPageTable(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  BOOL v9; // esi
  __int64 v10; // r8
  int v12; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+78h] [rbp+20h]

  v2 = (unsigned __int64 *)a1[21];
  v12 = 0;
  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = v5;
  if ( (v5 & 1) != 0 && (v5 & 0x80u) == 0LL )
  {
    if ( (unsigned int)MiIsPageTableDeletable((__int64)a1, a2) )
    {
      v7 = a1[2];
      if ( (unsigned int)MiTerminateWsle(a1[3], (__int64)(a2 << 25) >> 16, 0, &v12) )
      {
        if ( v12 == 1 )
          MiInsertTbFlushEntry(v7, (__int64)(a2 << 25) >> 16, 1LL, 0);
        v8 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v9 = 0;
        v13 = v8;
        if ( MiPteInShadowRange(a2) )
          v9 = MiPteHasShadow() != 0;
        *(_QWORD *)a2 = v8;
        if ( v9 )
          MiWritePteShadow(a2, v8, v10);
        MiFlushTbListEarly(v7, 0LL);
        _bittestandset64((signed __int64 *)v2 + 3, (a2 >> 3) & 0x1FF);
        if ( !*v2 )
          *v2 = a2;
      }
    }
  }
  return 0LL;
}

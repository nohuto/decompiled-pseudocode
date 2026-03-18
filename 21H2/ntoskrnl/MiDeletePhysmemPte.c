/*
 * XREFs of MiDeletePhysmemPte @ 0x140259000
 * Callers:
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiDeletePhysmemPte(__int64 a1, __int64 a2)
{
  int v4; // esi
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r11

  v4 = 0;
  v5 = MI_READ_PTE_LOCK_FREE(a2) & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  v6 = MiPteInShadowRange(a2);
  v7 = 1LL;
  if ( v6 && (unsigned int)MiPteHasShadow() )
    v4 = v7;
  *(_QWORD *)a2 = v5;
  if ( v4 )
    MiWritePteShadow(a2, v5);
  return MiInsertTbFlushEntry(*(_QWORD *)(a1 + 16), a2 << 25 >> 16, v7, 0LL);
}

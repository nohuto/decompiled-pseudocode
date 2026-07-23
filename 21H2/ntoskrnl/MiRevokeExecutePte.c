/*
 * XREFs of MiRevokeExecutePte @ 0x140374540
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPfnProtection @ 0x14025EC28 (MiGetPfnProtection.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiRevokeExecutePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = (__int64)(a2 << 25) >> 16;
  if ( v4 <= 0x7FFFFFFEFFFFLL )
  {
    v8 = MI_READ_PTE_LOCK_FREE(a2);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v8);
      if ( (MiGetPfnProtection(0xFFFFFFFFFLL, v4, 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) & 2) == 0 )
      {
        MiWriteValidPteNewProtection(a2, v5 | 0x8000000000000000uLL);
        MiInsertTbFlushEntry(*(_QWORD *)(a1 + 168), v4, 1LL, 0);
      }
    }
  }
  return 0LL;
}

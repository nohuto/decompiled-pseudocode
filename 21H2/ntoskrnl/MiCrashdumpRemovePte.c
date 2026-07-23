/*
 * XREFs of MiCrashdumpRemovePte @ 0x1405385C0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiCrashdumpRemovePte(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v6; // rbx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 < 1 )
  {
    v8 = MI_READ_PTE_LOCK_FREE(a2);
    v4 = v8;
    if ( (v8 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v8)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v8 >> 3) & 0x1FF)) & 0x20) != 0 )
            v4 |= 0x20uLL;
        }
      }
      v6 = (v4 >> 12) & 0xFFFFFFFFFLL;
      if ( (*(_QWORD *)(48 * v6 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(a1 + 168) + 8LL))(*(_QWORD *)(a1 + 168), v6, 1LL);
    }
  }
  return 0LL;
}

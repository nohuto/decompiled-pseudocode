/*
 * XREFs of MiUpdateOldPagesEPTCallback @ 0x14053C6C0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiUpdateOldPteWorker @ 0x14053C968 (MiUpdateOldPteWorker.c)
 */

__int64 __fastcall MiUpdateOldPagesEPTCallback(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned __int64 v8; // rbx
  bool v9; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v8 = MI_READ_PTE_LOCK_FREE(a3);
  v14 = v8;
  if ( (*a2 & 2) != 0 )
    v9 = (v8 & 0x20) == 0;
  else
    v9 = (*a2 & 1) == 0;
  if ( v9 )
  {
    if ( MiPteInShadowRange((unsigned __int64)&v14)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v14 >> 3) & 0x1FF));
        v12 = v8 | 0x20;
        if ( (v11 & 0x20) == 0 )
          v12 = v8;
        v8 = v12;
        if ( (v11 & 0x42) != 0 )
          v8 = v12;
      }
    }
    MiUpdateOldPteWorker(v5, a3, 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, a5);
  }
  return 0LL;
}

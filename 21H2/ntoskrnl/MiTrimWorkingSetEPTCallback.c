/*
 * XREFs of MiTrimWorkingSetEPTCallback @ 0x14053C500
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiTrimPteWorker @ 0x14053C428 (MiTrimPteWorker.c)
 *     MiTrimmedEnough @ 0x14053C674 (MiTrimmedEnough.c)
 */

__int64 __fastcall MiTrimWorkingSetEPTCallback(
        __int64 a1,
        __int64 *a2,
        _BYTE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 v5; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx

  v5 = a5;
  if ( (unsigned int)MiTrimmedEnough(*(_QWORD *)(a1 + 24), a5) )
    return 1LL;
  v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v12 = *a2;
  a5 = v11;
  v13 = v11;
  if ( (v12 & 2) != 0 )
    v14 = (v11 >> 5) & 1;
  else
    LOBYTE(v14) = (v12 & 1) != 0;
  if ( MiPteInShadowRange((unsigned __int64)&a5)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&a5 >> 3) & 0x1FF));
      v17 = v13 | 0x20;
      if ( (v16 & 0x20) == 0 )
        v17 = v13;
      v13 = v17;
      if ( (v16 & 0x42) != 0 )
        v13 = v17 | 0x42;
    }
  }
  return MiTrimPteWorker(a1, a3, a4, 48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v5, v14, 0LL);
}

/*
 * XREFs of MiGetVaAge @ 0x140313E40
 * Callers:
 *     MiUpdateWsleAge @ 0x14023D07C (MiUpdateWsleAge.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MiResetAccessBitPte @ 0x14039B940 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x14053BCC0 (MiResetAccessBitPteWorker.c)
 *     MiSimpleAgePte @ 0x14053BF00 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x14053C7F0 (MiUpdateOldPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall MiGetVaAge(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  struct _LIST_ENTRY *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v11; // rax
  char v12; // r8^7

  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = *(_QWORD *)v2;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL
      && v2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v3 & 1) != 0
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v11 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
        v12 = HIBYTE(*(_QWORD *)v2);
        if ( (v11 & 0x20) == 0 )
          v12 = HIBYTE(v3);
        HIBYTE(v3) = v12;
        if ( (v11 & 0x42) != 0 )
          HIBYTE(v3) = v12;
      }
    }
    return HIBYTE(v3) & 0xF;
  }
  else
  {
    v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = *(_QWORD *)v5;
    if ( (unsigned int)MiPteInShadowRange(v5)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      v7 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v7 )
      {
        v8 = v6 | 0x20;
        v9 = *((_QWORD *)&v7->Flink + ((v5 >> 3) & 0x1FF));
        if ( (v9 & 0x20) == 0 )
          v8 = v6;
        v6 = v8;
        if ( (v9 & 0x42) != 0 )
          v6 = v8 | 0x42;
      }
    }
    return (*(_BYTE *)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
  }
}

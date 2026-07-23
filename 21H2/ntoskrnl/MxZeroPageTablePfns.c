/*
 * XREFs of MxZeroPageTablePfns @ 0x140A58504
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x140A5768C (MiInitializePfnsForValidMappings.c)
 *     MxZeroPageTablePfns @ 0x140A58504 (MxZeroPageTablePfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MxZeroPageTablePfns @ 0x140A58504 (MxZeroPageTablePfns.c)
 */

void __fastcall MxZeroPageTablePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  _OWORD *v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  struct _LIST_ENTRY *v15; // rdx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  if ( a1 <= a2 )
  {
    v7 = a1;
    do
    {
      v16 = MI_READ_PTE_LOCK_FREE(v7);
      v8 = v16;
      if ( (v16 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v16)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v16 >> 3) & 0x1FF));
            v14 = v8 | 0x20;
            if ( (v13 & 0x20) == 0 )
              v14 = v8;
            v8 = v14;
            if ( (v13 & 0x42) != 0 )
              v8 = v14;
          }
        }
        v9 = (_OWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        v17 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v10 = v17;
        if ( MiPteInShadowRange((unsigned __int64)&v17)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v10 & 1) != 0
          && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
        {
          v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v15 )
          {
            if ( ((__int64)*(&v15->Flink + (((unsigned __int64)&v17 >> 3) & 0x1FF)) & 0x20) != 0 )
              v10 |= 0x20uLL;
          }
        }
        v11 = 6 * ((v10 >> 12) & 0xFFFFFFFFFLL);
        *(_OWORD *)(8 * v11 - 0x58000000000LL) = 0LL;
        *(_OWORD *)(8 * v11 - 0x58000000000LL + 16) = 0LL;
        *(_OWORD *)(8 * v11 - 0x58000000000LL + 32) = 0LL;
        if ( !a3 || (v16 & 0x80u) == 0LL )
        {
          *v9 = 0LL;
          v9[1] = 0LL;
          v9[2] = 0LL;
          if ( a3 > 1 && v7 != 0xFFFFF6FB7DBEDF68uLL )
            MxZeroPageTablePfns(
              (__int64)(v7 << 25) >> 16,
              ((__int64)(v7 << 25) >> 16) + 4088,
              (unsigned int)(a3 - 1),
              a4);
        }
      }
      v7 += 8LL;
    }
    while ( v7 <= a2 );
  }
}

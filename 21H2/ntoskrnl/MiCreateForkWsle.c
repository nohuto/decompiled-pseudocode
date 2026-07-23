/*
 * XREFs of MiCreateForkWsle @ 0x140559E5C
 * Callers:
 *     MiCreateForkWsle @ 0x140559E5C (MiCreateForkWsle.c)
 *     MiCreateForkWsles @ 0x140559FEC (MiCreateForkWsles.c)
 * Callees:
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiCreateForkWsle @ 0x140559E5C (MiCreateForkWsle.c)
 */

void __fastcall MiCreateForkWsle(__int64 a1, char a2, unsigned __int64 a3, unsigned __int64 a4, int a5)
{
  int v5; // ebp
  unsigned __int64 v7; // rdi
  __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 <= a4 )
  {
    v5 = a5;
    v7 = a3;
    do
    {
      v10 = MI_READ_PTE_LOCK_FREE(v7);
      v17 = v10;
      v12 = v10;
      if ( (v10 & 1) != 0 && (v10 & 0x80u) == 0LL )
      {
        if ( v5 > 1 )
        {
          LOBYTE(v11) = a2;
          MiCreateForkWsle(a1, v11, (__int64)(v7 << 25) >> 16, ((__int64)(v7 << 25) >> 16) + 4088, v5 - 1);
        }
        if ( MiPteInShadowRange((unsigned __int64)&v17)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v14 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v17 >> 3) & 0x1FF));
            v15 = v12 | 0x20;
            if ( (v14 & 0x20) == 0 )
              v15 = v12;
            v12 = v15;
            if ( (v14 & 0x42) != 0 )
              v12 = v15;
          }
        }
        v16 = (_QWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        if ( (*(_BYTE *)v16 & 1) == 0 )
          MiAllocateWsle(a1, v7, v16, 0, ZeroPte, 0, 0LL);
      }
      v7 += 8LL;
    }
    while ( v7 <= a4 );
  }
}

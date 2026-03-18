/*
 * XREFs of MiMarkKernelStack @ 0x140349430
 * Callers:
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiMarkBootKernelStack @ 0x140A4C6A4 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiMarkKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rcx
  char v10; // al
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a1;
  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v13 = v2 | 0x20;
      v14 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      if ( (v14 & 0x20) == 0 )
        v13 = v2;
      v2 = v13;
      if ( (v14 & 0x42) != 0 )
        v2 = v13 | 0x42;
    }
  }
  v17 = v2;
  if ( MiPteInShadowRange((unsigned __int64)&v17)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v5 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v5 )
    {
      v15 = *(_QWORD *)(v5 + 8 * (((unsigned __int64)&v17 >> 3) & 0x1FF));
      v5 = v2 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v15 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v8 = 48 * ((v2 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v16, v5, v6, v7);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  *(_QWORD *)(v8 + 40) = *(_QWORD *)(v8 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
  v9 = *(_QWORD *)v8 ^ (*(_QWORD *)v8 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *(_QWORD *)v8 = v9;
  if ( a2 && (v9 & 1) == 0 )
    *(_QWORD *)v8 = v9 | 1;
  v10 = *(_BYTE *)(v8 + 35);
  *(_QWORD *)(v8 + 16) |= 0x3E0uLL;
  *(_BYTE *)(v8 + 35) = v10 & 0xF8 | 5;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

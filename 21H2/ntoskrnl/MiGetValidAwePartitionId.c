/*
 * XREFs of MiGetValidAwePartitionId @ 0x14054C740
 * Callers:
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiGetValidAwePartitionId(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v1 = a1;
  if ( (a1 & 1) != 0 )
  {
    if ( MiPteInShadowRange((unsigned __int64)&v8)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v1 |= 0x20uLL;
        v4 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v8 >> 3) & 0x1FF));
        if ( (v4 & 0x20) == 0 )
          v1 = a1;
        if ( (v4 & 0x42) != 0 )
          v1 |= 0x42uLL;
      }
      else
      {
        v1 = v8;
      }
    }
  }
  else if ( qword_140C4DF80 && (a1 & 0x10) == 0 )
  {
    v1 = a1 & ~qword_140C4DF80;
  }
  v5 = (v1 >> 12) & 0xFFFFFFFFFLL;
  if ( ((*(_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    return (*(_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL) >> 39) & 0x3FF;
  else
    return 0;
}

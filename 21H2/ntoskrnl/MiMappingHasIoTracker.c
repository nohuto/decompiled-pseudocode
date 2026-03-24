/*
 * XREFs of MiMappingHasIoTracker @ 0x14031CB40
 * Callers:
 *     MmUnmapIoSpace @ 0x140297530 (MmUnmapIoSpace.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     MmProtectMdlSystemAddress @ 0x1405321B0 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiMappingHasIoTracker(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdi
  int v2; // eax
  __int64 v3; // rdx
  bool i; // zf
  unsigned __int64 v5; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rdx
  __int64 v9; // rax

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = MI_IS_PHYSICAL_ADDRESS(a1);
  for ( i = v2 == 0; !i; i = v2-- == 1 )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)v1;
  if ( (unsigned int)MiPteInShadowRange(v1, v3)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v8 = v5 | 0x20;
      v9 = *((_QWORD *)&Flink->Flink + ((v1 >> 3) & 0x1FF));
      if ( (v9 & 0x20) == 0 )
        v8 = v5;
      v5 = v8;
      if ( (v9 & 0x42) != 0 )
        v5 = v8 | 0x42;
    }
  }
  return (v5 >> 9) & 1;
}

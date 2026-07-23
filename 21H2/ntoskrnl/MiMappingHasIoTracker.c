/*
 * XREFs of MiMappingHasIoTracker @ 0x140327890
 * Callers:
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     MmProtectMdlSystemAddress @ 0x1405323F0 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiMappingHasIoTracker(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdi
  int v2; // eax
  bool i; // zf
  unsigned __int64 v4; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = MI_IS_PHYSICAL_ADDRESS(a1);
  for ( i = v2 == 0; !i; i = v2-- == 1 )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = *(_QWORD *)v1;
  if ( (unsigned int)MiPteInShadowRange(v1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = v4 | 0x20;
      v8 = *((_QWORD *)&Flink->Flink + ((v1 >> 3) & 0x1FF));
      if ( (v8 & 0x20) == 0 )
        v7 = v4;
      v4 = v7;
      if ( (v8 & 0x42) != 0 )
        v4 = v7 | 0x42;
    }
  }
  return (v4 >> 9) & 1;
}

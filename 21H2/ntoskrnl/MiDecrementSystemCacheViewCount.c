/*
 * XREFs of MiDecrementSystemCacheViewCount @ 0x1403139F0
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14030FCFC (MiReleaseSystemCacheView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

char __fastcall MiDecrementSystemCacheViewCount(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v4; // rcx
  char result; // al
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v1 = v6;
  if ( (unsigned int)MiPteInShadowRange(&v6, v2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v6 >> 3) & 0x1FF)) & 0x20) != 0 )
      v1 |= 0x20uLL;
  }
  v4 = 48 * ((v1 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  result = *(_BYTE *)(v4 + 39) - 1;
  *(_BYTE *)(v4 + 39) = result;
  return result;
}

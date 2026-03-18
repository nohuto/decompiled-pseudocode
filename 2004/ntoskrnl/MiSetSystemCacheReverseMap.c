/*
 * XREFs of MiSetSystemCacheReverseMap @ 0x14033D688
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1402C220C (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x14033D4E0 (MiExpandSystemCache.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiSetSystemCacheReverseMap(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v3 = v7;
  if ( MiPteInShadowRange((unsigned __int64)&v7)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v7 >> 3) & 0x1FF)) & 0x20) != 0 )
      v3 |= 0x20uLL;
  }
  v5 = (v3 >> 12) & 0xFFFFFFFFFLL;
  result = 6 * v5;
  *(_QWORD *)(48 * v5 - 0x57FFFFFFFF0LL) = a2;
  return result;
}

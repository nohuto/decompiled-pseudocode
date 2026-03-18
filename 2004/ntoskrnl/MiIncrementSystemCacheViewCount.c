/*
 * XREFs of MiIncrementSystemCacheViewCount @ 0x1402BCD8C
 * Callers:
 *     MiObtainSystemCacheView @ 0x1402B94B0 (MiObtainSystemCacheView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiIncrementSystemCacheViewCount(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v1 = v5;
  if ( MiPteInShadowRange((unsigned __int64)&v5)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v5 >> 3) & 0x1FF)) & 0x20) != 0 )
      v1 |= 0x20uLL;
  }
  v3 = (v1 >> 12) & 0xFFFFFFFFFLL;
  result = 6 * v3;
  ++*(_BYTE *)(48 * v3 - 0x58000000000LL + 39);
  return result;
}

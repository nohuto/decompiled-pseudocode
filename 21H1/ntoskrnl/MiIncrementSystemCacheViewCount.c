/*
 * XREFs of MiIncrementSystemCacheViewCount @ 0x14022A10C
 * Callers:
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiIncrementSystemCacheViewCount(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v4; // rbx
  __int64 result; // rax
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
  v4 = (v1 >> 12) & 0xFFFFFFFFFLL;
  result = 6 * v4;
  ++*(_BYTE *)(48 * v4 - 0x58000000000LL + 39);
  return result;
}

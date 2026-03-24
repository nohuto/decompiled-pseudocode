/*
 * XREFs of MiSetSystemCacheReverseMap @ 0x1402B30D4
 * Callers:
 *     MiExpandSystemCache @ 0x1402B2F2C (MiExpandSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x14030FCFC (MiReleaseSystemCacheView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiSetSystemCacheReverseMap(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v3 = v8;
  if ( (unsigned int)MiPteInShadowRange(&v8, v4)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v8 >> 3) & 0x1FF)) & 0x20) != 0 )
      v3 |= 0x20uLL;
  }
  v6 = (v3 >> 12) & 0xFFFFFFFFFLL;
  result = 6 * v6;
  *(_QWORD *)(48 * v6 - 0x57FFFFFFFF0LL) = a2;
  return result;
}

/*
 * XREFs of MiMarkLargePagePte @ 0x140A679D0
 * Callers:
 *     <none>
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiMarkLargePagePte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = v4;
  v5 = v4;
  if ( (v4 & 1) != 0 && (v4 & 0x80u) != 0LL )
  {
    if ( MiPteInShadowRange((unsigned __int64)&v11)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v11 >> 3) & 0x1FF)) & 0x20) != 0 )
          v5 |= 0x20uLL;
      }
    }
    v7 = (v5 >> 12) & 0xFFFFFFFFFLL;
    if ( ((*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    {
      v8 = 512LL;
      if ( a3 > 1 )
      {
        v9 = (unsigned int)(a3 - 1);
        do
        {
          v8 <<= 9;
          --v9;
        }
        while ( v9 );
      }
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v7, v8, 1, 0);
    }
  }
  return 0LL;
}

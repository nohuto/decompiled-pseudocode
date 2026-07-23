/*
 * XREFs of MiAddLoaderHalIoPte @ 0x140A63830
 * Callers:
 *     <none>
 * Callees:
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiAddLoaderHalIoPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v13 = v4;
  v5 = v4;
  if ( (v4 & 1) != 0 )
  {
    v6 = v4;
    if ( MiPteInShadowRange((unsigned __int64)&v13) && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v13 >> 3) & 0x1FF)) & 0x20) != 0 )
            v6 |= 0x20uLL;
        }
      }
      v5 = v13;
    }
    v7 = (v6 >> 12) & 0xFFFFFFFFFLL;
    if ( ((*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
    {
      if ( (v5 & 0x80u) == 0LL )
      {
        v10 = 1LL;
      }
      else
      {
        v10 = 512LL;
        if ( a3 > 1 )
        {
          v11 = (unsigned int)(a3 - 1);
          do
          {
            v10 <<= 9;
            --v11;
          }
          while ( v11 );
        }
      }
      if ( ((v5 >> 4) & 1) != 0 || (v5 & 8) == 0 )
        v12 = ((v5 >> 4) & 1) == 0;
      else
        v12 = 2;
      MiReferenceIoPages(1u, v7, v10, v12, 0LL, 0LL);
    }
  }
  return 0LL;
}

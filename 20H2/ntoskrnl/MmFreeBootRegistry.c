/*
 * XREFs of MmFreeBootRegistry @ 0x14079533C
 * Callers:
 *     CmpFreeBootRegistry @ 0x1404EC5F8 (CmpFreeBootRegistry.c)
 *     HvpDropPagedBins @ 0x140795208 (HvpDropPagedBins.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiDeleteBootRange @ 0x1403B3AF8 (MiDeleteBootRange.c)
 *     qsort @ 0x1403D2150 (qsort.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void MmFreeBootRegistry()
{
  size_t *v0; // rax
  size_t *v1; // r14
  size_t v2; // rsi
  unsigned __int64 *v3; // rbx
  size_t i; // rdi
  __int64 PteAddress; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx

  v0 = (size_t *)_InterlockedCompareExchange64(&qword_140C4ED50, 1LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    v3 = v0 + 1;
    qsort(v0 + 1, *v0, 8uLL, MiRegistryVaSort);
    for ( i = 0LL; i < v2; ++i )
    {
      PteAddress = MiGetPteAddress(*v3);
      LODWORD(v8) = PteAddress;
      if ( i == v2 - 1 || v7 + 4096 != v3[1] )
      {
        if ( v6 == 1 )
        {
          v6 = 1LL;
          v9 = PteAddress;
        }
        else
        {
          v8 = PteAddress - 8 * v6;
          v9 = v8 + 8;
        }
        MiDeleteBootRange(v9, v6, v8);
      }
      ++v3;
    }
    ExFreePoolWithTag(v1, 0);
    qword_140C4ED50 = 0LL;
  }
}

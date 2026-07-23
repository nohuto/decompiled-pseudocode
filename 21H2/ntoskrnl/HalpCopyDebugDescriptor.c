/*
 * XREFs of HalpCopyDebugDescriptor @ 0x140A6ED5C
 * Callers:
 *     HalpDbgInitSystem @ 0x1409A2540 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall HalpCopyDebugDescriptor(__int64 a1)
{
  unsigned int v3; // ecx
  size_t v4; // rsi
  char *v5; // rax
  char *v6; // rdi

  if ( !a1 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 216) + *(_DWORD *)(a1 + 232) + 248;
  v4 = v3;
  v5 = HalpMmLoaderBlock
     ? (char *)HalpMmAllocateMemoryInternal(v3, 1u)
     : (char *)ExAllocatePoolWithTag(PagedPool, v3, 0x206C6148u);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  memset(v5, 0, v4);
  *(_OWORD *)v6 = *(_OWORD *)a1;
  *((_OWORD *)v6 + 1) = *(_OWORD *)(a1 + 16);
  *((_OWORD *)v6 + 2) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v6 + 3) = *(_OWORD *)(a1 + 48);
  *((_OWORD *)v6 + 4) = *(_OWORD *)(a1 + 64);
  *((_OWORD *)v6 + 5) = *(_OWORD *)(a1 + 80);
  *((_OWORD *)v6 + 6) = *(_OWORD *)(a1 + 96);
  *((_OWORD *)v6 + 7) = *(_OWORD *)(a1 + 112);
  *((_OWORD *)v6 + 8) = *(_OWORD *)(a1 + 128);
  *((_OWORD *)v6 + 9) = *(_OWORD *)(a1 + 144);
  *((_OWORD *)v6 + 10) = *(_OWORD *)(a1 + 160);
  *((_OWORD *)v6 + 11) = *(_OWORD *)(a1 + 176);
  *((_OWORD *)v6 + 12) = *(_OWORD *)(a1 + 192);
  *((_OWORD *)v6 + 13) = *(_OWORD *)(a1 + 208);
  *((_OWORD *)v6 + 14) = *(_OWORD *)(a1 + 224);
  *((_QWORD *)v6 + 30) = *(_QWORD *)(a1 + 240);
  *((_QWORD *)v6 + 26) = v6 + 248;
  *((_QWORD *)v6 + 28) = &v6[*(unsigned int *)(a1 + 216) + 248];
  memmove(v6 + 248, *(const void **)(a1 + 208), *(unsigned int *)(a1 + 216));
  memmove(*((void **)v6 + 28), *(const void **)(a1 + 224), *(unsigned int *)(a1 + 232));
  return v6;
}

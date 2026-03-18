/*
 * XREFs of MiInitializeDummyPages @ 0x140A5433C
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiFillPhysicalPages @ 0x1403333BC (MiFillPhysicalPages.c)
 *     MiAllocateDummyPage @ 0x140A54590 (MiAllocateDummyPage.c)
 */

unsigned __int64 MiInitializeDummyPages()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  __int64 DummyPage; // rax
  ULONG_PTR v4; // rdi
  __int64 v5; // r9
  unsigned __int64 ValidPte; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  ULONG_PTR v10; // rbx
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 result; // rax

  MiAllocateDummyPage();
  v0 = MiSwizzleInvalidPte(32LL);
  *(_QWORD *)(v1 + 16) = v0;
  v2 = (__int64)((unsigned __int128)((v1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  qword_140C4EC00 = (v2 >> 63) + v2;
  MiFillPhysicalPages(qword_140C4EC00, qword_140C4EC00, 0LL);
  qword_140C4EBE0 = MiAllocateDummyPage();
  *(_QWORD *)(qword_140C4EBE0 + 16) = v0;
  qword_140C4EBE8 = (qword_140C4EBE0 + 0x58000000000LL) / 48;
  MiFillPhysicalPages(qword_140C4EBE8, qword_140C4EBE8, 0xFFFFFFFFFFFFFFFFuLL);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = v0;
  v4 = (DummyPage + 0x58000000000LL) / 48;
  qword_140C4EC68 = v4;
  ValidPte = MiMakeValidPte(
               (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               qword_140C4EC00,
               1LL,
               v5);
  MiFillPhysicalPages(v4, v7, ValidPte);
  qword_140C4EC70 = ((qword_140C4EC68 & 0xFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                                  (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                                - 0x98000000000LL,
                                                                  qword_140C4EC00,
                                                                  134217729LL,
                                                                  v8) & 0xFFFF000000000FFFuLL;
  v9 = MiAllocateDummyPage();
  *(_QWORD *)(v9 + 16) = v0;
  v10 = (v9 + 0x58000000000LL) / 48;
  qword_140C4EC78 = v10;
  v12 = MiMakeValidPte(
          (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          qword_140C4EBE8,
          1LL,
          v11);
  MiFillPhysicalPages(v10, v13, v12);
  result = ((qword_140C4EC78 & 0xFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                         (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                       - 0x98000000000LL,
                                                         qword_140C4EBE8,
                                                         134217729LL,
                                                         v14) & 0xFFFF000000000FFFuLL;
  qword_140C4EC80 = result;
  return result;
}

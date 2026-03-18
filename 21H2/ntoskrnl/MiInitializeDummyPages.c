/*
 * XREFs of MiInitializeDummyPages @ 0x140B098F0
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiFillPhysicalPages @ 0x140235AAC (MiFillPhysicalPages.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiAllocateDummyPage @ 0x140B09B18 (MiAllocateDummyPage.c)
 */

unsigned __int64 MiInitializeDummyPages()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 DummyPage; // rax
  ULONG_PTR v4; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 result; // rax

  MiAllocateDummyPage();
  v0 = MiSwizzleInvalidPte(32LL);
  *(_QWORD *)(v1 + 16) = v0;
  qword_140C53290 = 0xAAAAAAAAAAAAAAABuLL * ((v1 + 0x220000000000LL) >> 4);
  MiFillPhysicalPages(qword_140C53290, qword_140C53290, 0LL);
  qword_140C53270 = MiAllocateDummyPage();
  *(_QWORD *)(qword_140C53270 + 16) = v0;
  qword_140C53278 = 0xAAAAAAAAAAAAAAABuLL * ((qword_140C53270 + 0x220000000000LL) >> 4);
  MiFillPhysicalPages(0xAAAAAAAAAAAAAAABuLL * ((qword_140C53270 + 0x220000000000LL) >> 4), v2, 0xFFFFFFFFFFFFFFFFuLL);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = v0;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((DummyPage + 0x220000000000LL) >> 4);
  qword_140C532F8 = v4;
  ValidPte = MiMakeValidPte(
               (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               qword_140C53290,
               1);
  MiFillPhysicalPages(v4, v6, ValidPte);
  qword_140C53300 = ((qword_140C532F8 & 0xFFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                                   (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                                 - 0x98000000000LL,
                                                                   qword_140C53290,
                                                                   134217729) & 0xFFF0000000000FFFuLL;
  v7 = MiAllocateDummyPage();
  *(_QWORD *)(v7 + 16) = v0;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4);
  qword_140C53308 = v8;
  v9 = MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_140C53278, 1);
  MiFillPhysicalPages(v8, v10, v9);
  result = ((qword_140C53308 & 0xFFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                          (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                        - 0x98000000000LL,
                                                          qword_140C53278,
                                                          134217729) & 0xFFF0000000000FFFuLL;
  qword_140C53310 = result;
  return result;
}

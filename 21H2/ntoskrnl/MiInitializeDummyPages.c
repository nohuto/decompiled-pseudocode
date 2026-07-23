/*
 * XREFs of MiInitializeDummyPages @ 0x140A56944
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiFillPhysicalPages @ 0x1402977C0 (MiFillPhysicalPages.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiAllocateDummyPage @ 0x140A56B98 (MiAllocateDummyPage.c)
 */

unsigned __int64 MiInitializeDummyPages()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  __int64 DummyPage; // rax
  ULONG_PTR v4; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 result; // rax

  MiAllocateDummyPage();
  v0 = MiSwizzleInvalidPte(32LL);
  *(_QWORD *)(v1 + 16) = v0;
  v2 = (__int64)((unsigned __int128)((v1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  qword_140C4EDC0 = (v2 >> 63) + v2;
  MiFillPhysicalPages(qword_140C4EDC0, qword_140C4EDC0, 0LL);
  qword_140C4EDA0 = MiAllocateDummyPage();
  *(_QWORD *)(qword_140C4EDA0 + 16) = v0;
  qword_140C4EDA8 = (qword_140C4EDA0 + 0x58000000000LL) / 48;
  MiFillPhysicalPages(qword_140C4EDA8, qword_140C4EDA8, 0xFFFFFFFFFFFFFFFFuLL);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = v0;
  v4 = (DummyPage + 0x58000000000LL) / 48;
  qword_140C4EE28 = v4;
  ValidPte = MiMakeValidPte(
               (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               qword_140C4EDC0,
               1);
  MiFillPhysicalPages(v4, v6, ValidPte);
  qword_140C4EE30 = ((qword_140C4EE28 & 0xFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                                  (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                                - 0x98000000000LL,
                                                                  qword_140C4EDC0,
                                                                  134217729) & 0xFFFF000000000FFFuLL;
  v7 = MiAllocateDummyPage();
  *(_QWORD *)(v7 + 16) = v0;
  v8 = (v7 + 0x58000000000LL) / 48;
  qword_140C4EE38 = v8;
  v9 = MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_140C4EDA8, 1);
  MiFillPhysicalPages(v8, v10, v9);
  result = ((qword_140C4EE38 & 0xFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                         (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                       - 0x98000000000LL,
                                                         qword_140C4EDA8,
                                                         134217729) & 0xFFFF000000000FFFuLL;
  qword_140C4EE40 = result;
  return result;
}

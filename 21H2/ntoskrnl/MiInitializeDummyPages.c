/*
 * XREFs of MiInitializeDummyPages @ 0x140A55944
 * Callers:
 *     MiInitNucleus @ 0x140A42F34 (MiInitNucleus.c)
 * Callees:
 *     MiFillPhysicalPages @ 0x1402E6470 (MiFillPhysicalPages.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiAllocateDummyPage @ 0x140A55B98 (MiAllocateDummyPage.c)
 */

unsigned __int64 MiInitializeDummyPages()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 DummyPage; // rax
  ULONG_PTR v6; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rax
  ULONG_PTR v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 result; // rax

  MiAllocateDummyPage();
  v0 = MiSwizzleInvalidPte(32LL);
  *(_QWORD *)(v1 + 16) = v0;
  v2 = (__int64)((unsigned __int128)((v1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  qword_140C4ED80 = (v2 >> 63) + v2;
  MiFillPhysicalPages(qword_140C4ED80, qword_140C4ED80, 0LL, v3);
  qword_140C4ED60 = MiAllocateDummyPage();
  *(_QWORD *)(qword_140C4ED60 + 16) = v0;
  qword_140C4ED68 = (qword_140C4ED60 + 0x58000000000LL) / 48;
  MiFillPhysicalPages(qword_140C4ED68, qword_140C4ED68, 0xFFFFFFFFFFFFFFFFuLL, v4);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = v0;
  v6 = (DummyPage + 0x58000000000LL) / 48;
  qword_140C4EDE8 = v6;
  ValidPte = MiMakeValidPte(
               (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               qword_140C4ED80,
               1);
  MiFillPhysicalPages(v6, v8, ValidPte, v9);
  qword_140C4EDF0 = ((qword_140C4EDE8 & 0xFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                                  (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                                - 0x98000000000LL,
                                                                  qword_140C4ED80,
                                                                  134217729) & 0xFFFF000000000FFFuLL;
  v10 = MiAllocateDummyPage();
  *(_QWORD *)(v10 + 16) = v0;
  v11 = (v10 + 0x58000000000LL) / 48;
  qword_140C4EDF8 = v11;
  v12 = MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_140C4ED68, 1);
  MiFillPhysicalPages(v11, v13, v12, v14);
  result = ((qword_140C4EDF8 & 0xFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                         (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                       - 0x98000000000LL,
                                                         qword_140C4ED68,
                                                         134217729) & 0xFFFF000000000FFFuLL;
  qword_140C4EE00 = result;
  return result;
}

/*
 * XREFs of MiProtectSharedUserPage @ 0x140A70A94
 * Callers:
 *     MiInitNucleus @ 0x140A3D174 (MiInitNucleus.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void MiProtectSharedUserPage()
{
  __int64 v0; // rax
  _KPROCESS *v1; // rdx
  _QWORD v2[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v2, 0, 0xB8uLL);
  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  if ( v0 >= 0 || (BYTE1(v0) & 1) != (_BYTE)word_140C4DE08 )
  {
    v2[3] = 0LL;
    LODWORD(v2[1]) = 20;
    MiWriteValidPteNewProtection(
      0xFFFFF6FBC0000000uLL,
      v0 & 0xFFFFFFFFFFFFFEFFuLL | ((word_140C4DE08 & 1 | 0xFF80000000000000uLL) << 8));
    MiInsertTbFlushEntry((__int64)v2, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((__int64)v2, v1);
  }
}

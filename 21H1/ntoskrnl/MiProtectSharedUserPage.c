/*
 * XREFs of MiProtectSharedUserPage @ 0x140A6FE3C
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void MiProtectSharedUserPage()
{
  __int64 v0; // rax
  _KPROCESS *v1; // rdx
  _QWORD v2[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v2, 0, 0xB8uLL);
  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  if ( v0 >= 0 || (BYTE1(v0) & 1) != (_BYTE)word_140C4DF48 )
  {
    v2[3] = 0LL;
    LODWORD(v2[1]) = 20;
    MiWriteValidPteNewProtection(
      0xFFFFF6FBC0000000uLL,
      v0 & 0xFFFFFFFFFFFFFEFFuLL | ((word_140C4DF48 & 1 | 0xFF80000000000000uLL) << 8));
    MiInsertTbFlushEntry((__int64)v2, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((__int64)v2, v1);
  }
}

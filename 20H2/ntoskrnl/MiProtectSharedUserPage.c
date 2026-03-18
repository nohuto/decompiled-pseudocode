/*
 * XREFs of MiProtectSharedUserPage @ 0x140A76E38
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

void MiProtectSharedUserPage()
{
  __int64 v0; // rax
  _KPROCESS *v1; // rdx
  _QWORD v2[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v2, 0, 0xB8uLL);
  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  if ( v0 >= 0 || (BYTE1(v0) & 1) != (_BYTE)word_140C4DE88 )
  {
    v2[3] = 0LL;
    LODWORD(v2[1]) = 20;
    MiWriteValidPteNewProtection(
      0xFFFFF6FBC0000000uLL,
      v0 & 0xFFFFFFFFFFFFFEFFuLL | ((word_140C4DE88 & 1 | 0xFF80000000000000uLL) << 8));
    MiInsertTbFlushEntry((__int64)v2, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((unsigned int *)v2, v1);
  }
}

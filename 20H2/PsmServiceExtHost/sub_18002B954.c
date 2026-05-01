/*
 * XREFs of sub_18002B954 @ 0x18002B954
 * Callers:
 *     sub_18002B030 @ 0x18002B030 (sub_18002B030.c)
 *     sub_18002B0A0 @ 0x18002B0A0 (sub_18002B0A0.c)
 *     sub_18002B6E0 @ 0x18002B6E0 (sub_18002B6E0.c)
 *     sub_1800368C0 @ 0x1800368C0 (sub_1800368C0.c)
 *     sub_180037630 @ 0x180037630 (sub_180037630.c)
 *     sub_180038210 @ 0x180038210 (sub_180038210.c)
 *     sub_18003B870 @ 0x18003B870 (sub_18003B870.c)
 *     sub_18003C280 @ 0x18003C280 (sub_18003C280.c)
 *     sub_18003C514 @ 0x18003C514 (sub_18003C514.c)
 *     sub_18003CE80 @ 0x18003CE80 (sub_18003CE80.c)
 *     sub_18003DCA0 @ 0x18003DCA0 (sub_18003DCA0.c)
 *     sub_18003E300 @ 0x18003E300 (sub_18003E300.c)
 *     sub_180042E70 @ 0x180042E70 (sub_180042E70.c)
 *     sub_1800435B0 @ 0x1800435B0 (sub_1800435B0.c)
 *     sub_180043840 @ 0x180043840 (sub_180043840.c)
 *     sub_180043AF0 @ 0x180043AF0 (sub_180043AF0.c)
 *     sub_180043DB0 @ 0x180043DB0 (sub_180043DB0.c)
 *     sub_180043F30 @ 0x180043F30 (sub_180043F30.c)
 *     sub_180044190 @ 0x180044190 (sub_180044190.c)
 *     sub_1800445F0 @ 0x1800445F0 (sub_1800445F0.c)
 *     sub_180084940 @ 0x180084940 (sub_180084940.c)
 *     sub_180084B10 @ 0x180084B10 (sub_180084B10.c)
 *     sub_180084BB0 @ 0x180084BB0 (sub_180084BB0.c)
 *     sub_180084F80 @ 0x180084F80 (sub_180084F80.c)
 * Callees:
 *     sub_18002BD04 @ 0x18002BD04 (sub_18002BD04.c)
 *     sub_18002BEE0 @ 0x18002BEE0 (sub_18002BEE0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002B954(void **a1, const void *a2, size_t a3, int a4)
{
  unsigned int *i; // rbx
  _BYTE v10[56]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a4 )
  {
    RtlAcquireSRWLockExclusive(a1 + 1);
    *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  }
  sub_18002BEE0(a1, v10, a2);
  memcpy(a1[5], a2, a3);
  for ( i = (unsigned int *)a1[3]; i != (unsigned int *)(a1 + 3); i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, const void *))i - 1))(i - 2, *(unsigned int *)a1, a2);
  if ( !a4 )
  {
    *((_DWORD *)a1 + 4) = 0;
    RtlReleaseSRWLockExclusive(a1 + 1);
  }
  return sub_18002BD04(a1, v10);
}

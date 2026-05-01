/*
 * XREFs of sub_18000F0BC @ 0x18000F0BC
 * Callers:
 *     sub_18000CE50 @ 0x18000CE50 (sub_18000CE50.c)
 *     sub_18000CFF4 @ 0x18000CFF4 (sub_18000CFF4.c)
 *     sub_18001D120 @ 0x18001D120 (sub_18001D120.c)
 *     sub_18001E990 @ 0x18001E990 (sub_18001E990.c)
 *     sub_18001EA64 @ 0x18001EA64 (sub_18001EA64.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F0BC(__int64 a1)
{
  *(_QWORD *)(a1 + 32) = &off_180048620;
  *(_QWORD *)(a1 + 40) = &off_180048680;
  *(_QWORD *)(a1 + 48) = &off_180048680;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 72));
  *(_QWORD *)(a1 + 32) = &off_180048620;
  *(_QWORD *)(a1 + 40) = &off_180048680;
  *(_QWORD *)(a1 + 48) = &off_180048680;
  sub_180011A50(a1 + 96);
  *(_QWORD *)(a1 + 136) = 1LL;
  *(_QWORD *)a1 = off_180048970;
  *(_QWORD *)(a1 + 8) = off_180048950;
  *(_QWORD *)(a1 + 16) = off_1800488E0;
  *(_QWORD *)(a1 + 24) = off_180048880;
  *(_QWORD *)(a1 + 32) = off_180048820;
  *(_QWORD *)(a1 + 40) = off_180048808;
  *(_QWORD *)(a1 + 48) = off_1800487F0;
  *(_QWORD *)(a1 + 96) = off_1800487A8;
  if ( qword_18005ADB0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
  *(_QWORD *)a1 = off_180048CD0;
  *(_QWORD *)(a1 + 8) = off_180048CB0;
  *(_QWORD *)(a1 + 16) = off_180048C40;
  *(_QWORD *)(a1 + 24) = off_180048BE0;
  *(_QWORD *)(a1 + 32) = off_180048B80;
  *(_QWORD *)(a1 + 40) = off_180048B68;
  *(_QWORD *)(a1 + 48) = off_180048B50;
  *(_QWORD *)(a1 + 96) = off_180048B08;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 168), 0, 0);
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  return a1;
}

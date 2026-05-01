/*
 * XREFs of sub_18004176C @ 0x18004176C
 * Callers:
 *     sub_180042470 @ 0x180042470 (sub_180042470.c)
 *     sub_180042D0C @ 0x180042D0C (sub_180042D0C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004176C(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_18004DBD8;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_18004DCC0;
  if ( qword_18005ADB0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_18004DD70;
  result = a1;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 52) = 0;
  return result;
}

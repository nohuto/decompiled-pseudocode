/*
 * XREFs of sub_1800303A4 @ 0x1800303A4
 * Callers:
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 *     sub_180038BF8 @ 0x180038BF8 (sub_180038BF8.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800303A4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = &off_18004C618;
  *(_QWORD *)(a1 + 16) = &off_1800486E0;
  sub_180011A50((_QWORD *)(a1 + 24));
  v2 = qword_18005ADB0;
  *(_QWORD *)a1 = off_18004CD58;
  *(_QWORD *)(a1 + 8) = off_18004CD38;
  *(_QWORD *)(a1 + 16) = off_18004CD00;
  *(_QWORD *)(a1 + 24) = off_18004CCB8;
  *(_QWORD *)(a1 + 64) = 1LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)a1 = &off_18004D568;
  *(_QWORD *)(a1 + 8) = off_18004D548;
  *(_QWORD *)(a1 + 16) = off_18004D510;
  *(_QWORD *)(a1 + 24) = off_18004D4C8;
  *(_DWORD *)(a1 + 104) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 112));
  *(_DWORD *)(a1 + 120) = 0;
  result = a1;
  *(_DWORD *)(a1 + 128) = 0;
  return result;
}

/*
 * XREFs of sub_18000DB04 @ 0x18000DB04
 * Callers:
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000DB04(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = &off_180048718;
  *(_QWORD *)(a1 + 16) = &off_1800486E0;
  sub_180011A50(a1 + 24);
  v2 = qword_18005ADB0;
  *(_QWORD *)a1 = off_180048A70;
  *(_QWORD *)(a1 + 8) = off_180048A50;
  *(_QWORD *)(a1 + 16) = off_180048A18;
  *(_QWORD *)(a1 + 24) = off_1800489D0;
  *(_QWORD *)(a1 + 64) = 1LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)a1 = off_180048E50;
  *(_QWORD *)(a1 + 8) = off_180048E30;
  *(_QWORD *)(a1 + 16) = off_180048DF8;
  *(_QWORD *)(a1 + 24) = off_180048DB0;
  *(_DWORD *)(a1 + 104) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 112));
  *(_DWORD *)(a1 + 120) = 0;
  result = a1;
  *(_DWORD *)(a1 + 128) = 0;
  return result;
}

/*
 * XREFs of sub_1800157C4 @ 0x1800157C4
 * Callers:
 *     sub_180013BB0 @ 0x180013BB0 (sub_180013BB0.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800157C4(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx

  *(_QWORD *)a1 = &off_180048FC8;
  *(_QWORD *)(a1 + 16) = &off_1800486E0;
  sub_180011A50((_QWORD *)(a1 + 24));
  v4 = qword_18005ADB0;
  *(_QWORD *)a1 = off_1800491A0;
  *(_QWORD *)(a1 + 8) = off_180049180;
  *(_QWORD *)(a1 + 16) = off_180049148;
  *(_QWORD *)(a1 + 24) = off_180049100;
  *(_QWORD *)(a1 + 64) = 1LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)a1 = &off_1800492C0;
  *(_QWORD *)(a1 + 8) = off_1800492A0;
  *(_QWORD *)(a1 + 16) = off_180049268;
  *(_QWORD *)(a1 + 24) = off_180049220;
  *(_QWORD *)(a1 + 72) = a2;
  if ( a2 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = a2[30];
  return a1;
}

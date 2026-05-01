/*
 * XREFs of sub_180032C88 @ 0x180032C88
 * Callers:
 *     sub_18002DD10 @ 0x18002DD10 (sub_18002DD10.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032C88(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx

  *(_QWORD *)a1 = &off_18004BBA8;
  *(_QWORD *)(a1 + 16) = &off_1800486E0;
  sub_180011A50((_QWORD *)(a1 + 24));
  v4 = qword_18005ADB0;
  *(_QWORD *)a1 = off_18004BD58;
  *(_QWORD *)(a1 + 8) = off_18004BD38;
  *(_QWORD *)(a1 + 16) = off_18004BD00;
  *(_QWORD *)(a1 + 24) = off_18004BCB8;
  *(_QWORD *)(a1 + 64) = 1LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)a1 = &off_18004C3B0;
  *(_QWORD *)(a1 + 8) = off_18004C390;
  *(_QWORD *)(a1 + 16) = off_18004C358;
  *(_QWORD *)(a1 + 24) = off_18004C310;
  *(_QWORD *)(a1 + 72) = a2;
  if ( a2 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = a2[30];
  return a1;
}

/*
 * XREFs of sub_1800156F4 @ 0x1800156F4
 * Callers:
 *     sub_1800139F0 @ 0x1800139F0 (sub_1800139F0.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800156F4(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // rsi
  __int64 v5; // rcx

  v3 = (_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = &off_180048F78;
  sub_180011A50((_QWORD *)(a1 + 16));
  v5 = qword_18005ADB0;
  *(_QWORD *)a1 = off_1800490A8;
  *(_QWORD *)(a1 + 8) = off_180049088;
  *v3 = off_180049040;
  *(_QWORD *)(a1 + 56) = 1LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)a1 = &off_180049380;
  *(_QWORD *)(a1 + 8) = off_180049360;
  *v3 = off_180049318;
  *(_QWORD *)(a1 + 64) = a2;
  if ( a2 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = a2[30];
  return a1;
}

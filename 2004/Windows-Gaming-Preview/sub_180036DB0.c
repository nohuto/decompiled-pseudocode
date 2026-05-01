/*
 * XREFs of sub_180036DB0 @ 0x180036DB0
 * Callers:
 *     sub_180029DC0 @ 0x180029DC0 (sub_180029DC0.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180036DB0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  _QWORD *v6; // rbx
  __int64 v10; // rcx
  __int64 result; // rax

  v4 = a1 + 8;
  *(_QWORD *)a1 = &off_18004A3E8;
  v6 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 8) = &off_18004BA90;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = 0LL;
  sub_180011A50((_QWORD *)(a1 + 80));
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_QWORD *)v4 = &off_18004B2F0;
  *(_DWORD *)(v4 + 128) = 0;
  *v6 = &off_180048698;
  *(_QWORD *)(v4 + 112) = 0LL;
  InitOnceExecuteOnce(&stru_18005AD18, (PINIT_ONCE_FN)sub_180024A40, 0LL, 0LL);
  v10 = qword_18005ADB0;
  *(_QWORD *)v4 = off_18004B4D0;
  *v6 = off_18004B488;
  *(_QWORD *)(v4 + 160) = off_18004B468;
  *(_QWORD *)(v4 + 168) = off_18004B420;
  *(_QWORD *)(v4 + 176) = off_18004B400;
  *(_QWORD *)(v4 + 184) = off_18004B3E0;
  *(_QWORD *)(v4 + 192) = off_18004B3C0;
  *(_QWORD *)(v4 + 200) = off_18004B3A0;
  *(_QWORD *)(v4 + 136) = 0LL;
  *(_QWORD *)(v4 + 144) = 0LL;
  *(_QWORD *)(v4 + 152) = 0LL;
  *(_QWORD *)(v4 + 216) = 1LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)a1 = &off_18004A650;
  *(_QWORD *)v4 = off_18004B9D0;
  *(_QWORD *)(a1 + 80) = off_18004B988;
  *(_QWORD *)(a1 + 168) = off_18004B968;
  *(_QWORD *)(a1 + 176) = off_18004B920;
  *(_QWORD *)(a1 + 184) = off_18004B900;
  *(_QWORD *)(a1 + 192) = off_18004B8E0;
  *(_QWORD *)(a1 + 200) = off_18004B8C0;
  *(_QWORD *)(a1 + 208) = off_18004B8A0;
  *(_QWORD *)(a1 + 232) = a3;
  *(_DWORD *)(a1 + 240) = a4;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 2;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_WORD *)(a1 + 288) = 1;
  *(_BYTE *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 2;
  *(_DWORD *)(a1 + 276) = 1;
  *(_QWORD *)(a1 + 312) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 320) = *(_DWORD *)(a2 + 8);
  result = a1;
  *(_QWORD *)(a1 + 280) = v4;
  return result;
}

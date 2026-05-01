/*
 * XREFs of sub_1800149E4 @ 0x1800149E4
 * Callers:
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 *     sub_180038A8C @ 0x180038A8C (sub_180038A8C.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800149E4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = &off_1800493D8;
  *(_QWORD *)(a1 + 16) = &off_1800486E0;
  sub_180011A50((_QWORD *)(a1 + 24));
  v2 = qword_18005ADB0;
  *(_QWORD *)a1 = off_180049508;
  *(_QWORD *)(a1 + 8) = off_1800494E8;
  *(_QWORD *)(a1 + 16) = off_1800494B0;
  *(_QWORD *)(a1 + 24) = off_180049468;
  *(_QWORD *)(a1 + 64) = 1LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)a1 = &off_180049868;
  *(_QWORD *)(a1 + 8) = off_180049848;
  *(_QWORD *)(a1 + 16) = off_180049810;
  *(_QWORD *)(a1 + 24) = off_1800497C8;
  *(_DWORD *)(a1 + 104) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 112));
  *(_DWORD *)(a1 + 120) = 0;
  result = a1;
  *(_DWORD *)(a1 + 128) = 0;
  return result;
}

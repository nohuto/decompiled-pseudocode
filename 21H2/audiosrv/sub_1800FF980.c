/*
 * XREFs of sub_1800FF980 @ 0x1800FF980
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_1800FBF0C @ 0x1800FBF0C (sub_1800FBF0C.c)
 *     sub_1800FC614 @ 0x1800FC614 (sub_1800FC614.c)
 *     sub_1800FF6F8 @ 0x1800FF6F8 (sub_1800FF6F8.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180104404 @ 0x180104404 (sub_180104404.c)
 */

__int64 __fastcall sub_1800FF980(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // esi
  __int64 result; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  *(_QWORD *)(*(_QWORD *)(a1 + 200) + 272LL) = 0LL;
  v2 = *(_QWORD *)(a1 + 200);
  lpCriticalSection = (LPCRITICAL_SECTION)(v2 + 16);
  v6 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v3 = *(_DWORD *)(v2 + 56);
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 != 6 )
  {
    *(_QWORD *)(v2 + 272) = 0LL;
    sub_180104404(v2, 0LL, 0LL);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), a1);
  *(_BYTE *)(a1 + 48) = 0;
  return result;
}

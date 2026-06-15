/*
 * XREFs of sub_18013D0B0 @ 0x18013D0B0
 * Callers:
 *     sub_18013D19C @ 0x18013D19C (sub_18013D19C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013DD70 @ 0x18013DD70 (sub_18013DD70.c)
 *     sub_18013DE30 @ 0x18013DE30 (sub_18013DE30.c)
 */

__int64 (__fastcall **__fastcall sub_18013D0B0(__int64 a1))()
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 (__fastcall **result)(); // rax

  *(_QWORD *)a1 = off_180147858;
  *(_QWORD *)(a1 + 8) = off_180147810;
  *(_QWORD *)(a1 + 16) = off_1801477E8;
  sub_18013DE30();
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  sub_18013DD70(a1 + 120);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  result = &off_180147338;
  *(_QWORD *)(a1 + 16) = &off_180147338;
  return result;
}

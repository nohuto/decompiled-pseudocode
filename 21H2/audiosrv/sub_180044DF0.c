/*
 * XREFs of sub_180044DF0 @ 0x180044DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180044DF0(__int64 a1)
{
  int v2; // ecx

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(*(_QWORD *)(a1 + 40));
  v2 = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 120) = v2 - 1;
  if ( v2 == 1 )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 192) + 336LL))(*(_QWORD *)(a1 + 192), a1);
  return 0LL;
}

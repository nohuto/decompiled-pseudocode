/*
 * XREFs of sub_18013DF80 @ 0x18013DF80
 * Callers:
 *     sub_18013E024 @ 0x18013E024 (sub_18013E024.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_18013DF80(_QWORD *a1))()
{
  __int64 v2; // rcx
  __int64 (__fastcall **result)(); // rax

  *a1 = off_180156360;
  a1[1] = off_180156388;
  v2 = a1[3];
  if ( v2 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 72));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[3] + 16LL))(a1[3]);
    a1[3] = 0LL;
  }
  result = &off_180147338;
  a1[1] = &off_180147338;
  return result;
}

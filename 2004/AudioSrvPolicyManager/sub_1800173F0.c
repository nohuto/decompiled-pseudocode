/*
 * XREFs of sub_1800173F0 @ 0x1800173F0
 * Callers:
 *     sub_1800197F0 @ 0x1800197F0 (sub_1800197F0.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800173F0(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  sub_18001A330(&lpCriticalSection);
  v2 = *(_QWORD **)(a1 + 72);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}

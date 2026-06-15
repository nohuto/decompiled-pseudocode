/*
 * XREFs of sub_180018A30 @ 0x180018A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180018A30(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  lpCriticalSection = (LPCRITICAL_SECTION)(v1 + 32);
  v5 = 0;
  sub_18001A330(&lpCriticalSection);
  v2 = *(_QWORD **)(v1 + 72);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 80LL))(v3, v1 + 16);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}

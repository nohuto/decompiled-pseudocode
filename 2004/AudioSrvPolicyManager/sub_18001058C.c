/*
 * XREFs of sub_18001058C @ 0x18001058C
 * Callers:
 *     sub_18001AFD0 @ 0x18001AFD0 (sub_18001AFD0.c)
 *     sub_18001B65C @ 0x18001B65C (sub_18001B65C.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     sub_180014CF0 @ 0x180014CF0 (sub_180014CF0.c)
 *     sub_180017FBC @ 0x180017FBC (sub_180017FBC.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001058C(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  _QWORD *i; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v10 = 0;
  sub_18001A330(&lpCriticalSection);
  v12 = 0LL;
  v4 = sub_180014CF0(a2 + 16, &v12);
  v5 = v12;
  if ( v4 >= 0 )
  {
    if ( v12 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 72LL))(v12, *(unsigned int *)(a2 + 192));
      if ( v6 < 0 )
        sub_18000F8F4(
          retaddr,
          360,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          v6);
    }
  }
  for ( i = *(_QWORD **)(a1 + 72); i && i[2] != a2; i = (_QWORD *)*i )
    ;
  if ( i )
    sub_180017FBC();
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}

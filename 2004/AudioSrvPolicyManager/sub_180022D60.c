/*
 * XREFs of sub_180022D60 @ 0x180022D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180022D60(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(a1 + 8) && (a4 == 2 || a3 == 2) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64 *, __int64 *))))(*(_QWORD *)a2 + 24LL))(
           a2,
           sub_18001F140);
    if ( v4 < 0 )
      sub_18000F8F4(
        retaddr,
        2510,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        v4);
  }
  return 0LL;
}

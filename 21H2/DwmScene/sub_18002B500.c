/*
 * XREFs of sub_18002B500 @ 0x18002B500
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067094 @ 0x180067094 (sub_180067094.c)
 *     sub_1800670D8 @ 0x1800670D8 (sub_1800670D8.c)
 *     sub_180070EC0 @ 0x180070EC0 (sub_180070EC0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002B500(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  sub_1800670D8(a1 + 24);
  sub_180067094(a1 + 24);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    sub_180070EC0(a1, a2, a3, a4, a5);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*a2 + 24LL))(*a2, a3, a4, a5);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 288LL))(a1);
  }
  return result;
}

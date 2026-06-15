/*
 * XREFs of sub_18010E874 @ 0x18010E874
 * Callers:
 *     sub_1801101F9 @ 0x1801101F9 (sub_1801101F9.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_18010EAF0 @ 0x18010EAF0 (sub_18010EAF0.c)
 */

__int64 __fastcall sub_18010E874(_BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    sub_18010EAF0(*(_QWORD *)a1);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 136LL) + 480LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 136LL),
      0LL);
    sub_1800CB144((__int64 *)(*(_QWORD *)a1 + 136LL));
    result = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)a1 + 68LL) = 0;
  }
  return result;
}

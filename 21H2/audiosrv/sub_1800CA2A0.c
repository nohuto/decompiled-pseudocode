/*
 * XREFs of sub_1800CA2A0 @ 0x1800CA2A0
 * Callers:
 *     sub_180005230 @ 0x180005230 (sub_180005230.c)
 *     sub_1800563F0 @ 0x1800563F0 (sub_1800563F0.c)
 *     sub_1800566D0 @ 0x1800566D0 (sub_1800566D0.c)
 *     sub_180067B60 @ 0x180067B60 (sub_180067B60.c)
 *     sub_1800CBFB0 @ 0x1800CBFB0 (sub_1800CBFB0.c)
 *     sub_18010FBA0 @ 0x18010FBA0 (sub_18010FBA0.c)
 *     sub_1801128E0 @ 0x1801128E0 (sub_1801128E0.c)
 *     sub_18013E720 @ 0x18013E720 (sub_18013E720.c)
 *     sub_180140240 @ 0x180140240 (sub_180140240.c)
 *     sub_180142750 @ 0x180142750 (sub_180142750.c)
 *     sub_180143420 @ 0x180143420 (sub_180143420.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CA2A0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *a2;
    if ( !*a2 )
      v4 = a2[1] - 0x46000000000000C0LL;
    if ( v4 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}

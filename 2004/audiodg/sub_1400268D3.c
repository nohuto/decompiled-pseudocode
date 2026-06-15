/*
 * XREFs of sub_1400268D3 @ 0x1400268D3
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1400268D3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        int a23,
        int a24,
        int a25,
        void (__fastcall ***a26)(_QWORD, __int64))
{
  if ( (int)a9 < 0 )
  {
    if ( a14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a14 + 16LL))(a14);
    if ( a12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a12 + 16LL))(a12);
    if ( a26 )
      (**a26)(a26, 1LL);
    JUMPOUT(0x1400066EDLL);
  }
  JUMPOUT(0x140006487LL);
}

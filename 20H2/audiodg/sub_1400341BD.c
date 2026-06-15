/*
 * XREFs of sub_1400341BD @ 0x1400341BD
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1400341BD(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        int a23,
        __int64 a24)
{
  if ( a23 < 0 )
  {
    if ( a8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a8 + 16LL))(a8);
    if ( a24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a24 + 16LL))(a24);
    JUMPOUT(0x1400340B7LL);
  }
  if ( a8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a8 + 16LL))(a8);
  if ( a24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a24 + 16LL))(a24);
  JUMPOUT(0x14000B9DDLL);
}

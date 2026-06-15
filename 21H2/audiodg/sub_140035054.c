/*
 * XREFs of sub_140035054 @ 0x140035054
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_140035054(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  if ( (int)a9 < 0 )
  {
    if ( a10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a10 + 16LL))(a10);
    if ( a12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a12 + 16LL))(a12);
    JUMPOUT(0x1400354C1LL);
  }
  JUMPOUT(0x14000C221LL);
}

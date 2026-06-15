/*
 * XREFs of sub_14002A4F8 @ 0x14002A4F8
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_14002A4F8(
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
    JUMPOUT(0x14002A965LL);
  }
  JUMPOUT(0x14000C231LL);
}

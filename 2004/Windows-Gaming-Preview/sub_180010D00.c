/*
 * XREFs of sub_180010D00 @ 0x180010D00
 * Callers:
 *     sub_180010C20 @ 0x180010C20 (sub_180010C20.c)
 *     sub_180010D50 @ 0x180010D50 (sub_180010D50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010D00(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}

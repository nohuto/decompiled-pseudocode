/*
 * XREFs of sub_1C000478C @ 0x1C000478C
 * Callers:
 *     sub_1C000DAA0 @ 0x1C000DAA0 (sub_1C000DAA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C000478C(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v5; // rax
  __int64 v7; // rcx

  if ( a4 )
  {
    v5 = -1LL;
    while ( a4[++v5] != 0 )
      ;
    v7 = 2 * v5 + 2;
  }
  else
  {
    v7 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, _QWORD))qword_1C0007338)(
           a1,
           43LL,
           &unk_1C00053F8,
           11LL,
           a4,
           v7,
           0LL);
}

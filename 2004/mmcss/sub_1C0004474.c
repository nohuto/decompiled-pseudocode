/*
 * XREFs of sub_1C0004474 @ 0x1C0004474
 * Callers:
 *     sub_1C000A010 @ 0x1C000A010 (sub_1C000A010.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0004474(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rdx
  const wchar_t *v5; // r8

  if ( a4 )
  {
    v4 = *a4;
    if ( (_WORD)v4 )
    {
      v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
      goto LABEL_6;
    }
  }
  else
  {
    v4 = 8LL;
  }
  v5 = L"NULL";
LABEL_6:
  if ( !a4 )
    a4 = L"\b";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD))qword_1C0007338)(
           a1,
           43LL,
           &unk_1C00053E8,
           10LL,
           a4,
           2LL,
           v5,
           v4,
           0LL);
}

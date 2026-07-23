/*
 * XREFs of IommupHvDismissPageFault @ 0x1404DA0F0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvDismissPageFault(__int64 a1, ULONG_PTR *a2, int a3)
{
  ULONG_PTR v3; // rcx
  unsigned __int64 v5; // rax
  __int64 result; // rax

  v3 = a2[4];
  a2[4] = v3 | 0x8000000000000000uLL;
  if ( a3 >= 0 )
  {
    if ( IommupHvGpaAlwaysValid )
      goto LABEL_6;
    v5 = 0xC000000000000000uLL;
  }
  else
  {
    v5 = 0xA000000000000000uLL;
  }
  a2[4] = v5 | v3;
LABEL_6:
  result = ((__int64 (__fastcall *)(__int64, ULONG_PTR *))qword_140C4A2E0)(1LL, a2);
  if ( (int)result < 0 )
    KeBugCheckEx(0x159u, 0x3102uLL, (int)result, (ULONG_PTR)a2, *a2);
  return result;
}

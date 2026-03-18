/*
 * XREFs of _guard_check_icall @ 0x1403FFC20
 * Callers:
 *     bsearch @ 0x1403CEE80 (bsearch.c)
 *     bsearch_s @ 0x1403CEF90 (bsearch_s.c)
 *     qsort @ 0x1403CF4C0 (qsort.c)
 *     qsort_s @ 0x1403CF8A0 (qsort_s.c)
 *     sub_1403D95C0 @ 0x1403D95C0 (sub_1403D95C0.c)
 *     sub_1403DA550 @ 0x1403DA550 (sub_1403DA550.c)
 *     sub_1403DA630 @ 0x1403DA630 (sub_1403DA630.c)
 *     sub_1403E6BC0 @ 0x1403E6BC0 (sub_1403E6BC0.c)
 *     KeGuardCheckICall @ 0x140A0E340 (KeGuardCheckICall.c)
 * Callees:
 *     <none>
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  __int64 v1; // rdx
  uintptr_t v2; // r10
  unsigned __int64 v3; // r10

  if ( (Target & 0x8000000000000000uLL) == 0LL )
    goto LABEL_8;
  if ( !guard_icall_bitmap )
    return;
  v1 = *(_QWORD *)(guard_icall_bitmap + 8 * (Target >> 9));
  v2 = Target >> 3;
  if ( (Target & 0xF) == 0 )
  {
    if ( _bittest64(&v1, v2) )
      return;
LABEL_8:
    guard_icall_bugcheck(Target);
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
    goto LABEL_8;
}

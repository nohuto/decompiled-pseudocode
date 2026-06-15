/*
 * XREFs of sub_180015454 @ 0x180015454
 * Callers:
 *     sub_180007220 @ 0x180007220 (sub_180007220.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_180015454(__int64 a1, __int64 a2)
{
  __int64 *i; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v10 = 0;
  sub_18001A330(&lpCriticalSection);
  for ( i = *(__int64 **)(a1 + 72); i && i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    v5 = (__int64 *)*i;
    if ( i == *(__int64 **)(a1 + 72) )
      *(_QWORD *)(a1 + 72) = v5;
    else
      *(_QWORD *)i[1] = v5;
    v6 = i[1];
    if ( i == *(__int64 **)(a1 + 80) )
      *(_QWORD *)(a1 + 80) = v6;
    else
      *(_QWORD *)(*i + 8) = v6;
    *i = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 104) = i;
    if ( (*(_QWORD *)(a1 + 88))-- == 1LL )
      sub_180017F24(a1 + 72);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}

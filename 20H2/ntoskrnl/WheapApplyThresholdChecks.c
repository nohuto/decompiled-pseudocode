/*
 * XREFs of WheapApplyThresholdChecks @ 0x1405B9C98
 * Callers:
 *     WheaReportHwError @ 0x1405B96D0 (WheaReportHwError.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapApplyThresholdChecks(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  unsigned __int8 *v4; // rdx
  unsigned int v5; // r10d
  unsigned __int64 v6; // r11
  __int64 v7; // rcx

  ++*(_DWORD *)(a1 + 84);
  v2 = *(_DWORD *)(a1 + 104);
  if ( v2 == 1 )
  {
    v3 = 144LL;
  }
  else
  {
    if ( v2 == 2 || v2 == 4 || v2 != 5 && v2 != 8 && (v2 <= 11 || v2 > 13) )
      return 0;
    v3 = 160LL;
  }
  v4 = (unsigned __int8 *)(a1 + v3);
  if ( !(a1 + v3) || *v4 != 1 && *v4 != 2 && *v4 != 3 && *v4 != 4 && *v4 != 8 && (unsigned int)*v4 - 9 > 1 )
    return 0;
  v5 = *((_DWORD *)v4 + 5);
  v6 = *((unsigned int *)v4 + 6);
  if ( v5 <= 1 )
    return 0;
  v7 = MEMORY[0xFFFFF78000000320];
  if ( (_DWORD)v6 && KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 72)) / 10000000LL > v6 )
  {
    *(_DWORD *)(a1 + 80) = 1;
    *(_QWORD *)(a1 + 72) = v7;
    return 0;
  }
  if ( ++*(_DWORD *)(a1 + 80) < v5 )
    return 0;
  *(_DWORD *)(a1 + 80) = 0;
  return 1;
}

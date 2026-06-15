/*
 * XREFs of sub_180046930 @ 0x180046930
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CB290 @ 0x1800CB290 (sub_1800CB290.c)
 */

__int64 __fastcall sub_180046930(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // r8d

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 808);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB290(
      *((_QWORD *)off_18019C348 + 2),
      15,
      v5,
      *(_QWORD *)(a1 + 728),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 848)));
  }
  *a2 = *(_DWORD *)(a1 + 848);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}

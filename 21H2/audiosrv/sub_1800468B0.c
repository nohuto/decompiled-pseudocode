/*
 * XREFs of sub_1800468B0 @ 0x1800468B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BEA04 @ 0x1800BEA04 (sub_1800BEA04.c)
 */

__int64 __fastcall sub_1800468B0(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 808);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BEA04(
      *((_QWORD *)off_18019C348 + 2),
      18,
      (unsigned int)&unk_18015DEF0,
      *(_QWORD *)(a1 + 728),
      *(_DWORD *)(a1 + 852));
  }
  *a2 = *(_DWORD *)(a1 + 852);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}

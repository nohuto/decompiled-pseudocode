/*
 * XREFs of sub_180046410 @ 0x180046410
 * Callers:
 *     <none>
 * Callees:
 *     sub_180046480 @ 0x180046480 (sub_180046480.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

void __fastcall sub_180046410(struct _RTL_CRITICAL_SECTION *a1)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 17LL, &unk_18016D858, a1);
  }
  EnterCriticalSection(a1 + 1);
  sub_180046480(&a1->SpinCount);
  if ( a1 != (struct _RTL_CRITICAL_SECTION *)-40LL )
    LeaveCriticalSection(a1 + 1);
}

/*
 * XREFs of sub_1800C0760 @ 0x1800C0760
 * Callers:
 *     <none>
 * Callees:
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

void __fastcall sub_1800C0760(__int64 a1)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x3Au, (__int64)&unk_18016DDC0, a1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
  sub_180071C14((_QWORD *)(a1 + 248));
  if ( a1 != -256 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
}

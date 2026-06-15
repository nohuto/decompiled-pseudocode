/*
 * XREFs of sub_180068F00 @ 0x180068F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 */

int sub_180068F00()
{
  HANDLE v0; // rax

  v0 = hEvent;
  if ( hEvent )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 37LL, &unk_18016D4B0);
      v0 = hEvent;
    }
    LODWORD(v0) = SetEvent(v0);
  }
  return (int)v0;
}

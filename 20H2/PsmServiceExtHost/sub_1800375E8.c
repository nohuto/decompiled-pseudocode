/*
 * XREFs of sub_1800375E8 @ 0x1800375E8
 * Callers:
 *     sub_1800392EC @ 0x1800392EC (sub_1800392EC.c)
 *     sub_180039B04 @ 0x180039B04 (sub_180039B04.c)
 *     sub_180064258 @ 0x180064258 (sub_180064258.c)
 *     sub_180064440 @ 0x180064440 (sub_180064440.c)
 *     sub_180065A10 @ 0x180065A10 (sub_180065A10.c)
 * Callees:
 *     sub_180064974 @ 0x180064974 (sub_180064974.c)
 */

void __fastcall sub_1800375E8(struct _TP_TIMER **a1, struct _TP_TIMER *a2)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_180064974(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}

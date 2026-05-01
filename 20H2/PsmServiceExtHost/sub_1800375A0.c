/*
 * XREFs of sub_1800375A0 @ 0x1800375A0
 * Callers:
 *     sub_1800392EC @ 0x1800392EC (sub_1800392EC.c)
 *     sub_180039B04 @ 0x180039B04 (sub_180039B04.c)
 *     sub_180065A10 @ 0x180065A10 (sub_180065A10.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800375A0(struct _TP_TIMER **a1, _BYTE *a2, __int64 a3)
{
  struct _TP_TIMER *v3; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    pftDueTime = (struct _FILETIME)(-10000 * a3);
    SetThreadpoolTimer(v3, &pftDueTime, 0, (unsigned int)a3 >> 2);
    *a2 = 1;
  }
}

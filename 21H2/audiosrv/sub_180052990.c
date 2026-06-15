/*
 * XREFs of sub_180052990 @ 0x180052990
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_180052990(__int64 *a1)
{
  __int64 *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+80h] [rbp+8h] BYREF

  v2 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v2[1], v3, (struct _TP_TIMER *)L"AudioVolumeDisconnect");
  v4 = *a1;
  v9 = *a1;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 18LL, &unk_18016E298, v4);
  }
  *a1 = 0LL;
  sub_18000F708(&v9);
  sub_18000F690((__int64)pv, v5, v6);
  return 0LL;
}

/*
 * XREFs of sub_1800C0F9C @ 0x1800C0F9C
 * Callers:
 *     sub_1800BF7A8 @ 0x1800BF7A8 (sub_1800BF7A8.c)
 *     sub_1800C04D0 @ 0x1800C04D0 (sub_1800C04D0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800C0F9C(__int64 a1)
{
  struct _TP_TIMER *v1; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 56) )
  {
    pftDueTime.dwHighDateTime = -1;
    v1 = *(struct _TP_TIMER **)(a1 + 48);
    pftDueTime.dwLowDateTime = -600000000;
    SetThreadpoolTimer(v1, &pftDueTime, 0, 0);
  }
}

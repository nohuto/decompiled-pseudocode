/*
 * XREFs of sub_180007048 @ 0x180007048
 * Callers:
 *     sub_180006AA8 @ 0x180006AA8 (sub_180006AA8.c)
 *     sub_180007650 @ 0x180007650 (sub_180007650.c)
 * Callees:
 *     sub_180008EA8 @ 0x180008EA8 (sub_180008EA8.c)
 */

void __fastcall sub_180007048(_QWORD *pv)
{
  struct _TP_TIMER *v2; // rsi
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v4; // rbp
  DWORD LastError; // ebx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)pv + 65) )
  {
    v2 = (struct _TP_TIMER *)pv[6];
    if ( v2 )
      goto LABEL_6;
    ThreadpoolTimer = CreateThreadpoolTimer(sub_180009220, pv, 0LL);
    v4 = (struct _TP_TIMER *)pv[6];
    v2 = ThreadpoolTimer;
    if ( v4 )
    {
      LastError = GetLastError();
      sub_180008EA8(v4);
      SetLastError(LastError);
    }
    pv[6] = v2;
    if ( v2 )
    {
LABEL_6:
      pftDueTime = (struct _FILETIME)-3000000000LL;
      SetThreadpoolTimer(v2, &pftDueTime, 0, 0x124F8u);
      *((_BYTE *)pv + 65) = 1;
    }
  }
}

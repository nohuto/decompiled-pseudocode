/*
 * XREFs of sub_180017C34 @ 0x180017C34
 * Callers:
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 * Callees:
 *     ?DeleteAsyncTimerAndUnloadLibrary@details@Concurrency@@YAXPEAU_TP_TIMER@@@Z @ 0x18001B0A8 (-DeleteAsyncTimerAndUnloadLibrary@details@Concurrency@@YAXPEAU_TP_TIMER@@@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

void __fastcall sub_180017C34(struct _TP_TIMER **a1, _BYTE *a2, void *a3)
{
  struct _TP_TIMER *v6; // rcx
  DWORD LastError; // r14d
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v9; // rbp
  struct _TP_TIMER *v10; // r15
  DWORD v11; // ebx
  struct _TP_TIMER *v12; // rdx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-38h] BYREF

  if ( !*a2 )
  {
    v6 = *a1;
    if ( v6 )
      goto LABEL_6;
    LastError = GetLastError();
    ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)sub_180016350, a3, 0LL);
    v9 = *a1;
    v10 = ThreadpoolTimer;
    if ( *a1 )
    {
      v11 = GetLastError();
      Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(v9, v12);
      SetLastError(v11);
    }
    *a1 = v10;
    SetLastError(LastError);
    v6 = *a1;
    if ( *a1 )
    {
LABEL_6:
      pftDueTime = (struct _FILETIME)-50000000LL;
      SetThreadpoolTimer(v6, &pftDueTime, 0, 0x4E2u);
      *a2 = 1;
    }
  }
}

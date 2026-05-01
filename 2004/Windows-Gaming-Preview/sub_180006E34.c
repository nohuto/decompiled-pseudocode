/*
 * XREFs of sub_180006E34 @ 0x180006E34
 * Callers:
 *     sub_180007470 @ 0x180007470 (sub_180007470.c)
 * Callees:
 *     sub_180004C18 @ 0x180004C18 (sub_180004C18.c)
 *     sub_180008EA8 @ 0x180008EA8 (sub_180008EA8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180006E34(RTL_SRWLOCK *pv, int a2, __int16 a3, int a4)
{
  struct _TP_TIMER *Ptr; // rsi
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v11; // r14
  DWORD LastError; // ebx
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int16 v14; // [rsp+24h] [rbp-24h]
  __int16 v15; // [rsp+26h] [rbp-22h]
  int v16; // [rsp+28h] [rbp-20h]
  _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr) && !byte_18005AC18 && !(qword_18005ABE0 ? qword_18005ABE0() : 0) )
  {
    AcquireSRWLockExclusive(pv + 5);
    v15 = 0;
    v13 = a2;
    v14 = a3;
    v16 = a4;
    sub_180004C18(&pv[31].Ptr, &v13, 0xCuLL);
    if ( !LOBYTE(pv[8].Ptr) )
    {
      Ptr = (struct _TP_TIMER *)pv[7].Ptr;
      if ( Ptr )
        goto LABEL_12;
      ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
      v11 = (struct _TP_TIMER *)pv[7].Ptr;
      Ptr = ThreadpoolTimer;
      if ( v11 )
      {
        LastError = GetLastError();
        sub_180008EA8(v11);
        SetLastError(LastError);
      }
      pv[7].Ptr = Ptr;
      if ( Ptr )
      {
LABEL_12:
        pftDueTime = (_FILETIME)-50000000LL;
        SetThreadpoolTimer(Ptr, &pftDueTime, 0, 0x4E2u);
        LOBYTE(pv[8].Ptr) = 1;
      }
    }
    if ( pv != (RTL_SRWLOCK *)-40LL )
      ReleaseSRWLockExclusive(pv + 5);
  }
}

/*
 * XREFs of sub_180007894 @ 0x180007894
 * Callers:
 *     sub_180007E80 @ 0x180007E80 (sub_180007E80.c)
 * Callees:
 *     sub_180004C18 @ 0x180004C18 (sub_180004C18.c)
 *     sub_180008EA8 @ 0x180008EA8 (sub_180008EA8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180007894(RTL_SRWLOCK *pv, int a2, __int64 a3)
{
  int v6; // eax
  struct _TP_TIMER *Ptr; // rsi
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v9; // r14
  DWORD LastError; // ebx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr) && !byte_18005AC18 )
  {
    v6 = (int)qword_18005ABE0;
    if ( qword_18005ABE0 )
      v6 = (unsigned __int8)qword_18005ABE0();
    if ( !v6 )
    {
      AcquireSRWLockExclusive(pv + 1);
      v11 = a2;
      v12 = a3;
      sub_180004C18(&pv[6].Ptr, &v11, 0x10uLL);
      if ( !LOBYTE(pv[3].Ptr) )
      {
        Ptr = (struct _TP_TIMER *)pv[2].Ptr;
        if ( Ptr )
          goto LABEL_11;
        ThreadpoolTimer = CreateThreadpoolTimer(sub_180009300, pv, 0LL);
        v9 = (struct _TP_TIMER *)pv[2].Ptr;
        Ptr = ThreadpoolTimer;
        if ( v9 )
        {
          LastError = GetLastError();
          sub_180008EA8(v9);
          SetLastError(LastError);
        }
        pv[2].Ptr = Ptr;
        if ( Ptr )
        {
LABEL_11:
          pftDueTime = (struct _FILETIME)-3000000000LL;
          SetThreadpoolTimer(Ptr, &pftDueTime, 0, 0x124F8u);
          LOBYTE(pv[3].Ptr) = 1;
        }
      }
      if ( pv != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(pv + 1);
    }
  }
}

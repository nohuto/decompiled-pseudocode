/*
 * XREFs of sub_180050740 @ 0x180050740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180050740(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned int v13; // ebx
  WINBOOL fPending; // [rsp+20h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-31h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-29h] BYREF
  DWORD v18; // [rsp+40h] [rbp-19h]
  const wchar_t *v19; // [rsp+48h] [rbp-11h]
  __int64 v20; // [rsp+50h] [rbp-9h]
  char v21; // [rsp+58h] [rbp-1h]
  int v22; // [rsp+5Ch] [rbp+3h]
  int v23; // [rsp+60h] [rbp+7h]
  struct _FILETIME pftDueTime[2]; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v25; // [rsp+78h] [rbp+1Fh]
  __int128 v26; // [rsp+88h] [rbp+2Fh] BYREF

  if ( a1 )
    v4 = *(_OWORD *)(a1 + 280);
  else
    v4 = xmmword_18015B730;
  *(_OWORD *)&pftDueTime[0].dwLowDateTime = v4;
  v25 = v4;
  v26 = v4;
  EtwEventActivityIdControl(4LL, &v26);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v5 = qword_18019E5F0;
  v6 = (unsigned int)dword_18019D9F4;
  v7 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v7;
  CurrentThreadId = GetCurrentThreadId();
  v22 = 0;
  v23 = 0;
  v18 = CurrentThreadId;
  v19 = L"AudioServerDestroyStream";
  v20 = v5;
  v21 = 0;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v6 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, a2);
  v13 = v10;
  if ( v10 < 0 )
    sub_18005E8F8("AudioServerDestroyStream", 3395LL, (unsigned int)v10);
  sub_18000F690((__int64)pv, v11, v12);
  EtwEventActivityIdControl(4LL, &v26);
  return v13;
}

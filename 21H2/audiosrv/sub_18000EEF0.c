/*
 * XREFs of sub_18000EEF0 @ 0x18000EEF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 */

__int64 __fastcall sub_18000EEF0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  WINBOOL v14; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-60h] BYREF
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-58h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-50h] BYREF
  DWORD v18; // [rsp+48h] [rbp-40h]
  const wchar_t *v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+58h] [rbp-30h]
  char v21; // [rsp+60h] [rbp-28h]
  __int64 v22; // [rsp+64h] [rbp-24h]

  v8 = 0;
  v15 = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &v14, (LPVOID *)&v15) && v14 )
  {
    v15 = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v9 = qword_18019E5F0;
  v10 = (unsigned int)dword_18019D9F4;
  pv[1] = v15[1];
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v20 = v9;
  v18 = CurrentThreadId;
  v19 = L"s_pbmReportAppInteractivityChange";
  v21 = 0;
  v22 = 0LL;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmReportAppInteractivityChangeSupported() )
    v8 = PbmReportAppInteractivityChange(a1, a2, a3, a4);
  sub_18000F690(pv);
  return v8;
}

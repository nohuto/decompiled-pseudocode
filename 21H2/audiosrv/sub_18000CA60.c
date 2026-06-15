/*
 * XREFs of sub_18000CA60 @ 0x18000CA60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 */

__int64 __fastcall sub_18000CA60(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v6; // ebx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-58h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-50h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-40h]
  const wchar_t *v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  char v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+54h] [rbp-24h]
  WINBOOL fPending; // [rsp+90h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+98h] [rbp+20h] BYREF

  if ( !(unsigned int)IsTSRegisterAudioProtocolNotificationSupported() )
    return 1LL;
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
  v4 = (unsigned int)dword_18019D9F4;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  v12 = qword_18019E5F0;
  CurrentThreadId = GetCurrentThreadId();
  v13 = 0;
  v14 = 0LL;
  v11 = L"s_tsRegisterAudioProtocolNotification";
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v4 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v4 / 3, 0);
    }
  }
  v6 = TS_RegisterAudioProtocolNotification(a1, a2);
  sub_18000F690(pv);
  return v6;
}

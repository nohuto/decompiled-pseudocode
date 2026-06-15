/*
 * XREFs of sub_18000F4F0 @ 0x18000F4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 */

__int64 __fastcall sub_18000F4F0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int AudioProtocol; // ebx
  WINBOOL fPending; // [rsp+20h] [rbp-68h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-60h] BYREF
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-58h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-50h] BYREF
  DWORD v18; // [rsp+48h] [rbp-40h]
  const wchar_t *v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+58h] [rbp-30h]
  char v21; // [rsp+60h] [rbp-28h]
  __int64 v22; // [rsp+64h] [rbp-24h]

  if ( !(unsigned int)IsTSSessionGetAudioProtocolSupported() )
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
  v8 = qword_18019E5F0;
  v9 = (unsigned int)dword_18019D9F4;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v20 = v8;
  v18 = CurrentThreadId;
  v21 = 0;
  v22 = 0LL;
  v19 = L"s_tsSessionGetAudioProtocol";
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  AudioProtocol = TS_SessionGetAudioProtocol(a1, a2, a3, a4);
  sub_18000F690(pv);
  return AudioProtocol;
}

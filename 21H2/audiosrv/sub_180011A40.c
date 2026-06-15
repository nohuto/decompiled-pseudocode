/*
 * XREFs of sub_180011A40 @ 0x180011A40
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

__int64 __fastcall sub_180011A40(__int64 a1, unsigned int a2, __int64 a3)
{
  __int128 v6; // xmm0
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned int v15; // ebx
  WINBOOL fPending; // [rsp+20h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-41h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-39h] BYREF
  DWORD v20; // [rsp+40h] [rbp-29h]
  const wchar_t *v21; // [rsp+48h] [rbp-21h]
  __int64 v22; // [rsp+50h] [rbp-19h]
  char v23; // [rsp+58h] [rbp-11h]
  int v24; // [rsp+5Ch] [rbp-Dh]
  int v25; // [rsp+60h] [rbp-9h]
  struct _FILETIME pftDueTime[2]; // [rsp+68h] [rbp-1h] BYREF
  __int128 v27; // [rsp+78h] [rbp+Fh]
  __int128 v28; // [rsp+88h] [rbp+1Fh] BYREF

  if ( a1 )
    v6 = *(_OWORD *)(a1 + 280);
  else
    v6 = xmmword_18015B730;
  *(_OWORD *)&pftDueTime[0].dwLowDateTime = v6;
  v27 = v6;
  v28 = v6;
  EtwEventActivityIdControl(4LL, &v28);
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
  v7 = qword_18019E5F0;
  v8 = (unsigned int)dword_18019D9F4;
  v9 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v9;
  CurrentThreadId = GetCurrentThreadId();
  v24 = 0;
  v25 = 0;
  v20 = CurrentThreadId;
  v21 = L"AudioServerGetAllVolumes";
  v22 = v7;
  v23 = 0;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v8 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 200LL))(a1, a2, a3);
  v15 = v12;
  if ( v12 < 0 )
    sub_18005E8F8("AudioServerGetAllVolumes", 3659LL, (unsigned int)v12);
  sub_18000F690((__int64)pv, v13, v14);
  EtwEventActivityIdControl(4LL, &v28);
  return v15;
}

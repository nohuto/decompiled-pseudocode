/*
 * XREFs of sub_18000F390 @ 0x18000F390
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F390(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v8; // r8
  LPVOID v9; // rcx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+48h] [rbp-18h]
  char v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+54h] [rbp-Ch]
  __int64 fPending; // [rsp+A0h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, (PBOOL)&fPending, &Context) && (_DWORD)fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v5 = (unsigned int)dword_18019D9F4;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  v14 = qword_18019E5F0;
  CurrentThreadId = GetCurrentThreadId();
  v13 = L"s_pbmCastingAppStateChanged";
  v15 = 0;
  v16 = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmCastingAppStateChangedSupported() )
  {
    v4 = PbmCastingAppStateChanged(a1, a2);
    goto LABEL_9;
  }
  if ( !qword_18019E618 )
    goto LABEL_9;
  Context = 0LL;
  if ( (**(int (__fastcall ***)(__int64, void *, LPVOID *))qword_18019E618)(qword_18019E618, &unk_18015E380, &Context) < 0 )
    goto LABEL_19;
  fPending = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         a1,
         &fPending);
  if ( v4 >= 0 )
  {
    LOBYTE(v8) = a2 == 0;
    v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)Context + 40LL))(Context, fPending, v8);
    if ( fPending )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
LABEL_19:
    v9 = Context;
    if ( !Context )
      goto LABEL_9;
LABEL_20:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_9;
  }
  if ( fPending )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
  v9 = Context;
  if ( Context )
    goto LABEL_20;
LABEL_9:
  sub_18000F690(pv);
  return (unsigned int)v4;
}

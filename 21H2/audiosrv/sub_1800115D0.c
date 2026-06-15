/*
 * XREFs of sub_1800115D0 @ 0x1800115D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180011960 @ 0x180011960 (sub_180011960.c)
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800D0B30 @ 0x1800D0B30 (sub_1800D0B30.c)
 */

__int64 __fastcall sub_1800115D0(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v13; // edi
  struct _FILETIME v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-60h] BYREF
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-58h] BYREF
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v27; // [rsp+40h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-38h] BYREF
  DWORD v29; // [rsp+58h] [rbp-28h]
  const wchar_t *v30; // [rsp+60h] [rbp-20h]
  __int64 v31; // [rsp+68h] [rbp-18h]
  char v32; // [rsp+70h] [rbp-10h]
  __int64 v33; // [rsp+74h] [rbp-Ch]

  v27 = 0LL;
  v23 = 0LL;
  Context = 0LL;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v9 = qword_18019E5F0;
  v10 = (unsigned int)dword_18019D9F4;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v31 = v9;
  v29 = CurrentThreadId;
  v30 = L"GetAudioSessionManager";
  v32 = 0;
  v33 = 0LL;
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
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 54LL, &unk_18015DFC8, a2);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
          qword_18019E618,
          a1,
          &v23);
  if ( v13 >= 0 )
  {
    v14 = 0LL;
    pftDueTime = 0LL;
    EnterCriticalSection(&CriticalSection);
    if ( qword_18019EF58 )
    {
      sub_1800D0B30(qword_18019EF58, v15, &pftDueTime);
      v14 = pftDueTime;
    }
    LeaveCriticalSection(&CriticalSection);
    if ( v14 )
    {
      v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_180011960)(v14, a2, &v27);
      if ( v13 < 0 )
      {
        ((void (__fastcall *)(_QWORD))sub_18002AD80)(v14);
        goto LABEL_28;
      }
      if ( !(unsigned int)sub_18006D208(*(_QWORD *)&v14 + 12LL) )
      {
        (*(void (__fastcall **)(struct _FILETIME, __int64))(**(_QWORD **)&v14 + 24LL))(v14, 1LL);
        if ( qword_18019E418 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
      }
      v8 = v27;
    }
    else
    {
      v13 = -2147467259;
    }
    v18 = (_QWORD *)sub_18006A18C(16LL, &unk_18019F848);
    v19 = v18;
    if ( v18 )
    {
      v20 = v23;
      *v18 = v8;
      v18[1] = v20;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 55LL, &unk_18015DFC8, v8);
      }
      v21 = v23;
      *a3 = v19;
      *a4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 112LL))(v21) == 0;
LABEL_28:
      if ( v13 >= 0 )
        goto LABEL_32;
      goto LABEL_31;
    }
    v13 = -2147024882;
  }
LABEL_31:
  sub_18005E8F8("GetAudioSessionManager", 1988LL, (unsigned int)v13);
LABEL_32:
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v23 = 0LL;
  }
  sub_18000F690((__int64)pv, v16, v17);
  return (unsigned int)v13;
}

/*
 * XREFs of sub_18000DBC0 @ 0x18000DBC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

__int64 __fastcall sub_18000DBC0(RPC_BINDING_HANDLE Binding, int a2, int a3, _QWORD *a4, _DWORD *a5)
{
  char *v8; // rbx
  _WORD *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v14; // edi
  unsigned int v15; // eax
  int v16; // esi
  __int64 (__fastcall ***v17)(_QWORD, void *, _QWORD *); // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdi
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  _WORD *v24; // rax
  unsigned __int64 v25; // rdx
  __int16 v26; // cx
  _DWORD *v27; // rcx
  HANDLE ProcessHeap; // rax
  LPVOID v30; // [rsp+30h] [rbp-51h] BYREF
  unsigned int Pid; // [rsp+38h] [rbp-49h] BYREF
  __int64 v32; // [rsp+40h] [rbp-41h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-31h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-29h] BYREF
  struct _FILETIME pftDueTime; // [rsp+60h] [rbp-21h] BYREF
  _QWORD pv[2]; // [rsp+68h] [rbp-19h] BYREF
  DWORD v38; // [rsp+78h] [rbp-9h]
  const wchar_t *v39; // [rsp+80h] [rbp-1h]
  __int64 v40; // [rsp+88h] [rbp+7h]
  char v41; // [rsp+90h] [rbp+Fh]
  __int64 v42; // [rsp+94h] [rbp+13h]
  void *retaddr; // [rsp+D8h] [rbp+57h]
  unsigned __int8 v44; // [rsp+F0h] [rbp+6Fh] BYREF
  _QWORD *v45; // [rsp+F8h] [rbp+77h]

  v45 = a4;
  v44 = 0;
  Context = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v10 = qword_18019E5F0;
  v11 = (unsigned int)dword_18019D9F4;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v40 = v10;
  v38 = CurrentThreadId;
  v39 = L"s_rtgGetDefaultAudioEndpoint";
  v41 = 0;
  v42 = 0LL;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v11 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( a3 >= 9 )
  {
    v16 = -2147024809;
    goto LABEL_37;
  }
  if ( !v45 || !a5 )
  {
    v16 = -2147467261;
    goto LABEL_37;
  }
  v14 = qword_18019E608;
  *a5 = 0;
  v35 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  Pid = 0;
  v15 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( v15 )
  {
    v16 = sub_1800CA660(retaddr, 230LL, "avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v15);
    goto LABEL_36;
  }
  v16 = sub_18000DF70(v14, Pid, a2, a3, (__int64)&v44, (__int64)&v35);
  if ( v16 < 0 )
    goto LABEL_36;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v17 = v35;
  v18 = (**v35)(v35, &unk_18015B040, &v32);
  v16 = v18;
  if ( v18 < 0 )
  {
    sub_18004BD84(
      retaddr,
      233LL,
      "avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (unsigned int)v18);
    goto LABEL_36;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v32 + 56LL))(v32, &v30);
  v16 = v19;
  if ( v19 < 0 )
  {
    sub_18004BD84(
      retaddr,
      234LL,
      "avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (unsigned int)v19);
    if ( v30 )
      CoTaskMemFree(v30);
LABEL_36:
    sub_18000F708(&v32);
    sub_18000F708(&v35);
    if ( v16 < 0 )
    {
LABEL_37:
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v9);
      goto LABEL_35;
    }
LABEL_38:
    v16 = -2147023728;
    goto LABEL_37;
  }
  v8 = (char *)v30;
  v30 = 0LL;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v17)[2])(v17);
  if ( !v8 )
    goto LABEL_38;
  v20 = -1LL;
  while ( *(_WORD *)&v8[2 * v20++ + 2] != 0 )
    ;
  v22 = 2 * v20 + 2;
  if ( v22 > 0x40000 || (v9 = (_WORD *)sub_18006A1B0(v22, &unk_18019F848)) == 0LL )
  {
    v16 = -2147024882;
    goto LABEL_37;
  }
  v23 = v22 >> 1;
  v16 = 0;
  if ( v23 - 1 > 0x7FFFFFFE )
    v16 = -2147024809;
  if ( v16 < 0 )
  {
    if ( v23 )
      *v9 = 0;
  }
  else
  {
    v24 = v9;
    v16 = 0;
    if ( v23 )
    {
      v25 = 2147483646 - v23;
      while ( v23 + v25 )
      {
        v26 = *(_WORD *)((char *)v24 + v8 - (char *)v9);
        if ( !v26 )
          break;
        *v24++ = v26;
        if ( !--v23 )
          goto LABEL_46;
      }
    }
    else
    {
LABEL_46:
      --v24;
      v16 = -2147024774;
    }
    *v24 = 0;
  }
  if ( v16 < 0 )
    goto LABEL_37;
  v27 = a5;
  *v45 = v9;
  *v27 = v44;
LABEL_35:
  sub_18000F690(pv);
  CoTaskMemFree(0LL);
  CoTaskMemFree(v8);
  return (unsigned int)v16;
}

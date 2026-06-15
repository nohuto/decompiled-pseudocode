/*
 * XREFs of sub_18000BDF0 @ 0x18000BDF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F790 @ 0x18000F790 (sub_18000F790.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006E4CC @ 0x18006E4CC (sub_18006E4CC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000BDF0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int128 v10; // xmm0
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  RPC_STATUS v18; // edi
  int v19; // eax
  void *v20; // rbx
  int v21; // eax
  WINBOOL fPending; // [rsp+40h] [rbp-89h] BYREF
  int v24; // [rsp+44h] [rbp-85h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-81h] BYREF
  __int64 v26; // [rsp+50h] [rbp-79h] BYREF
  _QWORD pv[2]; // [rsp+58h] [rbp-71h] BYREF
  DWORD v28; // [rsp+68h] [rbp-61h]
  const wchar_t *v29; // [rsp+70h] [rbp-59h]
  __int64 v30; // [rsp+78h] [rbp-51h]
  char v31; // [rsp+80h] [rbp-49h]
  __int64 v32; // [rsp+84h] [rbp-45h]
  struct _FILETIME pftDueTime[2]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-29h]
  __int128 v35; // [rsp+B0h] [rbp-19h] BYREF
  void *retaddr; // [rsp+118h] [rbp+4Fh]

  if ( a1 )
    v10 = *(_OWORD *)(a1 + 280);
  else
    v10 = xmmword_18015B730;
  *(_OWORD *)&pftDueTime[0].dwLowDateTime = v10;
  v34 = v10;
  v35 = v10;
  EtwEventActivityIdControl(4LL, &v35);
  v26 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
          qword_18019E618,
          0LL,
          &v26);
  v12 = v11;
  if ( v11 < 0 )
  {
    sub_18004BD84(retaddr, 3174LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v11);
  }
  else
  {
    v24 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, bool, _QWORD, int *))(*(_QWORD *)v26 + 152LL))(v26, a2 == 1, a5, &v24);
    v12 = v13;
    if ( v13 < 0 )
    {
      sub_18004BD84(retaddr, 3183LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v13);
    }
    else if ( v24 || (RtlPublishWnfStateData(0x2821B2CA3BC2075LL, 0LL, &unk_180172D30, 16LL, 0LL), v24) )
    {
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
      v14 = qword_18019E5F0;
      v15 = (unsigned int)dword_18019D9F4;
      pv[1] = *((_QWORD *)Context + 1);
      pv[0] = 0LL;
      CurrentThreadId = GetCurrentThreadId();
      v30 = v14;
      v28 = CurrentThreadId;
      v29 = L"AudioServerCreateStream";
      v31 = 0;
      v32 = 0LL;
      if ( (unsigned int)v15 >= 0x3E8 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
        pv[0] = ThreadpoolTimer;
        if ( ThreadpoolTimer )
        {
          pftDueTime[0] = (struct _FILETIME)(-10000 * v15 / 3);
          SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v15 / 3, 0);
        }
      }
      v18 = RpcImpersonateClient(0LL);
      if ( v18 )
      {
        v12 = v18 | 0x80010000;
        sub_18004BD84(retaddr, 3209LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v12);
      }
      else
      {
        BYTE1(fPending) = 1;
        Context = 0LL;
        v19 = sub_18000F790(&Context);
        v12 = v19;
        if ( v19 < 0 )
        {
          sub_18004BD84(retaddr, 3217LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v19);
          sub_18006E4CC(&fPending);
          v20 = Context;
        }
        else
        {
          sub_18006E4CC(&fPending);
          v20 = Context;
          v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, LPVOID, __int64))(*(_QWORD *)a1 + 56LL))(
                  a1,
                  v26,
                  a2,
                  a3,
                  a4,
                  Context,
                  a6);
          v12 = v21;
          if ( v21 < 0 )
            sub_18004BD84(retaddr, 3225LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v21);
          else
            v12 = 0;
        }
        if ( v20 )
          LocalFree(v20);
      }
      sub_18000F690(pv);
    }
    else
    {
      v12 = -2005139338;
    }
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  EtwEventActivityIdControl(4LL, &v35);
  return v12;
}

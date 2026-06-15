/*
 * XREFs of sub_1800EE4C0 @ 0x1800EE4C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

__int64 __fastcall sub_1800EE4C0(
        RPC_BINDING_HANDLE Binding,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 *v9; // rax
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // ebx
  unsigned __int64 v14; // r8
  bool v15; // dl
  char v16; // al
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // r9d
  int v21; // eax
  void *v22; // rcx
  HRESULT v23; // eax
  void *v24; // rcx
  unsigned __int64 i; // rbx
  int v26; // eax
  void *v27; // rcx
  LPVOID pv; // [rsp+38h] [rbp-41h] BYREF
  unsigned int Pid; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-31h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-29h] BYREF
  __int64 v33; // [rsp+58h] [rbp-21h] BYREF
  __int64 v34; // [rsp+60h] [rbp-19h] BYREF
  LPVOID *p_pv; // [rsp+68h] [rbp-11h]
  void *v36; // [rsp+70h] [rbp-9h] BYREF
  char v37; // [rsp+78h] [rbp-1h]
  struct _TP_TIMER *v38[7]; // [rsp+80h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+57h]

  v9 = sub_180008448((__int64)Binding, sub_1800B6240);
  sub_1800085F0(v38, (struct _TP_TIMER *)v9[1], v10, (struct _TP_TIMER *)L"s_apmSetPersistedDefaultAudioEndpoint");
  Pid = 0;
  v11 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( !v11 )
  {
    v15 = Pid == GetCurrentProcessId();
    if ( !lpCriticalSection || (v16 = 1, Pid != LODWORD(lpCriticalSection[2].OwningThread)) )
      v16 = 0;
    if ( v15 || v16 )
    {
      v17 = 90;
      goto LABEL_42;
    }
    if ( a4 > 2 )
    {
      v17 = 95;
LABEL_42:
      v13 = -2147024809;
      sub_18004BD84(
        (int)retaddr,
        v17,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        -2147024809);
      goto LABEL_43;
    }
    v33 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618 + 40LL))(
            qword_18019E618,
            a2,
            &v33);
    v13 = v18;
    if ( v18 < 0 )
    {
      v19 = 100;
LABEL_16:
      v20 = v18;
      goto LABEL_17;
    }
    if ( !v33 )
    {
      v13 = -2147024809;
      v19 = 101;
      v20 = -2147024809;
LABEL_17:
      sub_18004BD84((int)retaddr, v19, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp", v20);
LABEL_40:
      sub_18000F708(&v33);
      goto LABEL_43;
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v33 + 24LL))(v33, a3, a4, a5);
    v13 = v18;
    if ( v18 < 0 )
    {
      v19 = 103;
      goto LABEL_16;
    }
    v34 = 0LL;
    if ( a5 )
    {
      v21 = MMDevAPI_23(a5, &v34);
      v13 = v21;
      if ( v21 < 0 )
      {
        sub_18004BD84((int)retaddr, 110, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp", v21);
LABEL_39:
        sub_18000F708(&v34);
        goto LABEL_40;
      }
      p_pv = &pv;
      v31 = 0LL;
      pv = 0LL;
      v36 = 0LL;
      v37 = 1;
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, void **))(*(_QWORD *)v33 + 56LL))(v33, &v31, &v36);
      if ( v37 )
      {
        v22 = *p_pv;
        *p_pv = v36;
        if ( v22 )
          CoTaskMemFree(v22);
      }
      if ( v13 < 0 )
      {
        sub_18004BD84((int)retaddr, 116, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp", v13);
        goto LABEL_29;
      }
      if ( v31 )
      {
        ppv = 0LL;
        v23 = CoCreateInstance(&stru_18015E170, 0LL, 0x17u, &stru_18015E160, &ppv);
        v13 = v23;
        if ( v23 < 0 )
        {
          sub_18004BD84((int)retaddr, 122, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp", v23);
          sub_18000F708((__int64 *)&ppv);
LABEL_29:
          v24 = pv;
          pv = 0LL;
          if ( v24 )
            CoTaskMemFree(v24);
          goto LABEL_39;
        }
        for ( i = 0LL; i < v31; ++i )
        {
          v26 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 88LL))(
                  ppv,
                  v34,
                  a4,
                  *((unsigned int *)pv + i));
          if ( v26 < 0 )
            sub_18006D26C((int)retaddr, 126, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp", v26);
        }
        sub_18000F708((__int64 *)&ppv);
      }
      v27 = pv;
      pv = 0LL;
      if ( v27 )
        CoTaskMemFree(v27);
    }
    v13 = 0;
    goto LABEL_39;
  }
  v13 = sub_1800CA660((int)retaddr, 86, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp", v11);
LABEL_43:
  sub_18000F690((__int64)v38, v12, v14);
  return (unsigned int)v13;
}

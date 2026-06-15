/*
 * XREFs of sub_1800284E0 @ 0x1800284E0
 * Callers:
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800284E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  HRESULT Instance; // eax
  int v9; // ebx
  HRESULT v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int16 *v14; // r15
  __int64 v15; // rbx
  void *v16; // rax
  void *v17; // r14
  void *v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  IUnknown *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rsi
  int v25; // eax
  char v27; // [rsp+40h] [rbp-91h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-89h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-81h] BYREF
  int v30; // [rsp+54h] [rbp-7Dh] BYREF
  LPVOID Context; // [rsp+58h] [rbp-79h] BYREF
  __int64 v32; // [rsp+60h] [rbp-71h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-69h]
  __int64 v34; // [rsp+70h] [rbp-61h] BYREF
  _DWORD v35[2]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v36; // [rsp+80h] [rbp-51h]
  unsigned __int16 *v37; // [rsp+90h] [rbp-41h]
  int v38; // [rsp+98h] [rbp-39h]
  int v39; // [rsp+9Ch] [rbp-35h]
  void *v40; // [rsp+A0h] [rbp-31h]
  int v41; // [rsp+A8h] [rbp-29h]
  int v42; // [rsp+ACh] [rbp-25h]
  __int64 *v43; // [rsp+B0h] [rbp-21h]
  __int64 v44; // [rsp+B8h] [rbp-19h]
  int *v45; // [rsp+C0h] [rbp-11h]
  __int64 v46; // [rsp+C8h] [rbp-9h]
  char *v47; // [rsp+D0h] [rbp-1h]
  __int64 v48; // [rsp+D8h] [rbp+7h]
  void *retaddr; // [rsp+128h] [rbp+57h]

  pProxy = 0LL;
  Instance = CoCreateInstance(&stru_18015B890, 0LL, 0x17u, &stru_18015B8A0, (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    sub_18004BD84(
      retaddr,
      2522LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)Instance);
  }
  else
  {
    v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
    v9 = v10;
    if ( v10 < 0 )
    {
      sub_18004BD84(
        retaddr,
        2528LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (unsigned int)v10);
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(IUnknown *, __int64))pProxy->lpVtbl[3].QueryInterface)(pProxy, a3);
      v9 = v11;
      if ( v11 < 0 )
      {
        sub_18004BD84(
          retaddr,
          2530LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (unsigned int)v11);
      }
      else
      {
        *(_BYTE *)(a1 + 124) = *((_BYTE *)a2 + 8);
        v12 = *a2;
        v13 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 112) = *a2;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v14 = *(unsigned __int16 **)(a3 + 48);
        v15 = v14[8];
        v16 = CoTaskMemAlloc(v15 + 18);
        v17 = v16;
        if ( v16 )
        {
          memcpy(v16, v14, v15 + 18);
          v9 = 0;
        }
        else
        {
          v9 = -2147024882;
        }
        v18 = *(void **)(a1 + 208);
        *(_QWORD *)(a1 + 208) = v17;
        if ( v18 )
          CoTaskMemFree(v18);
        if ( v9 < 0 )
        {
          sub_18004BD84(
            retaddr,
            2534LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (unsigned int)v9);
        }
        else
        {
          v32 = 0LL;
          v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a4 + 248LL))(a4, &v32);
          v9 = v19;
          if ( v19 < 0 )
          {
            sub_18004BD84(
              retaddr,
              2538LL,
              "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (unsigned int)v19);
          }
          else
          {
            v20 = ((__int64 (__fastcall *)(IUnknown *, __int64))pProxy->lpVtbl[3].AddRef)(pProxy, v32);
            v9 = v20;
            if ( v20 < 0 )
            {
              sub_18004BD84(
                retaddr,
                2539LL,
                "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                (unsigned int)v20);
            }
            else
            {
              v21 = *(_QWORD *)(a1 + 48);
              v22 = pProxy;
              *(_QWORD *)(a1 + 48) = pProxy;
              if ( v22 )
                ((void (__fastcall *)(IUnknown *))v22->lpVtbl->AddRef)(v22);
              if ( v21 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              v23 = *(_QWORD *)(a1 + 200);
              *(_QWORD *)(a1 + 200) = a4;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
              if ( v23 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
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
              v24 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v24 > 4u )
              {
                v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 40LL))(*(_QWORD *)(a1 + 112));
                v27 = *(_BYTE *)(a1 + 124);
                v30 = v25;
                v34 = a1 + 8;
                v47 = &v27;
                v48 = 1LL;
                v45 = &v30;
                v46 = 4LL;
                v43 = &v34;
                v44 = 8LL;
                v35[0] = 184549376;
                v35[1] = 4;
                v36 = 0LL;
                v37 = *(unsigned __int16 **)(v24 + 8);
                v38 = *v37;
                v39 = 2;
                v40 = &unk_180167707;
                v41 = 55;
                v42 = 1;
                v33 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
                EtwEventWriteTransfer(*(_QWORD *)(v24 + 32), v35, 0LL);
              }
              *(_QWORD *)(a1 + 216) = _InterlockedIncrement64(&qword_18019EB38);
              v9 = 0;
            }
          }
          if ( v32 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
  }
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)v9;
}

/*
 * XREFs of sub_1800C5260 @ 0x1800C5260
 * Callers:
 *     sub_1800C50AC @ 0x1800C50AC (sub_1800C50AC.c)
 * Callees:
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_1 @ 0x1800C5790 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_1.c)
 *     sub_1800D725C @ 0x1800D725C (sub_1800D725C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C5260(char *pv, char *a2, int a3, int a4)
{
  int v8; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  char *v11; // rax
  signed int LastError; // eax
  int v13; // ebx
  HANDLE EventW; // rax
  PTP_WAIT ThreadpoolWait; // rax
  int v16; // eax
  _QWORD *v18; // [rsp+40h] [rbp-39h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-31h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v21; // [rsp+60h] [rbp-19h]
  __int64 v22; // [rsp+68h] [rbp-11h] BYREF
  __int128 v23; // [rsp+70h] [rbp-9h]
  __int128 v24; // [rsp+80h] [rbp+7h] BYREF

  v8 = 0;
  SecurityDescriptor = 0LL;
  v18 = 0LL;
  v23 = *(_OWORD *)(pv + 8);
  v24 = v23;
  EtwEventActivityIdControl(4LL, &v24);
  *(_OWORD *)pvar = 0LL;
  v21 = 0LL;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&a2[2 * v9] );
  *((_QWORD *)pv + 3) = 0LL;
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    v8 = -2147024362;
    goto LABEL_28;
  }
  if ( is_mul_ok(v10, 2uLL) )
  {
    v11 = (char *)CoTaskMemAlloc(2 * v10);
    *((_QWORD *)pv + 3) = v11;
    if ( !v11 )
    {
      v8 = -2147024882;
      goto LABEL_28;
    }
    sub_18002A0F0(v11, v9 + 1, a2, v9);
  }
  else
  {
    v8 = -2147024362;
  }
  if ( v8 >= 0 )
  {
    *((_DWORD *)pv + 8) = a3;
    *((_DWORD *)pv + 9) = a4;
    v8 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**(_QWORD **)&dwCreationFlags + 40LL))(
           *(_QWORD *)&dwCreationFlags,
           a2,
           pv + 56);
    if ( v8 >= 0 )
    {
      if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
              L"D:P(A;;GA;;;WD)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-11"
               "59816984-2199008581-497492991)",
              1u,
              &SecurityDescriptor,
              0LL) )
        goto LABEL_11;
      v13 = NtCreateWnfStateName(&v22, 3LL, 0LL);
      if ( v13 < 0 )
      {
LABEL_14:
        v8 = v13 | 0x10000000;
        goto LABEL_28;
      }
      *(_QWORD *)(pv + 92) = v22;
      pv[88] = 1;
      v8 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)::pv + 24LL))(
             ::pv,
             *((_QWORD *)pv + 3),
             0LL,
             0LL,
             &v18);
      if ( v8 < 0 )
        goto LABEL_28;
      if ( (unsigned int)sub_180022F30(v18, 0) )
      {
        EventW = CreateEventW(0LL, 0, 0, 0LL);
        *((_QWORD *)pv + 25) = EventW;
        if ( !EventW
          || (ThreadpoolWait = CreateThreadpoolWait((PTP_WAIT_CALLBACK)sub_1800C5050, pv, 0LL),
              (*((_QWORD *)pv + 26) = ThreadpoolWait) == 0LL) )
        {
LABEL_11:
          LastError = GetLastError();
          v8 = LastError;
          if ( LastError > 0 )
            v8 = (unsigned __int16)LastError | 0x80070000;
          goto LABEL_28;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)&dwCreationFlags + 48LL))(
               *(_QWORD *)&dwCreationFlags,
               pv);
        if ( v8 < 0 )
          goto LABEL_28;
        pv[64] = 1;
        v8 = sub_1800D725C(*((_QWORD *)pv + 3), 1LL, &xmmword_18015B7F8, pvar);
        if ( v8 < 0 )
          goto LABEL_28;
        v16 = 0;
        if ( LOWORD(pvar[0]) == 19 )
          v16 = (int)pvar[1];
        *((_DWORD *)pv + 17) = v16;
        UnDecorator::getZName(pv);
        SetThreadpoolWait(*((PTP_WAIT *)pv + 26), *((HANDLE *)pv + 25), 0LL);
      }
      else
      {
        v13 = RtlPublishWnfStateData(*(_QWORD *)(pv + 92), 0LL, &unk_18016E448, 16LL, 0LL);
        if ( v13 < 0 )
          goto LABEL_14;
      }
      v8 = 0;
    }
  }
LABEL_28:
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  LocalFree(SecurityDescriptor);
  PropVariantClear(pvar);
  EtwEventActivityIdControl(4LL, &v24);
  return (unsigned int)v8;
}

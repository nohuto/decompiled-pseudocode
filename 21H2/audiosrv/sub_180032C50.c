/*
 * XREFs of sub_180032C50 @ 0x180032C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032F30 @ 0x180032F30 (sub_180032F30.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BEA04 @ 0x1800BEA04 (sub_1800BEA04.c)
 */

__int64 __fastcall sub_180032C50(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // edi
  int v5; // edi
  __int64 v6; // r10
  _WORD *v7; // rcx
  __int64 v8; // rax
  int v10; // edx
  __int64 v11; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-39h]
  _DWORD v17[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v18; // [rsp+58h] [rbp-29h]
  unsigned __int16 *v19; // [rsp+68h] [rbp-19h]
  int v20; // [rsp+70h] [rbp-11h]
  int v21; // [rsp+74h] [rbp-Dh]
  void *v22; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+84h] [rbp+3h]
  _WORD *v25; // [rsp+88h] [rbp+7h]
  int v26; // [rsp+90h] [rbp+Fh]
  int v27; // [rsp+94h] [rbp+13h]
  int *v28; // [rsp+98h] [rbp+17h]
  __int64 v29; // [rsp+A0h] [rbp+1Fh]

  sub_180032F30(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 616));
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
  if ( *(_DWORD *)(a2 + 88) )
  {
    if ( a2 != -352 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
    v5 = 1;
  }
  else if ( *(int *)(a2 + 404) > 0 )
  {
    if ( a2 != -352 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
    v5 = 2;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 736));
    v3 = (__int64)(*(_QWORD *)(a2 + 784) - *(_QWORD *)(a2 + 776)) >> 3;
    if ( a2 != -736 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 736));
    if ( !v3 )
    {
LABEL_25:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, 2LL);
      if ( a2 != -352 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
      v5 = 0;
      goto LABEL_13;
    }
    v4 = GetTickCount64() - *(_DWORD *)(a2 + 392);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BEA04(*((_QWORD *)off_18019C348 + 2), 60, (unsigned int)&unk_18015DEF0, *(_QWORD *)(a2 + 728), v4);
    }
    if ( *(int *)(a2 + 400) <= 0 )
    {
      if ( v4 < *(_DWORD *)(a2 + 312) - 16 )
      {
        if ( a2 != -352 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
        v5 = 4;
        goto LABEL_13;
      }
      goto LABEL_25;
    }
    if ( a2 != -352 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 352));
    v5 = 3;
  }
LABEL_13:
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
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 4u )
  {
    v7 = *(_WORD **)(a2 + 728);
    v14 = v5;
    v28 = &v14;
    v29 = 4LL;
    if ( v7 )
    {
      v8 = -1LL;
      while ( v7[++v8] != 0 )
        ;
      v10 = 2 * v8 + 2;
    }
    else
    {
      v7 = &unk_18015C744;
      v10 = 2;
    }
    v17[1] = 4;
    v19 = *(unsigned __int16 **)(v6 + 8);
    v25 = v7;
    v26 = v10;
    v27 = 0;
    v17[0] = 184549376;
    v18 = 0LL;
    v20 = *v19;
    v22 = &unk_1801669F2;
    v21 = 2;
    v11 = *(_QWORD *)(v6 + 32);
    v23 = 62;
    v24 = 1;
    v16 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    EtwEventWriteTransfer(v11, v17, 0LL);
  }
  if ( a2 != -616 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 616));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
}

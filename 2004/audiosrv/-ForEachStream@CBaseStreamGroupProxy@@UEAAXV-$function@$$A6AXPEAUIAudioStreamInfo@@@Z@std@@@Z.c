/*
 * XREFs of ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800275B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x180027BE0 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800388A8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x1800E4438 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, _BYTE *); // r8
  _BYTE *v7; // rcx
  __int64 v8; // r12
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rbx
  _BYTE *v11; // r8
  __int64 v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, _BYTE *); // rcx
  _BYTE *v14; // rax
  __int64 *v15; // rsi
  __int64 *v16; // rbx
  __int64 v17; // rcx
  _BYTE *v18; // rcx
  _BYTE v20[56]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE *v21; // [rsp+58h] [rbp-41h]
  __int64 v22; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v23[56]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE *v24; // [rsp+A8h] [rbp+Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v6 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  v7 = 0LL;
  v21 = 0LL;
  if ( v6 )
  {
    v7 = (_BYTE *)(**v6)(v6, v20);
    v21 = v7;
  }
  v8 = 0LL;
  v9 = *(_QWORD **)(a1 + 192);
  v10 = (unsigned __int64)(*(_QWORD *)(a1 + 200) - (_QWORD)v9 + 7LL) >> 3;
  if ( (unsigned __int64)v9 > *(_QWORD *)(a1 + 200) )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      std::_Func_class<void,IAudioStreamInfo *>::operator()(v20, *v9);
      ++v8;
      ++v9;
    }
    while ( v8 != v10 );
    v7 = v21;
  }
  v24 = 0LL;
  v11 = 0LL;
  if ( v7 )
  {
    if ( v7 == v20 )
    {
      v12 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *, _QWORD))(*(_QWORD *)v7 + 8LL))(v7, v23, 0LL);
      v11 = (_BYTE *)v12;
      v24 = (_BYTE *)v12;
      if ( v21 )
      {
        if ( v21 == v20 )
          v5 = 0LL;
        else
          LOBYTE(v5) = 1;
        (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v5, v12);
        v11 = v24;
        v21 = 0LL;
      }
    }
    else
    {
      v11 = v7;
      v24 = v7;
      v21 = 0LL;
    }
  }
  if ( v11 )
  {
    if ( v11 == v23 )
      v5 = 0LL;
    else
      LOBYTE(v5) = 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 32LL))(v11, v5);
  }
  v13 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  v14 = 0LL;
  v21 = 0LL;
  if ( v13 )
  {
    v14 = (_BYTE *)(**v13)(v13, v20);
    v21 = v14;
  }
  v15 = *(__int64 **)(a1 + 224);
  v16 = *(__int64 **)(a1 + 216);
  if ( v16 != v15 )
  {
    do
    {
      v17 = *v16;
      v22 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      lambda_530575f8b419a08780554bb070101504_::operator()(v20, &v22);
      ++v16;
    }
    while ( v16 != v15 );
    v14 = v21;
  }
  v18 = 0LL;
  v24 = 0LL;
  if ( v14 )
  {
    if ( v14 == v20 )
    {
      v18 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v14 + 8LL))(v14, v23);
      v24 = v18;
      if ( v21 )
      {
        if ( v21 == v20 )
          v5 = 0LL;
        else
          LOBYTE(v5) = 1;
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v21 + 32LL))(v21, v5);
        v18 = v24;
        v21 = 0LL;
      }
    }
    else
    {
      v18 = v14;
      v24 = v14;
      v21 = 0LL;
    }
  }
  if ( v18 )
  {
    if ( v18 == v23 )
      v5 = 0LL;
    else
      LOBYTE(v5) = 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v18 + 32LL))(v18, v5);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return std::_Func_class<void,>::_Tidy(a2);
}

/*
 * XREFs of ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180034CB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessSubmixProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, _BYTE *); // rcx
  _BYTE *v7; // rax
  __int64 *v8; // rsi
  __int64 *v9; // rbx
  _BYTE *v10; // rcx
  _BYTE *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v14[56]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE *v15; // [rsp+60h] [rbp-78h]
  _BYTE v16[56]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE *v17; // [rsp+A8h] [rbp-30h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v6 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  v7 = 0LL;
  v15 = 0LL;
  if ( v6 )
  {
    v7 = (_BYTE *)(**v6)(v6, v14);
    v15 = v7;
  }
  v8 = *(__int64 **)(a1 + 176);
  v9 = *(__int64 **)(a1 + 168);
  if ( v9 != v8 )
  {
    while ( 1 )
    {
      v13 = *v9;
      if ( !v7 )
        break;
      (*(void (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)v7 + 16LL))(v7, &v13);
      v7 = v15;
      if ( ++v9 == v8 )
        goto LABEL_6;
    }
    std::_Xbad_function_call();
    __debugbreak();
    goto LABEL_26;
  }
LABEL_6:
  v10 = 0LL;
  v17 = 0LL;
  if ( !v7 )
    goto LABEL_12;
  if ( v7 == v14 )
  {
    v10 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v7 + 8LL))(v7, v16);
    v17 = v10;
    v11 = v15;
    if ( !v15 )
      goto LABEL_12;
    if ( v15 == v14 )
    {
      v5 = 0LL;
LABEL_11:
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 32LL))(v11, v5);
      v10 = v17;
      v15 = 0LL;
      goto LABEL_12;
    }
LABEL_26:
    LOBYTE(v5) = 1;
    goto LABEL_11;
  }
  v10 = v7;
  v17 = v7;
  v15 = 0LL;
LABEL_12:
  if ( v10 )
  {
    if ( v10 == v16 )
      v5 = 0LL;
    else
      LOBYTE(v5) = 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v10 + 32LL))(v10, v5);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v12 = *(_QWORD *)(a2 + 56);
  if ( v12 )
  {
    if ( v12 == a2 )
      v5 = 0LL;
    else
      LOBYTE(v5) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v5);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
}

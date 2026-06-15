/*
 * XREFs of sub_18012E018 @ 0x18012E018
 * Callers:
 *     sub_18012E318 @ 0x18012E318 (sub_18012E318.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     _Init_thread_footer @ 0x18006A3D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18006A438 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_18012DE50 @ 0x18012DE50 (sub_18012DE50.c)
 *     sub_18012DF94 @ 0x18012DF94 (sub_18012DF94.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18012E018(__int64 a1, int a2, char a3, char a4, __int64 a5, float a6)
{
  __int64 v6; // rdi
  __int64 v8; // rbx
  int v9; // ebx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  LPVOID pv; // [rsp+58h] [rbp-9h] BYREF
  __int64 v16; // [rsp+60h] [rbp-1h] BYREF
  __int64 v17; // [rsp+68h] [rbp+7h] BYREF
  __int64 v18; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+78h] [rbp+17h] BYREF
  PROPVARIANT pvar[2]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  __int64 v22; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+6Fh] BYREF

  LOBYTE(v23) = a4;
  LOBYTE(v22) = a3;
  v6 = a2;
  v16 = 0LL;
  v8 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_18019FBC8 > *(_DWORD *)(v8 + 4) )
  {
    Init_thread_header(&dword_18019FBC8);
    if ( dword_18019FBC8 == -1 )
    {
      xmmword_18019FB64 = xmmword_180160708;
      dword_18019FB74 = 9;
      xmmword_18019FB78 = xmmword_180160768;
      dword_18019FB88 = 8;
      xmmword_18019FB8C = xmmword_180160780;
      dword_18019FB9C = 31;
      Init_thread_footer(&dword_18019FBC8);
    }
  }
  if ( dword_18019FBC4 > *(_DWORD *)(v8 + 4) )
  {
    Init_thread_header(&dword_18019FBC4);
    if ( dword_18019FBC4 == -1 )
    {
      xmmword_18019FB14 = xmmword_180160720;
      dword_18019FB24 = 33;
      xmmword_18019FB28 = xmmword_180160750;
      dword_18019FB38 = 34;
      xmmword_18019FB3C = xmmword_180160738;
      dword_18019FB4C = 35;
      Init_thread_footer(&dword_18019FBC4);
    }
  }
  if ( !(_DWORD)v6 || sub_18012DF94() )
  {
    v9 = 0;
  }
  else
  {
    *(_OWORD *)pvar = 0LL;
    v21 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &v16);
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
        v16,
        &byte_18019FB00[20 * v6],
        pvar);
      if ( LOWORD(pvar[0]) == 19 )
      {
        v10 = (int)pvar[1];
      }
      else
      {
        LOWORD(pvar[0]) = 19;
        v10 = 0;
      }
      LODWORD(pvar[1]) = (int)(float)(10.0 / a6) + v10;
      v9 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
             v16,
             &byte_18019FB00[20 * v6],
             pvar);
    }
    pv = 0LL;
    sub_18002A504(&pv, 0LL);
    (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 40LL))(a1, &pv);
    if ( *(_DWORD *)qword_18019E428 > 2u
      && __vcrt_trace_logging_provider::_TlgKeywordOn(qword_18019E428, 0x400000000000uLL) )
    {
      v17 = (__int64)pv;
      v18 = a5;
      LODWORD(v23) = v6;
      LODWORD(v22) = 1;
      v19 = 0x1000000LL;
      sub_18012DE50(
        v11,
        (unsigned __int8 *)dword_18016C373,
        v12,
        v13,
        (__int64)&v19,
        (__int64)&v22,
        (__int64)&v23,
        &v18,
        (void **)&v17);
    }
    if ( pv )
      CoTaskMemFree(pv);
    PropVariantClear(pvar);
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v9;
}

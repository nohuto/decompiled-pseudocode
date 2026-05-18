/*
 * XREFs of sub_180035404 @ 0x180035404
 * Callers:
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_1800359E0 @ 0x1800359E0 (sub_1800359E0.c)
 * Callees:
 *     sub_180010534 @ 0x180010534 (sub_180010534.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_180067F58 @ 0x180067F58 (sub_180067F58.c)
 *     memset @ 0x18012396A (memset.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 **__fastcall sub_180035404(__int64 a1, __int64 **a2, __int64 a3, __int16 a4, int a5)
{
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // r14
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rdx
  signed __int32 v15; // eax
  int v16; // eax
  ULONG_PTR v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 **v20; // rcx
  __int64 *v21; // rcx
  __int64 v23[3]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-A0h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v26; // [rsp+110h] [rbp+10h] BYREF
  __int64 **v27; // [rsp+118h] [rbp+18h] BYREF
  _DWORD v28[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v29; // [rsp+130h] [rbp+30h]
  char v30[16]; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v31; // [rsp+148h] [rbp+48h]
  unsigned int v32; // [rsp+14Ch] [rbp+4Ch]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v27 = a2;
  if ( (a4 & 1) != 0 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 80LL))(a3, v30);
    v9 = v31;
    if ( v31 == 44 )
    {
      v9 = (a4 & 0x400 | 0xB800u) >> 10;
    }
    else if ( v31 == 39 )
    {
      v9 = 41;
    }
    v28[0] = v9;
    v10 = 4;
    if ( v32 > 1 )
      v10 = 6;
    if ( (a4 & 0x10) != 0 )
      v10 = 9;
    v28[1] = v10;
    v28[2] = 0;
    v11 = -1;
    if ( a5 )
      v11 = a5;
    v28[3] = v11;
    v26 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = *(_QWORD *)(a1 + 80);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v14 + 8);
        if ( !v15 )
          break;
        if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
        {
          v12 = *(_QWORD *)(a1 + 72);
          v13 = *(volatile signed __int32 **)(a1 + 80);
          if ( v13 )
            _InterlockedIncrement(v13 + 2);
          break;
        }
      }
    }
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v27 = 0LL;
    sub_180029F64(v12, &v27);
    v16 = ((__int64 (__fastcall *)(__int64 **, __int64, _DWORD *, __int64 **))(*v27)[7])(v27, a3, v28, &v26);
    v17 = v16;
    sub_18002BE74(v12, v16);
    if ( (v17 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v17;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v18 = sub_180067F58(a1, v23);
    if ( *(_QWORD *)(v18 + 24) >= 0x10uLL )
      v18 = *(_QWORD *)v18;
    sub_180010534(v26, (const char *)v18);
    if ( v24 >= 0x10 )
    {
      v19 = v23[0];
      if ( v24 + 1 >= 0x1000 )
      {
        v19 = *(_QWORD *)(v23[0] - 8);
        if ( (unsigned __int64)(v23[0] - v19 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v19, v24 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v19);
    }
    v20 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      ((void (__fastcall *)(__int64 **))(*v20)[2])(v20);
    }
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    *a2 = 0LL;
    if ( a2 == &v26 )
    {
      v21 = v26;
    }
    else
    {
      *a2 = v26;
      v21 = 0LL;
    }
    if ( v21 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}

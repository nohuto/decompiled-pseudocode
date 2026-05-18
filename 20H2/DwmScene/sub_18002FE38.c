/*
 * XREFs of sub_18002FE38 @ 0x18002FE38
 * Callers:
 *     sub_18002F578 @ 0x18002F578 (sub_18002F578.c)
 *     sub_180030110 @ 0x180030110 (sub_180030110.c)
 * Callees:
 *     sub_180010454 @ 0x180010454 (sub_180010454.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 **__fastcall sub_18002FE38(__int64 a1, __int64 **a2, __int64 a3, char a4, int a5)
{
  int v8; // eax
  __int64 v9; // r14
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rdx
  signed __int32 v12; // eax
  int v13; // eax
  ULONG_PTR v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 **v17; // rcx
  __int64 *v18; // rcx
  __int64 v20[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-A8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v23; // [rsp+100h] [rbp+0h] BYREF
  __int64 **v24; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v25[4]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v26; // [rsp+120h] [rbp+20h]
  char v27[16]; // [rsp+128h] [rbp+28h] BYREF
  int v28; // [rsp+138h] [rbp+38h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v24 = a2;
  if ( (a4 & 1) != 0 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 80LL))(a3, v27);
    v8 = v28;
    if ( v28 == 44 )
    {
      v25[0] = 46;
    }
    else
    {
      if ( v28 == 39 )
        v8 = 41;
      v25[0] = v8;
    }
    v25[1] = 8;
    v25[3] = a5;
    v25[2] = 0;
    v23 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(v11 + 8);
        if ( !v12 )
          break;
        if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12) )
        {
          v9 = *(_QWORD *)(a1 + 72);
          v10 = *(volatile signed __int32 **)(a1 + 80);
          if ( v10 )
            _InterlockedIncrement(v10 + 2);
          break;
        }
      }
    }
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    v24 = 0LL;
    sub_180024694(v9, &v24);
    v13 = ((__int64 (__fastcall *)(__int64 **, __int64, _DWORD *, __int64 **))(*v24)[7])(v24, a3, v25, &v23);
    v14 = v13;
    sub_1800265A4(v9, v13);
    if ( (v14 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v14;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v15 = sub_180062688(a1, v20);
    if ( *(_QWORD *)(v15 + 24) >= 0x10uLL )
      v15 = *(_QWORD *)v15;
    sub_180010454(v23, (const char *)v15);
    if ( v21 >= 0x10 )
    {
      v16 = v20[0];
      if ( v21 + 1 >= 0x1000 )
      {
        v16 = *(_QWORD *)(v20[0] - 8);
        if ( (unsigned __int64)(v20[0] - v16 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v16, v21 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v16);
    }
    v17 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      ((void (__fastcall *)(__int64 **))(*v17)[2])(v17);
    }
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    *a2 = 0LL;
    if ( a2 == &v23 )
    {
      v18 = v23;
    }
    else
    {
      *a2 = v23;
      v18 = 0LL;
    }
    if ( v18 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}

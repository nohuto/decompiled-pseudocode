/*
 * XREFs of sub_1801376CC @ 0x1801376CC
 * Callers:
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800308A0 @ 0x1800308A0 (sub_1800308A0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     ??0__crt_deferred_errno_cache@@QEAA@XZ @ 0x180069050 (--0__crt_deferred_errno_cache@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BDAAC @ 0x1800BDAAC (sub_1800BDAAC.c)
 *     unknown_libname_278 @ 0x1800BDBB0 (unknown_libname_278.c)
 *     sub_1801052C0 @ 0x1801052C0 (sub_1801052C0.c)
 *     sub_180105B78 @ 0x180105B78 (sub_180105B78.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall sub_1801376CC(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int i; // r14d
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  void **v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-58h] BYREF
  _WORD *v19; // [rsp+48h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+50h] [rbp-48h] BYREF
  _QWORD *v21; // [rsp+58h] [rbp-40h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h] BYREF
  __int64 v23[3]; // [rsp+68h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v20 = v2;
  if ( *(_BYTE *)(a1 + 209) )
  {
    v4 = *(_QWORD *)(a1 + 216);
    v17 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, 0LL, 1LL, &v17);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v18 = 0;
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v18);
      v8 = v7;
      if ( v7 >= 0 )
      {
        for ( i = 0; i < v18; ++i )
        {
          v21 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v17 + 32LL))(v17, i, &v21) >= 0 )
          {
            __crt_deferred_errno_cache::__crt_deferred_errno_cache((__crt_deferred_errno_cache *)&v19);
            v10 = v21;
            v11 = *v21;
            v12 = unknown_libname_278((void **)&v19);
            v13 = (*(__int64 (__fastcall **)(_QWORD *, void **))(v11 + 40))(v10, v12);
            if ( v13 < 0 )
            {
              if ( (unsigned int)dword_18019C4F0 > 2 )
              {
                v16 = v13;
                sub_1801052C0((int)&dword_18019C4F0, (int)&unk_18016C86C, v14, v15, (__int64)&v16);
              }
            }
            else
            {
              sub_180060060(v23, v19);
              sub_1800308A0((_QWORD *)(a1 + 464), &v22, (char *)v23);
              if ( v24 >= 8 )
                sub_1800472E0(v23[0], 2 * v24 + 2);
              if ( v22 == *(_QWORD *)(a1 + 472) )
                sub_18005FECC(a1);
            }
            sub_1800BDAAC((void **)&v19);
          }
          sub_18000F708((__int64 *)&v21);
        }
        sub_18000F708(&v17);
        sub_180105B78(&v20);
        return 0LL;
      }
      else
      {
        sub_18004BD84((int)retaddr, 943, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v7);
        sub_18000F708(&v17);
        sub_180105B78(&v20);
        return v8;
      }
    }
    else
    {
      sub_18004BD84((int)retaddr, 940, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v5);
      sub_18000F708(&v17);
      sub_180105B78(&v20);
      return v6;
    }
  }
  else
  {
    sub_180105B78(&v20);
    return 0LL;
  }
}

/*
 * XREFs of sub_1800329B4 @ 0x1800329B4
 * Callers:
 *     sub_1800321A0 @ 0x1800321A0 (sub_1800321A0.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800174E8 @ 0x1800174E8 (sub_1800174E8.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180067F58 @ 0x180067F58 (sub_180067F58.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_18009ED9C @ 0x18009ED9C (sub_18009ED9C.c)
 *     sub_18009F8E0 @ 0x18009F8E0 (sub_18009F8E0.c)
 *     memmove @ 0x180123982 (memmove.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800329B4(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v6; // r12d
  int v7; // r15d
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 *v11; // rax
  _QWORD *v12; // r14
  volatile signed __int32 *v13; // rbx
  _BYTE *v14; // rbx
  __int64 result; // rax
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rbx
  const void **v18; // rax
  void *v19; // rcx
  __int64 v20; // rbx
  _QWORD v21[4]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v25; // [rsp+70h] [rbp-90h]
  const void *Src; // [rsp+78h] [rbp-88h] BYREF
  __int128 v27; // [rsp+98h] [rbp-68h]
  void *v28[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v30; // [rsp+C0h] [rbp-40h]
  _BYTE v31[32]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v32[32]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = a3;
  v7 = a2;
  if ( !a2 )
    v7 = 1;
  if ( !a3 )
    v6 = 1;
  v27 = 0LL;
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v27 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v11 = sub_1800174E8(v27, &v22);
  v12 = (_QWORD *)(a1 + 96);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), v11);
  v13 = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  sub_180067F58(a1, v28);
  if ( !v29 )
  {
    if ( v30 < 0x11 )
    {
      sub_18000FC14((__int64 *)v28, 0x11uLL, 0LL, "RenderTargetD3D11");
    }
    else
    {
      v14 = v28[0];
      v29 = 17LL;
      memmove(v28[0], "RenderTargetD3D11", 0x11uLL);
      v14[17] = 0;
    }
  }
  v21[2] = 0LL;
  v21[3] = 0LL;
  sub_180020B7C(v21, (__int64)v28);
  sub_180068194(*v12, v21);
  sub_18009ED9C((unsigned int)v31, v7, v6, a4, a5 & 0xFFFFFF7C | 3, 0);
  result = sub_18009F8E0(*v12, v31);
  if ( (a5 & 0x80u) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 112) )
    {
      v16 = sub_1800174E8(v27, &v24);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 112), v16);
      v17 = v25;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
    }
    v18 = sub_180031B44(&Src, v28, " (staging)");
    sub_180068194(*(_QWORD *)(a1 + 112), v18);
    sub_18009ED9C((unsigned int)v32, v7, v6, a4, a5 & 0xFFFFFF7C | 0x80, 3);
    result = sub_18009F8E0(*(_QWORD *)(a1 + 112), v32);
  }
  if ( v30 >= 0x10 )
  {
    v19 = v28[0];
    if ( v30 + 1 >= 0x1000 )
    {
      v19 = (void *)*((_QWORD *)v28[0] - 1);
      if ( (unsigned __int64)((char *)v28[0] - (char *)v19 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, v30 + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v19);
  }
  v29 = 0LL;
  v30 = 15LL;
  LOBYTE(v28[0]) = 0;
  if ( *((_QWORD *)&v27 + 1) )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v20 = *((_QWORD *)&v27 + 1);
      (***((void (__fastcall ****)(_QWORD))&v27 + 1))(*((_QWORD *)&v27 + 1));
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
    }
  }
  return result;
}

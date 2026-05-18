/*
 * XREFs of sub_18003D310 @ 0x18003D310
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     sub_180062844 @ 0x180062844 (sub_180062844.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_18003D310(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  signed __int32 v11; // eax
  int v12; // ebx
  __int64 v13; // rax
  const char *v14; // rbx
  __int64 v15; // r15
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 *v24; // rax
  _QWORD v25[3]; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-71h]
  _QWORD v27[4]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v28[4]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v30; // [rsp+E0h] [rbp+17h]
  __int64 v31; // [rsp+F0h] [rbp+27h] BYREF

  if ( *(_BYTE *)(a1 + 96) )
  {
    sub_18000FD48(v28);
    v24 = sub_18000FD48(v27);
    sub_180027FF4(pExceptionObject, v24, 36, (__int64)v28, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a2 != a2[1] || *((_DWORD *)a2 + 8) != *((_DWORD *)a2 + 6) )
  {
    v30 = 0LL;
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v4 + 8);
        if ( !v11 )
          break;
        if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v11 + 1, v11) )
        {
          *(_QWORD *)&v30 = *(_QWORD *)(a1 + 72);
          v5 = *(_QWORD *)(a1 + 80);
          *((_QWORD *)&v30 + 1) = v5;
          goto LABEL_6;
        }
      }
    }
    v5 = *((_QWORD *)&v30 + 1);
LABEL_6:
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = *((_QWORD *)&v30 + 1);
    }
    v31 = 0LL;
    sub_180024694(v30, &v31);
    v6 = v31;
    v7 = (__int64 *)(a1 + 104);
    v8 = *(_QWORD *)(a1 + 104);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *a2;
    if ( *a2 == a2[1] )
      v10 = (unsigned int)(*((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6));
    else
      v10 = a2[1] - v9;
    if ( v9 == a2[1] )
      v9 = a2[3];
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v6 + 120LL))(
            v6,
            v9,
            v10,
            0LL,
            a1 + 104);
    sub_1800265A4(v30, v12);
    if ( v12 >= 0 )
    {
      *(_BYTE *)(a1 + 96) = 1;
      v13 = sub_180062688(a1, v25);
      v14 = (const char *)v13;
      if ( *(_QWORD *)(v13 + 24) >= 0x10uLL )
        v14 = *(const char **)v13;
      v15 = *v7;
      if ( v15 )
      {
        if ( v14 )
          v16 = strnlen(v14, 0x7FFFFFFFuLL);
        else
          v16 = 0;
        (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v15 + 40LL))(
          v15,
          &unk_1801D6830,
          v16,
          v14);
      }
      if ( v26 >= 0x10 )
      {
        v17 = v25[0];
        if ( v26 + 1 >= 0x1000 )
        {
          v17 = *(_QWORD *)(v25[0] - 8LL);
          if ( (unsigned __int64)(v25[0] - v17 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v17, v26 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v17);
      }
      v18 = a2[1];
      if ( *a2 == v18 )
        v19 = (unsigned int)(*((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6));
      else
        v19 = v18 - *a2;
      sub_180062844(a1, v19, 8LL);
    }
    v20 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v5 )
    {
      if ( _InterlockedDecrement((volatile signed __int32 *)(v5 + 8))
        || (v21 = *((_QWORD *)&v30 + 1),
            (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1)),
            _InterlockedDecrement((volatile signed __int32 *)(v21 + 12))) )
      {
        v5 = *((_QWORD *)&v30 + 1);
      }
      else
      {
        v5 = *((_QWORD *)&v30 + 1);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
      }
    }
    if ( v5 )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v5 + 8)) )
      {
        v22 = *((_QWORD *)&v30 + 1);
        (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v22 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
      }
    }
  }
  return *(_BYTE *)(a1 + 96);
}

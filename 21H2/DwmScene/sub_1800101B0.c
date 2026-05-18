/*
 * XREFs of sub_1800101B0 @ 0x1800101B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F62C @ 0x18000F62C (sub_18000F62C.c)
 *     sub_18000F8A8 @ 0x18000F8A8 (sub_18000F8A8.c)
 *     sub_180010534 @ 0x180010534 (sub_180010534.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002F7A0 @ 0x18002F7A0 (sub_18002F7A0.c)
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_18006885C @ 0x18006885C (sub_18006885C.c)
 *     sub_18006C6B0 @ 0x18006C6B0 (sub_18006C6B0.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     memset @ 0x18012396A (memset.c)
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800101B0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  _QWORD *v25; // [rsp+80h] [rbp-80h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27; // [rsp+130h] [rbp+30h] BYREF
  __int128 v28; // [rsp+140h] [rbp+40h] BYREF
  __int128 v29; // [rsp+150h] [rbp+50h] BYREF
  __int128 v30; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v31[12]; // [rsp+170h] [rbp+70h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+C8h]

  v25 = a2;
  v30 = 0LL;
  result = sub_18002F7A0(a1, &v30);
  if ( (_QWORD)v30 )
  {
    v29 = 0LL;
    sub_18000F62C(v30, &v29);
    v24 = 15LL;
    v23 = 6LL;
    strcpy(v22, "Output");
    sub_180068194(v29, v22);
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v31);
    v27 = 0LL;
    v5 = *(_QWORD *)sub_180029F64(v30, &v19);
    v6 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v5 + 72LL))(v5, *a2, 0LL, &v27);
    v8 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( (v7 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v7;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_180010534(*a2, "RenderOutput ColorBuffer");
    sub_180010534(v27, "RenderOutput ColorBuffer");
    v9 = _RTDynamicCast(
           v29,
           0LL,
           &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
           &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
           0);
    v20 = 0LL;
    v10 = *a2;
    v17 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v18 = v27;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    sub_180031D30(v9, (unsigned int)&v18, (unsigned int)&v17, (unsigned int)&v20, v31[0], v31[1]);
    v11 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = sub_1800703D4(v30);
    v28 = 0LL;
    sub_18000F8A8(v12, &v28, 0);
    sub_18006885C(v28, &v29);
    v21 = v28;
    v28 = 0uLL;
    result = sub_18006C6B0(a1, &v21);
    v13 = (volatile signed __int32 *)*((_QWORD *)&v28 + 1);
    if ( *((_QWORD *)&v28 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        result = (unsigned int)_InterlockedDecrement(v13 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v14 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
    if ( *((_QWORD *)&v29 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        result = (unsigned int)_InterlockedDecrement(v14 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
  v15 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
  if ( *((_QWORD *)&v30 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  v16 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return result;
}

/*
 * XREFs of _setlocale_set_cat @ 0x18003FAC0
 * Callers:
 *     sub_18002E840 @ 0x18002E840 (sub_18002E840.c)
 * Callees:
 *     sub_180010534 @ 0x180010534 (sub_180010534.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_18002F66C @ 0x18002F66C (sub_18002F66C.c)
 *     sub_18003E2B8 @ 0x18003E2B8 (sub_18003E2B8.c)
 *     sub_18003EDE0 @ 0x18003EDE0 (sub_18003EDE0.c)
 *     memset @ 0x18012396A (memset.c)
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall setlocale_set_cat(_QWORD *a1, __int64 *a2, int a3, int a4, const char *a5)
{
  int v9; // eax
  __int64 v10; // rbx
  __int64 *v11; // rcx
  ULONG_PTR v12; // rbx
  __int64 v13; // rcx
  const char *v14; // rdx
  __int64 v15; // rbx
  __int64 *v16; // rcx
  ULONG_PTR v17; // rbx
  __int64 v18; // rcx
  const char *v19; // rdx
  __int64 v20; // rbx
  __int64 *v21; // rcx
  __int64 *v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  const char *v25; // rcx
  unsigned __int64 v26; // rdx
  const char *v27; // r8
  const char *v28; // rcx
  __int64 *v30; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v34[4]; // [rsp+50h] [rbp-B0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  EXCEPTION_RECORD v36; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v37; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 *v38; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD v39[5]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v40; // [rsp+1D4h] [rbp+D4h]
  int v41; // [rsp+1DCh] [rbp+DCh]
  __int64 v42; // [rsp+1E0h] [rbp+E0h]
  int v43; // [rsp+1E8h] [rbp+E8h]
  int v44; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v45; // [rsp+1F4h] [rbp+F4h]
  void *retaddr; // [rsp+248h] [rbp+148h]

  v34[1] = a1;
  v34[2] = a5;
  v31 = 0;
  v9 = sub_18002F66C(1, 0);
  v39[0] = a3;
  v39[1] = a4;
  v39[2] = 1;
  v39[3] = 1;
  v39[4] = v9;
  v41 = 0;
  v42 = 64LL;
  v43 = 0;
  v40 = 1LL;
  v37 = 0LL;
  v10 = *sub_180029F64(*a2, &v32);
  v11 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
  }
  v12 = (*(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 **))(*(_QWORD *)v10 + 40LL))(v10, v39, 0LL, &v37);
  v13 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  sub_18002BE74(*a2, v12);
  if ( (v12 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v12;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v14 = a5;
  if ( *((_QWORD *)a5 + 3) >= 0x10uLL )
    v14 = *(const char **)a5;
  sub_180010534(v37, v14);
  v44 = 0;
  v45 = 5LL;
  v38 = 0LL;
  v15 = *sub_180029F64(*a2, &v33);
  v16 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  }
  v17 = (*(int (__fastcall **)(__int64, __int64 *, int *, __int64 **))(*(_QWORD *)v15 + 80LL))(v15, v37, &v44, &v38);
  v18 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  sub_18002BE74(*a2, v17);
  if ( (v17 & 0x80000000) != 0LL )
  {
    memset(&v36, 0, sizeof(v36));
    v36.ExceptionCode = -532265403;
    v36.ExceptionAddress = retaddr;
    v36.NumberParameters = 1;
    v36.ExceptionInformation[0] = v17;
    RaiseFailFastException(&v36, 0LL, 0);
  }
  v19 = a5;
  if ( *((_QWORD *)a5 + 3) >= 0x10uLL )
    v19 = *(const char **)a5;
  sub_180010534(v38, v19);
  *(_OWORD *)a1 = 0LL;
  sub_18003E2B8(*a2, a1);
  v31 = 1;
  v20 = _RTDynamicCast(
          *a1,
          0LL,
          &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
          1);
  v30 = v37;
  if ( v37 )
    (*(void (__fastcall **)(__int64 *))(*v37 + 8))(v37);
  v34[0] = v38;
  if ( v38 )
    (*(void (__fastcall **)(__int64 *))(*v38 + 8))(v38);
  sub_18003EDE0(v20, v34, (__int64 *)&v30, 5u);
  v21 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
  }
  v22 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
  }
  v23 = *((_QWORD *)a5 + 3);
  if ( v23 >= 0x10 )
  {
    v24 = v23 + 1;
    v25 = *(const char **)a5;
    if ( v24 >= 0x1000 )
    {
      v26 = v24 + 39;
      v27 = (const char *)*((_QWORD *)v25 - 1);
      v28 = (const char *)(v25 - v27);
      if ( (unsigned __int64)(v28 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v28, v26);
        JUMPOUT(0x18003FE74LL);
      }
      v25 = v27;
    }
    j_j__o_free(v25);
  }
  *((_QWORD *)a5 + 2) = 0LL;
  *((_QWORD *)a5 + 3) = 15LL;
  *a5 = 0;
  return a1;
}

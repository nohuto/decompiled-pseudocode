/*
 * XREFs of sub_18002CC84 @ 0x18002CC84
 * Callers:
 *     sub_180029190 @ 0x180029190 (sub_180029190.c)
 * Callees:
 *     sub_18000F54C @ 0x18000F54C (sub_18000F54C.c)
 *     sub_180010454 @ 0x180010454 (sub_180010454.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180029D9C @ 0x180029D9C (sub_180029D9C.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_18002CC84(_QWORD *a1, __int64 *a2, int a3, int a4, __int64 **a5, const char *a6)
{
  const char *v10; // rdx
  __int64 v11; // rdi
  __int64 *v12; // rcx
  ULONG_PTR v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 *v16; // rcx
  ULONG_PTR v17; // rdi
  __int64 v18; // rcx
  const char *v19; // rdx
  __int64 v20; // rdi
  __int64 *v21; // rcx
  __int64 *v22; // rcx
  __int64 *v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  const char *v26; // rcx
  unsigned __int64 v27; // rdx
  const char *v28; // r8
  const char *v29; // rcx
  __int64 *v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v36; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A0h]
  _BYTE v38[20]; // [rsp+70h] [rbp-90h]
  int v39; // [rsp+84h] [rbp-7Ch]
  char v40[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  _QWORD *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+C0h] [rbp-40h] BYREF
  EXCEPTION_RECORD v46; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v47; // [rsp+200h] [rbp+100h] BYREF
  __int64 *v48; // [rsp+208h] [rbp+108h] BYREF
  __int128 v49; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v50[20]; // [rsp+220h] [rbp+120h]
  __int64 v51; // [rsp+234h] [rbp+134h]
  _OWORD v52[2]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v53; // [rsp+260h] [rbp+160h]
  int v54; // [rsp+268h] [rbp+168h]
  void *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v43 = a1;
  v44 = (__int64)a6;
  v32 = 0;
  v10 = a6;
  if ( *((_QWORD *)a6 + 3) >= 0x10uLL )
    v10 = *(const char **)a6;
  sub_180010454(*a5, v10);
  v39 = 0;
  *(_DWORD *)v38 = sub_180029D9C(16, 0);
  *(_QWORD *)&v37 = __PAIR64__(a4, a3);
  *((_QWORD *)&v37 + 1) = 0x100000001LL;
  *(_OWORD *)&v38[4] = 1uLL;
  v49 = v37;
  *(_OWORD *)v50 = *(_OWORD *)v38;
  v51 = 0x20000LL;
  *(_QWORD *)&v50[12] = 3LL;
  v48 = 0LL;
  v11 = *sub_180024694(*a2, &v33);
  v12 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  }
  v13 = (*(int (__fastcall **)(__int64, __int128 *, _QWORD, __int64 **))(*(_QWORD *)v11 + 40LL))(v11, &v49, 0LL, &v48);
  v14 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  sub_1800265A4(*a2, v13);
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_180010454(v48, "BackBufferStaging");
  v47 = 0LL;
  v15 = *sub_180024694(*a2, &v34);
  v16 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
  }
  v17 = (*(int (__fastcall **)(__int64, __int64 *, _QWORD, __int64 **))(*(_QWORD *)v15 + 72LL))(v15, *a5, 0LL, &v47);
  v18 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  sub_1800265A4(*a2, v17);
  if ( (v17 & 0x80000000) != 0LL )
  {
    memset(&v46, 0, sizeof(v46));
    v46.ExceptionCode = -532265403;
    v46.ExceptionAddress = retaddr;
    v46.NumberParameters = 1;
    v46.ExceptionInformation[0] = v17;
    RaiseFailFastException(&v46, 0LL, 0);
  }
  v19 = a6;
  if ( *((_QWORD *)a6 + 3) >= 0x10uLL )
    v19 = *(const char **)a6;
  sub_180010454(v47, v19);
  *(_OWORD *)a1 = 0LL;
  sub_18000F54C(*a2, a1);
  v32 = 1;
  v42 = 15LL;
  v41 = 6LL;
  strcpy(v40, "Output");
  sub_1800628C4(*a1, v40);
  v20 = _RTDynamicCast(
          *a1,
          0LL,
          &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
          1);
  v31 = v48;
  if ( v48 )
    (*(void (__fastcall **)(__int64 *))(*v48 + 8))(v48);
  v21 = *a5;
  v35 = v21;
  if ( v21 )
    (*(void (__fastcall **)(__int64 *))(*v21 + 8))(v21);
  v36 = v47;
  if ( v47 )
    (*(void (__fastcall **)(__int64 *))(*v47 + 8))(v47);
  sub_18002C460(v20, (__int64 *)&v36, &v35, &v31, a3, a4);
  memset(v52, 0, sizeof(v52));
  v53 = 0LL;
  v54 = 0;
  (*(void (__fastcall **)(__int64 *, _OWORD *))(**a5 + 80))(*a5, v52);
  v22 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
  }
  v23 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
  }
  v24 = *((_QWORD *)a6 + 3);
  if ( v24 >= 0x10 )
  {
    v25 = v24 + 1;
    v26 = *(const char **)a6;
    if ( v25 >= 0x1000 )
    {
      v27 = v25 + 39;
      v28 = (const char *)*((_QWORD *)v26 - 1);
      v29 = (const char *)(v26 - v28);
      if ( (unsigned __int64)(v29 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v29, v27);
        JUMPOUT(0x18002D0E3LL);
      }
      v26 = v28;
    }
    j_j__o_free(v26);
  }
  *((_QWORD *)a6 + 2) = 0LL;
  *((_QWORD *)a6 + 3) = 15LL;
  *a6 = 0;
  return a1;
}

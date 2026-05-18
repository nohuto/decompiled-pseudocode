/*
 * XREFs of sub_180034E48 @ 0x180034E48
 * Callers:
 *     sub_1800344B0 @ 0x1800344B0 (sub_1800344B0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_18002F66C @ 0x18002F66C (sub_18002F66C.c)
 *     sub_180033634 @ 0x180033634 (sub_180033634.c)
 *     sub_180035708 @ 0x180035708 (sub_180035708.c)
 *     sub_18003663C @ 0x18003663C (sub_18003663C.c)
 *     sub_180068114 @ 0x180068114 (sub_180068114.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     memset @ 0x18012396A (memset.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_DWORD *__fastcall sub_180034E48(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  __int64 v12; // rbx
  unsigned int v13; // r15d
  char v14; // di
  int v15; // edx
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  unsigned int v20; // eax
  int v21; // ecx
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rdx
  signed __int32 v26; // eax
  __int64 *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rax
  bool v30; // cf
  int v31; // eax
  ULONG_PTR v32; // r15
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  _DWORD *result; // rax
  int v39; // edx
  __int64 v40; // rbx
  _QWORD *v41; // rdi
  _QWORD *v42; // rcx
  _QWORD *v43; // r14
  __int64 v44; // rcx
  unsigned int v45; // eax
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+48h] [rbp-B8h]
  __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v49; // [rsp+58h] [rbp-A8h]
  __int128 v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+78h] [rbp-88h]
  __int128 v52; // [rsp+80h] [rbp-80h]
  char v53; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v54[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v56[5]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v58; // [rsp+130h] [rbp+30h] BYREF
  __int128 v59; // [rsp+140h] [rbp+40h]
  int v60; // [rsp+150h] [rbp+50h]
  __int128 v61; // [rsp+160h] [rbp+60h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+170h] [rbp+70h] BYREF
  __int64 v63; // [rsp+210h] [rbp+110h] BYREF
  __int64 *v64; // [rsp+218h] [rbp+118h] BYREF
  int v65; // [rsp+220h] [rbp+120h] BYREF
  int v66; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v67; // [rsp+230h] [rbp+130h] BYREF
  int v68; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v69; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v70; // [rsp+248h] [rbp+148h] BYREF
  __int128 v71; // [rsp+250h] [rbp+150h] BYREF
  void *retaddr; // [rsp+2A8h] [rbp+1A8h]

  LODWORD(v64) = a2;
  v12 = a7;
  v13 = a6;
  v14 = a8;
  v66 = a2;
  v70 = a3;
  v69 = a4;
  v68 = a6;
  v67 = a7;
  v65 = a8;
  v47 = a9;
  LODWORD(v46) = a8 & 1;
  if ( (a8 & 1) != 0 && a6 == 17 )
  {
    sub_18000FE28(v56);
    v45 = (unsigned int)sub_18000FE28(v55);
    sub_1800D1210((unsigned int)pExceptionObject, v45, 755, (unsigned int)v56, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *((_QWORD *)&v50 + 1) = 0LL;
  v51 = 0;
  LODWORD(v49) = a3;
  *(_QWORD *)((char *)&v49 + 4) = a4;
  HIDWORD(v49) = 1;
  if ( (unsigned int)(a6 - 23) <= 1 )
    v15 = 2;
  else
    v15 = (a8 & 8) != 0;
  v16 = sub_18002F66C(a6, v15);
  if ( v16 == 45 )
  {
    v16 = 44;
  }
  else if ( v16 == 40 )
  {
    v16 = 39;
  }
  LODWORD(v50) = v16;
  v17 = 0;
  v18 = v54;
  do
    *v18++ = v17++;
  while ( v17 < 4 );
  DWORD1(v50) = v54[v12];
  if ( (unsigned int)(v12 - 2) <= 1 )
  {
    v19 = HIDWORD(v50) | 0x10000;
    HIDWORD(v50) |= 0x10000u;
    if ( (_DWORD)v12 == 3 )
      HIDWORD(v50) = v19 | 0x20000;
  }
  if ( (_DWORD)v46 )
    DWORD2(v50) |= 8u;
  v58 = v49;
  v59 = v50;
  v60 = 0;
  DWORD2(v58) = a5;
  if ( (v14 & 0x20) != 0 )
  {
    v20 = a3;
    if ( a3 < a4 )
      v20 = a4;
    v21 = 0;
    while ( v20 > 1 )
    {
      v20 >>= 1;
      ++v21;
    }
    HIDWORD(v58) = v21 != -1;
    v60 = 1;
    DWORD2(v59) |= 0x20u;
    *(_BYTE *)(a1 + 208) = 1;
  }
  *(_QWORD *)&v61 = v47;
  DWORD2(v61) = (_DWORD)v64;
  HIDWORD(v61) = sub_18003663C(v13, a3, a4, &v66);
  if ( (v14 & 0x20) != 0 )
  {
    v22 = 4LL * *(_QWORD *)(a1 + 200) / 3uLL;
    *(_QWORD *)(a1 + 200) = v22;
  }
  else
  {
    v22 = *(_QWORD *)(a1 + 200);
  }
  sub_180068114(a1, v22, (v14 & 6) != 0 ? 3 : 11);
  v71 = v61;
  v63 = 0LL;
  v52 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = *(_QWORD *)(a1 + 80);
  if ( v25 )
  {
    while ( 1 )
    {
      v26 = *(_DWORD *)(v25 + 8);
      if ( !v26 )
        break;
      if ( v26 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26) )
      {
        v23 = *(_QWORD *)(a1 + 72);
        v24 = *(volatile signed __int32 **)(a1 + 80);
        if ( v24 )
          _InterlockedIncrement(v24 + 2);
        break;
      }
    }
  }
  *(_QWORD *)&v52 = v23;
  *((_QWORD *)&v52 + 1) = v24;
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  v64 = 0LL;
  sub_180029F64(v23, &v64);
  v27 = v64;
  v28 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = *v27;
  v30 = v47 != 0;
  v47 = -v47;
  v31 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, unsigned __int64, __int64 *))(v29 + 48))(
          v27,
          &v58,
          (unsigned __int64)&v71 & -(__int64)v30,
          &v63);
  v32 = v31;
  sub_18002BE74(v23, v31);
  if ( (v32 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v32;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v33 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
  }
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  v48 = 0LL;
  sub_180033634(&v48, &v70, &v69, &a5, &v68, &v65, &v67);
  v46 = 0LL;
  sub_180035708(a1, (unsigned int)&v46, v63, v65, HIDWORD(v58));
  v34 = v63;
  v63 = 0LL;
  v35 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 176) = v34;
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  v36 = v46;
  v46 = 0LL;
  v37 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = v36;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  result = operator new(0x10uLL);
  v47 = (__int64)result;
  if ( result )
  {
    v39 = HIDWORD(v58);
    v40 = 0LL;
    *(_QWORD *)result = v48;
    result[2] = v39;
    result[3] = 1;
  }
  else
  {
    v40 = v48;
  }
  v41 = result;
  v42 = (_QWORD *)(a1 + 112);
  if ( (char *)(a1 + 112) != &v53 )
  {
    v41 = 0LL;
    v43 = (_QWORD *)*v42;
    *v42 = result;
    if ( !v43 )
      goto LABEL_64;
    if ( *v43 )
      j__o_free(*v43);
    j__o_free(v43);
    result = 0LL;
  }
  if ( result )
  {
    if ( *v41 )
      j__o_free(*v41);
    result = (_DWORD *)j__o_free(v41);
  }
LABEL_64:
  if ( v40 )
    result = (_DWORD *)j__o_free(v40);
  v44 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    return (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  return result;
}

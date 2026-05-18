/*
 * XREFs of sub_18002ED04 @ 0x18002ED04
 * Callers:
 *     sub_18002EBE0 @ 0x18002EBE0 (sub_18002EBE0.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x18000FF40 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_103 @ 0x1800135FC (unknown_libname_103.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     ?data@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x180026E34 (-data@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAPEBDXZ.c)
 *     sub_180026F44 @ 0x180026F44 (sub_180026F44.c)
 *     unknown_libname_104 @ 0x18002BD80 (unknown_libname_104.c)
 *     sub_18002DA20 @ 0x18002DA20 (sub_18002DA20.c)
 *     sub_18002DEE4 @ 0x18002DEE4 (sub_18002DEE4.c)
 *     sub_18002E920 @ 0x18002E920 (sub_18002E920.c)
 *     sub_18002FB34 @ 0x18002FB34 (sub_18002FB34.c)
 *     sub_180030CCC @ 0x180030CCC (sub_180030CCC.c)
 *     sub_180030D6C @ 0x180030D6C (sub_180030D6C.c)
 *     sub_1800312E8 @ 0x1800312E8 (sub_1800312E8.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     sub_180062844 @ 0x180062844 (sub_180062844.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     sub_1800CB9E8 @ 0x1800CB9E8 (sub_1800CB9E8.c)
 *     _o_pow @ 0x18011E070 (_o_pow.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
char __fastcall sub_18002ED04(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // ecx
  unsigned int v8; // r15d
  unsigned int i; // eax
  unsigned int v10; // edi
  unsigned int v11; // r13d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  double v17; // xmm0_8
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  volatile signed __int32 *v25; // rdi
  __int64 v26; // rdx
  signed __int32 v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 j; // rcx
  __int64 v31; // rdx
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // rcx
  int v35; // r15d
  __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rbx
  __int64 *v46; // rcx
  _QWORD *v47; // r15
  signed __int32 v48; // eax
  __int64 v49; // rcx
  bool v50; // zf
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  unsigned int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // eax
  __int64 v64; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v65; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v67; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v69; // [rsp+60h] [rbp-A0h]
  unsigned int v70; // [rsp+64h] [rbp-9Ch]
  __int64 v71; // [rsp+68h] [rbp-98h]
  __int128 v72; // [rsp+70h] [rbp-90h]
  __int64 v73; // [rsp+80h] [rbp-80h]
  __int64 v74[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v75[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v76[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v77[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v78[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v79[4]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v80[4]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v81[5]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v82[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v83[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+210h] [rbp+110h] BYREF
  char v85[48]; // [rsp+250h] [rbp+150h] BYREF
  __int128 v86; // [rsp+280h] [rbp+180h] BYREF
  __int128 v87; // [rsp+290h] [rbp+190h] BYREF
  __int64 v88; // [rsp+2A0h] [rbp+1A0h]
  int v89; // [rsp+2A8h] [rbp+1A8h]
  __int64 v90; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int128 v91; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v92; // [rsp+2C8h] [rbp+1C8h]
  _QWORD v93[4]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v91 = 0LL;
  v92 = 0LL;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 && *(_DWORD *)(a2 + 16) == 17 )
  {
    sub_18000FD48(v75);
    v61 = (unsigned int)sub_18000FD48(v74);
    sub_1800CB940((unsigned int)v82, v61, 552, (unsigned int)v75, 0);
    throw (Spectre::Engine::EngineException *)v82;
  }
  v6 = sub_18002E920((__int64)v85, a2, *(_DWORD *)(a3 + 48));
  v86 = *(_OWORD *)v6;
  v87 = *(_OWORD *)(v6 + 16);
  v88 = *(_QWORD *)(v6 + 32);
  v89 = *(_DWORD *)(v6 + 40);
  if ( *(_QWORD *)(a3 + 8) )
  {
    v7 = DWORD2(v86);
    if ( (unsigned int)(DWORD2(v86) * HIDWORD(v86)) > (unsigned __int64)((v92 - (__int64)v91) >> 4) )
    {
      sub_18003185C(&v91);
      v7 = DWORD2(v86);
    }
    v8 = 0;
    for ( i = HIDWORD(v86); v8 < i; ++v8 )
    {
      v10 = 0;
      if ( v7 )
      {
        v69 = v8;
        do
        {
          v70 = v10;
          v11 = v8 * *(_DWORD *)(a3 + 48);
          v12 = v10 + v11;
          v13 = (__int64)(*(_QWORD *)(a3 + 32) - *(_QWORD *)(a3 + 24)) >> 5;
          if ( v12 >= v13 || (v14 = *(_QWORD *)(a3 + 24) + 32 * v12, *(_DWORD *)(v14 + 28) != v70) )
            v14 = 0LL;
          if ( v14 )
          {
            v15 = *(_QWORD *)(a3 + 8);
            if ( v15 )
              *(_QWORD *)&v67 = *(_QWORD *)v14 + v15;
            else
              *(_QWORD *)&v67 = 0LL;
            DWORD2(v67) = *(_DWORD *)(v14 + 20);
            v16 = *(_DWORD *)(v14 + 24);
          }
          else
          {
            if ( !v10 )
            {
              sub_18000FD48(v77);
              v62 = (unsigned int)sub_18000FD48(v76);
              sub_1800CB940((unsigned int)v83, v62, 587, (unsigned int)v77, 0);
              throw (Spectre::Engine::EngineException *)v83;
            }
            v17 = o_pow();
            v18 = (int)((double)*(int *)a2 / v17);
            v19 = 1LL;
            if ( v18 > 1 )
              v19 = v18;
            LODWORD(v65) = v19;
            v20 = 1;
            if ( (unsigned int)(int)((double)*(int *)(a2 + 4) / v17) > 1 )
              v20 = (int)((double)*(int *)(a2 + 4) / v17);
            LODWORD(v64) = v20;
            v71 = v8;
            if ( v11 >= v13 || (v21 = *(_QWORD *)(a3 + 24) + 32LL * v11, *(_DWORD *)(v21 + 28)) )
              v21 = 0LL;
            if ( v21 && (v22 = *(_QWORD *)(a3 + 8)) != 0 )
              v23 = *(_QWORD *)v21 + v22;
            else
              v23 = 0LL;
            *(_QWORD *)&v67 = v23;
            DWORD2(v67) = sub_180030CCC(*(unsigned int *)(a2 + 16), v19);
            v16 = sub_180030D6C(*(unsigned int *)(a2 + 16), (unsigned int)v65, (unsigned int)v64, 0LL);
          }
          HIDWORD(v67) = v16;
          if ( v92 == *((_QWORD *)&v91 + 1) )
          {
            sub_18002DA20((const void **)&v91, *((_BYTE **)&v91 + 1), &v67);
          }
          else
          {
            **((_OWORD **)&v91 + 1) = v67;
            *((_QWORD *)&v91 + 1) += 16LL;
          }
          ++v10;
          v7 = DWORD2(v86);
        }
        while ( v10 < DWORD2(v86) );
        i = HIDWORD(v86);
      }
    }
  }
  v72 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = *(_QWORD *)(a1 + 80);
  if ( v26 )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(v26 + 8);
      if ( !v27 )
        break;
      if ( v27 == _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 8), v27 + 1, v27) )
      {
        v24 = *(_QWORD *)(a1 + 72);
        v25 = *(volatile signed __int32 **)(a1 + 80);
        if ( v25 )
          _InterlockedIncrement(v25 + 2);
        break;
      }
    }
  }
  *(_QWORD *)&v72 = v24;
  *((_QWORD *)&v72 + 1) = v25;
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x40) != 0 )
  {
    (*(void (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v24 + 80LL))(v24, (char *)&v87 + 4, (char *)&v87 + 8);
    v28 = DWORD1(v87);
  }
  else
  {
    v28 = 1LL;
    *(_QWORD *)((char *)&v87 + 4) = 1LL;
  }
  v29 = 0LL;
  for ( j = v91; j != *((_QWORD *)&v91 + 1); j += 16LL )
    v29 += *(unsigned int *)(j + 12);
  v31 = v29 * v28;
  *(_QWORD *)(a1 + 200) = v31;
  sub_180062844(a1, v31, (*(_DWORD *)(a2 + 20) & 6) != 0 ? 3 : 11);
  v90 = 0LL;
  v32 = v91;
  if ( (_QWORD)v91 == *((_QWORD *)&v91 + 1) )
    v32 = 0LL;
  v33 = *sub_180024694(v24, &v65);
  v34 = v90;
  if ( v90 )
  {
    v90 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *))(*(_QWORD *)v33 + 40LL))(
          v33,
          &v86,
          v32,
          &v90);
  v36 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  sub_1800265A4(v24, v35);
  if ( v35 < 0 )
  {
    sub_18000FD48(v93);
    v54 = unknown_libname_104(v93, " File=");
    unknown_libname_104(v54, "..\\Source\\TextureD3D11.cpp");
    v55 = unknown_libname_104(v93, " Line=");
    unknown_libname_104(v55, "626");
    v56 = unknown_libname_104(v93, " Message=");
    unknown_libname_104(v56, "\"TextureD3D11::CreateRendererResources2D(): unable to create texture(2D)\"");
    sub_1800312E8(v78, &v86, &v91);
    v57 = unknown_libname_104(v93, " Details=\"");
    v58 = (_QWORD *)unknown_libname_103(v57);
    unknown_libname_104(v58, "\"");
    std::string::_Tidy_deallocate(v78);
    sub_180026F44(v79, v35);
    v59 = unknown_libname_104(v93, " HRESULT=");
    unknown_libname_103(v59);
    std::string::_Tidy_deallocate(v79);
    std::string::data(v93);
    sub_18000FD48(v81);
    v60 = (unsigned int)sub_18000FD48(v80);
    sub_1800CB9E8((unsigned int)pExceptionObject, v60, 626, v35, (__int64)v81, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v37 = (__int64 *)sub_18002FB34(a1, (unsigned int)&v64, v90, *(_DWORD *)(a2 + 20), DWORD2(v86));
  v38 = 0LL;
  if ( &v66 != v37 )
  {
    v38 = *v37;
    *v37 = 0LL;
  }
  v66 = *(_QWORD *)(a1 + 160);
  v39 = v66;
  *(_QWORD *)(a1 + 160) = v38;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  v40 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v41 = v90;
  v90 = 0LL;
  v73 = *(_QWORD *)(a1 + 168);
  v42 = v73;
  *(_QWORD *)(a1 + 168) = v41;
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  v43 = operator new(0x10uLL);
  v68 = (__int64)v43;
  if ( v43 )
    v44 = sub_18002DEE4((__int64)v43, a2, SDWORD2(v86), SDWORD1(v87));
  else
    v44 = 0LL;
  v45 = (_QWORD *)v44;
  v68 = v44;
  v46 = (__int64 *)(a1 + 112);
  if ( (__int64 *)(a1 + 112) != &v68 )
  {
    v45 = 0LL;
    v68 = 0LL;
    v47 = (_QWORD *)*v46;
    *v46 = v44;
    if ( !v47 )
      goto LABEL_80;
    if ( *v47 )
      j__o_free(*v47);
    j__o_free(v47);
    v44 = 0LL;
  }
  if ( v44 )
  {
    if ( *v45 )
      j__o_free(*v45);
    j__o_free(v45);
  }
LABEL_80:
  LOBYTE(v48) = (*(_DWORD *)(a2 + 20) & 0x20) != 0;
  *(_BYTE *)(a1 + 208) = v48;
  v49 = v90;
  if ( v90 )
  {
    v90 = 0LL;
    LOBYTE(v48) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  if ( v25 )
  {
    v48 = _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF);
    v50 = v48 == 1;
    LOBYTE(v48) = v48 - 1;
    if ( v50 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      v48 = _InterlockedDecrement(v25 + 3);
      if ( !v48 )
        LOBYTE(v48) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  v51 = v91;
  if ( (_QWORD)v91 )
  {
    v52 = (v92 - v91) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v52 >= 0x1000 )
    {
      v53 = v52 + 39;
      v51 = *(_QWORD *)(v91 - 8);
      if ( (unsigned __int64)(v91 - v51 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v51, v53);
        __debugbreak();
      }
    }
    LOBYTE(v48) = j_j__o_free(v51);
  }
  return v48;
}

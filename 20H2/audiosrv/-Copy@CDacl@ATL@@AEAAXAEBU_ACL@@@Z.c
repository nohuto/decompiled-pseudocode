/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180006F70
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180005FD8 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006A00 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     memcpy_s @ 0x18003440C (memcpy_s.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180044A14 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056070 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18007419B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800BA9DC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800D4A9C (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x1800D4FD8 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x1800D5364 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800D5538 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800D5560 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl::CAccessObjectAce *v4; // rbx
  DWORD i; // r15d
  unsigned int v6; // esi
  char v7; // al
  char *v8; // rbx
  int *v9; // rcx
  __int64 v10; // rdi
  int *v11; // rcx
  __int64 v12; // rdi
  int *v13; // rcx
  __int64 v14; // rdi
  int *v15; // rcx
  __int64 v16; // rdi
  DWORD LengthSid; // eax
  HANDLE ProcessHeap; // rax
  _QWORD *v19; // rdi
  volatile signed __int32 *v20; // rbx
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v22; // r13
  volatile signed __int32 *v23; // rbx
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v25; // r13
  volatile signed __int32 *v26; // rbx
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v28; // r13
  DWORD v29; // eax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rcx
  size_t v32; // rdx
  size_t v33; // rbx
  void *v34; // rax
  void *v35; // r12
  void *v36; // rcx
  size_t v37; // r8
  void *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rdx
  _QWORD *v41; // rdx
  _QWORD *v42; // rdx
  const struct _GUID *v43; // rdi
  const struct _GUID *v44; // rbx
  struct _SID *v45; // rdx
  int v46; // r9d
  __int64 v47; // rbx
  ATL::CDacl::CAccessObjectAce *v48; // rax
  int Error; // eax
  __int64 v50; // rax
  rsize_t v51; // r9
  __int64 v52; // rax
  rsize_t v53; // r9
  __int64 v54; // rax
  rsize_t v55; // r9
  int v56; // eax
  bool v57; // [rsp+40h] [rbp-118h]
  char v58; // [rsp+41h] [rbp-117h]
  ATL::CDacl::CAccessObjectAce *v59; // [rsp+48h] [rbp-110h] BYREF
  int v60; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v61; // [rsp+54h] [rbp-104h]
  LPVOID pAce[2]; // [rsp+58h] [rbp-100h] BYREF
  char *v63; // [rsp+68h] [rbp-F0h]
  PACL pAcl; // [rsp+70h] [rbp-E8h]
  ATL::CDacl::CAccessObjectAce *v65; // [rsp+78h] [rbp-E0h]
  _QWORD *v66; // [rsp+80h] [rbp-D8h]
  char *v67; // [rsp+88h] [rbp-D0h]
  void **v68; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE pDestinationSid[68]; // [rsp+98h] [rbp-C0h] BYREF
  char v70; // [rsp+DCh] [rbp-7Ch]
  int v71; // [rsp+E0h] [rbp-78h]
  void *Source; // [rsp+E8h] [rbp-70h] BYREF
  void *v73; // [rsp+F0h] [rbp-68h] BYREF
  void *v74; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v75; // [rsp+100h] [rbp-58h] BYREF
  DWORD pAclInformation[4]; // [rsp+110h] [rbp-48h] BYREF

  pAce[1] = this;
  pAcl = a2;
  if ( a2 )
  {
    v68 = &ATL::CSid::`vftable';
    v70 = 0;
    v71 = 7;
    Source = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
    v73 = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
    v74 = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
    v75 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    v4 = 0LL;
    v59 = 0LL;
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation)
      || !GetAclInformation(a2, &v60, 4u, AclRevisionInformation) )
    {
LABEL_63:
      ATL::AtlThrowLastWin32();
    }
    *((_DWORD *)this + 5) = v60;
    for ( i = 0; i < pAclInformation[0]; ++i )
    {
      if ( !GetAce(pAcl, i, pAce) )
        goto LABEL_63;
      v6 = *((_DWORD *)pAce[0] + 1);
      v61 = v6;
      v7 = *(_BYTE *)pAce[0];
      if ( !*(_BYTE *)pAce[0] || v7 == 1 )
      {
        v8 = (char *)pAce[0] + 8;
        if ( !v70 || pDestinationSid != v8 )
        {
          v71 = 7;
          v9 = (int *)((char *)Source - 24);
          v10 = *((_QWORD *)Source - 3);
          if ( *((_DWORD *)Source - 4) )
          {
            if ( v9[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v9);
              Source = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) + 24);
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&Source, 0LL);
            }
          }
          v11 = (int *)((char *)v73 - 24);
          v12 = *((_QWORD *)v73 - 3);
          if ( *((_DWORD *)v73 - 4) )
          {
            if ( v11[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v11);
              v73 = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) + 24);
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v73, 0LL);
            }
          }
          v13 = (int *)((char *)v74 - 24);
          v14 = *((_QWORD *)v74 - 3);
          if ( *((_DWORD *)v74 - 4) )
          {
            if ( v13[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v13);
              v74 = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) + 24);
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v74, 0LL);
            }
          }
          v15 = (int *)(v75 - 24);
          v16 = *(_QWORD *)(v75 - 24);
          if ( *(_DWORD *)(v75 - 24 + 8) )
          {
            if ( v15[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v15);
              v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) + 24;
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v75, 0LL);
            }
          }
          v70 = 0;
          if ( !IsValidSid(v8) )
            goto LABEL_105;
          LengthSid = GetLengthSid(v8);
          if ( LengthSid > 0x44 )
            goto LABEL_105;
          v70 = 1;
          if ( !CopySid(LengthSid, pDestinationSid, v8) )
          {
            Error = ATL::AtlHresultFromLastError();
            v70 = 0;
            ATL::AtlThrowImpl(Error);
          }
          v71 = 8;
        }
        ProcessHeap = GetProcessHeap();
        v19 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
        v66 = v19;
        if ( v19 )
        {
          v57 = *(_BYTE *)pAce[0] == 0;
          v58 = *((_BYTE *)pAce[0] + 1);
          *v19 = &ATL::CAcl::CAce::`vftable';
          v67 = (char *)(v19 + 1);
          v19[1] = &ATL::CSid::`vftable';
          *((_BYTE *)v19 + 84) = v70;
          *((_DWORD *)v19 + 22) = v71;
          v63 = (char *)(v19 + 12);
          v20 = (volatile signed __int32 *)Source;
          v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Source - 3) + 32LL))(*((_QWORD *)Source - 3));
          if ( *((int *)v20 - 2) >= 0 && v21 == *((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v20 - 3) )
          {
            v22 = v20 - 6;
            _InterlockedIncrement(v20 - 2);
          }
          else
          {
            v50 = (**v21)(v21, *((unsigned int *)v20 - 4), 2LL);
            v22 = (volatile signed __int32 *)v50;
            if ( !v50 )
              ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
            *(_DWORD *)(v50 + 8) = *((_DWORD *)v20 - 4);
            v51 = 2LL * (*((_DWORD *)v20 - 4) + 1);
            memcpy_s((void *const)(v50 + 24), v51, (const void *const)v20, v51);
          }
          v19[12] = v22 + 6;
          v63 = (char *)(v19 + 13);
          v23 = (volatile signed __int32 *)v73;
          v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v73 - 3) + 32LL))(*((_QWORD *)v73 - 3));
          if ( *((int *)v23 - 2) >= 0 && v24 == *((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v23 - 3) )
          {
            v25 = v23 - 6;
            _InterlockedIncrement(v23 - 2);
          }
          else
          {
            v52 = (**v24)(v24, *((unsigned int *)v23 - 4), 2LL);
            v25 = (volatile signed __int32 *)v52;
            if ( !v52 )
              ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
            *(_DWORD *)(v52 + 8) = *((_DWORD *)v23 - 4);
            v53 = 2LL * (*((_DWORD *)v23 - 4) + 1);
            memcpy_s((void *const)(v52 + 24), v53, (const void *const)v23, v53);
          }
          v19[13] = v25 + 6;
          v63 = (char *)(v19 + 14);
          v26 = (volatile signed __int32 *)v74;
          v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v74 - 3) + 32LL))(*((_QWORD *)v74 - 3));
          if ( *((int *)v26 - 2) >= 0 && v27 == *((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v26 - 3) )
          {
            v28 = v26 - 6;
            _InterlockedIncrement(v26 - 2);
          }
          else
          {
            v54 = (**v27)(v27, *((unsigned int *)v26 - 4), 2LL);
            v28 = (volatile signed __int32 *)v54;
            if ( !v54 )
              ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
            *(_DWORD *)(v54 + 8) = *((_DWORD *)v26 - 4);
            v55 = 2LL * (*((_DWORD *)v26 - 4) + 1);
            memcpy_s((void *const)(v54 + 24), v55, (const void *const)v26, v55);
          }
          v19[14] = v28 + 6;
          v19[15] = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
          if ( v70 )
          {
            if ( !IsValidSid(pDestinationSid) )
              ATL::AtlThrowImpl(-2147024809);
            v29 = GetLengthSid(pDestinationSid);
            if ( !CopySid(v29, v19 + 2, pDestinationSid) )
            {
              v56 = ATL::AtlHresultFromLastError();
              ATL::AtlThrowImpl(v56);
            }
          }
          *((_DWORD *)v19 + 32) = v61;
          *((_BYTE *)v19 + 132) = v58;
          v19[17] = 0LL;
          *v19 = &ATL::CDacl::CAccessAce::`vftable';
          *((_BYTE *)v19 + 144) = v57;
        }
        else
        {
          v19 = 0LL;
        }
        v59 = (ATL::CDacl::CAccessObjectAce *)v19;
        if ( !v19 )
LABEL_106:
          ATL::AtlThrowImpl(-2147024882);
        v30 = *((_QWORD *)this + 4);
        v31 = *((_QWORD *)this + 5);
        if ( v30 >= v31 )
        {
          v32 = v30 + 1;
          if ( v30 + 1 > v31 )
          {
            v33 = *((int *)this + 12);
            if ( *((_QWORD *)this + 3) )
            {
              if ( !*((_DWORD *)this + 12) )
              {
                v33 = v31 >> 1;
                if ( v32 - v31 > v31 >> 1 )
                  v33 = v32 - v31;
              }
              v33 += v31;
              if ( v32 >= v33 )
                v33 = v30 + 1;
              v34 = calloc(v33, 8uLL);
              v35 = v34;
              if ( !v34 )
                goto LABEL_106;
              v36 = (void *)*((_QWORD *)this + 3);
              v37 = 8LL * *((_QWORD *)this + 4);
              if ( v37 )
              {
                if ( !v36 )
                {
                  *(_DWORD *)_o__errno() = 22;
                  invalid_parameter_noinfo();
LABEL_105:
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(v34, *((const void **)this + 3), v37);
                v36 = (void *)*((_QWORD *)this + 3);
              }
              free(v36);
              *((_QWORD *)this + 3) = v35;
            }
            else
            {
              if ( v33 <= v32 )
                v33 = v30 + 1;
              v38 = calloc(v33, 8uLL);
              *((_QWORD *)this + 3) = v38;
              if ( !v38 )
                goto LABEL_106;
            }
            *((_QWORD *)this + 5) = v33;
          }
        }
        v4 = 0LL;
        v59 = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v30) = v19;
        ++*((_QWORD *)this + 4);
      }
      else if ( (unsigned __int8)(v7 - 5) <= 1u )
      {
        v43 = 0LL;
        v44 = 0LL;
        v45 = (struct _SID *)((char *)pAce[0] + 44);
        v46 = *((_DWORD *)pAce[0] + 2);
        if ( (v46 & 1) != 0 )
          v43 = (const struct _GUID *)((char *)pAce[0] + 12);
        else
          v45 = (struct _SID *)((char *)pAce[0] + 28);
        if ( (v46 & 2) != 0 )
        {
          v47 = 28LL;
          if ( !v43 )
            v47 = 12LL;
          v44 = (const struct _GUID *)((char *)pAce[0] + v47);
        }
        else
        {
          v45 = (struct _SID *)((char *)v45 - 16);
        }
        ATL::CSid::operator=((ATL::CSid *)&v68, v45);
        v48 = (ATL::CDacl::CAccessObjectAce *)operator new(0xA8uLL);
        v65 = v48;
        if ( v48 )
          v48 = (ATL::CDacl::CAccessObjectAce *)ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                                                  v48,
                                                  (const struct ATL::CSid *)&v68,
                                                  v6,
                                                  *((_BYTE *)pAce[0] + 1),
                                                  *(_BYTE *)pAce[0] == 5,
                                                  v43,
                                                  v44);
        v59 = v48;
        if ( !v48 )
          goto LABEL_106;
        ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
          (char *)this + 24,
          &v59);
        v4 = v59;
      }
    }
    if ( v4 )
      (**(void (__fastcall ***)(ATL::CDacl::CAccessObjectAce *, __int64))v4)(v4, 1LL);
    v68 = &ATL::CSid::`vftable';
    v39 = (_QWORD *)(v75 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v75 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v39 + 8LL))(*v39);
    v40 = (char *)v74 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v74 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 8LL))(*v40);
    v41 = (char *)v73 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v73 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v41 + 8LL))(*v41);
    v42 = (char *)Source - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Source - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v42 + 8LL))(*v42);
  }
  else
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
    *((_BYTE *)this + 16) = 1;
  }
}

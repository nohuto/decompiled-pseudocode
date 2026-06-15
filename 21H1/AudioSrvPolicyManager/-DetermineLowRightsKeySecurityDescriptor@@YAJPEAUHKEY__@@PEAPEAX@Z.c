/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003B230
 * Callers:
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x1800374CC (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180038A6C (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180038C38 (--1CSid@ATL@@UEAA@XZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180038E40 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x1800390F4 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x1800391A0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18003941C (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ??4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18003A230 (--4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18003A334 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18003A518 (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003A650 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18003A9D0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x18003B128 (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F738 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800406DB (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY a1, void **a2)
{
  void *v3; // r14
  unsigned int v4; // edi
  void *v5; // rax
  LSTATUS KeySecurity; // eax
  bool *v7; // r8
  bool *v8; // r9
  struct _ACL *PACL; // r15
  ATL::CSid *v10; // rdx
  PSECURITY_DESCRIPTOR v11; // r15
  unsigned __int64 SecurityDescriptorLength; // r12
  void *v13; // rax
  HANDLE ProcessHeap; // rax
  void **v16; // [rsp+60h] [rbp-168h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-160h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-158h] BYREF
  void *v19; // [rsp+78h] [rbp-150h]
  void **v20; // [rsp+80h] [rbp-148h]
  _QWORD v21[2]; // [rsp+88h] [rbp-140h] BYREF
  char v22; // [rsp+98h] [rbp-130h]
  int v23; // [rsp+9Ch] [rbp-12Ch]
  __int128 v24; // [rsp+A0h] [rbp-128h]
  __int64 v25; // [rsp+B0h] [rbp-118h]
  int v26; // [rsp+B8h] [rbp-110h]
  _QWORD v27[2]; // [rsp+C0h] [rbp-108h] BYREF
  char v28; // [rsp+D0h] [rbp-F8h]
  int v29; // [rsp+D4h] [rbp-F4h]
  __int128 v30; // [rsp+D8h] [rbp-F0h]
  __int64 v31; // [rsp+E8h] [rbp-E0h]
  int v32; // [rsp+F0h] [rbp-D8h]
  struct _SID_IDENTIFIER_AUTHORITY v33; // [rsp+100h] [rbp-C8h] BYREF
  _BYTE v34[128]; // [rsp+110h] [rbp-B8h] BYREF

  v20 = a2;
  cbSecurityDescriptor = 0;
  v3 = 0LL;
  v4 = 0;
  if ( RegGetKeySecurity(HKEY_CURRENT_USER, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v5 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
    v3 = v5;
    v19 = v5;
    if ( v5 )
    {
      KeySecurity = RegGetKeySecurity(HKEY_CURRENT_USER, 4u, v5, &cbSecurityDescriptor);
      if ( KeySecurity )
      {
        v4 = (unsigned __int16)KeySecurity | 0x80070000;
        if ( KeySecurity <= 0 )
          v4 = KeySecurity;
      }
      else
      {
        v16 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)v33.Value = 0;
        *(_WORD *)&v33.Value[4] = 1280;
        v27[1] = 0LL;
        v28 = 0;
        v29 = 2;
        v27[0] = &ATL::CDacl::`vftable';
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0;
        ATL::CSecurityDesc::operator=((void **)&v16, v3);
        if ( pSecurityDescriptor )
          ATL::CSecurityDesc::GetDacl((PSECURITY_DESCRIPTOR *)&v16, (struct ATL::CDacl *)v27, v7, v8);
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)v27);
        EditAppContainerMask(PACL);
        v21[1] = 0LL;
        v22 = 0;
        v23 = 2;
        v21[0] = &ATL::CDacl::`vftable';
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0;
        ATL::CDacl::Copy((ATL::CDacl *)v21, PACL);
        v10 = ATL::CSid::CSid((ATL::CSid *)v34, &v33, 6u);
        LOBYTE(PACL) = ATL::CDacl::AddAllowedAce((ATL::CDacl *)v21, v10);
        ATL::CSid::~CSid((ATL::CSid *)v34);
        if ( (_BYTE)PACL )
        {
          ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v16, (const struct ATL::CDacl *)v21);
          v11 = pSecurityDescriptor;
          if ( pSecurityDescriptor )
          {
            ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v16);
            v11 = pSecurityDescriptor;
          }
          ATL::CDacl::~CDacl((ATL::CDacl *)v21);
          ATL::CDacl::~CDacl((ATL::CDacl *)v27);
          SecurityDescriptorLength = GetSecurityDescriptorLength(v11);
          v13 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
          *a2 = v13;
          if ( v13 )
            memcpy_0(v13, v11, SecurityDescriptorLength);
          else
            v4 = -2147024882;
          v16 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v16);
        }
        else
        {
          v4 = -2147467259;
          ATL::CDacl::~CDacl((ATL::CDacl *)v21);
          ATL::CDacl::~CDacl((ATL::CDacl *)v27);
          v16 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v16);
        }
      }
    }
    else
    {
      v4 = -2147024882;
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v3);
  return v4;
}

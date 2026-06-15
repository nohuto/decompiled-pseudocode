/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180006478
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180004A90 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x1800049CC (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180006ED0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180007150 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180007410 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180007C18 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180007CC4 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180007DA0 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180007F30 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x180008270 (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     ?SetCount@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x1800371F0 (-SetCount@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccess.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180044280 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ACC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CB1E0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800D621C (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY hKey, struct _ACL *a2)
{
  LSTATUS KeySecurity; // eax
  unsigned int v5; // ebx
  struct _SECURITY_DESCRIPTOR *v6; // rax
  struct _SECURITY_DESCRIPTOR *v7; // rbx
  unsigned int v8; // eax
  PSECURITY_DESCRIPTOR v9; // rcx
  void (__fastcall *v10)(void ***); // rax
  const struct _ACL *v11; // rdi
  struct _ACL *PACL; // rax
  const struct _ACL *v13; // rdi
  const struct ATL::CSid *v14; // rax
  unsigned __int8 v15; // r9
  bool v16; // di
  bool v17; // r8
  void *v18; // rcx
  void *v19; // rcx
  DWORD SecurityDescriptorLength; // edi
  void *v21; // rax
  unsigned int v22; // edi
  int v24; // [rsp+20h] [rbp-1B8h]
  DWORD cbSecurityDescriptor; // [rsp+60h] [rbp-178h] BYREF
  WINBOOL bDaclPresent; // [rsp+64h] [rbp-174h] BYREF
  void **v27; // [rsp+68h] [rbp-170h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+70h] [rbp-168h]
  void **v29; // [rsp+78h] [rbp-160h] BYREF
  void *v30; // [rsp+80h] [rbp-158h]
  char v31; // [rsp+88h] [rbp-150h]
  int v32; // [rsp+8Ch] [rbp-14Ch]
  void *v33[2]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-138h]
  int v35; // [rsp+A8h] [rbp-130h]
  struct _SECURITY_DESCRIPTOR *v36; // [rsp+B0h] [rbp-128h]
  void **v37; // [rsp+B8h] [rbp-120h] BYREF
  void *Block; // [rsp+C0h] [rbp-118h]
  char v39; // [rsp+C8h] [rbp-110h]
  int v40; // [rsp+CCh] [rbp-10Ch]
  void *v41[2]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-F8h]
  int v43; // [rsp+E8h] [rbp-F0h]
  WINBOOL bDaclDefaulted; // [rsp+F0h] [rbp-E8h] BYREF
  PACL pDacl[3]; // [rsp+F8h] [rbp-E0h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v46; // [rsp+110h] [rbp-C8h] BYREF
  _QWORD v47[16]; // [rsp+120h] [rbp-B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  pDacl[1] = a2;
  cbSecurityDescriptor = 0;
  KeySecurity = RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor);
  v5 = KeySecurity;
  if ( KeySecurity == 122 )
  {
    v6 = (struct _SECURITY_DESCRIPTOR *)operator new[](
                                          cbSecurityDescriptor,
                                          (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    v36 = v6;
    if ( !v6 )
    {
      v22 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)0x8007000ELL,
        v24);
      return v22;
    }
    v8 = RegGetKeySecurity(hKey, 4u, v6, &cbSecurityDescriptor);
    if ( v8 )
    {
      v22 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x20E,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)v8,
              v24);
LABEL_20:
      operator delete(v7, (const struct std::nothrow_t *)1);
      return v22;
    }
    v27 = &ATL::CSecurityDesc::`vftable';
    pSecurityDescriptor = 0LL;
    v9 = 0LL;
    if ( v7 )
    {
      ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v27);
      ATL::CSecurityDesc::Init((ATL::CSecurityDesc *)&v27, v7);
      v9 = pSecurityDescriptor;
    }
    v30 = 0LL;
    v31 = 0;
    v32 = 2;
    v29 = &ATL::CDacl::`vftable';
    *(_OWORD *)v33 = 0LL;
    v34 = 0LL;
    v35 = 0;
    if ( v9 && GetSecurityDescriptorDacl(v9, &bDaclPresent, pDacl, &bDaclDefaulted) )
    {
      v10 = (void (__fastcall *)(void ***))v29[2];
      if ( bDaclPresent )
      {
        v11 = pDacl[0];
        v10(&v29);
        if ( v11 )
          ATL::CDacl::Copy((ATL::CDacl *)&v29, v11);
        else
          v31 = 1;
      }
      else
      {
        v10(&v29);
        v31 = 0;
      }
    }
    PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)&v29);
    v13 = PACL;
    if ( PACL )
    {
      EditAppContainerMask(PACL);
      Block = 0LL;
      v39 = 0;
      v40 = 2;
      v37 = &ATL::CDacl::`vftable';
      *(_OWORD *)v41 = 0LL;
      v42 = 0LL;
      v43 = 0;
      ATL::CDacl::Copy((ATL::CDacl *)&v37, v13);
      *(_DWORD *)v46.Value = 0;
      *(_WORD *)&v46.Value[4] = 1280;
      v14 = (const struct ATL::CSid *)ATL::CSid::CSid((ATL::CSid *)v47, &v46, 6u);
      v16 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)&v37, v14, 0x10000000u, v15);
      v47[0] = &ATL::CSid::`vftable';
      ATL::CStringData::Release((ATL::CStringData *)(v47[14] - 24LL));
      ATL::CStringData::Release((ATL::CStringData *)(v47[13] - 24LL));
      ATL::CStringData::Release((ATL::CStringData *)(v47[12] - 24LL));
      ATL::CStringData::Release((ATL::CStringData *)(v47[11] - 24LL));
      if ( !v16 )
      {
        ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v27, (const struct ATL::CDacl *)&v37, v17);
        ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v27);
        v37 = &ATL::CDacl::`vftable';
        ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::SetCount(v41);
        free(Block);
        v18 = 0LL;
        Block = 0LL;
        if ( v41[0] )
        {
          ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
            v41[0],
            v41[1]);
          free(v41[0]);
          v18 = Block;
        }
        v37 = &ATL::CAcl::`vftable';
        free(v18);
        v29 = &ATL::CDacl::`vftable';
        ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::SetCount(v33);
        free(v30);
        v19 = 0LL;
        v30 = 0LL;
        if ( v33[0] )
        {
          ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
            v33[0],
            v33[1]);
          free(v33[0]);
          v19 = v30;
        }
        v29 = &ATL::CAcl::`vftable';
        free(v19);
        SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
        v21 = operator new[](SecurityDescriptorLength, (const struct std::nothrow_t *)&std::nothrow);
        *a2 = (struct _ACL)v21;
        if ( v21 )
        {
          memcpy_0(v21, pSecurityDescriptor, SecurityDescriptorLength);
          v22 = 0;
        }
        else
        {
          v22 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x235,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x8007000ELL,
            -1618417719);
        }
        v27 = &ATL::CSecurityDesc::`vftable';
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v27);
        goto LABEL_20;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x222,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)0x80004005LL,
        -1618417719);
      ATL::CDacl::~CDacl((void **)&v37);
      ATL::CDacl::~CDacl((void **)&v29);
      v27 = &ATL::CSecurityDesc::`vftable';
      ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v27);
      operator delete(v7, (const struct std::nothrow_t *)1);
      return 2147500037LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21A,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)0x80070057LL,
        v24);
      ATL::CDacl::~CDacl((void **)&v29);
      v27 = &ATL::CSecurityDesc::`vftable';
      ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v27);
      operator delete(v7, (const struct std::nothrow_t *)1);
      return 2147942487LL;
    }
  }
  else
  {
    if ( KeySecurity > 0 )
      v5 = (unsigned __int16)KeySecurity | 0x80070000;
    if ( (v5 & 0x80000000) != 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x208,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v5,
        v24);
    return v5;
  }
}

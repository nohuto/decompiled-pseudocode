/*
 * XREFs of ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180007DA0
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180006278 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180006478 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ @ 0x180004A34 (-AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180007F30 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180008094 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18006B61E (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800D61C8 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800D61F0 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::SetDacl(ATL::CSecurityDesc *this, const struct ATL::CDacl *a2)
{
  void *v4; // rcx
  struct _ACL *PACL; // rax
  unsigned int v6; // eax
  __int64 v7; // rsi
  struct _ACL *v8; // rdi
  const struct _ACL *v9; // rax
  BOOL v10; // edx
  __int64 v11; // rcx
  int Error; // ebx
  PACL pDacl; // [rsp+20h] [rbp-48h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+28h] [rbp-40h] BYREF
  WINBOOL bDaclPresent; // [rsp+2Ch] [rbp-3Ch] BYREF
  _BYTE pAclInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+34h] [rbp-34h]

  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ATL::CSecurityDesc::MakeAbsolute(this);
    v4 = (void *)*((_QWORD *)this + 1);
  }
  pDacl = 0LL;
  if ( v4 )
  {
    if ( !GetSecurityDescriptorDacl(v4, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      ATL::AtlThrowLastWin32();
  }
  else
  {
    ATL::CSecurityDesc::AllocateAndInitializeSecurityDescriptor(this);
  }
  if ( *((_BYTE *)a2 + 16) || !(*(unsigned int (__fastcall **)(const struct ATL::CDacl *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    v8 = 0LL;
  }
  else
  {
    PACL = (struct _ACL *)ATL::CAcl::GetPACL(a2);
    if ( *((_BYTE *)a2 + 16) )
    {
      v6 = 0;
    }
    else
    {
      if ( !GetAclInformation(PACL, pAclInformation, 0xCu, AclSizeInformation) )
        ATL::AtlThrowLastWin32();
      v6 = Size;
    }
    v7 = v6;
    v8 = (struct _ACL *)malloc(v6);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = ATL::CAcl::GetPACL(a2);
    if ( v7 )
    {
      if ( !v9 )
      {
        memset_0(v8, 0, (unsigned int)v7);
        *(_DWORD *)_o__errno(v11) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0(v8, v9, (unsigned int)v7);
    }
  }
  v10 = *((_BYTE *)a2 + 16) || v8;
  if ( !SetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), v10, v8, 0) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(v8);
    ATL::AtlThrowImpl(Error);
  }
  free(pDacl);
}

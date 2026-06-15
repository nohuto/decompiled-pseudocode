/*
 * XREFs of ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003A750
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18003A334 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18003A9D0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18003BB9C (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18003BBC8 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::MakeAbsolute(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // r15
  DWORD v5; // ecx
  void *v6; // rax
  void *pOwner; // r12
  DWORD v8; // eax
  void *pPrimaryGroup; // r14
  DWORD v10; // eax
  struct _ACL *v11; // rsi
  DWORD v12; // eax
  struct _ACL *pSacl; // rdi
  int Error; // ebx
  DWORD dwDaclSize; // [rsp+60h] [rbp-18h] BYREF
  DWORD dwAbsoluteSecurityDescriptorSize; // [rsp+64h] [rbp-14h] BYREF
  DWORD dwRevision[4]; // [rsp+68h] [rbp-10h] BYREF
  WORD pControl; // [rsp+C0h] [rbp+48h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+C8h] [rbp+50h] BYREF
  DWORD dwOwnerSize; // [rsp+D0h] [rbp+58h] BYREF
  DWORD dwSaclSize; // [rsp+D8h] [rbp+60h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    pControl = 0;
    if ( !GetSecurityDescriptorControl(v2, &pControl, dwRevision) )
      goto LABEL_29;
    if ( (pControl & 0x8000u) == 0 )
      return;
    v3 = (void *)*((_QWORD *)this + 1);
    dwSaclSize = 0;
    dwDaclSize = 0;
    dwPrimaryGroupSize = 0;
    dwOwnerSize = 0;
    dwAbsoluteSecurityDescriptorSize = 0;
    MakeAbsoluteSD(
      v3,
      0LL,
      &dwAbsoluteSecurityDescriptorSize,
      0LL,
      &dwDaclSize,
      0LL,
      &dwSaclSize,
      0LL,
      &dwOwnerSize,
      0LL,
      &dwPrimaryGroupSize);
    if ( GetLastError() != 122 )
      ATL::AtlThrowLastWin32();
    v4 = malloc(dwAbsoluteSecurityDescriptorSize);
    if ( !v4 )
      goto LABEL_29;
    v5 = dwOwnerSize;
    if ( dwOwnerSize )
    {
      v6 = malloc(dwOwnerSize);
      v5 = dwOwnerSize;
      pOwner = v6;
    }
    else
    {
      pOwner = 0LL;
    }
    if ( v5 && !pOwner )
      goto LABEL_29;
    v8 = dwPrimaryGroupSize;
    if ( dwPrimaryGroupSize )
    {
      pPrimaryGroup = malloc(dwPrimaryGroupSize);
      v8 = dwPrimaryGroupSize;
    }
    else
    {
      pPrimaryGroup = 0LL;
    }
    if ( v8 && !pPrimaryGroup
      || ((v10 = dwDaclSize) == 0
        ? (v11 = 0LL)
        : (struct _ACL *)(v11 = (struct _ACL *)malloc(dwDaclSize), v10 = dwDaclSize),
          v10 && !v11
       || ((v12 = dwSaclSize) == 0
         ? (pSacl = 0LL)
         : (struct _ACL *)(pSacl = (struct _ACL *)malloc(dwSaclSize), v12 = dwSaclSize),
           v12 && !pSacl)) )
    {
LABEL_29:
      ATL::AtlThrowImpl(-2147467259);
    }
    if ( !MakeAbsoluteSD(
            *((PSECURITY_DESCRIPTOR *)this + 1),
            v4,
            &dwAbsoluteSecurityDescriptorSize,
            v11,
            &dwDaclSize,
            pSacl,
            &dwSaclSize,
            pOwner,
            &dwOwnerSize,
            pPrimaryGroup,
            &dwPrimaryGroupSize) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(v4);
      free(pOwner);
      free(pPrimaryGroup);
      free(v11);
      free(pSacl);
      ATL::AtlThrowImpl(Error);
    }
    ATL::CSecurityDesc::Clear(this);
    *((_QWORD *)this + 1) = v4;
  }
}

/*
 * XREFs of ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18003A9D0
 * Callers:
 *     ??_GCSecurityDesc@ATL@@UEAAPEAXI@Z @ 0x18003A1D0 (--_GCSecurityDesc@ATL@@UEAAPEAXI@Z.c)
 *     ??1CSecurityDesc@ATL@@UEAA@XZ @ 0x18003A218 (--1CSecurityDesc@ATL@@UEAA@XZ.c)
 *     ??4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18003A230 (--4CSecurityDesc@ATL@@QEAAAEAV01@AEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003A650 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18003A750 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003B230 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSecurityDesc::Clear(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  PSID pGroup; // [rsp+20h] [rbp-20h] BYREF
  PACL pDacl; // [rsp+28h] [rbp-18h] BYREF
  PACL pSacl; // [rsp+30h] [rbp-10h] BYREF
  WORD pControl; // [rsp+60h] [rbp+20h] BYREF
  DWORD dwRevision; // [rsp+68h] [rbp+28h] BYREF
  WINBOOL bDaclPresent; // [rsp+70h] [rbp+30h] BYREF
  PSID pOwner; // [rsp+78h] [rbp+38h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    pControl = 0;
    if ( GetSecurityDescriptorControl(v2, &pControl, &dwRevision) && (pControl & 0x8000u) == 0 )
    {
      GetSecurityDescriptorOwner(*((PSECURITY_DESCRIPTOR *)this + 1), &pOwner, (LPBOOL)&dwRevision);
      free(pOwner);
      GetSecurityDescriptorGroup(*((PSECURITY_DESCRIPTOR *)this + 1), &pGroup, (LPBOOL)&dwRevision);
      free(pGroup);
      GetSecurityDescriptorDacl(*((PSECURITY_DESCRIPTOR *)this + 1), &bDaclPresent, &pDacl, (LPBOOL)&dwRevision);
      if ( bDaclPresent )
        free(pDacl);
      GetSecurityDescriptorSacl(*((PSECURITY_DESCRIPTOR *)this + 1), &bDaclPresent, &pSacl, (LPBOOL)&dwRevision);
      if ( bDaclPresent )
        free(pSacl);
    }
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}

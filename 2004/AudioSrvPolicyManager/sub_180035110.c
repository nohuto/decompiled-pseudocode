/*
 * XREFs of sub_180035110 @ 0x180035110
 * Callers:
 *     sub_180034910 @ 0x180034910 (sub_180034910.c)
 *     sub_180034958 @ 0x180034958 (sub_180034958.c)
 *     sub_180034970 @ 0x180034970 (sub_180034970.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     sub_180034E90 @ 0x180034E90 (sub_180034E90.c)
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180035110(__int64 a1)
{
  void *v2; // rcx
  PSID pGroup; // [rsp+20h] [rbp-20h] BYREF
  PACL pDacl; // [rsp+28h] [rbp-18h] BYREF
  PACL pSacl; // [rsp+30h] [rbp-10h] BYREF
  WORD pControl; // [rsp+60h] [rbp+20h] BYREF
  DWORD dwRevision; // [rsp+68h] [rbp+28h] BYREF
  WINBOOL bDaclPresent; // [rsp+70h] [rbp+30h] BYREF
  PSID pOwner; // [rsp+78h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    pControl = 0;
    if ( GetSecurityDescriptorControl(v2, &pControl, &dwRevision) && (pControl & 0x8000u) == 0 )
    {
      GetSecurityDescriptorOwner(*(PSECURITY_DESCRIPTOR *)(a1 + 8), &pOwner, (LPBOOL)&dwRevision);
      _o_free(pOwner);
      GetSecurityDescriptorGroup(*(PSECURITY_DESCRIPTOR *)(a1 + 8), &pGroup, (LPBOOL)&dwRevision);
      _o_free(pGroup);
      GetSecurityDescriptorDacl(*(PSECURITY_DESCRIPTOR *)(a1 + 8), &bDaclPresent, &pDacl, (LPBOOL)&dwRevision);
      if ( bDaclPresent )
        _o_free(pDacl);
      GetSecurityDescriptorSacl(*(PSECURITY_DESCRIPTOR *)(a1 + 8), &bDaclPresent, &pSacl, (LPBOOL)&dwRevision);
      if ( bDaclPresent )
        _o_free(pSacl);
    }
    _o_free(*(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}

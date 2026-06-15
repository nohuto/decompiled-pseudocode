/*
 * XREFs of sub_180043A40 @ 0x180043A40
 * Callers:
 *     sub_180005E08 @ 0x180005E08 (sub_180005E08.c)
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 *     sub_18007EF9A @ 0x18007EF9A (sub_18007EF9A.c)
 *     sub_1800D5048 @ 0x1800D5048 (sub_1800D5048.c)
 *     sub_1800D53A0 @ 0x1800D53A0 (sub_1800D53A0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180043A40(__int64 a1)
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

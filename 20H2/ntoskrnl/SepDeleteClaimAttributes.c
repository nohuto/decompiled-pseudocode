/*
 * XREFs of SepDeleteClaimAttributes @ 0x140927818
 * Callers:
 *     SepTokenDeleteMethod @ 0x14067DEC0 (SepTokenDeleteMethod.c)
 *     SepSetTokenClaims @ 0x1406A9EDC (SepSetTokenClaims.c)
 *     SepDeleteLogonSessionClaims @ 0x1406C8830 (SepDeleteLogonSessionClaims.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14029DCC0 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteClaimAttributes(PVOID P)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rcx
  void *v4; // rcx

  if ( P )
  {
    v2 = (_DWORD *)*((_QWORD *)P + 72);
    if ( v2 )
    {
      AuthzBasepFreeSecurityAttributesList(v2);
      ExFreePoolWithTag(*((PVOID *)P + 72), 0);
      *((_QWORD *)P + 72) = 0LL;
    }
    v3 = (_DWORD *)*((_QWORD *)P + 73);
    if ( v3 )
    {
      AuthzBasepFreeSecurityAttributesList(v3);
      ExFreePoolWithTag(*((PVOID *)P + 73), 0);
      *((_QWORD *)P + 73) = 0LL;
    }
    v4 = (void *)*((_QWORD *)P + 1);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *((_QWORD *)P + 1) = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}

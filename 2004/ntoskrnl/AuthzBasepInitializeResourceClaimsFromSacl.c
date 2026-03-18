/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x140340B78
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140294C80 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x1402986C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14029B4E0 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x14029CDC0 (SepFilterCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370DB4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepMaximumAccessCheckEx @ 0x140371904 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140371A2C (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeExamineSacl @ 0x14091DFD0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14091E900 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140268590 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140296260 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402C4060 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepMemAlloc @ 0x140340CAC (AuthzBasepMemAlloc.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1405BB8D8 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  _BYTE *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  int v11; // r15d
  int SecurityAttributesToken; // eax
  size_t v13; // [rsp+20h] [rbp-E0h]
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v17; // [rsp+50h] [rbp-B0h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v17 = a2;
  v15 = 2;
  NumberOfBytes = 256LL;
  v3 = 0;
  v16 = 0LL;
  v4 = P;
  v5 = (_DWORD *)AuthzBasepMemAlloc(0x30uLL);
  v6 = (__int64)v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  *v5 = 0;
  v7 = a1 + 8;
  v8 = v5 + 2;
  *(_DWORD *)(v6 + 24) = 0;
  v9 = 0;
  v8[1] = v8;
  *v8 = v8;
  *(_QWORD *)(v6 + 40) = v6 + 32;
  *(_QWORD *)(v6 + 32) = v6 + 32;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_12;
  while ( 1 )
  {
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    LODWORD(NumberOfBytes) = 256;
    v4 = P;
    if ( *(_BYTE *)v7 != 18 || (*(_BYTE *)(v7 + 1) & 8) != 0 )
      goto LABEL_7;
    v11 = *(unsigned __int16 *)(v7 + 2) - 4 * *(unsigned __int8 *)(v7 + 9);
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(v7 + 9) + 8,
           (unsigned int)(v11 - 16),
           P,
           &NumberOfBytes);
    if ( v3 == -1073741789 )
      break;
LABEL_19:
    if ( v3 < 0 )
      goto LABEL_8;
    *((_QWORD *)&v16 + 1) = v4;
    LOWORD(v16) = 1;
    DWORD1(v16) = 1;
    LODWORD(v13) = 0;
    SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(
                                (_DWORD *)v6,
                                (__int64)v4,
                                1LL,
                                0LL,
                                v13,
                                (_DWORD *)&NumberOfBytes + 1);
    v3 = SecurityAttributesToken;
    if ( SecurityAttributesToken == -1073741789 || SecurityAttributesToken == -1073741275 )
      v3 = 0;
    if ( v3 < 0 )
      goto LABEL_8;
    if ( HIDWORD(NumberOfBytes) <= 0x10 )
      v3 = AuthzBasepSetSecurityAttributesToken(v6, &v15, (__int64)&v16);
    if ( v3 < 0 )
      goto LABEL_8;
LABEL_7:
    ++v9;
    v7 += *(unsigned __int16 *)(v7 + 2);
    if ( v9 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_8;
  }
  v4 = (_BYTE *)AuthzBasepMemAlloc((unsigned int)NumberOfBytes);
  if ( v4 )
  {
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 4 * (*(unsigned __int8 *)(v7 + 9) + 4LL),
           (unsigned int)(v11 - 16),
           v4,
           &NumberOfBytes);
    goto LABEL_19;
  }
  v3 = -1073741801;
LABEL_8:
  if ( v4 && v4 != P )
    ExFreePoolWithTag(v4, 0);
  if ( v3 < 0 )
  {
    AuthzBasepFreeSecurityAttributesList((_DWORD *)v6);
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  else
  {
LABEL_12:
    *v17 = v6;
  }
  return (unsigned int)v3;
}

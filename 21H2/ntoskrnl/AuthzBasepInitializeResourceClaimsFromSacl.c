/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402B2C28
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14027CAB0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14034DCE0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x14034ECD0 (SepFilterCheck.c)
 *     SepNormalAccessCheck @ 0x1403509D0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1403512A0 (SepMaximumAccessCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140373074 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepMaximumAccessCheckEx @ 0x140373BC4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140373CEC (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406261B0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeExamineSacl @ 0x140921420 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140921D50 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14024E800 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402508E0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepMemAlloc @ 0x1402B2D5C (AuthzBasepMemAlloc.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402F5290 (AuthzBasepFreeSecurityAttributesList.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1405C0CD8 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  NTSTATUS SecurityAttributesToken; // eax
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
    AuthzBasepFreeSecurityAttributesList(v6);
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  else
  {
LABEL_12:
    *v17 = v6;
  }
  return (unsigned int)v3;
}

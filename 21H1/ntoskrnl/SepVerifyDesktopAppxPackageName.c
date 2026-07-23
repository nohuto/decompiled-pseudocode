/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x1402014F8
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140201394 (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140231230 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlFindAceByType @ 0x140257F00 (RtlFindAceByType.c)
 *     SeSecurityAttributePresent @ 0x140259CA0 (SeSecurityAttributePresent.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402B88D0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140303D5C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140338294 (AuthzBasepSetSecurityAttributesToken.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SeQuerySecurityAttributesToken @ 0x1406AB1C0 (SeQuerySecurityAttributesToken.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(__int64 a1, __int64 a2, _BYTE *a3)
{
  int SecurityAttributesToken; // ebx
  _BYTE *PoolWithTag; // rdi
  __int64 SecurityAttributesList; // rax
  __int64 v9; // rsi
  __int16 v10; // ax
  __int64 v11; // rax
  ACL *v12; // rcx
  unsigned __int8 *AceByType; // rax
  unsigned __int8 *v14; // r14
  int v16; // ebx
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+6Ch] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-80h] BYREF

  v19 = 2;
  v18 = 0;
  NumberOfBytes = 0LL;
  *a3 = 0;
  SecurityAttributesToken = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
  if ( !(unsigned __int8)SeSecurityAttributePresent(a1, &DestinationString) )
    return (unsigned int)SecurityAttributesToken;
  PoolWithTag = P;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              a1,
                              (unsigned int)&DestinationString,
                              1,
                              (unsigned int)P,
                              512,
                              (__int64)&NumberOfBytes);
  if ( SecurityAttributesToken == -1073741789 )
  {
    v16 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20206553u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                a1,
                                (unsigned int)&DestinationString,
                                1,
                                (_DWORD)PoolWithTag,
                                v16,
                                (__int64)&NumberOfBytes);
  }
  if ( SecurityAttributesToken < 0 )
    goto LABEL_16;
  if ( !PoolWithTag )
    return (unsigned int)-1073739509;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
  v9 = SecurityAttributesList;
  if ( !SecurityAttributesList )
  {
    SecurityAttributesToken = -1073741670;
    goto LABEL_16;
  }
  SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v19, PoolWithTag);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_15;
  do
  {
    v10 = *(_WORD *)(a2 + 2);
    if ( (v10 & 4) == 0 )
      goto LABEL_27;
    if ( v10 >= 0 )
    {
      v12 = *(ACL **)(a2 + 32);
      goto LABEL_11;
    }
    v11 = *(unsigned int *)(a2 + 16);
    if ( (_DWORD)v11 )
      v12 = (ACL *)(a2 + v11);
    else
LABEL_27:
      v12 = 0LL;
LABEL_11:
    AceByType = (unsigned __int8 *)RtlFindAceByType(v12, 9u, (PULONG)&NumberOfBytes + 1);
    v14 = AceByType;
    if ( AceByType )
    {
      SecurityAttributesToken = AuthzBasepEvaluateAceCondition(
                                  a1,
                                  v9,
                                  0,
                                  0,
                                  0LL,
                                  0LL,
                                  0LL,
                                  (__int64)&AceByType[4 * AceByType[9] + 16],
                                  *((unsigned __int16 *)AceByType + 1) - (4 * (unsigned int)AceByType[9] + 8) - 8,
                                  0,
                                  0,
                                  (__int64)&v18);
      if ( SecurityAttributesToken < 0 )
        break;
      if ( v18 == 1 )
        goto LABEL_14;
    }
    ++HIDWORD(NumberOfBytes);
  }
  while ( v14 );
  if ( v18 == 1 )
LABEL_14:
    *a3 = 1;
LABEL_15:
  AuthzBasepFreeSecurityAttributesList(v9);
LABEL_16:
  if ( PoolWithTag && PoolWithTag != P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SecurityAttributesToken;
}

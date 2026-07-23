/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x1407A7718
 * Callers:
 *     SeRmInitPhase1 @ 0x140A6449C (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140231230 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140303D5C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140338294 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlIsMultiSessionSku @ 0x1406CCA90 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1)
{
  _QWORD *SecurityAttributesList; // rbx
  BOOLEAN IsMultiSessionSku; // al
  char v3; // si
  unsigned int v4; // edi
  _DWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-38h]
  _QWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h]
  _BOOL8 *v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+80h] [rbp+20h] BYREF
  int v12; // [rsp+84h] [rbp+24h]
  _BOOL8 v13; // [rsp+88h] [rbp+28h] BYREF

  v12 = HIDWORD(a1);
  v8[0] = 3145774LL;
  v8[1] = L"WIN://ISMULTISESSIONSKU";
  v6[0] = 1;
  v10 = 0LL;
  v9 = 0LL;
  v11 = 2;
  v6[1] = 1;
  v7 = v8;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    DWORD2(v9) = 1;
    v3 = IsMultiSessionSku;
    LOWORD(v9) = 6;
    v13 = IsMultiSessionSku != 0;
    v10 = &v13;
    v4 = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v11, (__int64)v6);
    if ( _InterlockedCompareExchange64(&WindowsSystemAttributes, (signed __int64)SecurityAttributesList, 0LL) )
    {
      v4 = -1073741823;
    }
    else
    {
      SecurityAttributesList = 0LL;
      SepAllowAccessUponLogoff = v3;
    }
    if ( SecurityAttributesList )
      AuthzBasepFreeSecurityAttributesList(SecurityAttributesList);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}

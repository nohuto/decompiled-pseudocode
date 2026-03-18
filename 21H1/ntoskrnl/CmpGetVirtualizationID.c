/*
 * XREFs of CmpGetVirtualizationID @ 0x14068F59C
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x14068F388 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x14086C184 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140254130 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     SeQueryUserSidToken @ 0x14066B11C (SeQueryUserSidToken.c)
 *     RtlConvertSidToUnicodeString @ 0x140690990 (RtlConvertSidToUnicodeString.c)
 *     CmpEffectiveTokenForSubject @ 0x140690D60 (CmpEffectiveTokenForSubject.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination, __int64 a2)
{
  __int64 v4; // rax
  NTSTATUS v5; // edi
  SIZE_T v6; // rdx
  wchar_t *PoolWithTag; // rax
  int v9; // [rsp+20h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-80h] BYREF
  _BYTE Sid[80]; // [rsp+40h] [rbp-68h] BYREF

  v9 = 0;
  UnicodeString = 0LL;
  memset(Sid, 0, 0x44uLL);
  v4 = CmpEffectiveTokenForSubject(a2, &v9);
  if ( v9 == 2 && *(int *)(a2 + 8) < 2 )
    v4 = *(_QWORD *)(a2 + 16);
  SeQueryUserSidToken(v4, Sid, 0x44u, 0LL);
  v5 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v5 >= 0 )
  {
    v6 = (unsigned __int16)(UnicodeString.Length + 20);
    Destination->MaximumLength = v6;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x65564D43u);
    Destination->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCopyUnicodeString(Destination, &UnicodeString);
      RtlAppendUnicodeToString(Destination, L"_Classes");
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v5;
}

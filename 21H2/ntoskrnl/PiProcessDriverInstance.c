/*
 * XREFs of PiProcessDriverInstance @ 0x14067ABD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PiFindDevInstMatch @ 0x14067A98C (PiFindDevInstMatch.c)
 *     PipOpenServiceEnumKeys @ 0x14067B470 (PipOpenServiceEnumKeys.c)
 *     PiRearrangeDeviceInstances @ 0x1406E74D0 (PiRearrangeDeviceInstances.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiProcessDriverInstance(const UNICODE_STRING *a1, __int64 a2, char *a3)
{
  int DevInstMatch; // ebx
  NTSTRSAFE_PWSTR v6; // rdi
  wchar_t *Buffer; // rax
  char v8; // cl
  wchar_t *v9; // r15
  wchar_t *v10; // rbx
  unsigned __int64 Length; // r14
  unsigned __int64 v12; // rsi
  wchar_t *Pool2; // rax
  signed __int64 v14; // rax
  unsigned int Data; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-31h] BYREF
  wchar_t v18[4]; // [rsp+58h] [rbp-21h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-11h] BYREF
  wchar_t pszDest[12]; // [rsp+78h] [rbp-1h] BYREF

  Data = 0;
  *(_DWORD *)v18 = 0;
  ppszDestEnd = 0LL;
  UnicodeString = 0LL;
  ValueName = 0LL;
  DevInstMatch = PipOpenServiceEnumKeys(a2, 983103LL, 0LL, &ppszDestEnd, 1);
  if ( DevInstMatch >= 0 )
  {
    v6 = ppszDestEnd;
    DevInstMatch = PiFindDevInstMatch(ppszDestEnd, a1, &Data, (__int64)&UnicodeString, v18);
    if ( DevInstMatch < 0 )
    {
LABEL_17:
      ZwClose(v6);
      return (unsigned int)DevInstMatch;
    }
    Buffer = UnicodeString.Buffer;
    v8 = *a3;
    if ( UnicodeString.Buffer )
    {
      if ( v8 )
      {
LABEL_14:
        if ( Buffer )
          RtlFreeUnicodeString(&UnicodeString);
        goto LABEL_16;
      }
      ZwDeleteValueKey(v6, &UnicodeString);
      if ( --Data )
        PiRearrangeDeviceInstances(v6);
    }
    else
    {
      if ( !v8 )
      {
LABEL_16:
        DevInstMatch = 0;
        goto LABEL_17;
      }
      v9 = a1->Buffer;
      v10 = 0LL;
      Length = a1->Length;
      v12 = Length >> 1;
      if ( v9[(Length >> 1) - 1] )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, Length + 2, 538996816LL);
        v10 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v9, (unsigned int)Length);
          LODWORD(Length) = Length + 2;
          v10[v12] = 0;
          v9 = v10;
        }
      }
      ppszDestEnd = pszDest;
      RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", Data);
      v14 = ppszDestEnd - pszDest;
      ValueName.MaximumLength = 20;
      if ( (_DWORD)v14 == -1 )
        ValueName.Length = 20;
      else
        ValueName.Length = 2 * v14;
      ValueName.Buffer = pszDest;
      ZwSetValueKey(v6, &ValueName, 0, 1u, v9, Length);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      ++Data;
    }
    *(_DWORD *)&ValueName.Length = 786442;
    ValueName.Buffer = L"Count";
    ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u);
    ValueName.Buffer = L"NextInstance";
    *(_DWORD *)&ValueName.Length = 1703960;
    ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u);
    Buffer = UnicodeString.Buffer;
    goto LABEL_14;
  }
  return (unsigned int)DevInstMatch;
}

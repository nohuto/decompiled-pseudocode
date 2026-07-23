/*
 * XREFs of PiProcessDriverInstance @ 0x140740230
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140253AD4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     PiFindDevInstMatch @ 0x14073FFE4 (PiFindDevInstMatch.c)
 *     PipOpenServiceEnumKeys @ 0x140742DAC (PipOpenServiceEnumKeys.c)
 *     PiRearrangeDeviceInstances @ 0x140781204 (PiRearrangeDeviceInstances.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  wchar_t *PoolWithTag; // rax
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
          RtlFreeAnsiString(&UnicodeString);
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
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                                   (POOL_TYPE)(LODWORD(UnicodeString.Buffer) + 1),
                                   Length + 2,
                                   0x20207050u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v9, (unsigned int)Length);
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

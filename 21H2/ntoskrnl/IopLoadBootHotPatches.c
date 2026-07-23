/*
 * XREFs of IopLoadBootHotPatches @ 0x140A74B20
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcstoul @ 0x1403D4670 (wcstoul.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1403FA7E0 (ZwEnumerateValueKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     MmRegisterHotPatch @ 0x140A9332C (MmRegisterHotPatch.c)
 */

__int64 IopLoadBootHotPatches()
{
  unsigned int *PoolWithTag; // rsi
  ULONG Length; // r15d
  ULONG v3; // ebx
  NTSTATUS v4; // eax
  unsigned int v5; // r14d
  unsigned int v6; // ecx
  __int64 v7; // r14
  int v8; // eax
  int v9; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  wchar_t *EndPtr; // [rsp+40h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  wchar_t Str[8]; // [rsp+90h] [rbp+1Fh] BYREF
  __int16 v16; // [rsp+A0h] [rbp+2Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"vx";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  SourceString = 0LL;
  EndPtr = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes) < 0 )
    return 1LL;
  PoolWithTag = 0LL;
  v16 = 0;
  Length = 0;
  v3 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, PoolWithTag, Length, &ResultLength);
      v5 = v4;
      if ( v4 < 0 )
        break;
      if ( PoolWithTag[1] == 3 )
      {
        v6 = PoolWithTag[3];
        if ( v6 >= 4 )
        {
          v7 = PoolWithTag[2];
          v8 = *(unsigned __int16 *)((char *)PoolWithTag + v7);
          if ( (v8 & 1) == 0 && v8 + 2 == v6 && PoolWithTag[4] == 32 )
          {
            *(_OWORD *)Str = *(_OWORD *)(PoolWithTag + 5);
            wcstoul(Str, &EndPtr, 16);
            if ( EndPtr == (wchar_t *)&v16 )
            {
              *(_OWORD *)Str = *(_OWORD *)(PoolWithTag + 9);
              wcstoul(Str, &EndPtr, 16);
              if ( EndPtr == (wchar_t *)&v16 )
              {
                SourceString.Buffer = (wchar_t *)((char *)PoolWithTag + v7 + 2);
                SourceString.Length = *(_WORD *)((char *)PoolWithTag + v7);
                SourceString.MaximumLength = SourceString.Length;
                v9 = MmRegisterHotPatch(&SourceString);
                v5 = v9;
                if ( v9 < 0 && v9 != -1073741515 && v9 != -1073741735 )
                  goto LABEL_25;
              }
            }
          }
        }
      }
      ++v3;
    }
    if ( v4 != -1073741789 && v4 != -2147483643 )
      break;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x70486F49u);
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
      goto LABEL_25;
    }
    Length = ResultLength;
  }
  if ( v4 == -2147483622 )
    v5 = 0;
LABEL_25:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ZwClose(KeyHandle);
  return v5;
}

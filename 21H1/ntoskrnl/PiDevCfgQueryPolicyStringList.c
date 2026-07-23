/*
 * XREFs of PiDevCfgQueryPolicyStringList @ 0x1408A3724
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x14075AB08 (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x1402E6214 (RtlStringCchCopyExW.c)
 *     PnpValidateRegistryString @ 0x14036A86C (PnpValidateRegistryString.c)
 *     PnpValidateRegistryDword @ 0x1403974C8 (PnpValidateRegistryDword.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1403F2590 (ZwEnumerateValueKey.c)
 *     NtQueryKey @ 0x1405EBF30 (NtQueryKey.c)
 *     IopGetRegistryValue @ 0x140728128 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyStringList(void *a1, const WCHAR *a2, _QWORD *a3)
{
  ULONG v3; // r12d
  int v4; // edi
  PVOID v5; // rsi
  NTSTATUS RegistryValue; // ebx
  unsigned int *v9; // rcx
  ULONG v10; // ebx
  unsigned int *PoolWithTag; // r14
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  NTSTATUS i; // eax
  unsigned int v17; // r15d
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  size_t *pcchRemaining; // [rsp+38h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-51h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-39h] BYREF
  __int128 KeyInformation; // [rsp+90h] [rbp-9h] BYREF
  __int128 v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+B0h] [rbp+17h]

  v3 = 0;
  v23 = a3;
  KeyHandle = 0LL;
  pcchRemaining = 0LL;
  v27 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  v4 = 0;
  v5 = 0LL;
  KeyInformation = 0LL;
  v26 = 0LL;
  RegistryValue = IopGetRegistryValue(a1, a2, 0, &pcchRemaining);
  if ( RegistryValue < 0 )
  {
    PoolWithTag = (unsigned int *)pcchRemaining;
LABEL_36:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_38;
  }
  if ( PnpValidateRegistryDword((__int64)pcchRemaining) )
    v4 = *(unsigned int *)((char *)v9 + v9[2]);
  ExFreePoolWithTag(v9, 0);
  if ( v4 != 1 )
    goto LABEL_5;
  RtlInitUnicodeString(&DestinationString, a2);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = NtQueryKey(KeyHandle, KeyCachedInformation, &KeyInformation, 0x28u, &ResultLength);
    if ( RegistryValue >= 0 )
    {
      if ( !DWORD1(v26) )
      {
LABEL_5:
        RegistryValue = -1073741275;
        goto LABEL_38;
      }
      v10 = HIDWORD(v26) + 2 * (DWORD2(v26) + 12);
      LODWORD(pcchRemaining) = v10;
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v10, 0x63647050u);
      if ( !PoolWithTag )
      {
        RegistryValue = -1073741670;
        goto LABEL_38;
      }
      v12 = DWORD1(v26) * HIDWORD(v26) + 2;
      while ( 2 )
      {
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v5 = ExAllocatePoolWithTag(PagedPool, v12, 0x63647050u);
        if ( v5 )
        {
          v13 = v12 >> 1;
          v14 = 0;
          v15 = 0;
          for ( i = ZwEnumerateValueKey(KeyHandle, 0, KeyValueFullInformation, PoolWithTag, v10, &ResultLength);
                ;
                i = ZwEnumerateValueKey(
                      KeyHandle,
                      v3,
                      KeyValueFullInformation,
                      PoolWithTag,
                      (ULONG)pcchRemaining,
                      &ResultLength) )
          {
            RegistryValue = i;
            if ( i == -2147483622 )
              break;
            if ( i == -2147483643 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              LODWORD(pcchRemaining) = ResultLength;
              PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x63647050u);
              if ( !PoolWithTag )
              {
                RegistryValue = -1073741670;
                goto LABEL_32;
              }
              --v3;
            }
            else
            {
              if ( i < 0 )
                goto LABEL_32;
              if ( PnpValidateRegistryString(PoolWithTag) )
              {
                RegistryValue = RtlInitUnicodeStringEx(
                                  &DestinationString,
                                  (PCWSTR)((char *)PoolWithTag + PoolWithTag[2]));
                if ( RegistryValue < 0 )
                  goto LABEL_32;
                v14 += DestinationString.MaximumLength >> 1;
                if ( v13 > v14 )
                {
                  RtlStringCchCopyExW((NTSTRSAFE_PWSTR)v5 + v15, v13 - v15, DestinationString.Buffer, 0LL, 0LL, 0x900u);
                  v15 += DestinationString.MaximumLength >> 1;
                }
              }
            }
            ++v3;
          }
          v3 = 0;
          RegistryValue = 0;
          if ( v14 )
          {
            v17 = v14 + 1;
            if ( v13 < v17 )
            {
              v10 = (unsigned int)pcchRemaining;
              v12 = 2 * v17;
              continue;
            }
            *((_WORD *)v5 + v15) = 0;
            *v23 = v5;
            v5 = 0LL;
          }
          else
          {
            RegistryValue = -1073741275;
          }
LABEL_32:
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
        }
        else
        {
          RegistryValue = -1073741670;
        }
        goto LABEL_36;
      }
    }
  }
LABEL_38:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}

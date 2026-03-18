/*
 * XREFs of PspIsDfssEnabled @ 0x14078FF40
 * Callers:
 *     PsBootPhaseComplete @ 0x14078FB6C (PsBootPhaseComplete.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     PspReadDfssConfigurationValues @ 0x14057B338 (PspReadDfssConfigurationValues.c)
 *     RtlUnicodeStringToInteger @ 0x1406B7B70 (RtlUnicodeStringToInteger.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

char PspIsDfssEnabled()
{
  char v0; // r14
  unsigned int v1; // r15d
  HANDLE v2; // r12
  NTSTATUS inited; // ebx
  __int128 *p_KeyValueInformation; // rdi
  NTSTATUS v5; // eax
  void *v6; // rsi
  ULONG Length; // ebx
  PVOID PoolWithQuotaTag; // rax
  NTSTATUS v9; // eax
  int v10; // ecx
  unsigned int v12; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  ULONG Value[3]; // [rsp+3Ch] [rbp-35h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+1Fh] BYREF
  int v19; // [rsp+A0h] [rbp+2Fh]

  Value[0] = 0;
  v0 = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = 0;
  while ( 1 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames[2 * v1];
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0 )
    {
LABEL_16:
      if ( !v0 )
        return v0;
LABEL_22:
      PspReadDfssConfigurationValues();
      return v0;
    }
    v2 = KeyHandle;
    ResultLength = 0;
    v19 = 0;
    DestinationString = 0LL;
    KeyValueInformation = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"EnableCpuQuota");
    if ( inited >= 0 )
    {
      p_KeyValueInformation = &KeyValueInformation;
      v5 = ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      inited = v5;
      if ( v5 >= 0 )
      {
        v6 = 0LL;
LABEL_8:
        v10 = *((_DWORD *)p_KeyValueInformation + 1);
        if ( ((v10 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v10 == 4 )
          {
            if ( *((_DWORD *)p_KeyValueInformation + 2) == 4 )
            {
              ResultLength = 4;
              Value[0] = *((_DWORD *)p_KeyValueInformation + 3);
            }
            else
            {
              inited = -1073741820;
            }
          }
          else
          {
            if ( v10 != 1 )
            {
LABEL_11:
              inited = -1073741788;
              goto LABEL_12;
            }
            if ( ((unsigned __int8)Value & 3) != 0 )
            {
              inited = -2147483646;
            }
            else
            {
              ResultLength = 4;
              DestinationString.Buffer = (wchar_t *)p_KeyValueInformation + 6;
              DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
              DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
              inited = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
            }
          }
        }
        else
        {
          if ( v10 != 4 )
            goto LABEL_11;
          ResultLength = *((_DWORD *)p_KeyValueInformation + 2);
          v12 = *((_DWORD *)p_KeyValueInformation + 2);
          if ( v12 > 4 )
            inited = -2147483643;
          else
            memmove(Value, (char *)p_KeyValueInformation + 12, v12);
        }
LABEL_12:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        goto LABEL_15;
      }
      if ( v5 == -2147483643 )
      {
        while ( 1 )
        {
          Length = ResultLength;
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
          v6 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
            break;
          p_KeyValueInformation = (__int128 *)PoolWithQuotaTag;
          v9 = ZwQueryValueKey(
                 v2,
                 &DestinationString,
                 KeyValuePartialInformation,
                 PoolWithQuotaTag,
                 Length,
                 &ResultLength);
          inited = v9;
          if ( v9 >= 0 )
            goto LABEL_8;
          if ( v9 != -2147483643 )
            goto LABEL_12;
          ExFreePoolWithTag(v6, 0);
        }
        inited = -1073741801;
      }
    }
LABEL_15:
    ZwClose(KeyHandle);
    if ( inited < 0 )
      goto LABEL_16;
    if ( !Value[0] )
      return 0;
    ++v1;
    v0 = 1;
    if ( v1 >= 2 )
      goto LABEL_22;
  }
}

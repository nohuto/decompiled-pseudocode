/*
 * XREFs of CmpQueryEditionVersion @ 0x14078F5D0
 * Callers:
 *     CmpSetVersionData @ 0x14078F0CC (CmpSetVersionData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlUnicodeStringToAnsiString @ 0x14061B5F0 (RtlUnicodeStringToAnsiString.c)
 */

NTSTATUS __fastcall CmpQueryEditionVersion(char *a1, void *a2, void *a3)
{
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  HANDLE v8; // rcx
  HANDLE v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  const UNICODE_STRING *v13; // rdx
  NTSTATUS v14; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  memset(a1, 0, 0x238uLL);
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpEditionVersionString;
  ObjectAttributes.SecurityDescriptor = a3;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v7 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpEditionBuildNumberString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength);
    if ( v7 >= 0 )
    {
      if ( KeyValueInformation[1] != 4 )
      {
LABEL_33:
        v7 = -1073741788;
        goto LABEL_41;
      }
      if ( KeyValueInformation[3] != 4 )
        goto LABEL_34;
      if ( KeyValueInformation[2] + 4LL != ResultLength )
        goto LABEL_35;
      v8 = KeyHandle;
      *(_DWORD *)a1 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
      v7 = ZwQueryValueKey(
             v8,
             (PUNICODE_STRING)&CmpEditionBuildQfeString,
             KeyValueFullInformation,
             KeyValueInformation,
             0x100u,
             &ResultLength);
      if ( v7 >= 0 )
      {
        if ( KeyValueInformation[1] == 4 )
        {
          if ( KeyValueInformation[3] != 4 )
            goto LABEL_34;
          if ( KeyValueInformation[2] + 4LL != ResultLength )
            goto LABEL_35;
          v9 = KeyHandle;
          *((_DWORD *)a1 + 1) = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
          if ( ZwQueryValueKey(
                 v9,
                 (PUNICODE_STRING)&CmpEditionBuildBranchString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && KeyValueInformation[1] == 1 )
          {
            if ( KeyValueInformation[2] + KeyValueInformation[3] != ResultLength )
              goto LABEL_35;
            if ( (KeyValueInformation[3] & 1) != 0 )
              goto LABEL_34;
            v10 = KeyValueInformation[3];
            if ( (unsigned __int64)KeyValueInformation[3] + 2 > 0x80 )
              goto LABEL_36;
            memmove(a1 + 56, (char *)KeyValueInformation + KeyValueInformation[2], KeyValueInformation[3]);
            *(_WORD *)&a1[v10 + 56] = 0;
            RtlInitUnicodeString((PUNICODE_STRING)(a1 + 8), (PCWSTR)a1 + 28);
          }
          if ( ZwQueryValueKey(
                 KeyHandle,
                 (PUNICODE_STRING)&CmpEditionBuildLabString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || KeyValueInformation[1] != 1 )
          {
LABEL_22:
            if ( ZwQueryValueKey(
                   KeyHandle,
                   (PUNICODE_STRING)&CmpEditionBuildLabExString,
                   KeyValueFullInformation,
                   KeyValueInformation,
                   0x100u,
                   &ResultLength) < 0
              || KeyValueInformation[1] != 1 )
            {
LABEL_28:
              *(_DWORD *)&DestinationString.Length = 0x800000;
              DestinationString.Buffer = a1 + 440;
              if ( *((_QWORD *)a1 + 6) && (v13 = (const UNICODE_STRING *)(a1 + 40), *((_WORD *)a1 + 20))
                || *((_QWORD *)a1 + 4) && (v13 = (const UNICODE_STRING *)(a1 + 24), *((_WORD *)a1 + 12)) )
              {
                v14 = RtlUnicodeStringToAnsiString(&DestinationString, v13, 0);
              }
              else
              {
                v14 = -2147483614;
              }
              if ( v14 < 0 )
                a1[440] = 0;
              v7 = 0;
              goto LABEL_41;
            }
            if ( KeyValueInformation[2] + KeyValueInformation[3] == ResultLength )
            {
              if ( (KeyValueInformation[3] & 1) == 0 )
              {
                v12 = KeyValueInformation[3];
                if ( (unsigned __int64)KeyValueInformation[3] + 2 <= 0x80 )
                {
                  memmove(a1 + 312, (char *)KeyValueInformation + KeyValueInformation[2], KeyValueInformation[3]);
                  *(_WORD *)&a1[v12 + 312] = 0;
                  RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), (PCWSTR)a1 + 156);
                  goto LABEL_28;
                }
                goto LABEL_36;
              }
              goto LABEL_34;
            }
LABEL_35:
            v7 = -1073741764;
            goto LABEL_41;
          }
          if ( KeyValueInformation[2] + KeyValueInformation[3] != ResultLength )
            goto LABEL_35;
          if ( (KeyValueInformation[3] & 1) == 0 )
          {
            v11 = KeyValueInformation[3];
            if ( (unsigned __int64)KeyValueInformation[3] + 2 <= 0x80 )
            {
              memmove(a1 + 184, (char *)KeyValueInformation + KeyValueInformation[2], KeyValueInformation[3]);
              *(_WORD *)&a1[v11 + 184] = 0;
              RtlInitUnicodeString((PUNICODE_STRING)(a1 + 24), (PCWSTR)a1 + 92);
              goto LABEL_22;
            }
LABEL_36:
            v7 = -1073741789;
            goto LABEL_41;
          }
LABEL_34:
          v7 = -1073741306;
          goto LABEL_41;
        }
        goto LABEL_33;
      }
    }
LABEL_41:
    ZwClose(KeyHandle);
    return v7;
  }
  return result;
}

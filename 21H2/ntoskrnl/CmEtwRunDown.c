/*
 * XREFs of CmEtwRunDown @ 0x14086A4C8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     EtwTraceSiloDcEvent @ 0x1405A83C0 (EtwTraceSiloDcEvent.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpConstructNameWithStatus @ 0x1406E2750 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLogHiveRundownEvent @ 0x14086AB5C (CmpLogHiveRundownEvent.c)
 */

__int64 __fastcall CmEtwRunDown(__int64 a1, unsigned int a2, char a3, char a4, char a5)
{
  char v5; // di
  char v6; // si
  struct _EX_RUNDOWN_REF *v9; // rcx
  unsigned int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // r15
  __int64 i; // rdi
  void *v14; // r14
  __int64 *v15; // rbx
  NTSTATUS v16; // ebx
  __int16 v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *NextActiveHive; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-48h]
  __int128 KeyValueInformation; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v32[3]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v33; // [rsp+108h] [rbp+8h] BYREF
  __int64 v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  int v36; // [rsp+120h] [rbp+20h]
  int v37; // [rsp+124h] [rbp+24h]
  __int16 *v38; // [rsp+128h] [rbp+28h]
  __int64 v39; // [rsp+130h] [rbp+30h]

  v5 = a4;
  v6 = a3;
  v21 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ResultLength = 0;
  KeyHandle = 0LL;
  v20 = 0;
  ValueName = 0LL;
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  memset(v32, 0, sizeof(v32));
  if ( !a5 )
  {
    CmpAttachToRegistryProcess((__int64)v32);
    v34 = 24LL;
    v33 = (__int64 *)&v29;
    v9 = 0LL;
    v39 = 2LL;
    v38 = &v20;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v9);
      v15 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive();
      if ( v5 )
        CmpLogHiveRundownEvent(v15, a1, a2);
      if ( v6 )
      {
        v10 = *((_DWORD *)v15 + 412);
        if ( v10 )
        {
          v11 = (__int64 *)(v15[205] + 16);
          v12 = v10;
          do
          {
            for ( i = *v11; i; i = *(_QWORD *)(i + 8) )
            {
              v24 = 0LL;
              CmpConstructNameWithStatus(i - 16, &v24);
              v14 = v24;
              if ( v24 )
              {
                v35 = *((_QWORD *)v24 + 1);
                v36 = *v24;
                *(_QWORD *)&v30 = i - 16;
                v37 = 0;
                EtwTraceSiloDcEvent((__int64)&v33, 3u, a1, a2, 0x919u, 0x401802u);
                CmpFreeTransientPoolWithTag(v14, 0x624E4D43u);
              }
            }
            v11 += 3;
            --v12;
          }
          while ( v12 );
          v15 = NextActiveHive;
          v5 = a4;
        }
        v6 = a3;
      }
      CmpUnlockRegistry();
      v9 = (struct _EX_RUNDOWN_REF *)v15;
    }
    KiUnstackDetachProcess((__int64)v32, 0LL);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Select");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Current");
      v16 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v16 >= 0 )
      {
        v21 = HIDWORD(KeyValueInformation);
        v33 = (__int64 *)&v21;
        LODWORD(v34) = 4;
        EtwTraceSiloDcEvent((__int64)&v33, 1u, a1, a2, 0x923u, 0x401802u);
      }
    }
  }
  v33 = &CmPerfCounters;
  v34 = 88LL;
  EtwTraceSiloDcEvent((__int64)&v33, 1u, a1, a2, 0x922u, 0x401802u);
  return 0LL;
}

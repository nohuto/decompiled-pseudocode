/*
 * XREFs of CmEtwRunDown @ 0x1408659F8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140780158 (EtwpKernelTraceRundown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     EtwTraceSiloDcEvent @ 0x1405A25D0 (EtwTraceSiloDcEvent.c)
 *     CmpConstructNameWithStatus @ 0x14061DE60 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpGetNextActiveHive @ 0x140690FA0 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpLogHiveRundownEvent @ 0x14086608C (CmpLogHiveRundownEvent.c)
 */

__int64 __fastcall CmEtwRunDown(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, char a5)
{
  char v5; // di
  char v6; // si
  unsigned int v7; // r13d
  struct _EX_RUNDOWN_REF *v9; // rcx
  unsigned int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // r15
  __int64 i; // rdi
  void *v14; // r14
  __int64 *v15; // rbx
  __int64 v16; // r8
  _DWORD *v17; // r9
  NTSTATUS v18; // ebx
  char v20; // [rsp+30h] [rbp-D0h]
  char v21; // [rsp+31h] [rbp-CFh]
  __int16 v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *NextActiveHive; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-48h]
  __int128 KeyValueInformation; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v34[3]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v35; // [rsp+108h] [rbp+8h] BYREF
  __int64 v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int v38; // [rsp+120h] [rbp+20h]
  int v39; // [rsp+124h] [rbp+24h]
  __int16 *v40; // [rsp+128h] [rbp+28h]
  __int64 v41; // [rsp+130h] [rbp+30h]

  v21 = (char)a4;
  v20 = a3;
  v5 = (char)a4;
  v6 = a3;
  v7 = a2;
  v23 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ResultLength = 0;
  KeyHandle = 0LL;
  v22 = 0;
  ValueName = 0LL;
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  memset(v34, 0, sizeof(v34));
  if ( !a5 )
  {
    CmpAttachToRegistryProcess((__int64)v34, a2, a3, a4);
    v36 = 24LL;
    v35 = (__int64 *)&v31;
    v9 = 0LL;
    v41 = 2LL;
    v40 = &v22;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v9);
      v15 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive();
      if ( v5 )
        CmpLogHiveRundownEvent(v15, a1, v7);
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
              v26 = 0LL;
              CmpConstructNameWithStatus(i - 16, &v26);
              v14 = v26;
              if ( v26 )
              {
                v37 = *((_QWORD *)v26 + 1);
                v38 = *v26;
                *(_QWORD *)&v32 = i - 16;
                v39 = 0;
                EtwTraceSiloDcEvent((__int64)&v35, 3u, a1, v7, 0x919u, 0x401802u);
                CmpFreeTransientPoolWithTag(v14, 0x624E4D43u);
              }
            }
            v11 += 3;
            --v12;
          }
          while ( v12 );
          v15 = NextActiveHive;
          v5 = v21;
        }
        v6 = v20;
      }
      CmpUnlockRegistry();
      v9 = (struct _EX_RUNDOWN_REF *)v15;
    }
    KiUnstackDetachProcess((__int64)v34, 0LL, v16, v17);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Select");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Current");
      v18 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v18 >= 0 )
      {
        v23 = HIDWORD(KeyValueInformation);
        v35 = (__int64 *)&v23;
        LODWORD(v36) = 4;
        EtwTraceSiloDcEvent((__int64)&v35, 1u, a1, v7, 0x923u, 0x401802u);
      }
    }
  }
  v35 = &CmPerfCounters;
  v36 = 88LL;
  EtwTraceSiloDcEvent((__int64)&v35, 1u, a1, v7, 0x922u, 0x401802u);
  return 0LL;
}

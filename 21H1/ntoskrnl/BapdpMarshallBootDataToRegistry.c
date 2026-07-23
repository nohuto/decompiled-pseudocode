/*
 * XREFs of BapdpMarshallBootDataToRegistry @ 0x1403AB00C
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140A3D71C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     RtlIntegerToUnicodeString @ 0x1406DC660 (RtlIntegerToUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x14070EF18 (RtlStringFromGUIDEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void BapdpMarshallBootDataToRegistry()
{
  __int64 *v0; // rbx
  UNICODE_STRING *Class; // r12
  __int64 *v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // r14d
  _QWORD *PoolWithTag; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  UNICODE_STRING **v12; // r15
  UNICODE_STRING *v13; // rax
  UNICODE_STRING v14; // xmm0
  ULONG v15; // r13d
  char *v16; // r14
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  ULONG v19; // ecx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE ObjectAttributes[7]; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING GuidString; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING String; // [rsp+98h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  char v27; // [rsp+C8h] [rbp-40h] BYREF
  char v28; // [rsp+E8h] [rbp-20h] BYREF

  v0 = (__int64 *)qword_140CF2770;
  Class = 0LL;
  Handle = (HANDLE)0x43F585FA729AF26ELL;
  v2 = (__int64 *)qword_140CF2770;
  v3 = 0;
  v25 = 0x55C1EB7445F20CB8LL;
  KeyHandle = 0LL;
  ObjectAttributes[0] = 0LL;
  if ( qword_140CF2770 )
  {
    do
    {
      if ( v2 == &qword_140CF2770 )
        break;
      v4 = v2[2];
      v2 = (__int64 *)*v2;
      if ( (unsigned int)(*(_DWORD *)(v4 + 32) - 1) <= 1 )
      {
        v5 = *(_QWORD *)(v4 + 16) - (_QWORD)Handle;
        if ( !v5 )
          v5 = *(_QWORD *)(v4 + 24) - v25;
        if ( !v5 )
          ++v3;
      }
    }
    while ( v2 );
    if ( v3 )
    {
      v6 = 0;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v3, 0x64506142u);
      if ( PoolWithTag )
      {
        while ( v0 != &qword_140CF2770 )
        {
          v8 = v0[2];
          v0 = (__int64 *)*v0;
          if ( (unsigned int)(*(_DWORD *)(v8 + 32) - 1) <= 1 )
          {
            v9 = *(_QWORD *)(v8 + 16) - (_QWORD)Handle;
            if ( !v9 )
              v9 = *(_QWORD *)(v8 + 24) - v25;
            if ( !v9 )
            {
              v10 = v6++;
              PoolWithTag[v10] = v8;
            }
          }
        }
        ObjectAttributes[1] = (HANDLE)48;
        ObjectAttributes[4] = (HANDLE)576;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
        ObjectAttributes[2] = 0LL;
        ObjectAttributes[3] = &DestinationString;
        *(_OWORD *)&ObjectAttributes[5] = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]) < 0 )
        {
          KeyHandle = 0LL;
LABEL_40:
          if ( ObjectAttributes[0] )
            ZwClose(ObjectAttributes[0]);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0x64506142u);
          return;
        }
        ObjectAttributes[1] = (HANDLE)48;
        ObjectAttributes[4] = (HANDLE)576;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"BootApplicationPersistentData");
        ObjectAttributes[2] = KeyHandle;
        ObjectAttributes[3] = &DestinationString;
        *(_OWORD *)&ObjectAttributes[5] = 0LL;
        if ( ZwCreateKey(ObjectAttributes, 0x6001Fu, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 0, 0LL, 1u, 0LL) >= 0 )
        {
          v11 = 0;
          v12 = (UNICODE_STRING **)PoolWithTag;
          do
          {
            v13 = *v12;
            Handle = Class;
            if ( v13 )
            {
              v14 = *v13;
              *(_QWORD *)&GuidString.Length = 5111808LL;
              GuidString.Buffer = (wchar_t *)&v28;
              DestinationString = v14;
              memset(&ObjectAttributes[1], 0, 48);
              if ( RtlStringFromGUIDEx((PGUID)&DestinationString, &GuidString, 0) >= 0 )
              {
                ObjectAttributes[2] = ObjectAttributes[0];
                ObjectAttributes[3] = &GuidString;
                LODWORD(ObjectAttributes[1]) = 48;
                LODWORD(ObjectAttributes[4]) = 576;
                *(_OWORD *)&ObjectAttributes[5] = 0LL;
                if ( ZwCreateKey(
                       &Handle,
                       0x6001Fu,
                       (POBJECT_ATTRIBUTES)&ObjectAttributes[1],
                       0,
                       Class,
                       1u,
                       (PULONG)&Class->Length) >= 0 )
                {
                  v15 = (unsigned int)Class;
                  if ( v11 < v3 )
                  {
                    Class = (UNICODE_STRING *)(v3 - v11);
                    v16 = (char *)&PoolWithTag[v11];
                    do
                    {
                      v17 = *(_QWORD **)v16;
                      *(_QWORD *)&String.Length = 1572864LL;
                      String.Buffer = (wchar_t *)&v27;
                      if ( v17 )
                      {
                        v18 = *v17 - *(_QWORD *)&DestinationString.Length;
                        if ( *v17 == *(_QWORD *)&DestinationString.Length )
                          v18 = v17[1] - (unsigned __int64)DestinationString.Buffer;
                        if ( !v18 )
                        {
                          v19 = v15++;
                          if ( RtlIntegerToUnicodeString(v19, 0xAu, &String) >= 0 )
                          {
                            ZwSetValueKey(
                              Handle,
                              &String,
                              0,
                              3u,
                              (PVOID)(*(_QWORD *)v16 + *(unsigned int *)(*(_QWORD *)v16 + 40LL)),
                              *(_DWORD *)(*(_QWORD *)v16 + 36LL));
                            *(_QWORD *)v16 = 0LL;
                          }
                        }
                      }
                      v16 += 8;
                      Class = (UNICODE_STRING *)((char *)Class - 1);
                    }
                    while ( Class );
                  }
                  ZwClose(Handle);
                }
              }
            }
            ++v11;
            ++v12;
          }
          while ( v11 < v3 );
        }
        else
        {
          ObjectAttributes[0] = 0LL;
        }
      }
      if ( KeyHandle )
        ZwClose(KeyHandle);
      goto LABEL_40;
    }
  }
}

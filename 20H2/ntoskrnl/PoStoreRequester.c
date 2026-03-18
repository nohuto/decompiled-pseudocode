/*
 * XREFs of PoStoreRequester @ 0x140361B40
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140361A78 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoStoreDiagnosticContext @ 0x14038A54C (PoStoreDiagnosticContext.c)
 *     PopDiagTracePowerRequestCreate @ 0x14071D408 (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036183C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     RtlStringCbCopyUnicodeString @ 0x140363E64 (RtlStringCbCopyUnicodeString.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IoGetDeviceProperty @ 0x140668830 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // rbp
  char v7; // r13
  unsigned __int16 *v8; // r12
  char *v9; // rsi
  char v10; // bl
  unsigned __int16 *v11; // rcx
  __int64 v12; // r8
  char *v13; // rdx
  char *i; // rax
  char *v15; // rax
  unsigned __int64 v16; // r14
  __int64 v18; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  struct _DEVICE_OBJECT *v20; // r14
  NTSTATUS DeviceProperty; // eax
  const UNICODE_STRING *p_DriverName; // r8
  ULONG v23; // ecx
  __int64 v24; // rcx
  unsigned __int16 *DeviceNode; // rcx
  size_t v26; // rdx
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 *v28; // [rsp+80h] [rbp+18h]

  v28 = a3;
  v4 = *a3;
  ResultLength = 0;
  v6 = 40LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( a2 && v4 >= 0x28 )
  {
    v9 = (char *)(a2 + 40);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a1;
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( *(_DWORD *)a1 )
  {
    if ( v10 )
    {
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1088LL);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 16);
    }
    v11 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 8) + 1472LL);
    v12 = *v11;
    v13 = (char *)*((_QWORD *)v11 + 1);
    ResultLength = *v11;
    if ( a4 )
    {
      for ( i = &v13[2 * ((unsigned __int64)(unsigned int)v12 >> 1)]; i != v13 && *(_WORD *)i != 92; i -= 2 )
        ;
      if ( i != v13 )
      {
        v15 = i + 2;
        v12 = (unsigned int)((_DWORD)v13 - (_DWORD)v15 + v12);
        v13 = v15;
        ResultLength = v12;
      }
    }
    v16 = (unsigned int)v12;
    v6 = v12 + 42;
    if ( v10 && v4 >= v6 )
    {
      v10 = 1;
      memmove(v9, v13, (unsigned int)v12);
      *(_WORD *)&v9[2 * (v16 >> 1)] = 0;
      *(_QWORD *)(a2 + 16) = &v9[-a2];
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 8);
    if ( v18 )
    {
      DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v18, 0x67446F50u);
      v20 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        if ( DeviceAttachmentBaseRefWithTag->DeviceObjectExtension->DeviceNode )
        {
          if ( v10 )
          {
            DeviceProperty = IoGetDeviceProperty(
                               DeviceAttachmentBaseRefWithTag,
                               DevicePropertyDeviceDescription,
                               v4 - 40,
                               v9,
                               &ResultLength);
          }
          else
          {
            DeviceProperty = IoGetDeviceProperty(
                               DeviceAttachmentBaseRefWithTag,
                               DevicePropertyDeviceDescription,
                               0,
                               0LL,
                               &ResultLength);
            if ( DeviceProperty == -1073741789 )
              DeviceProperty = 0;
          }
        }
        else
        {
          DeviceProperty = -1073741808;
        }
        if ( DeviceProperty < 0 )
        {
          p_DriverName = &v20->DriverObject->DriverName;
          v23 = p_DriverName->Length + 2;
          ResultLength = v23;
          if ( v10 && v4 >= (unsigned __int64)v23 + 40 )
          {
            v10 = 1;
            RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v9, v23, p_DriverName);
          }
          else
          {
            v10 = 0;
          }
        }
        v24 = ResultLength;
        v6 = ResultLength + 40LL;
        if ( v10 )
        {
          v7 = 1;
          *(_QWORD *)(a2 + 16) = &v9[-a2];
          v9 += v24;
        }
        DeviceNode = (unsigned __int16 *)v20->DeviceObjectExtension->DeviceNode;
        if ( DeviceNode )
        {
          v8 = DeviceNode + 20;
          v26 = (unsigned int)DeviceNode[20] + 2;
          v6 += v26;
          ResultLength = DeviceNode[20] + 2;
          if ( v10 && v4 >= v6 )
          {
            v10 = 1;
            RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v9, v26, (PCUNICODE_STRING)(DeviceNode + 20));
            *(_QWORD *)(a2 + 24) = &v9[-a2];
          }
          else
          {
            v10 = 0;
          }
        }
        ObfDereferenceObjectWithTag(v20, 0x67446F50u);
      }
    }
  }
  *v28 = v6;
  if ( !v10 )
    return 3221225507LL;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( !v7 )
      *(_QWORD *)(a2 + 16) = 0LL;
    if ( !v8 )
      *(_QWORD *)(a2 + 24) = 0LL;
  }
  return 0LL;
}

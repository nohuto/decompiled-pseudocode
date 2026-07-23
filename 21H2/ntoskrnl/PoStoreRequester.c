/*
 * XREFs of PoStoreRequester @ 0x1402710E8
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140271020 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoStoreDiagnosticContext @ 0x14038ADEC (PoStoreDiagnosticContext.c)
 *     PopDiagTracePowerRequestCreate @ 0x140670078 (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     RtlStringCbCopyUnicodeString @ 0x140271E8C (RtlStringCbCopyUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v8; // rbp
  char v9; // dl
  unsigned __int16 *v10; // r13
  char *v11; // r14
  char v12; // bl
  int v13; // eax
  unsigned __int16 *v14; // rsi
  __int64 v15; // rcx
  char *v16; // rdx
  char *i; // rax
  char *v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v21; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  struct _DEVICE_OBJECT *v23; // rsi
  NTSTATUS DeviceProperty; // eax
  const UNICODE_STRING *p_DriverName; // r8
  ULONG v26; // ecx
  __int64 v27; // rcx
  unsigned __int16 *DeviceNode; // rcx
  size_t v29; // rdx
  char v30; // [rsp+70h] [rbp+8h]
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 *v32; // [rsp+80h] [rbp+18h]

  v32 = a3;
  v4 = *a3;
  v8 = 40LL;
  ResultLength = 0;
  v9 = 0;
  v30 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 && v4 >= 0x28 )
  {
    v11 = (char *)(a2 + 40);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a1;
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( *(_DWORD *)a1 )
  {
    if ( v12 )
    {
      if ( (unsigned int)Feature_3401902395__private_IsEnabledDeviceUsage() )
        v13 = *(_DWORD *)(a1 + 32);
      else
        v13 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1088LL);
      *(_DWORD *)(a2 + 24) = v13;
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 40);
    }
    if ( (unsigned int)Feature_3401902395__private_IsEnabledDeviceUsage() )
      v14 = (unsigned __int16 *)(a1 + 16);
    else
      v14 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 8) + 1472LL);
    v15 = *v14;
    v16 = (char *)*((_QWORD *)v14 + 1);
    ResultLength = *v14;
    if ( a4 )
    {
      for ( i = &v16[2 * ((unsigned __int64)(unsigned int)v15 >> 1)]; i != v16 && *(_WORD *)i != 92; i -= 2 )
        ;
      if ( i != v16 )
      {
        v18 = i + 2;
        v15 = (unsigned int)((_DWORD)v16 - (_DWORD)v18 + v15);
        v16 = v18;
        ResultLength = v15;
      }
    }
    v19 = (unsigned int)v15;
    v8 = v15 + 42;
    if ( v12 && v4 >= v8 )
    {
      v12 = 1;
      memmove(v11, v16, (unsigned int)v15);
      *(_WORD *)&v11[2 * (v19 >> 1)] = 0;
      *(_QWORD *)(a2 + 16) = &v11[-a2];
LABEL_24:
      v9 = 0;
      goto LABEL_25;
    }
    v12 = 0;
    v9 = 0;
  }
  else
  {
    v21 = *(_QWORD *)(a1 + 8);
    if ( v21 )
    {
      DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v21, 1732538192LL);
      v23 = DeviceAttachmentBaseRefWithTag;
      if ( !DeviceAttachmentBaseRefWithTag )
        goto LABEL_24;
      if ( DeviceAttachmentBaseRefWithTag->DeviceObjectExtension->DeviceNode )
      {
        if ( v12 )
        {
          DeviceProperty = IoGetDeviceProperty(
                             DeviceAttachmentBaseRefWithTag,
                             DevicePropertyDeviceDescription,
                             v4 - 40,
                             v11,
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
        p_DriverName = &v23->DriverObject->DriverName;
        v26 = p_DriverName->Length + 2;
        ResultLength = v26;
        if ( v12 && v4 >= (unsigned __int64)v26 + 40 )
        {
          v12 = 1;
          RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v11, v26, p_DriverName);
        }
        else
        {
          v12 = 0;
        }
      }
      v27 = ResultLength;
      v8 = ResultLength + 40LL;
      if ( v12 )
      {
        v30 = 1;
        *(_QWORD *)(a2 + 16) = &v11[-a2];
        v11 += v27;
      }
      DeviceNode = (unsigned __int16 *)v23->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
      {
        v10 = DeviceNode + 20;
        v29 = (unsigned int)DeviceNode[20] + 2;
        v8 += v29;
        ResultLength = DeviceNode[20] + 2;
        if ( v12 && v4 >= v8 )
        {
          v12 = 1;
          RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v11, v29, (PCUNICODE_STRING)(DeviceNode + 20));
          *(_QWORD *)(a2 + 24) = &v11[-a2];
        }
        else
        {
          v12 = 0;
        }
      }
      ObfDereferenceObjectWithTag(v23, 0x67446F50u);
      v9 = v30;
    }
  }
LABEL_25:
  *v32 = v8;
  if ( !v12 )
    return 3221225507LL;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( !v9 )
      *(_QWORD *)(a2 + 16) = 0LL;
    if ( !v10 )
      *(_QWORD *)(a2 + 24) = 0LL;
  }
  return 0LL;
}

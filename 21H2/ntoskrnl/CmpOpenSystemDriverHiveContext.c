/*
 * XREFs of CmpOpenSystemDriverHiveContext @ 0x140A62428
 * Callers:
 *     CmGetSystemDriverList @ 0x140A60174 (CmGetSystemDriverList.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     RtlCreateUnicodeString @ 0x140669AF0 (RtlCreateUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpOpenSystemDriverHiveContext(PCUNICODE_STRING Source, __int64 a2)
{
  unsigned __int16 Length; // ax
  struct _DMA_ADAPTER *v5; // rdi
  int appended; // ebx
  __int64 v7; // r8
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  struct _DMA_ADAPTER *v12; // [rsp+B0h] [rbp+40h] BYREF

  Length = Source->Length;
  *(&Destination.MaximumLength + 2) = 0;
  v12 = 0LL;
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(CmRegistryMachineName.Length + Length + 4);
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v5 = 0LL;
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x20204D43u);
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &CmRegistryMachineName);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\");
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(&Destination, Source);
        if ( appended >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          appended = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          if ( appended >= 0 )
          {
            appended = CmObReferenceObjectByHandle(KeyHandle, 1u, v7, 0, &v12, 0LL);
            if ( appended >= 0 )
            {
              if ( RtlCreateUnicodeString((PUNICODE_STRING)(a2 + 16), Source->Buffer) )
              {
                *(_QWORD *)(a2 + 32) = KeyHandle;
                *(_QWORD *)(a2 + 40) = v12;
                KeyHandle = 0LL;
                goto LABEL_9;
              }
              appended = -1073741801;
            }
            v5 = v12;
          }
        }
      }
    }
  }
  else
  {
    appended = -1073741801;
  }
LABEL_9:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)appended;
}

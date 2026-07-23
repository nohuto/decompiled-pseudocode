/*
 * XREFs of EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x140939330
 * Callers:
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140939650 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     KiGetCpuVendor @ 0x14099CF68 (KiGetCpuVendor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAddMicroarchitecturalPmcToPmcGroup(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r14
  __int64 v4; // rdx
  __int64 v5; // rax
  SIZE_T v8; // rbx
  wchar_t *PoolWithTag; // r15
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int CpuVendor; // esi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF

  v2 = a2 + 184;
  *(&ObjectAttributes.Length + 1) = 0;
  v4 = -1LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v5 = -1LL;
  Data = 0;
  DestinationString = 0LL;
  do
    ++v5;
  while ( *(_WORD *)&v2[2 * v5] );
  if ( (unsigned int)v5 >= 0xFF )
    return 3221225476LL;
  do
    ++v4;
  while ( *(_WORD *)(a1 + 2 * v4) );
  v8 = (unsigned int)(2 * v4 + 512);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x50777445u);
  RtlStringCbPrintfW(PoolWithTag, (unsigned int)v8, L"%ws\\%ws", a1, v2);
  RtlInitUnicodeString(&DestinationString, PoolWithTag);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Interval");
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a2 + 8, 4u);
    if ( v10 >= 0 )
    {
      CpuVendor = KiGetCpuVendor(v12, v11);
      if ( (unsigned int)(CpuVendor - 1) > 1 )
      {
LABEL_17:
        v10 = -1073741822;
        goto LABEL_18;
      }
      Data = *a2;
      RtlInitUnicodeString(&DestinationString, L"Event");
      v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
      if ( v10 >= 0 )
      {
        if ( (unsigned int)(CpuVendor - 1) <= 1 )
        {
          Data = a2[1];
          RtlInitUnicodeString(&DestinationString, L"Unit");
          v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
          if ( v10 >= 0 && CpuVendor == 2 )
          {
            Data = a2[2];
            RtlInitUnicodeString(&DestinationString, L"CMask");
            v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
            if ( v10 >= 0 )
            {
              Data = a2[3];
              RtlInitUnicodeString(&DestinationString, L"CMaskInvert");
              v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
              if ( v10 >= 0 )
              {
                Data = a2[4];
                RtlInitUnicodeString(&DestinationString, L"AnyThread");
                v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
                if ( v10 >= 0 )
                {
                  Data = a2[5];
                  RtlInitUnicodeString(&DestinationString, L"EdgeDetect");
                  v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
                }
              }
            }
          }
          goto LABEL_18;
        }
        goto LABEL_17;
      }
    }
  }
LABEL_18:
  ExFreePoolWithTag(PoolWithTag, 0x50777445u);
  return (unsigned int)v10;
}

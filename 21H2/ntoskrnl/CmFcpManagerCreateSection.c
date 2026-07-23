/*
 * XREFs of CmFcpManagerCreateSection @ 0x14087E6D0
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DE64 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087E1C0 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x14087E7C4 (CmFcpManagerCreateSectionFromBuffer.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateSection @ 0x1403FAEC0 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmFcpManagerCreateSection(LARGE_INTEGER a1, __int64 a2, void *a3, _QWORD *a4)
{
  NTSTATUS v7; // ebx
  LARGE_INTEGER MaximumSize; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE SectionHandle; // [rsp+A0h] [rbp+20h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  *(&ObjectAttributes.Attributes + 1) = 0;
  SectionHandle = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.SecurityDescriptor = a3;
  MaximumSize = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v7 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v7 >= 0 )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(SectionHandle, 6u, MmSectionObjectType, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v7 = 0;
      a4[1] = Object;
      *a4 = a2;
      a4[2] = a1.QuadPart;
    }
  }
  if ( SectionHandle )
    ZwClose(SectionHandle);
  return (unsigned int)v7;
}

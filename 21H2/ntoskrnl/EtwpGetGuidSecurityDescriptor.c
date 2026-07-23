/*
 * XREFs of EtwpGetGuidSecurityDescriptor @ 0x14063926C
 * Callers:
 *     EtwpGetSecurityDescriptorByGuid @ 0x14063915C (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpInitializeSecurity @ 0x140A73508 (EtwpInitializeSecurity.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     SeValidSecurityDescriptor @ 0x1405F1FD0 (SeValidSecurityDescriptor.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1406393A0 (RtlQueryRegistryValueWithFallback.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpGetGuidSecurityDescriptor(PUNICODE_STRING ValueName, _QWORD *a2)
{
  PVOID ValueData; // rbx
  SIZE_T v3; // rsi
  NTSTATUS v6; // eax
  int v7; // edi
  PVOID PoolWithTag; // rax
  ULONG Length; // [rsp+68h] [rbp+10h] BYREF
  ULONG ValueType; // [rsp+70h] [rbp+18h] BYREF

  ValueData = 0LL;
  v3 = 512LL;
  ValueType = 0;
  *a2 = 0LL;
  for ( Length = 512; ; v3 = Length )
  {
    if ( ValueData )
      ExFreePoolWithTag(ValueData, 0);
    ValueData = ExAllocatePoolWithTag(PagedPool, (unsigned int)v3, 0x50777445u);
    if ( !ValueData )
      break;
    v6 = RtlQueryRegistryValueWithFallback(
           EtwpMutableSecurityKeyHandle,
           EtwpSecurityKeyHandle,
           ValueName,
           v3,
           &ValueType,
           ValueData,
           &Length);
    v7 = v6;
    if ( v6 != -2147483643 && v6 != -1073741789 )
    {
      v3 = Length;
      goto LABEL_8;
    }
  }
  v7 = -1073741670;
LABEL_8:
  if ( v7 >= 0 && ValueType == 3 )
  {
    if ( SeValidSecurityDescriptor(v3, ValueData) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x50777445u);
      *a2 = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, ValueData, v3);
      else
        v7 = -1073741670;
    }
    else
    {
      v7 = -1073741703;
    }
  }
  if ( ValueData )
    ExFreePoolWithTag(ValueData, 0);
  return (unsigned int)v7;
}

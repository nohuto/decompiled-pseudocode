/*
 * XREFs of ArbAddMmConfigRangeAsBootReserved @ 0x1407A2060
 * Callers:
 *     IopMemInitialize @ 0x1407A1E34 (IopMemInitialize.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlAddRange @ 0x1407645D0 (RtlAddRange.c)
 *     ArbpGetRegistryValue @ 0x1407A2D30 (ArbpGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ArbAddMmConfigRangeAsBootReserved(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rsi
  int v3; // edi
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  int RegistryValue; // eax
  int v9; // eax
  SIZE_T v10; // r14
  PVOID PoolWithTag; // rax
  unsigned int *i; // r14
  int v13; // eax
  int v14; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  __int128 v16; // [rsp+48h] [rbp-21h] BYREF
  __int128 v17; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v2 = (unsigned int *)ArbMmConfigRange;
  v3 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v16 = 0LL;
  v17 = 0LL;
  if ( ArbMmConfigRange )
  {
LABEL_9:
    for ( i = v2 + 2; i < &v2[8 * v2[1] + 2]; i += 8 )
    {
      v13 = *((unsigned __int8 *)i + 1);
      v14 = *(_DWORD *)(a1 + 32);
      if ( v13 == v14 || (_BYTE)v13 == 7 && v14 == 3 )
      {
        v3 = RtlAddRange(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 1, 1, 0LL, 0LL);
        if ( v3 < 0 )
          break;
      }
    }
    goto LABEL_14;
  }
  ObjectAttributes.RootDirectory = 0LL;
  *((_QWORD *)&v16 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  LODWORD(v16) = 7733366;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  LODWORD(v17) = 2228258;
  *((_QWORD *)&v17 + 1) = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
  if ( v7 < 0 )
  {
    ZwClose(KeyHandle);
    return v7;
  }
  RegistryValue = ArbpGetRegistryValue(Handle);
  v3 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741670 )
      v3 = 0;
    goto LABEL_14;
  }
  if ( MEMORY[4] == 10 )
  {
    v2 = (unsigned int *)(MEMORY[8] + 32LL);
    v9 = *(_DWORD *)(MEMORY[8] + 0x24LL);
    if ( v9 )
    {
      v10 = (unsigned int)(32 * v9 + 8);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x4E627241u);
      ArbMmConfigRange = (__int64)PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, v2, (unsigned int)v10);
    }
    goto LABEL_9;
  }
  v3 = -1073741811;
LABEL_14:
  ZwClose(Handle);
  ZwClose(KeyHandle);
  return v3;
}

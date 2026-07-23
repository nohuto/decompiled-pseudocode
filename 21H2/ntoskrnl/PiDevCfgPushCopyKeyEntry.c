/*
 * XREFs of PiDevCfgPushCopyKeyEntry @ 0x14037C1E4
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x140769EBC (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgPushCopyKeyEntry(HANDLE *a1, void *a2, void *a3, int a4)
{
  NTSTATUS v4; // edi
  HANDLE *PoolWithTag; // rax
  HANDLE *v10; // rbx
  HANDLE *v11; // r14
  HANDLE **v12; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF

  v4 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x63647050u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *((_DWORD *)PoolWithTag + 8) = a4;
  v11 = PoolWithTag + 2;
  if ( a4 >= 0 )
  {
    *v11 = a2;
    PoolWithTag[3] = a3;
LABEL_4:
    v12 = (HANDLE **)a1[1];
    if ( *v12 != a1 )
      __fastfail(3u);
    *v10 = a1;
    v10[1] = v12;
    *v12 = v10;
    a1[1] = v10;
    v10 = 0LL;
    goto LABEL_6;
  }
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDevCfgEmptyString;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(v11, 0x20019u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDevCfgEmptyString;
    ObjectAttributes.RootDirectory = a3;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(v10 + 3, 0xF003Fu, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      *((_DWORD *)v10 + 8) |= 0x40000000u;
      goto LABEL_4;
    }
    ZwClose(*v11);
  }
LABEL_6:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v4;
}

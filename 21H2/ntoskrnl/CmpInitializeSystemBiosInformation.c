/*
 * XREFs of CmpInitializeSystemBiosInformation @ 0x140A8F8C0
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x140A59C04 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     CmpBuildRegMultiSz @ 0x140A8F670 (CmpBuildRegMultiSz.c)
 */

void __fastcall CmpInitializeSystemBiosInformation(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  char *PoolWithTag; // rax
  __int64 v6; // rdx
  char *v7; // rbx
  const void *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  KeyHandle = (HANDLE)-1LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = *(unsigned __int16 *)(v1 + 2720);
  v3 = *(unsigned __int16 *)(v1 + 2736);
  v4 = *(unsigned __int16 *)(v1 + 2752);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v3 + v4 + v2 + 8, 0x20204D43u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = *(const void **)(v1 + 2728);
    v13 = 0;
    CmpBuildRegMultiSz((__int64)PoolWithTag, v6, &v13, v8, v2);
    CmpBuildRegMultiSz((__int64)v7, v9, &v13, *(const void **)(v1 + 2744), v3);
    CmpBuildRegMultiSz((__int64)v7, v10, &v13, *(const void **)(v1 + 2760), v4);
    v11 = v13;
    *(_WORD *)&v7[v13] = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpSystemBiosVersionString, 0, 7u, v7, v11 + 2);
    ExFreePoolWithTag(v7, 0);
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
}

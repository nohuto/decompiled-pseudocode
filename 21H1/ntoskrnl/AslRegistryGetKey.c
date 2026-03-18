/*
 * XREFs of AslRegistryGetKey @ 0x1407AC8DC
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1407AC85C (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslpProcessMatchRegNode @ 0x14096577C (AslpProcessMatchRegNode.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     AslRegistryBuildMachinePath @ 0x1407AC9C0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407ACA74 (AslRegistryBuildUserPath.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, const WCHAR *a2, ACCESS_MASK a3, int a4)
{
  int v6; // ebx
  NTSTATUS v7; // eax
  HANDLE v9; // rax
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF
  int v13; // [rsp+A8h] [rbp+38h]

  *a1 = 0LL;
  v13 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_OWORD *)P = 0LL;
  if ( !a4 )
  {
    v6 = AslRegistryBuildUserPath((PUNICODE_STRING)P, a2);
    if ( v6 >= 0 )
      goto LABEL_3;
LABEL_9:
    AslLogCallPrintf(1LL);
    goto LABEL_5;
  }
  v6 = AslRegistryBuildMachinePath((PUNICODE_STRING)P, a2);
  if ( v6 < 0 )
    goto LABEL_9;
LABEL_3:
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v6 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -1073741772 )
      goto LABEL_5;
    goto LABEL_9;
  }
  v9 = KeyHandle;
  v6 = 0;
  KeyHandle = 0LL;
  *a1 = v9;
LABEL_5:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x74705041u);
  return (unsigned int)v6;
}

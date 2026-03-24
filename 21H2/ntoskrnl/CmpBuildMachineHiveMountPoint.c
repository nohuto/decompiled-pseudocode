/*
 * XREFs of CmpBuildMachineHiveMountPoint @ 0x14078F83C
 * Callers:
 *     CmpFindMachineHiveByMountPoint @ 0x14078F4F0 (CmpFindMachineHiveByMountPoint.c)
 *     CmpInitializeSystemHivesLoad @ 0x14078F594 (CmpInitializeSystemHivesLoad.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140265A40 (RtlAppendUnicodeToString.c)
 */

NTSTATUS __fastcall CmpBuildMachineHiveMountPoint(unsigned int a1, UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  wchar_t *v5; // rdx

  v3 = a1;
  RtlAppendUnicodeToString(a2, L"\\REGISTRY\\");
  v4 = 25 * v3;
  RtlAppendUnicodeToString(a2, CmpMachineHiveList[v4 + 1]);
  v5 = CmpMachineHiveList[v4 + 2];
  if ( !v5 )
  {
    v5 = CmpMachineHiveList[v4];
    CmpMachineHiveList[v4 + 2] = v5;
  }
  return RtlAppendUnicodeToString(a2, v5);
}

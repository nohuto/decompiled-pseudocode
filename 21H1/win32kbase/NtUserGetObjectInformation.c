/*
 * XREFs of NtUserGetObjectInformation @ 0x1C001D660
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetUserObjectInformationEntryPoint @ 0x1C001D684 (ApiSetEditionGetUserObjectInformationEntryPoint.c)
 */

__int64 __fastcall NtUserGetObjectInformation(int a1, int a2, int a3, int a4, __int64 a5)
{
  return (int)ApiSetEditionGetUserObjectInformationEntryPoint(a1, a2, a3, a4, a5);
}

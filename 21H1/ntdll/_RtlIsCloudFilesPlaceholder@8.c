/*
 * XREFs of _RtlIsCloudFilesPlaceholder@8 @ 0x4B2EC0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall RtlIsCloudFilesPlaceholder(__int16 a1, int a2)
{
  return (a1 & 0x400) != 0 && (a2 & 0xFFFF0FFF) == 0x9000001A;
}

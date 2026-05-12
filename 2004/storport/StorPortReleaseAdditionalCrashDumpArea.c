/*
 * XREFs of StorPortReleaseAdditionalCrashDumpArea @ 0x1C00135B8
 * Callers:
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00131D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C0048108 (RaUnitStorageFreeDumpInfo.c)
 * Callees:
 *     StorFreeContiguousMemory @ 0x1C0071830 (StorFreeContiguousMemory.c)
 */

__int64 __fastcall StorPortReleaseAdditionalCrashDumpArea(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  v6 = 0;
  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 184);
    if ( v2 )
    {
      v4[0] = *(_QWORD *)(a2 + 168);
      v4[1] = *(_QWORD *)(a2 + 176);
      v5 = v2;
      return StorFreeContiguousMemory(a1, v4);
    }
  }
  return result;
}

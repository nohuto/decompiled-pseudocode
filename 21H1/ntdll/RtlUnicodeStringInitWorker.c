/*
 * XREFs of RtlUnicodeStringInitWorker @ 0x4B32C921
 * Callers:
 *     _RtlpGetPolicyValueForSystemCapability@8 @ 0x4B2EF60F (_RtlpGetPolicyValueForSystemCapability@8.c)
 *     _LdrpAppxGetRemediationRegistryKey@12 @ 0x4B32C6BD (_LdrpAppxGetRemediationRegistryKey@12.c)
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 *     _RtlpGetVolumeHandle@8 @ 0x4B389B86 (_RtlpGetVolumeHandle@8.c)
 *     _RtlpQueryDiskSpacePolicy@8 @ 0x4B389C18 (_RtlpQueryDiskSpacePolicy@8.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x4B2D5B2E (RtlStringLengthWorkerW.c)
 */

int __fastcall RtlUnicodeStringInitWorker(int a1, _WORD *a2, int a3, int a4)
{
  int v5; // esi
  __int16 v7; // cx
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v5 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( a2 )
  {
    v5 = RtlStringLengthWorkerW(a2, 0x7FFF, &v9);
    if ( v5 >= 0 )
    {
      if ( a1 )
      {
        v7 = v9;
        *(_DWORD *)(a1 + 4) = a2;
        *(_WORD *)a1 = 2 * v7;
        *(_WORD *)(a1 + 2) = 2 * v7 + 2;
      }
      else
      {
        return -1073741811;
      }
    }
  }
  return v5;
}

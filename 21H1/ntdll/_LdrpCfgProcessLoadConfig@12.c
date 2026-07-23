/*
 * XREFs of _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0
 * Callers:
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 * Callees:
 *     _LdrpLogCFGModuleInfoTelemetry@8 @ 0x4B2ADD70 (_LdrpLogCFGModuleInfoTelemetry@8.c)
 *     _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470 (_RtlpImageDirectoryEntryToDataEx@20.c)
 *     _LdrControlFlowGuardEnforcedWithExportSuppression@0 @ 0x4B2D00AD (_LdrControlFlowGuardEnforcedWithExportSuppression@0.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _LdrpValidPathComponentsMask@0 @ 0x4B2D011D (_LdrpValidPathComponentsMask@0.c)
 *     _LdrpMakePermanentImageCommit@8 @ 0x4B2D1B08 (_LdrpMakePermanentImageCommit@8.c)
 *     _LdrpIsModuleUnderSystem32@4 @ 0x4B2E8D7C (_LdrpIsModuleUnderSystem32@4.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

NTSTATUS __fastcall LdrpCfgProcessLoadConfig(unsigned int *a1, int a2, int a3)
{
  int valid; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  NTSTATUS result; // eax
  int (**v15)(); // edi
  unsigned int v16; // ecx
  int (*v17)(); // eax
  int v18; // edi
  int v19; // [esp+Ch] [ebp-18h] BYREF
  int v20; // [esp+10h] [ebp-14h] BYREF
  ULONG OldProtect; // [esp+14h] [ebp-10h] BYREF
  PVOID BaseAddress; // [esp+18h] [ebp-Ch] BYREF
  ULONG_PTR RegionSize; // [esp+1Ch] [ebp-8h] BYREF

  HIDWORD(RegionSize) = a2;
  if ( !a3 || *(_DWORD *)a3 < 0x5Cu )
    return 0;
  valid = LdrpValidPathComponentsMask();
  v5 = (valid | 0x8000) & *(unsigned __int16 *)(a3 + 54);
  a1[40] = v5;
  if ( (v5 & valid) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32(a1) )
  {
    if ( a1 == (unsigned int *)LdrpImageEntry )
      v18 = v5 | 0x200;
    else
      v18 = v5 | 0x100;
    a1[40] = v18;
  }
  if ( (*(_DWORD *)(a3 + 88) & 0x1000) != 0 && (a1[13] |= 0x8000u, (*(_DWORD *)(a3 + 88) & 0x2000) != 0) )
  {
    if ( RtlpImageDirectoryEntryToDataEx(a1[6], 1, 0xDu, (unsigned int *)&v19, &v20) < 0 )
      v6 = 0;
    else
      v6 = v20;
    v7 = HIDWORD(RegionSize);
    if ( v6 )
    {
      v8 = *(unsigned __int16 *)(HIDWORD(RegionSize) + 20);
      HIDWORD(RegionSize) = 0;
      v9 = v8 + v7 + 24;
      if ( *(_WORD *)(v7 + 6) )
      {
        v10 = *(_DWORD *)(v6 + 12);
        v11 = *(unsigned __int16 *)(v7 + 6);
        v20 = v10;
        while ( (unsigned int)(v10 - *(_DWORD *)(v9 + 12)) >= *(_DWORD *)(v9 + 8) )
        {
          v9 += 40;
          ++HIDWORD(RegionSize);
          v10 = v20;
          if ( HIDWORD(RegionSize) >= v11 )
            goto LABEL_15;
        }
        BaseAddress = (PVOID)(*(_DWORD *)(v9 + 12) + a1[6]);
        LODWORD(RegionSize) = *(_DWORD *)(v9 + 8);
        LdrpMakePermanentImageCommit();
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 2u, &OldProtect);
      }
    }
  }
  else
  {
    v7 = HIDWORD(RegionSize);
  }
LABEL_15:
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 && ((*(_WORD *)(v7 + 94) & 0x4000) == 0 || (*(_DWORD *)(a3 + 88) & 0x100) == 0) )
    LdrpLogCFGModuleInfoTelemetry((int)a1, v7);
  LOBYTE(v13) = LdrControlFlowGuardEnforced();
  if ( !v13 || (*(_WORD *)(v7 + 94) & 0x4000) == 0 || (*(_DWORD *)(a3 + 88) & 0x100) == 0 )
    return 0;
  v15 = *(int (***)())(a3 + 72);
  if ( !v15 || (v16 = a1[6], (unsigned int)v15 < v16) || (unsigned int)v15 >= v16 + a1[8] - 4 || !*v15 )
  {
    v15 = 0;
    goto LABEL_30;
  }
  BaseAddress = *(PVOID *)(a3 + 72);
  LODWORD(RegionSize) = 4;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 4u, &OldProtect);
  if ( result >= 0 )
  {
    if ( !LdrControlFlowGuardEnforcedWithExportSuppression()
      || (v17 = LdrpValidateUserCallTargetES, (*(_DWORD *)(a3 + 88) & 0x4000) == 0) )
    {
      v17 = LdrpValidateUserCallTarget;
    }
    *v15 = v17;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, OldProtect, &OldProtect);
    if ( result >= 0 )
    {
LABEL_30:
      if ( !v15 || *v15 != LdrpValidateUserCallTarget && *v15 != LdrpValidateUserCallTargetES )
        return -1073741762;
      return 0;
    }
  }
  return result;
}

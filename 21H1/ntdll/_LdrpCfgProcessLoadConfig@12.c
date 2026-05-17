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

int __fastcall LdrpCfgProcessLoadConfig(unsigned int *a1, unsigned int a2, int a3)
{
  int valid; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  unsigned int v11; // ecx
  int result; // eax
  int (**v13)(); // edi
  unsigned int v14; // ecx
  int (*v15)(); // eax
  int v16; // edi
  int v17; // [esp+Ch] [ebp-18h] BYREF
  int v18; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch] BYREF
  int v21; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v22; // [esp+20h] [ebp-4h]

  v22 = a2;
  if ( !a3 || *(_DWORD *)a3 < 0x5Cu )
    return 0;
  valid = LdrpValidPathComponentsMask();
  v5 = (valid | 0x8000) & *(unsigned __int16 *)(a3 + 54);
  a1[40] = v5;
  if ( (v5 & valid) != 0 && (unsigned __int8)LdrpIsModuleUnderSystem32(a1) )
  {
    if ( a1 == (unsigned int *)LdrpImageEntry )
      v16 = v5 | 0x200;
    else
      v16 = v5 | 0x100;
    a1[40] = v16;
  }
  if ( (*(_DWORD *)(a3 + 88) & 0x1000) != 0 && (a1[13] |= 0x8000u, (*(_DWORD *)(a3 + 88) & 0x2000) != 0) )
  {
    if ( RtlpImageDirectoryEntryToDataEx(a1[6], 1, 0xDu, &v17, &v18) < 0 )
      v6 = 0;
    else
      v6 = v18;
    v7 = v22;
    if ( v6 )
    {
      v8 = *(unsigned __int16 *)(v22 + 20);
      v22 = 0;
      v9 = v8 + v7 + 24;
      if ( *(_WORD *)(v7 + 6) )
      {
        v10 = *(_DWORD *)(v6 + 12);
        v11 = *(unsigned __int16 *)(v7 + 6);
        v18 = v10;
        while ( (unsigned int)(v10 - *(_DWORD *)(v9 + 12)) >= *(_DWORD *)(v9 + 8) )
        {
          v9 += 40;
          ++v22;
          v10 = v18;
          if ( v22 >= v11 )
            goto LABEL_15;
        }
        v20 = *(_DWORD *)(v9 + 12) + a1[6];
        v21 = *(_DWORD *)(v9 + 8);
        LdrpMakePermanentImageCommit();
        ZwProtectVirtualMemory(-1, &v20, &v21, 2, &v19);
      }
    }
  }
  else
  {
    v7 = v22;
  }
LABEL_15:
  if ( LdrControlFlowGuardEnforced() && ((*(_WORD *)(v7 + 94) & 0x4000) == 0 || (*(_DWORD *)(a3 + 88) & 0x100) == 0) )
    LdrpLogCFGModuleInfoTelemetry((int)a1, v7);
  if ( !LdrControlFlowGuardEnforced() || (*(_WORD *)(v7 + 94) & 0x4000) == 0 || (*(_DWORD *)(a3 + 88) & 0x100) == 0 )
    return 0;
  v13 = *(int (***)())(a3 + 72);
  if ( !v13 || (v14 = a1[6], (unsigned int)v13 < v14) || (unsigned int)v13 >= v14 + a1[8] - 4 || !*v13 )
  {
    v13 = 0;
    goto LABEL_30;
  }
  v20 = *(_DWORD *)(a3 + 72);
  v21 = 4;
  result = ZwProtectVirtualMemory(-1, &v20, &v21, 4, &v19);
  if ( result >= 0 )
  {
    if ( !LdrControlFlowGuardEnforcedWithExportSuppression()
      || (v15 = LdrpValidateUserCallTargetES, (*(_DWORD *)(a3 + 88) & 0x4000) == 0) )
    {
      v15 = LdrpValidateUserCallTarget;
    }
    *v13 = v15;
    result = ZwProtectVirtualMemory(-1, &v20, &v21, v19, &v19);
    if ( result >= 0 )
    {
LABEL_30:
      if ( !v13 || *v13 != LdrpValidateUserCallTarget && *v13 != LdrpValidateUserCallTargetES )
        return -1073741762;
      return 0;
    }
  }
  return result;
}

/*
 * XREFs of _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302
 * Callers:
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 * Callees:
 *     _LdrpCorProcessImports@4 @ 0x4B2A6D1F (_LdrpCorProcessImports@4.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0 (_LdrpMapAndSnapDependency@4.c)
 *     _LdrpInsertModuleToIndexLockHeld@8 @ 0x4B2CC82C (_LdrpInsertModuleToIndexLockHeld@8.c)
 *     _LdrpFindLoadedDllByMappingLockHeld@16 @ 0x4B2CD468 (_LdrpFindLoadedDllByMappingLockHeld@16.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpFindLoadedDllByNameLockHeld@20 @ 0x4B2CDF40 (_LdrpFindLoadedDllByNameLockHeld@20.c)
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 *     _LdrpLogNewDllLoad@8 @ 0x4B2D1499 (_LdrpLogNewDllLoad@8.c)
 *     _LdrpCompleteMapModule@12 @ 0x4B2D14E4 (_LdrpCompleteMapModule@12.c)
 *     _LdrpInsertDataTableEntry@4 @ 0x4B2D15EF (_LdrpInsertDataTableEntry@4.c)
 *     _LdrpLoadContextReplaceModule@8 @ 0x4B2DE80E (_LdrpLoadContextReplaceModule@8.c)
 */

int __fastcall LdrpMapDllWithSectionHandle(int a1, void *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // esi
  int v5; // edi
  void *v6; // ecx
  NTSTATUS v7; // edx
  int v8; // ecx
  int v9; // eax
  PIMAGE_NT_HEADERS v11; // ecx
  ULONG64 v12; // [esp-Ch] [ebp-2Ch]
  int *v13; // [esp+Ch] [ebp-14h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [esp+10h] [ebp-10h] BYREF
  NTSTATUS v15; // [esp+14h] [ebp-Ch]
  _RTL_BALANCED_NODE *v16[2]; // [esp+18h] [ebp-8h] BYREF

  v3 = LdrpMinimalMapModule((_DWORD *)a1, a2);
  v4 = v3;
  if ( v3 != 1073741838 && v3 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 32);
    v15 = v3;
    v12 = *(unsigned int *)(a1 + 92);
    v13 = 0;
    v4 = RtlImageNtHeaderEx(0, *(PVOID *)(v5 + 24), v12, &OutHeaders);
    if ( v4 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x800000) != 0 )
      {
        v11 = OutHeaders;
        v7 = 0;
        *(_DWORD *)(v5 + 68) = OutHeaders->FileHeader.TimeDateStamp;
        *(_DWORD *)(v5 + 32) = v11->OptionalHeader.SizeOfImage;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( LdrpFindLoadedDllByNameLockHeld(
               (unsigned __int16 *)(v5 + 44),
               (*(_DWORD *)(a1 + 16) & 0x20) == 0 ? (_UNICODE_STRING *)(v5 + 36) : 0,
               *(_DWORD *)(a1 + 16),
               &v13,
               *(_DWORD *)(v5 + 144)) == -1073741515 )
        {
          v16[0] = (_RTL_BALANCED_NODE *)OutHeaders->FileHeader.TimeDateStamp;
          v6 = *(void **)(v5 + 24);
          v16[1] = (_RTL_BALANCED_NODE *)OutHeaders->OptionalHeader.SizeOfImage;
          LdrpFindLoadedDllByMappingLockHeld(OutHeaders, v6, v5, v16, (_RTL_BALANCED_NODE ***)&v13);
        }
        if ( !v13 )
        {
          LdrpInsertDataTableEntry(v5);
          LdrpInsertModuleToIndexLockHeld(v5, (int)OutHeaders);
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( v13 )
        {
          LdrpLoadContextReplaceModule(a1);
          return v4;
        }
        v7 = v15;
      }
      if ( LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return -1073741275;
      }
      else
      {
        v4 = LdrpCompleteMapModule(v7);
        if ( v4 >= 0 )
        {
          v4 = LdrpProcessMappedModule(v5, *(_DWORD *)(a1 + 16), v8, v8);
          if ( v4 >= 0 )
          {
            LdrpLogNewDllLoad(*(_DWORD *)(a1 + 28), v5);
            v9 = *(_DWORD *)(a1 + 28);
            if ( v9 )
              *(_DWORD *)(v5 + 96) = *(_DWORD *)(v9 + 24);
            if ( (*(_BYTE *)(v5 + 52) & 4) == 0 && (*(_DWORD *)(a1 + 16) & 0x800000) == 0 )
            {
              LdrpLogDllState(*(_DWORD *)(v5 + 24), v5 + 36, 5294);
              v4 = 0;
              *(_DWORD *)(*(_DWORD *)(v5 + 80) + 32) = 9;
            }
            else if ( (*(_DWORD *)(v5 + 52) & 0x1000000) != 0 )
            {
              return LdrpCorProcessImports((_DWORD *)v5);
            }
            else
            {
              LdrpMapAndSnapDependency((_DWORD *)a1);
              return **(_DWORD **)(a1 + 24);
            }
          }
        }
      }
    }
  }
  return v4;
}

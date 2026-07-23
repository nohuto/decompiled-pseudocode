/*
 * XREFs of _LdrpProcessMappedModule@16 @ 0x4B2D05EC
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpIsExecutableRelocatedImage@4 @ 0x4B2ABBC0 (_LdrpIsExecutableRelocatedImage@4.c)
 *     _RtlInsertInvertedFunctionTable@8 @ 0x4B2B9D0A (_RtlInsertInvertedFunctionTable@8.c)
 *     _LdrInitSecurityCookie@20 @ 0x4B2B9EDA (_LdrInitSecurityCookie@20.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 *     _RtlpStkMarkDllRange@4 @ 0x4B2D07C5 (_RtlpStkMarkDllRange@4.c)
 *     _LdrpValidateEntrySection@4 @ 0x4B2D0824 (_LdrpValidateEntrySection@4.c)
 *     _LdrpGenRandom@0 @ 0x4B2D085D (_LdrpGenRandom@0.c)
 *     _LdrpSignalModuleMapped@4 @ 0x4B2D0A7B (_LdrpSignalModuleMapped@4.c)
 */

int __fastcall LdrpProcessMappedModule(signed __int32 a1, signed __int32 a2, int a3, int a4)
{
  char *v5; // ebx
  NTSTATUS Config; // edi
  int v7; // ecx
  signed __int32 v8; // esi
  bool v9; // zf
  signed __int32 v10; // eax
  PVOID v11; // ebx
  int v12; // eax
  int inited; // eax
  unsigned int MajorSubsystemVersion; // ecx
  int v15; // ecx
  PIMAGE_NT_HEADERS OutHeaders; // [esp+10h] [ebp-18h] BYREF
  int v18; // [esp+14h] [ebp-14h] BYREF
  signed __int32 v19; // [esp+18h] [ebp-10h] BYREF
  signed __int32 v20; // [esp+1Ch] [ebp-Ch]
  NTSTATUS v21; // [esp+20h] [ebp-8h]
  PVOID BaseAddress; // [esp+24h] [ebp-4h]

  v19 = a2;
  v20 = a1;
  BaseAddress = *(PVOID *)(a1 + 24);
  v5 = (char *)BaseAddress;
  Config = RtlImageNtHeaderEx(3u, BaseAddress, 0LL, &OutHeaders);
  v21 = Config;
  if ( Config < 0 )
    return Config;
  if ( (*(_DWORD *)(a1 + 52) & 0x1000004) == 4 )
    *(_DWORD *)(a1 + 28) = OutHeaders->OptionalHeader.AddressOfEntryPoint != 0
                         ? &v5[OutHeaders->OptionalHeader.AddressOfEntryPoint]
                         : 0;
  if ( !(unsigned __int8)LdrpValidateEntrySection(a1) )
    return -1073741701;
  *(_DWORD *)(a1 + 128) = HIDWORD(OutHeaders->OptionalHeader.ImageBase);
  while ( 1 )
  {
    v7 = MEMORY[0x7FFE0018];
    if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
      break;
    _mm_pause();
  }
  v8 = v20;
  Config = v21;
  v10 = v19 & 0x800000;
  v9 = (v19 & 0x800000) == 0;
  v11 = BaseAddress;
  *(_DWORD *)(v20 + 136) = MEMORY[0x7FFE0014];
  *(_DWORD *)(v8 + 140) = v7;
  v20 = v10;
  if ( v9
    && ((*(_BYTE *)(v8 + 52) & 4) != 0 || LdrpIsExecutableRelocatedImage(v11))
    && (*(_DWORD *)(v8 + 52) & 0x2000) == 0 )
  {
    v18 = 0;
    v12 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(v11, 0, dword_4B3A92E0 ^ v12, &v18);
    if ( v11 == (PVOID)1260912640
      || !*(_DWORD *)(v8 + 28)
      || ((MajorSubsystemVersion = OutHeaders->OptionalHeader.MajorSubsystemVersion, MajorSubsystemVersion != 6)
       || OutHeaders->OptionalHeader.MinorSubsystemVersion < 3u)
      && MajorSubsystemVersion < 7
      || inited )
    {
      Config = LdrpCfgProcessLoadConfig((unsigned int *)v8, (int)OutHeaders, v18);
      if ( Config < 0 )
        return Config;
      goto LABEL_16;
    }
    return -1073741701;
  }
LABEL_16:
  v15 = *(_DWORD *)(v8 + 52);
  if ( (((v15 & 0x200) == 0) & !_bittest(&v19, 0x17u)) != 0 )
  {
    RtlInsertInvertedFunctionTable(v11, *(_DWORD *)(v8 + 32));
    v15 = *(_DWORD *)(v8 + 52);
  }
  *(_DWORD *)(v8 + 52) = v15 | 0x2200;
  RtlpStkMarkDllRange(v8);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v9 = v20 == 0;
  *(_DWORD *)(*(_DWORD *)(v8 + 80) + 32) = 2;
  if ( v9 && *(_DWORD *)(v8 + 92) )
    LdrpSignalModuleMapped(v8);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(*(_DWORD *)(v8 + 24), v8 + 36, 5281);
  return Config;
}

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

int __fastcall LdrpProcessMappedModule(unsigned int *a1, signed __int32 a2, int a3, int a4)
{
  unsigned int v5; // ebx
  int Config; // edi
  unsigned int v7; // ecx
  unsigned int *v8; // esi
  bool v9; // zf
  signed __int32 v10; // eax
  void *v11; // ebx
  int v12; // eax
  int inited; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v17; // [esp+10h] [ebp-18h] BYREF
  int v18; // [esp+14h] [ebp-14h] BYREF
  signed __int32 v19; // [esp+18h] [ebp-10h] BYREF
  unsigned int *v20; // [esp+1Ch] [ebp-Ch]
  int v21; // [esp+20h] [ebp-8h]
  void *v22; // [esp+24h] [ebp-4h]

  v19 = a2;
  v20 = a1;
  v22 = (void *)a1[6];
  v5 = (unsigned int)v22;
  Config = RtlImageNtHeaderEx(3, (unsigned int)v22, 0, 0, &v17);
  v21 = Config;
  if ( Config < 0 )
    return Config;
  if ( (a1[13] & 0x1000004) == 4 )
    a1[7] = *(_DWORD *)(v17 + 40) != 0 ? *(_DWORD *)(v17 + 40) + v5 : 0;
  if ( !(unsigned __int8)LdrpValidateEntrySection(a1) )
    return -1073741701;
  a1[32] = *(_DWORD *)(v17 + 52);
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
  v11 = v22;
  v20[34] = MEMORY[0x7FFE0014];
  v8[35] = v7;
  v20 = (unsigned int *)v10;
  if ( v9 && ((v8[13] & 4) != 0 || LdrpIsExecutableRelocatedImage(v11)) && (v8[13] & 0x2000) == 0 )
  {
    v18 = 0;
    v12 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(0, dword_4B3A92E0 ^ v12, &v18);
    if ( v11 == (void *)1260912640
      || !v8[7]
      || ((v14 = *(unsigned __int16 *)(v17 + 72), v14 != 6) || *(_WORD *)(v17 + 74) < 3u) && v14 < 7
      || inited )
    {
      Config = LdrpCfgProcessLoadConfig(v8, v17, v18);
      if ( Config < 0 )
        return Config;
      goto LABEL_16;
    }
    return -1073741701;
  }
LABEL_16:
  v15 = v8[13];
  if ( (((v15 & 0x200) == 0) & !_bittest(&v19, 0x17u)) != 0 )
  {
    RtlInsertInvertedFunctionTable((int)v11, v8[8]);
    v15 = v8[13];
  }
  v8[13] = v15 | 0x2200;
  RtlpStkMarkDllRange(v8);
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v9 = v20 == 0;
  *(_DWORD *)(v8[20] + 32) = 2;
  if ( v9 && v8[23] )
    LdrpSignalModuleMapped(v8);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(v8[6], (int)(v8 + 9), 5281);
  return Config;
}

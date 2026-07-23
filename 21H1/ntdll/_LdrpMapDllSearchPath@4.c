/*
 * XREFs of _LdrpMapDllSearchPath@4 @ 0x4B2DE148
 * Callers:
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0 (_LdrStandardizeSystemPath@4.c)
 *     _LdrpHashUnicodeString@4 @ 0x4B2CE090 (_LdrpHashUnicodeString@4.c)
 *     _LdrpInitializeDllPath@12 @ 0x4B2CE876 (_LdrpInitializeDllPath@12.c)
 *     _LdrpValidPathComponentsMask@0 @ 0x4B2D011D (_LdrpValidPathComponentsMask@0.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _LdrpFreeUnicodeString@4 @ 0x4B2DE399 (_LdrpFreeUnicodeString@4.c)
 *     _LdrpAppCompatRedirect@20 @ 0x4B2DE3B6 (_LdrpAppCompatRedirect@20.c)
 *     _LdrpIsSecurityEtwLoggingEnabled@0 @ 0x4B2DE42E (_LdrpIsSecurityEtwLoggingEnabled@0.c)
 *     _LdrpFindExistingModule@20 @ 0x4B2DE476 (_LdrpFindExistingModule@20.c)
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     _LdrpLoadContextReplaceModule@8 @ 0x4B2DE80E (_LdrpLoadContextReplaceModule@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrpLogEtwDllSearchResults@8 @ 0x4B32FECC (_LdrpLogEtwDllSearchResults@8.c)
 */

int __thiscall LdrpMapDllSearchPath(int this)
{
  int v1; // edx
  int v3; // ecx
  int v4; // ebx
  int valid; // eax
  int v6; // ecx
  int v7; // eax
  PWSTR *v8; // ecx
  int v9; // eax
  int ExistingModule; // esi
  int v11; // eax
  size_t v13; // [esp-4h] [ebp-19Ch]
  bool v14; // [esp+Fh] [ebp-189h] BYREF
  _UNICODE_STRING SystemPath; // [esp+10h] [ebp-188h] BYREF
  int v16; // [esp+18h] [ebp-180h] BYREF
  int v17; // [esp+1Ch] [ebp-17Ch]
  PWSTR *v18; // [esp+20h] [ebp-178h]
  int v19; // [esp+24h] [ebp-174h] BYREF
  _UNICODE_STRING DestinationString; // [esp+28h] [ebp-170h] BYREF
  PCWSTR v21[2]; // [esp+30h] [ebp-168h] BYREF
  int v22; // [esp+38h] [ebp-160h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [esp+3Ch] [ebp-15Ch]
  _WORD v24[128]; // [esp+40h] [ebp-158h] BYREF
  PWSTR Path[19]; // [esp+140h] [ebp-58h] BYREF
  char v26; // [esp+18Ch] [ebp-Ch]

  v1 = 0;
  v22 = 0x1000000;
  v21[0] = 0;
  v21[1] = 0;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v24;
  v19 = 0;
  v3 = *(_DWORD *)(this + 28);
  v4 = *(_DWORD *)(this + 32);
  v17 = 0;
  v14 = 0;
  v24[0] = 0;
  *(_DWORD *)&SystemPath.Length = 0;
  SystemPath.Buffer = 0;
  v16 = 0;
  if ( v3 && (valid = LdrpValidPathComponentsMask(), (v7 = *(_DWORD *)(v6 + 160) & valid) != 0) )
  {
    LdrpInitializeDllPath(*(_DWORD *)(v6 + 40), v7 | 1, (int *)Path);
    v8 = Path;
  }
  else
  {
    LODWORD(v13) = 80;
    memset(Path, v1, v13);
    v8 = *(PWSTR **)(this + 8);
  }
  v18 = v8;
  while ( 1 )
  {
    v9 = LdrpSearchPath(
           (const UNICODE_STRING *)this,
           (PCWSTR *)v8,
           (*(_DWORD *)(this + 16) & 8) != 0,
           v21,
           &v22,
           &DestinationString,
           &SystemPath,
           &v14,
           (int)&v16);
    ExistingModule = v9;
    if ( v14 )
      *(_DWORD *)(v4 + 52) |= 1u;
    if ( v9 == -1073741515 )
      break;
    if ( v9 < 0 )
      goto LABEL_15;
LABEL_9:
    v17 = 1;
    LdrStandardizeSystemPath(&SystemPath);
    if ( !*(_DWORD *)(this + 96) )
    {
      ExistingModule = LdrpAppCompatRedirect(&DestinationString, (int)&v22, ExistingModule);
      if ( ExistingModule < 0 )
        goto LABEL_15;
      if ( (*(_DWORD *)(this + 16) & 0x10000) != 0 )
        v16 |= 1u;
      v11 = LdrpHashUnicodeString(&DestinationString);
      *(_DWORD *)(v4 + 144) = v11;
      ExistingModule = LdrpFindExistingModule(*(_DWORD *)(this + 16), v11, &v19);
      if ( ExistingModule != -1073741515 )
        goto LABEL_15;
    }
    LdrpFreeUnicodeString(v4 + 36);
    *(_UNICODE_STRING *)(v4 + 36) = SystemPath;
    *(_UNICODE_STRING *)(v4 + 44) = DestinationString;
    *(_DWORD *)&SystemPath.Length = 0;
    SystemPath.Buffer = 0;
    ExistingModule = LdrpMapDllNtFileName(this, &v22);
    if ( ExistingModule != 1073741838 )
      goto LABEL_15;
    if ( v24 != (_WORD *)BoundaryDescriptor )
      RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
    v8 = v18;
    BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v24;
    v22 = 0x1000000;
    v24[0] = 0;
  }
  if ( !v17 )
    goto LABEL_9;
  ExistingModule = -1073741701;
LABEL_15:
  if ( v19 )
  {
    LdrpLoadContextReplaceModule(this);
  }
  else if ( (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v16, this);
  }
  if ( v24 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  v22 = 0x1000000;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v24;
  v24[0] = 0;
  LdrpFreeUnicodeString(&SystemPath);
  if ( v26 )
    RtlReleasePath(Path[0]);
  return ExistingModule;
}

/*
 * XREFs of _LdrpPrepareImportAddressTableForSnap@4 @ 0x4B2B9C01
 * Callers:
 *     _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0 (_LdrpMapAndSnapDependency@4.c)
 *     _AVrfpSnapDllImports@4 @ 0x4B33959D (_AVrfpSnapDllImports@4.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 * Callees:
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470 (_RtlpImageDirectoryEntryToDataEx@20.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     @LdrpTouchPageForWrite@4 @ 0x4B2F2950 (@LdrpTouchPageForWrite@4.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

NTSTATUS __thiscall LdrpPrepareImportAddressTableForSnap(_DWORD *this)
{
  _DWORD *v2; // ebx
  NTSTATUS v3; // esi
  bool v4; // sf
  int v5; // eax
  bool v6; // zf
  _DWORD *Config; // eax
  PIMAGE_NT_HEADERS v8; // edx
  _DWORD *v9; // eax
  unsigned int v10; // ecx
  NTSTATUS result; // eax
  unsigned int v12; // edi
  unsigned int v13; // ebx
  _DWORD *v14; // ebx
  unsigned int NumberOfSections; // edx
  _IMAGE_NT_HEADERS64 *v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // eax
  int LoaderFlags; // [esp+10h] [ebp-14h] BYREF
  ULONG_PTR RegionSize; // [esp+14h] [ebp-10h] BYREF
  int v22; // [esp+1Ch] [ebp-8h]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+20h] [ebp-4h] BYREF

  v2 = this + 16;
  v22 = this[8];
  v3 = 0;
  v4 = RtlpImageDirectoryEntryToDataEx(*(PVOID *)(v22 + 24), 12, (int)(this + 16), (int)&LoaderFlags) < 0;
  v5 = 0;
  if ( !v4 )
    v5 = LoaderFlags;
  v6 = (this[4] & 0x800000) == 0;
  this[15] = v5;
  if ( !v6 )
    return 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(v22 + 24), 0LL, &OutHeaders);
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(*(PVOID *)(v22 + 24));
  if ( Config && *Config >= 0x5Cu )
  {
    v8 = OutHeaders;
    if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) == 0 )
      goto LABEL_11;
    if ( (Config[22] & 0x100) == 0 )
      goto LABEL_11;
    v9 = (_DWORD *)Config[18];
    this[22] = v9;
    if ( !v9 )
      goto LABEL_11;
    this[21] = *v9;
  }
  v8 = OutHeaders;
LABEL_11:
  v10 = this[15];
  if ( v10 )
    goto LABEL_12;
  v10 = 0;
  v14 = (_DWORD *)((char *)&v8->OptionalHeader.Magic + v8->FileHeader.SizeOfOptionalHeader);
  LoaderFlags = v8->OptionalHeader.LoaderFlags;
  if ( !LoaderFlags )
    goto LABEL_19;
  NumberOfSections = v8->FileHeader.NumberOfSections;
  v16 = 0;
  OutHeaders = 0;
  if ( !NumberOfSections )
    goto LABEL_19;
  while ( 1 )
  {
    v17 = v14[3];
    if ( LoaderFlags >= v17 )
      break;
LABEL_27:
    v16 = (_IMAGE_NT_HEADERS64 *)((char *)v16 + 1);
    v14 += 10;
    OutHeaders = v16;
    if ( (unsigned int)v16 >= NumberOfSections )
    {
      v10 = 0;
      goto LABEL_19;
    }
  }
  if ( LoaderFlags >= v17 + v14[4] )
  {
    v16 = OutHeaders;
    goto LABEL_27;
  }
  v10 = *(_DWORD *)(v22 + 24) + v17;
  this[15] = v10;
  v18 = v14[2];
  this[16] = v18;
  if ( v18 )
  {
LABEL_19:
    v2 = this + 16;
    goto LABEL_20;
  }
  v19 = v14[4];
  v2 = this + 16;
  this[16] = v19;
LABEL_20:
  if ( !v10 )
    return v3;
LABEL_12:
  if ( !*v2 )
    return v3;
  LODWORD(RegionSize) = *v2;
  HIDWORD(RegionSize) = v10;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, &RegionSize, 4u, this + 20);
  v3 = result;
  if ( result >= 0 )
  {
    v12 = HIDWORD(RegionSize);
    v13 = HIDWORD(RegionSize) + RegionSize;
    do
    {
      LdrpTouchPageForWrite(v12);
      v12 += 4096;
    }
    while ( v12 < v13 );
    return v3;
  }
  return result;
}

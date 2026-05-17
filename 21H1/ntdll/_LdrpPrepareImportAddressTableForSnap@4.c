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

int __thiscall LdrpPrepareImportAddressTableForSnap(int *this)
{
  int *v2; // ebx
  int v3; // esi
  bool v4; // sf
  unsigned int v5; // eax
  bool v6; // zf
  _DWORD *Config; // eax
  int v8; // edx
  int *v9; // eax
  unsigned int v10; // ecx
  int result; // eax
  unsigned int v12; // edi
  unsigned int v13; // ebx
  _DWORD *v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // [esp+10h] [ebp-14h] BYREF
  int v21; // [esp+14h] [ebp-10h] BYREF
  unsigned int v22; // [esp+18h] [ebp-Ch] BYREF
  int v23; // [esp+1Ch] [ebp-8h]
  int v24; // [esp+20h] [ebp-4h] BYREF

  v2 = this + 16;
  v23 = this[8];
  v3 = 0;
  v4 = (int)RtlpImageDirectoryEntryToDataEx(12, this + 16, &v20) < 0;
  v5 = 0;
  if ( !v4 )
    v5 = v20;
  v6 = (this[4] & 0x800000) == 0;
  this[15] = v5;
  if ( !v6 )
    return 0;
  RtlImageNtHeaderEx(3, *(_DWORD *)(v23 + 24), 0, 0, &v24);
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(*(_DWORD *)(v23 + 24));
  if ( Config && *Config >= 0x5Cu )
  {
    v8 = v24;
    if ( (*(_WORD *)(v24 + 94) & 0x4000) == 0 )
      goto LABEL_11;
    if ( (Config[22] & 0x100) == 0 )
      goto LABEL_11;
    v9 = (int *)Config[18];
    this[22] = (int)v9;
    if ( !v9 )
      goto LABEL_11;
    this[21] = *v9;
  }
  v8 = v24;
LABEL_11:
  v10 = this[15];
  if ( v10 )
    goto LABEL_12;
  v10 = 0;
  v14 = (_DWORD *)(v8 + *(unsigned __int16 *)(v8 + 20) + 24);
  v20 = *(_DWORD *)(v8 + 128);
  if ( !v20 )
    goto LABEL_19;
  v15 = *(unsigned __int16 *)(v8 + 6);
  v16 = 0;
  v24 = 0;
  if ( !v15 )
    goto LABEL_19;
  while ( 1 )
  {
    v17 = v14[3];
    if ( v20 >= v17 )
      break;
LABEL_27:
    ++v16;
    v14 += 10;
    v24 = v16;
    if ( v16 >= v15 )
    {
      v10 = 0;
      goto LABEL_19;
    }
  }
  if ( v20 >= v17 + v14[4] )
  {
    v16 = v24;
    goto LABEL_27;
  }
  v10 = *(_DWORD *)(v23 + 24) + v17;
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
  v21 = *v2;
  v22 = v10;
  result = ZwProtectVirtualMemory(-1, &v22, &v21, 4, this + 20);
  v3 = result;
  if ( result >= 0 )
  {
    v12 = v22;
    v13 = v22 + v21;
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

/*
 * XREFs of _LdrpCheckForSecuROMImage@4 @ 0x4B33163B
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlDosPathNameToNtPathName_U@16 @ 0x4B2D1B70 (_RtlDosPathNameToNtPathName_U@16.c)
 *     _NtReadFile@36 @ 0x4B2F29C0 (_NtReadFile@36.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

char __thiscall LdrpCheckForSecuROMImage(int this)
{
  char *ImageBaseAddress; // edx
  char v2; // bl
  unsigned int v3; // esi
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // edi
  char *v9; // eax
  int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  _DWORD *Config; // eax
  _DWORD *v14; // esi
  int v16; // [esp+10h] [ebp-88h] BYREF
  int v17; // [esp+14h] [ebp-84h]
  HANDLE FileHandle; // [esp+1Ch] [ebp-7Ch] BYREF
  int v19; // [esp+20h] [ebp-78h] BYREF
  int v20; // [esp+24h] [ebp-74h]
  unsigned int v21; // [esp+2Ch] [ebp-6Ch] BYREF
  int v22; // [esp+30h] [ebp-68h] BYREF
  char *v23; // [esp+34h] [ebp-64h]
  int v24; // [esp+38h] [ebp-60h] BYREF
  _DWORD *v25; // [esp+3Ch] [ebp-5Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+40h] [ebp-58h] BYREF
  unsigned __int16 v27; // [esp+48h] [ebp-50h] BYREF
  int v28; // [esp+4Ch] [ebp-4Ch]
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+50h] [ebp-48h] BYREF
  char v30[40]; // [esp+68h] [ebp-30h] BYREF
  unsigned int v31; // [esp+90h] [ebp-8h]

  ImageBaseAddress = (char *)NtCurrentPeb()->ImageBaseAddress;
  v2 = 0;
  v3 = 0;
  v4 = *(unsigned __int16 *)(this + 6);
  v5 = *(unsigned __int16 *)(this + 20) + 44;
  v23 = ImageBaseAddress;
  if ( v4 )
  {
    v6 = (_DWORD *)(this + v5);
    do
    {
      if ( *(v6 - 1) && *(v6 - 1) + *v6 > v3 )
        v3 = *(v6 - 1) + *v6;
      v6 += 10;
      --v4;
    }
    while ( v4 );
    ImageBaseAddress = v23;
  }
  v7 = *(_DWORD *)(this + 172);
  if ( v7 )
  {
    v8 = v7 / 0x1C;
    if ( v7 / 0x1C )
    {
      v9 = &ImageBaseAddress[*(_DWORD *)(this + 168) + 24];
      do
      {
        if ( *((_DWORD *)v9 - 2) && *((_DWORD *)v9 - 2) + *(_DWORD *)v9 > v3 )
          v3 = *((_DWORD *)v9 - 2) + *(_DWORD *)v9;
        v9 += 28;
        --v8;
      }
      while ( v8 );
    }
    v2 = 0;
  }
  v10 = *(_DWORD *)(this + 156);
  if ( v10 && v10 + *(_DWORD *)(this + 152) > v3 )
    v3 = v10 + *(_DWORD *)(this + 152);
  if ( ZwQueryInformationProcess(-1, 37, (int)v30, 48, 0) >= 0
    && v3 + 0x2000 < v31
    && RtlDosPathNameToNtPathName_U(*(_DWORD *)(LdrpImageEntry + 40), &v27, 0, 0) )
  {
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v27;
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) < 0 )
    {
LABEL_44:
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v28);
      return v2;
    }
    v17 = 0;
    v16 = v31 - 4;
    if ( NtReadFile((int)FileHandle, 0, 0, 0, (int)&IoStatusBlock, (int)&v21, 4, (int)&v16, 0) >= 0 )
    {
      v11 = v21;
      v12 = v31;
      if ( v21 >= 4 && v21 + 4 <= v31 )
      {
        v16 = v21 - 4;
        v17 = 0;
        if ( NtReadFile((int)FileHandle, 0, 0, 0, (int)&IoStatusBlock, (int)&v19, 8, (int)&v16, 0) < 0 )
          goto LABEL_43;
        if ( v20 == 1147429953 )
          goto LABEL_39;
        v12 = v31;
        if ( v19 + 4 <= v31 )
        {
          v16 = v19;
          v17 = 0;
          if ( NtReadFile((int)FileHandle, 0, 0, 0, (int)&IoStatusBlock, (int)&v19, 4, (int)&v16, 0) < 0 )
            goto LABEL_43;
          if ( v19 == 1147429953 )
            goto LABEL_39;
          v12 = v31;
        }
        v11 = v21;
      }
      if ( v11 + 12 <= v12 )
      {
        v16 = v12 - v11 - 12;
        v17 = 0;
        if ( NtReadFile((int)FileHandle, 0, 0, 0, (int)&IoStatusBlock, (int)&v19, 8, (int)&v16, 0) >= 0 )
        {
          if ( v20 == 1147429953
            || v19 + 4 <= v31
            && (v16 = v19,
                v17 = 0,
                NtReadFile((int)FileHandle, 0, 0, 0, (int)&IoStatusBlock, (int)&v19, 4, (int)&v16, 0) >= 0)
            && v19 == 1147429953 )
          {
LABEL_39:
            v2 = 1;
            v22 = 0;
            Config = LdrImageDirectoryEntryToLoadConfig(v23);
            v14 = Config;
            if ( Config )
            {
              if ( *Config >= 0x48u )
              {
                v25 = Config;
                v22 = *Config;
                if ( ZwProtectVirtualMemory(-1, (int)&v25, (int)&v22, 4, (int)&v24) >= 0 )
                {
                  v14[16] = 0;
                  v14[17] = 0;
                  ZwProtectVirtualMemory(-1, (int)&v25, (int)&v22, v24, (int)&v24);
                }
              }
            }
          }
        }
      }
    }
LABEL_43:
    NtClose(FileHandle);
    goto LABEL_44;
  }
  return v2;
}

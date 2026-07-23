/*
 * XREFs of _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0
 * Callers:
 *     _LdrpFindMessageInAlternateModule@20 @ 0x4B2B86EA (_LdrpFindMessageInAlternateModule@20.c)
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrpAccessResourceData@16 @ 0x4B2BD414 (_LdrpAccessResourceData@16.c)
 *     _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4 (_RtlpFileIsWin32WithRCManifest@4.c)
 * Callees:
 *     _RtlpImageDirectoryEntryToData64@24 @ 0x4B2A7346 (_RtlpImageDirectoryEntryToData64@24.c)
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 *     _RtlSectionTableFromVirtualAddress@12 @ 0x4B2B9E97 (_RtlSectionTableFromVirtualAddress@12.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrpGetFileSizeFromLoadAsDataTable@4 @ 0x4B2BE66C (_LdrpGetFileSizeFromLoadAsDataTable@4.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 */

int __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned int BaseOfImage,
        unsigned int a2,
        unsigned int *a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  PVOID v5; // eax
  char *v6; // edi
  int v7; // esi
  NTSTATUS v8; // eax
  WORD Magic; // ax
  DWORD VirtualAddress; // edi
  _DWORD *v11; // edx
  unsigned int NumberOfSections; // eax
  unsigned int i; // ecx
  DWORD v14; // ebx
  _IMAGE_NT_HEADERS64 *SizeOfImage; // ecx
  int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  WORD v19; // ax
  unsigned int v20; // esi
  _DWORD *v21; // edx
  unsigned int v22; // ebx
  unsigned int j; // ecx
  unsigned int v24; // edi
  _IMAGE_NT_HEADERS64 *v25; // eax
  char *v26; // esi
  unsigned int v27; // esi
  WORD v29; // dx
  _IMAGE_NT_HEADERS64 *v30; // edi
  PIMAGE_SECTION_HEADER v31; // eax
  PIMAGE_SECTION_HEADER v32; // esi
  _BYTE *v33; // eax
  ULONG_PTR *v34; // [esp+0h] [ebp-A8h]
  ULONG v35; // [esp+4h] [ebp-A4h]
  char MemoryInformation[12]; // [esp+14h] [ebp-94h] BYREF
  _IMAGE_NT_HEADERS64 *v37; // [esp+20h] [ebp-88h]
  unsigned int v38; // [esp+34h] [ebp-74h]
  _DWORD *v39; // [esp+38h] [ebp-70h]
  char *v40; // [esp+3Ch] [ebp-6Ch]
  PIMAGE_NT_HEADERS NtHeaders; // [esp+40h] [ebp-68h]
  int v42; // [esp+44h] [ebp-64h]
  int v43[3]; // [esp+48h] [ebp-60h] BYREF
  DWORD v44; // [esp+54h] [ebp-54h]
  int v45; // [esp+58h] [ebp-50h]
  char *v46; // [esp+5Ch] [ebp-4Ch]
  unsigned int v47; // [esp+60h] [ebp-48h]
  _IMAGE_NT_HEADERS64 *v48; // [esp+64h] [ebp-44h]
  PIMAGE_NT_HEADERS v49; // [esp+68h] [ebp-40h] BYREF
  PIMAGE_NT_HEADERS v50; // [esp+6Ch] [ebp-3Ch] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [esp+70h] [ebp-38h] BYREF
  PVOID v52; // [esp+74h] [ebp-34h]
  unsigned int v53; // [esp+78h] [ebp-30h]
  PVOID BaseOfImagea; // [esp+7Ch] [ebp-2Ch]
  _IMAGE_NT_HEADERS64 *v55; // [esp+80h] [ebp-28h]
  PVOID BaseAddress; // [esp+84h] [ebp-24h] BYREF
  NTSTATUS VirtualMemory; // [esp+88h] [ebp-20h]
  char v58; // [esp+8Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+90h] [ebp-18h]

  v53 = a2;
  v4 = BaseOfImage;
  BaseOfImagea = (PVOID)BaseOfImage;
  ms_exc.registration.TryLevel = 0;
  v58 = 1;
  v5 = (PVOID)BaseOfImage;
  v52 = (PVOID)BaseOfImage;
  OutHeaders = 0;
  v6 = 0;
  BaseAddress = 0;
  v7 = BaseOfImage & 3;
  if ( (BaseOfImage & 3) != 0 )
  {
    v58 = (BaseOfImage & 1) == 0;
    v5 = (PVOID)(BaseOfImage & 0xFFFFFFFC);
    v52 = (PVOID)(BaseOfImage & 0xFFFFFFFC);
  }
  v8 = RtlImageNtHeaderEx(1u, v5, 0LL, &OutHeaders);
  if ( !OutHeaders )
    goto LABEL_17;
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic != 267 )
  {
    if ( Magic != 523 )
      goto LABEL_67;
    v8 = RtlpImageDirectoryEntryToData64((char *)v52, v58, 2u, (unsigned int *)v43, OutHeaders, &BaseAddress);
    v6 = (char *)BaseAddress;
LABEL_17:
    if ( v8 >= 0 )
      goto LABEL_18;
    goto LABEL_67;
  }
  if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) <= 2 )
    goto LABEL_67;
  VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
  v44 = VirtualAddress;
  if ( !VirtualAddress )
    goto LABEL_67;
  v43[0] = OutHeaders->OptionalHeader.DataDirectory[0].Size;
  if ( !v58 && VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
  {
    v11 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
    NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
    v46 = (char *)NumberOfSections;
    for ( i = 0; ; ++i )
    {
      v43[1] = i;
      v43[2] = (int)v11;
      if ( i >= NumberOfSections )
        break;
      v14 = v11[3];
      if ( VirtualAddress >= v14 )
      {
        if ( VirtualAddress < v14 + v11[4] )
        {
          if ( v11 )
          {
            v6 = (char *)v52 + v44 + v11[5] - v14;
            goto LABEL_15;
          }
          break;
        }
        NumberOfSections = (unsigned int)v46;
      }
      v11 += 10;
    }
    v6 = 0;
LABEL_15:
    BaseAddress = v6;
    v4 = (unsigned int)BaseOfImagea;
    if ( v6 )
    {
      v8 = 0;
      goto LABEL_17;
    }
LABEL_67:
    v6 = 0;
    goto LABEL_60;
  }
  v6 = (char *)v52 + VirtualAddress;
LABEL_60:
  BaseAddress = v6;
LABEL_18:
  v40 = v6;
  if ( !v6 )
    goto LABEL_69;
  VirtualMemory = 0;
  OutHeaders = 0;
  v55 = 0;
  v49 = 0;
  BaseAddress = (PVOID)(v4 & 0xFFFFFFFC);
  RtlImageNtHeaderEx(1u, (PVOID)(v4 & 0xFFFFFFFC), 0LL, &v49);
  if ( !v49 )
  {
    v16 = -1073741701;
    VirtualMemory = -1073741701;
    SizeOfImage = OutHeaders;
    goto LABEL_26;
  }
  if ( (v4 & 1) == 0 )
  {
    v29 = v49->OptionalHeader.Magic;
    if ( v29 != 267 && v29 != 523 )
    {
      SizeOfImage = 0;
      v55 = 0;
      v16 = -1073741701;
      VirtualMemory = -1073741701;
      goto LABEL_26;
    }
    SizeOfImage = (_IMAGE_NT_HEADERS64 *)v49->OptionalHeader.SizeOfImage;
    goto LABEL_24;
  }
  SizeOfImage = (_IMAGE_NT_HEADERS64 *)LdrpGetFileSizeFromLoadAsDataTable(v4);
  OutHeaders = SizeOfImage;
  v55 = SizeOfImage;
  if ( !SizeOfImage )
  {
    VirtualMemory = NtQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFF,
                      BaseAddress,
                      MemoryRegionInformation,
                      MemoryInformation,
                      0x1CuLL,
                      v34);
    if ( VirtualMemory < 0 )
    {
      v16 = -1073741793;
      VirtualMemory = -1073741793;
      SizeOfImage = OutHeaders;
      goto LABEL_26;
    }
    SizeOfImage = v37;
LABEL_24:
    v55 = SizeOfImage;
  }
  v16 = VirtualMemory;
LABEL_26:
  v48 = SizeOfImage;
  v45 = v16;
  if ( v16 == -1073741701 )
    return -1073741701;
  v17 = v4 & 0xFFFFFFFC;
  v47 = v4 & 0xFFFFFFFC;
  if ( v53 <= (v4 & 0xFFFFFFFC) || SizeOfImage && v53 >= (unsigned int)SizeOfImage + v17 )
    return -1073741701;
  v18 = 0;
  v42 = 0;
  if ( v7 )
  {
    if ( (v4 & 1) != 0 )
    {
      v18 = 1;
      v42 = 1;
    }
    v4 = (unsigned int)BaseAddress;
    BaseOfImagea = BaseAddress;
  }
  if ( v18 == 1 )
  {
    v50 = 0;
    RtlImageNtHeaderEx(1u, (PVOID)v4, 0LL, &v50);
    NtHeaders = v50;
    if ( v50 )
    {
      v19 = v50->OptionalHeader.Magic;
      if ( v19 == 267 )
      {
        v20 = v50->OptionalHeader.DataDirectory[0].VirtualAddress;
        goto LABEL_38;
      }
      if ( v19 == 523 )
      {
        v20 = v50->OptionalHeader.DataDirectory[2].VirtualAddress;
LABEL_38:
        if ( v20 )
        {
          v46 = (char *)(v4 + v20 - (_DWORD)v6);
          v21 = (_DWORD *)((char *)&v50->OptionalHeader.Magic + v50->FileHeader.SizeOfOptionalHeader);
          v22 = v50->FileHeader.NumberOfSections;
          for ( j = 0; ; ++j )
          {
            v38 = j;
            v39 = v21;
            if ( j >= v22 )
              break;
            v24 = v21[3];
            if ( v20 >= v24 && v20 < v24 + v21[4] )
            {
              if ( !v21 )
                break;
              v25 = *(_IMAGE_NT_HEADERS64 **)v53;
              if ( *(_DWORD *)v53 <= v21[2] )
              {
                v4 = (unsigned int)BaseOfImagea;
                SizeOfImage = v48;
                v17 = v47;
                v26 = v46;
                goto LABEL_46;
              }
              v43[0] = v21[3];
              v30 = NtHeaders;
              v31 = RtlSectionTableFromVirtualAddress(v25, v34, v35);
              v32 = v31;
              if ( v31 )
              {
                v4 = (unsigned int)BaseOfImagea;
                v33 = RtlAddressInSectionTable(v30, BaseOfImagea, v31->VirtualAddress);
                v26 = &v46[&v40[v32->VirtualAddress - v43[0]] - v33];
                SizeOfImage = v48;
                v17 = v47;
                goto LABEL_46;
              }
              break;
            }
            v21 += 10;
          }
        }
      }
    }
LABEL_69:
    ms_exc.registration.TryLevel = -2;
    return -1073741687;
  }
  v26 = 0;
LABEL_46:
  if ( a3 )
  {
    v27 = *(_DWORD *)v53 - (_DWORD)v26 + v4;
    *a3 = v27;
    if ( v27 <= v17 || SizeOfImage && v27 >= (unsigned int)SizeOfImage + v17 )
    {
      *a3 = 0;
      return -1073741701;
    }
  }
  if ( a4 )
    *a4 = *(_DWORD *)(v53 + 4);
  ms_exc.registration.TryLevel = -2;
  return v45;
}

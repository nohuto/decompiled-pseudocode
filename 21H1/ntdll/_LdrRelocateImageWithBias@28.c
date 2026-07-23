/*
 * XREFs of _LdrRelocateImageWithBias@28 @ 0x4B342836
 * Callers:
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrProcessRelocationBlockLongLong@24 @ 0x4B3427A0 (_LdrProcessRelocationBlockLongLong@24.c)
 */

NTSTATUS __cdecl LdrRelocateImageWithBias(
        PVOID NewBase,
        LONGLONG Bias,
        PSTR LoaderName,
        NTSTATUS Success,
        NTSTATUS Conflict,
        NTSTATUS Invalid)
{
  void *v6; // ecx
  NTSTATUS v7; // esi
  void *v8; // ebx
  PIMAGE_NT_HEADERS v9; // edi
  WORD Magic; // ax
  _IMAGE_NT_HEADERS64 *v11; // edx
  ULONG v12; // eax
  ULONG v13; // ecx
  int v14; // ecx
  DWORD Signature; // edx
  PIMAGE_NT_HEADERS OutHeaders; // [esp+8h] [ebp-10h] BYREF
  ULONG v18; // [esp+Ch] [ebp-Ch]
  unsigned int ImageBase_high; // [esp+10h] [ebp-8h]
  ULONG Size; // [esp+14h] [ebp-4h] BYREF

  v7 = 0;
  v8 = v6;
  Size = 0;
  if ( RtlImageNtHeaderEx(1u, v6, 0LL, &OutHeaders) >= 0 )
  {
    v9 = OutHeaders;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      ImageBase_high = HIDWORD(OutHeaders->OptionalHeader.ImageBase);
      v18 = 0;
    }
    else
    {
      if ( Magic != 523 )
        return -1073741701;
      ImageBase_high = OutHeaders->OptionalHeader.ImageBase;
      v18 = HIDWORD(OutHeaders->OptionalHeader.ImageBase);
    }
    v11 = (_IMAGE_NT_HEADERS64 *)RtlImageDirectoryEntryToData(v8, 1u, 5u, &Size);
    OutHeaders = v11;
    if ( !v11 )
      return (v9->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
    v12 = Size;
    if ( !Size )
      return (v9->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
    v13 = (unsigned int)((unsigned int)v8 - __PAIR64__(v18, ImageBase_high)) >> 32;
    ImageBase_high = (unsigned int)v8 - ImageBase_high;
    Size = v13;
    while ( 1 )
    {
      v14 = *(_DWORD *)&v11->FileHeader.Machine;
      Signature = v11->Signature;
      v18 = v12 - v14;
      v11 = (_IMAGE_NT_HEADERS64 *)LdrProcessRelocationBlockLongLong(
                                     v9->FileHeader.Machine,
                                     (int)v8 + Signature,
                                     (unsigned int)(v14 - 8) >> 1,
                                     (unsigned __int16 *)&OutHeaders->FileHeader.TimeDateStamp,
                                     ImageBase_high,
                                     Size);
      OutHeaders = v11;
      if ( !v11 )
        break;
      v12 = v18;
      if ( !v18 )
        return v7;
    }
    return -1073741701;
  }
  return -1073741701;
}

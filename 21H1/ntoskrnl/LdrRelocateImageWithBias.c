/*
 * XREFs of LdrRelocateImageWithBias @ 0x140914D04
 * Callers:
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14027DB10 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 *     LdrProcessRelocationBlockLongLong @ 0x140914C48 (LdrProcessRelocationBlockLongLong.c)
 */

NTSTATUS __cdecl LdrRelocateImageWithBias(
        PVOID NewBase,
        LONGLONG Bias,
        PSTR LoaderName,
        NTSTATUS Success,
        NTSTATUS Conflict,
        NTSTATUS Invalid)
{
  NTSTATUS v6; // ebx
  PIMAGE_NT_HEADERS v8; // rdi
  unsigned __int16 Magic; // ax
  unsigned __int64 ImageBase_high; // rbp
  unsigned __int16 *v11; // rax
  ULONG v12; // esi
  unsigned int v13; // r8d
  PIMAGE_NT_HEADERS v15; // [rsp+70h] [rbp+18h] BYREF
  ULONG Size; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  Size = 0;
  v15 = 0LL;
  if ( RtlImageNtHeaderEx(1u, NewBase, 0LL, &v15) < 0 )
    return -1073741701;
  v8 = v15;
  Magic = v15->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    ImageBase_high = HIDWORD(v15->OptionalHeader.ImageBase);
  }
  else
  {
    if ( Magic != 523 )
      return -1073741701;
    ImageBase_high = v15->OptionalHeader.ImageBase;
  }
  v11 = (unsigned __int16 *)RtlImageDirectoryEntryToData(NewBase, 1u, 5u, &Size);
  if ( !v11 )
    return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  v12 = Size;
  if ( !Size )
    return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v13 = *((_DWORD *)v11 + 1);
    v12 -= v13;
    v11 = LdrProcessRelocationBlockLongLong(
            v8->FileHeader.Machine,
            (__int64)NewBase + *(unsigned int *)v11,
            (v13 - 8) >> 1,
            v11 + 4,
            (__int64)NewBase - ImageBase_high);
    if ( !v11 )
      break;
    if ( !v12 )
      return v6;
  }
  return -1073741701;
}

/*
 * XREFs of _RtlDosSearchPath_U@24 @ 0x4B32D140
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDetermineDosPathNameType_U@4 @ 0x4B2B3480 (_RtlDetermineDosPathNameType_U@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlDoesFileExists_UEx@8 @ 0x4B2E3164 (_RtlDoesFileExists_UEx@8.c)
 *     _RtlGetFullPathName_U@16 @ 0x4B2ECAC0 (_RtlGetFullPathName_U@16.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

ULONG __cdecl RtlDosSearchPath_U(
        PCWSTR Path,
        PCWSTR FileName,
        PCWSTR Extension,
        ULONG BufferLength,
        PWSTR Buffer,
        PWSTR *FilePart)
{
  RTL_PATH_TYPE v6; // eax
  PCWSTR v7; // ecx
  WCHAR v9; // dx
  int Length; // edi
  PCWSTR v11; // ebx
  WCHAR *Heap; // edi
  WCHAR v13; // cx
  ULONG FullPathName_U; // esi
  SIZE_T v15; // [esp-4h] [ebp-24h]
  size_t v16; // [esp-4h] [ebp-24h]
  int v17; // [esp+Ch] [ebp-14h]
  int Size; // [esp+10h] [ebp-10h]
  int Size_4; // [esp+14h] [ebp-Ch]
  WCHAR *Size_4a; // [esp+14h] [ebp-Ch]
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-8h] BYREF

  v6 = RtlDetermineDosPathNameType_U(FileName);
  v7 = FileName;
  if ( v6 != RtlPathTypeRelative )
  {
    if ( RtlDoesFileExists_UEx(FileName, 1) )
      return RtlGetFullPathName_U(FileName, BufferLength, Buffer, FilePart);
    return 0;
  }
  if ( *FileName )
  {
    v9 = *FileName;
    while ( v9 != 46 )
    {
      v9 = *++v7;
      if ( !*v7 )
        goto LABEL_8;
    }
    Length = 0;
  }
  else
  {
LABEL_8:
    if ( !Extension )
    {
      Length = 0;
      v17 = 0;
      goto LABEL_14;
    }
    if ( RtlInitUnicodeStringEx(&DestinationString, Extension) < 0 )
      return 0;
    Length = DestinationString.Length;
  }
  v17 = Length;
LABEL_14:
  v11 = Path;
  if ( RtlInitUnicodeStringEx(&DestinationString, Path) < 0 )
    return 0;
  Size_4 = DestinationString.Length;
  if ( RtlInitUnicodeStringEx(&DestinationString, FileName) < 0 )
    return 0;
  Size = DestinationString.Length;
  LODWORD(v15) = Size_4 + 6 + Length + DestinationString.Length;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  Size_4a = Heap;
  if ( !Heap )
    return 0;
  while ( 1 )
  {
    if ( !*v11 )
      goto LABEL_25;
    v13 = *v11;
    do
    {
      ++v11;
      if ( v13 == 59 )
        break;
      *Heap++ = v13;
      v13 = *v11;
    }
    while ( *v11 );
    if ( Heap != Size_4a && *(Heap - 1) != 92 )
      *Heap++ = 92;
    if ( !*v11 )
LABEL_25:
      v11 = 0;
    LODWORD(v16) = Size;
    memcpy(Heap, FileName, v16);
    if ( v17 )
    {
      LODWORD(v16) = v17 + 2;
      memcpy((char *)Heap + Size, Extension, v16);
    }
    else
    {
      *(WCHAR *)((char *)Heap + Size) = 0;
    }
    Heap = Size_4a;
    if ( RtlDoesFileExists_UEx(Size_4a, 0) )
      break;
    if ( !v11 )
    {
      FullPathName_U = 0;
      goto LABEL_33;
    }
  }
  FullPathName_U = RtlGetFullPathName_U(Size_4a, BufferLength, Buffer, FilePart);
LABEL_33:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Size_4a);
  return FullPathName_U;
}

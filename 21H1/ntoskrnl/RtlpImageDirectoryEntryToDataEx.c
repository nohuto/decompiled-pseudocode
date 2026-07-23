/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x14033AAC8
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14027DB10 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x14033ABA0 (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x14033AC20 (RtlpImageDirectoryEntryToData32.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  PVOID v6; // rbx
  NTSTATUS result; // eax
  unsigned __int16 Magic; // ax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64)a5;
  OutHeaders = 0LL;
  v6 = (PVOID)BaseOfImage;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
    v6 = (PVOID)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  result = RtlImageNtHeaderEx(1u, v6, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      return RtlpImageDirectoryEntryToData32(v6, OutHeaders, v5);
    }
    else if ( Magic == 523 )
    {
      return RtlpImageDirectoryEntryToData64(v6, OutHeaders, v5);
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}

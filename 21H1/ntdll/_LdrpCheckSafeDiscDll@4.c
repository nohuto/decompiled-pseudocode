/*
 * XREFs of _LdrpCheckSafeDiscDll@4 @ 0x4B2E7708
 * Callers:
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     __strnicmp @ 0x4B2F74A0 (__strnicmp.c)
 *     _strncmp @ 0x4B2F9EA0 (_strncmp.c)
 */

char __thiscall LdrpCheckSafeDiscDll(_DWORD *this)
{
  char *v1; // ebx
  int v2; // esi
  PIMAGE_NT_HEADERS v3; // edi
  unsigned int SizeOfHeapCommit; // ecx
  DWORD SizeOfImage; // edx
  unsigned int v7; // ecx
  const char *v8; // ebx
  _IMAGE_NT_HEADERS64 *v9; // ecx
  int v10; // eax
  int v11; // eax
  size_t v12; // [esp-4h] [ebp-18h]
  size_t v13; // [esp-4h] [ebp-18h]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+Ch] [ebp-8h] BYREF
  int v15; // [esp+10h] [ebp-4h]

  v1 = (char *)this[6];
  v2 = 0;
  RtlImageNtHeaderEx(3u, v1, 0LL, &OutHeaders);
  v3 = OutHeaders;
  SizeOfHeapCommit = OutHeaders->OptionalHeader.SizeOfHeapCommit;
  if ( !SizeOfHeapCommit )
    return 0;
  if ( !HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit) )
    return 0;
  SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
  if ( SizeOfHeapCommit >= SizeOfImage - 13 )
    return 0;
  v7 = *(_DWORD *)&v1[SizeOfHeapCommit + 12];
  if ( v7 > SizeOfImage - 12 )
    return 0;
  LODWORD(v12) = 12;
  if ( _strnicmp(&v1[v7], "secserv.dll", v12) )
    return 0;
  v8 = (char *)&v3->OptionalHeader + v3->FileHeader.SizeOfOptionalHeader;
  v9 = (_IMAGE_NT_HEADERS64 *)1;
  v10 = 1;
  OutHeaders = (PIMAGE_NT_HEADERS)1;
  v15 = 1;
  if ( !v3->FileHeader.NumberOfSections )
    return 0;
  while ( 1 )
  {
    if ( v10 )
    {
      LODWORD(v13) = 5;
      v11 = strncmp(v8, ".txt", v13);
      v9 = OutHeaders;
      v15 = v11;
    }
    if ( v9 )
    {
      LODWORD(v13) = 6;
      v9 = (_IMAGE_NT_HEADERS64 *)strncmp(v8, ".txt2", v13);
      OutHeaders = v9;
    }
    if ( !v15 && !v9 )
      break;
    v8 += 40;
    if ( ++v2 >= (unsigned int)v3->FileHeader.NumberOfSections )
      return 0;
    v10 = v15;
  }
  return 1;
}

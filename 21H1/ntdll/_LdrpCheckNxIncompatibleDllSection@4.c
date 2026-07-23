/*
 * XREFs of _LdrpCheckNxIncompatibleDllSection@4 @ 0x4B2E7618
 * Callers:
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _strncmp @ 0x4B2F9EA0 (_strncmp.c)
 */

char __thiscall LdrpCheckNxIncompatibleDllSection(int this)
{
  unsigned int v2; // edx
  unsigned int v3; // edi
  PIMAGE_NT_HEADERS v4; // ebx
  char *v5; // esi
  bool v6; // zf
  unsigned int v8; // ecx
  size_t v9; // [esp-4h] [ebp-1Ch]
  unsigned int v10; // [esp+Ch] [ebp-Ch]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+14h] [ebp-4h] BYREF

  RtlImageNtHeaderEx(3u, *(PVOID *)(this + 24), 0LL, &OutHeaders);
  v2 = *(_DWORD *)(this + 28);
  v3 = 0;
  v4 = OutHeaders;
  v10 = v2;
  v5 = (char *)&OutHeaders->OptionalHeader + OutHeaders->FileHeader.SizeOfOptionalHeader;
  if ( !OutHeaders->FileHeader.NumberOfSections )
    return 0;
  while ( 1 )
  {
    if ( !*((_DWORD *)v5 + 3) || !*((_DWORD *)v5 + 2) )
      goto LABEL_8;
    LODWORD(v9) = 8;
    if ( !strncmp(v5, ".aspack", v9) || (LODWORD(v9) = 6, !strncmp(v5, ".pcle", v9)) )
    {
      v8 = *(_DWORD *)(this + 24) + *((_DWORD *)v5 + 3);
      if ( v10 < v8 || v10 > v8 + *((_DWORD *)v5 + 2) )
        goto LABEL_8;
      v6 = (*((_DWORD *)v5 + 9) & 0x20000000) == 0;
    }
    else
    {
      LODWORD(v9) = 8;
      v6 = strncmp(v5, ".sforce", v9) == 0;
    }
    if ( v6 )
      return 1;
LABEL_8:
    ++v3;
    v5 += 40;
    if ( v3 >= v4->FileHeader.NumberOfSections )
      return 0;
  }
}

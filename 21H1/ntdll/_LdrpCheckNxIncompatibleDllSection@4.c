/*
 * XREFs of _LdrpCheckNxIncompatibleDllSection@4 @ 0x4B2E7618
 * Callers:
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _strncmp @ 0x4B2F9EA0 (_strncmp.c)
 */

char __thiscall LdrpCheckNxIncompatibleDllSection(unsigned int *this)
{
  unsigned int v2; // edx
  unsigned int v3; // edi
  int v4; // ebx
  int v5; // esi
  bool v6; // zf
  unsigned int v8; // ecx
  unsigned int v9; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+14h] [ebp-4h] BYREF

  RtlImageNtHeaderEx(3, this[6], 0, 0, &v11);
  v2 = this[7];
  v3 = 0;
  v4 = v11;
  v9 = v2;
  v5 = *(unsigned __int16 *)(v11 + 20) + v11 + 24;
  if ( !*(_WORD *)(v11 + 6) )
    return 0;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v5 + 12) || !*(_DWORD *)(v5 + 8) )
      goto LABEL_8;
    if ( !strncmp((const char *)v5, ".aspack", 8u) || !strncmp((const char *)v5, ".pcle", 6u) )
    {
      v8 = this[6] + *(_DWORD *)(v5 + 12);
      if ( v9 < v8 || v9 > v8 + *(_DWORD *)(v5 + 8) )
        goto LABEL_8;
      v6 = (*(_DWORD *)(v5 + 36) & 0x20000000) == 0;
    }
    else
    {
      v6 = strncmp((const char *)v5, ".sforce", 8u) == 0;
    }
    if ( v6 )
      return 1;
LABEL_8:
    ++v3;
    v5 += 40;
    if ( v3 >= *(unsigned __int16 *)(v4 + 6) )
      return 0;
  }
}

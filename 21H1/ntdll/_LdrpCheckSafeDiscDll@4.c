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
  unsigned int v1; // ebx
  int v2; // esi
  int v3; // edi
  unsigned int v4; // ecx
  int v6; // edx
  unsigned int v7; // ecx
  const char *v8; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h]

  v1 = this[6];
  v2 = 0;
  RtlImageNtHeaderEx(3, v1, 0, 0, &v12);
  v3 = v12;
  v4 = *(_DWORD *)(v12 + 120);
  if ( !v4 )
    return 0;
  if ( !*(_DWORD *)(v12 + 124) )
    return 0;
  v6 = *(_DWORD *)(v12 + 80);
  if ( v4 >= v6 - 13 )
    return 0;
  v7 = *(_DWORD *)(v4 + v1 + 12);
  if ( v7 > v6 - 12 )
    return 0;
  if ( _strnicmp((const char *)(v7 + v1), "secserv.dll", 0xCu) )
    return 0;
  v8 = (const char *)(*(unsigned __int16 *)(v3 + 20) + v3 + 24);
  v9 = 1;
  v10 = 1;
  v12 = 1;
  v13 = 1;
  if ( !*(_WORD *)(v3 + 6) )
    return 0;
  while ( 1 )
  {
    if ( v10 )
    {
      v11 = strncmp(v8, ".txt", 5u);
      v9 = v12;
      v13 = v11;
    }
    if ( v9 )
    {
      v9 = strncmp(v8, ".txt2", 6u);
      v12 = v9;
    }
    if ( !v13 && !v9 )
      break;
    v8 += 40;
    if ( ++v2 >= (unsigned int)*(unsigned __int16 *)(v3 + 6) )
      return 0;
    v10 = v13;
  }
  return 1;
}

/*
 * XREFs of _RtlEnumerateBoundaryDescriptorEntries@12 @ 0x4B2A9488
 * Callers:
 *     _RtlAddSIDToBoundaryDescriptorEx@12 @ 0x4B2A9D06 (_RtlAddSIDToBoundaryDescriptorEx@12.c)
 * Callees:
 *     _RtlpValidateSidBuffer@8 @ 0x4B2A9535 (_RtlpValidateSidBuffer@8.c)
 */

int __fastcall RtlEnumerateBoundaryDescriptorEntries(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  int v8; // edx
  unsigned int v9; // edx
  int v10; // eax
  int v11; // eax
  bool v13; // cf
  int v15; // [esp+10h] [ebp-Ch]
  char *v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  v3 = a1;
  v4 = a1[2];
  if ( v4 < 0x10 )
    return -1073741811;
  if ( *a1 != 1 )
    return -1073741811;
  v5 = (unsigned int)a1 + v4;
  if ( (_DWORD *)((char *)a1 + v4) < a1 )
    return -1073741811;
  v6 = 0;
  v7 = a1 + 4;
  v17 = 0;
  v8 = 0;
  while ( (unsigned int)(v7 + 2) < v5 )
  {
    v15 = v8 + 1;
    v9 = v7[1];
    if ( v9 < 8 )
      return -1073741811;
    v16 = (char *)v7 + v9;
    v3 = a1;
    if ( (_DWORD *)((char *)v7 + v9) < v7 || (unsigned int)v16 > v5 )
      return -1073741811;
    v10 = *v7 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          return -1073741811;
        v13 = v6++ == -1;
        if ( !v13 && v6 != 1 )
          return -1073741270;
      }
      if ( !(unsigned __int8)RtlpValidateSidBuffer() )
        return -1073741811;
    }
    else if ( (unsigned int)++v17 > 1 )
    {
      return -1073741635;
    }
    v8 = v15;
    v7 = (_DWORD *)((unsigned int)(v16 + 7) & 0xFFFFFFF8);
  }
  if ( v3[1] != v8 )
    return -1073741811;
  return 0;
}

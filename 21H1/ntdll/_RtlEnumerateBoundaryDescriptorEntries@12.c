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
  void *v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  int v12; // eax
  bool v14; // cf
  int v16; // [esp+10h] [ebp-Ch]
  char *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]

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
  v18 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = v7 + 2;
    if ( (unsigned int)(v7 + 2) >= v5 )
      break;
    v16 = v8 + 1;
    v10 = v7[1];
    if ( v10 < 8 )
      return -1073741811;
    v17 = (char *)v7 + v10;
    v3 = a1;
    if ( (_DWORD *)((char *)v7 + v10) < v7 || (unsigned int)v17 > v5 )
      return -1073741811;
    v11 = *v7 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          return -1073741811;
        v14 = v6++ == -1;
        if ( !v14 && v6 != 1 )
          return -1073741270;
      }
      if ( !(unsigned __int8)RtlpValidateSidBuffer(v9) )
        return -1073741811;
    }
    else if ( (unsigned int)++v18 > 1 )
    {
      return -1073741635;
    }
    v8 = v16;
    v7 = (_DWORD *)((unsigned int)(v17 + 7) & 0xFFFFFFF8);
  }
  if ( v3[1] != v8 )
    return -1073741811;
  return 0;
}

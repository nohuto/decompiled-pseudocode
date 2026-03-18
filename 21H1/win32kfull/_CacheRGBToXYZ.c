/*
 * XREFs of _CacheRGBToXYZ @ 0x1BCECA
 * Callers:
 *     _ComputeBGRMappingTable @ 0x1BCF91 (_ComputeBGRMappingTable.c)
 * Callees:
 *     _ComputeChecksum @ 0xED870 (_ComputeChecksum.c)
 *     _MulFD6 @ 0xED8A8 (_MulFD6.c)
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall CacheRGBToXYZ(int a1, void *a2, int *a3, int a4)
{
  int v6; // eax
  const void *v7; // edx
  int *v9; // ebx
  int v10; // eax
  _DWORD *v11; // edi
  int v12; // ecx
  unsigned int v13; // ebx
  int v14; // esi
  bool v15; // zf
  unsigned int v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+18h] [ebp-Ch]
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]
  int v22; // [esp+30h] [ebp+Ch]

  v6 = ComputeChecksum((unsigned __int8 *)(a4 + 124), 1129863514, 0x24u);
  v7 = *(const void **)(a1 + 4);
  if ( v7 && *(_DWORD *)a1 == v6 )
  {
    memcpy(a2, v7, *(unsigned __int16 *)(a1 + 10));
    return 0;
  }
  else
  {
    v9 = (int *)(a4 + 148);
    v22 = a4 + 148;
    v21 = 3;
    *a3 = v6;
    v10 = *(unsigned __int16 *)(a1 + 8);
    v11 = a2;
    v17 = v10;
    do
    {
      v20 = *(v9 - 6);
      v19 = *(v9 - 3);
      v12 = *v9;
      v13 = 0;
      v18 = v12;
      do
      {
        v14 = DivFD6(v13, v10);
        *v11 = MulFD6(v20, v14);
        v11[1] = MulFD6(v19, v14);
        v11[2] = MulFD6(v18, v14);
        v10 = v17;
        ++v13;
        v11 += 3;
      }
      while ( v13 <= v17 );
      v9 = (int *)(v22 + 4);
      v15 = v21-- == 1;
      v22 += 4;
    }
    while ( !v15 );
    return a1;
  }
}

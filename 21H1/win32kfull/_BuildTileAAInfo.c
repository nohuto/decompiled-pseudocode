/*
 * XREFs of _BuildTileAAInfo @ 0x1C2972
 * Callers:
 *     <none>
 * Callees:
 *     _ULongAdd @ 0x1BAE44 (_ULongAdd.c)
 *     _ALIGN_MEM @ 0x1C4224 (_ALIGN_MEM.c)
 */

_DWORD *__cdecl BuildTileAAInfo(int a1, int a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, int a10)
{
  int v10; // esi
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h]
  ULONG cjMemSize; // [esp+1Ch] [ebp-4h] BYREF
  int v23; // [esp+38h] [ebp+18h]
  ULONG v24; // [esp+40h] [ebp+20h]

  v10 = *a3;
  v11 = 0;
  v21 = 0;
  cjMemSize = 0;
  v12 = *a4;
  if ( v10 < 0 )
    v10 = 0;
  if ( v12 > a5 )
    v12 = a5;
  v13 = a7 - a6;
  v24 = a7 - a6;
  if ( v12 - v10 <= 0 )
    return 0;
  if ( v13 <= 0 )
    return 0;
  v23 = -1;
  v20 = *a8;
  v19 = *a9;
  if ( *a8 >= *a9 || ALIGN_MEM(&a10, a10) < 0 || (ULongAdd(0xB4u, a10, (int *)&cjMemSize) & 0x80000000) != 0 )
    return 0;
  v14 = EngAllocMem(1u, cjMemSize, 0x33355448u);
  if ( v14 )
  {
    v14[7] = v14 + 45;
    v15 = v10;
    cjMemSize = v24;
    v16 = a6;
    do
    {
      --cjMemSize;
      if ( v15 < v10 || v15 >= v12 || v16 < v20 || v16 >= v19 )
      {
        if ( v23 != -1 )
        {
          v17 = v23;
          goto LABEL_27;
        }
      }
      else
      {
        if ( v23 == -1 )
        {
          v23 = v15;
          v11 = v16;
        }
        v21 = v16;
      }
      if ( ++v15 >= v12 )
        v15 = v10;
      ++v16;
    }
    while ( cjMemSize );
    v17 = v23;
    if ( v23 == -1 )
    {
      EngFreeMem(v14);
      return 0;
    }
LABEL_27:
    v14[6] = v17 - v10;
    *a3 = v10;
    v14[23] = v10;
    *a4 = v12 - 1;
    *a8 = v11;
    *a9 = v21;
    *v14 = v12 - v10;
    v14[24] = v12 - v10;
    v14[1] = v21 - v11 + 1;
    v14[5] = v21 - v11 + 1;
    v14[4] = v21 - v11 + 1;
    v14[21] = v12 - v10;
    v14[22] = v24;
  }
  return v14;
}

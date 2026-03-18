/*
 * XREFs of _BuildBltAAInfo @ 0x1C16A3
 * Callers:
 *     <none>
 * Callees:
 *     _ULongAdd @ 0x1BAE44 (_ULongAdd.c)
 *     _ALIGN_MEM @ 0x1C4224 (_ALIGN_MEM.c)
 */

_DWORD *__cdecl BuildBltAAInfo(int a1, int a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, int a10)
{
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // esi
  int v14; // edi
  int v15; // edx
  int v16; // ebx
  _DWORD *v17; // edx
  int v18; // eax
  int v19; // ecx
  int v21; // esi
  int v22; // edi
  int v23; // [esp+Ch] [ebp-20h]
  int v24; // [esp+10h] [ebp-1Ch]
  int v25; // [esp+14h] [ebp-18h]
  int v26; // [esp+18h] [ebp-14h]
  int v27; // [esp+1Ch] [ebp-10h]
  int v28; // [esp+20h] [ebp-Ch]
  ULONG cjMemSize; // [esp+24h] [ebp-8h] BYREF
  int v30; // [esp+28h] [ebp-4h]
  int v31; // [esp+4Ch] [ebp+20h]

  v10 = a7 - a6;
  v11 = *a4;
  v12 = *a4;
  v13 = 0;
  v30 = 0;
  v25 = 0;
  cjMemSize = 0;
  v14 = *a3;
  v15 = v12 - *a3;
  v27 = v11;
  v28 = *a3;
  v23 = v15;
  v31 = v10;
  if ( v10 <= 0 )
    return 0;
  if ( v14 < 0 )
    v28 = 0;
  if ( v11 > a5 )
    v27 = a5;
  v16 = -1;
  v26 = *a8;
  v24 = *a9;
  if ( *a8 >= *a9
    || v15 != v10
    || ALIGN_MEM(&a10, a10) < 0
    || (ULongAdd(0xB4u, a10, (int *)&cjMemSize) & 0x80000000) != 0 )
  {
    return 0;
  }
  v17 = EngAllocMem(1u, cjMemSize, 0x33355448u);
  if ( v17 )
  {
    v18 = a6;
    v17[7] = v17 + 45;
    v19 = v31;
    do
    {
      --v31;
      if ( v14 < v28 || v14 >= v27 || v18 < v26 || v18 >= v24 )
      {
        if ( v16 != -1 )
          goto LABEL_24;
      }
      else
      {
        if ( v16 == -1 )
        {
          v16 = v14;
          v30 = v18;
        }
        v13 = v14;
        v25 = v18;
      }
      ++v18;
      ++v14;
    }
    while ( v31 );
    if ( v16 == -1 )
    {
      EngFreeMem(v17);
      return 0;
    }
LABEL_24:
    *a3 = v16;
    v17[23] = v16;
    *a4 = v13;
    v21 = v13 - v16;
    *a8 = v30;
    *a9 = v25;
    v22 = v25 - v30;
    *v17 = v21 + 1;
    v17[24] = v21 + 1;
    v17[22] = v19;
    v17[1] = v22 + 1;
    v17[5] = v22 + 1;
    v17[4] = v22 + 1;
    v17[21] = v23;
  }
  return v17;
}

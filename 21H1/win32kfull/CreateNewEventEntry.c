/*
 * XREFs of CreateNewEventEntry @ 0x1B66D4
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1B6A24 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     CBufferAllocate @ 0x1B656B (CBufferAllocate.c)
 *     CBufferGetNextOffset @ 0x1B65C0 (CBufferGetNextOffset.c)
 */

int __fastcall CreateNewEventEntry(
        char a1,
        _DWORD *a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 a5,
        int a6,
        int *a7)
{
  unsigned __int8 v9; // al
  int v10; // esi
  int v11; // edi
  int *v12; // ecx
  int v13; // edx
  int NextOffset; // edx
  unsigned __int8 v16; // bh
  int v17; // ecx
  int v18; // ecx
  int v19; // edi
  _DWORD *v20; // eax
  void *v21; // esi
  size_t v22; // edx
  _DWORD *v23; // ecx
  int v24; // eax
  _DWORD *v25; // esi
  int v26; // ecx
  unsigned __int8 v27; // dl
  unsigned int *v28; // edi
  int v29; // eax
  _DWORD *v30; // ebx
  void *v31; // esi
  size_t v32; // edx
  int v33; // ecx
  char *v34; // edx
  unsigned int v35; // eax
  bool v36; // zf
  int v37[2]; // [esp+Ch] [ebp-14h] BYREF
  _DWORD *v38; // [esp+14h] [ebp-Ch]
  unsigned int v39; // [esp+18h] [ebp-8h]
  _DWORD *v40; // [esp+1Ch] [ebp-4h]
  int v41; // [esp+28h] [ebp+8h]
  int v42; // [esp+30h] [ebp+10h]

  v38 = a2;
  *a7 = 0;
  v9 = 0;
  v37[0] = 0;
  v37[1] = 0;
  v10 = 0;
  v11 = 0;
  if ( a3 )
  {
    v12 = (int *)(a4 + 8);
    do
    {
      v13 = *v12;
      if ( v9 >= 2u )
        v10 += v13;
      else
        v11 += v13;
      ++v9;
      v12 += 4;
    }
    while ( v9 < a3 );
  }
  if ( (unsigned int)(v10 + v11) > 0xFFFF )
    return -1073741675;
  if ( !CBufferAllocate(a1, v37, v10 + 16 * a3 + 34) )
    return -1073741801;
  NextOffset = CBufferGetNextOffset(v37, 16 * a3);
  v16 = 0;
  v41 = NextOffset;
  v39 = a5 + 2;
  if ( a5 != -2 )
  {
    v17 = 0;
    do
    {
      v18 = 16 * v17;
      v19 = v18 + a4;
      v20 = (_DWORD *)(v18 + NextOffset);
      v40 = (_DWORD *)(v18 + NextOffset);
      if ( v16 >= 2u )
      {
        v21 = (void *)CBufferGetNextOffset(v37, *(_DWORD *)(v19 + 8));
        memcpy(v21, *(const void **)v19, v22);
        v23 = v40;
        NextOffset = v41;
        v40[1] = 0;
        *v23 = v21;
        v23[3] = *(_DWORD *)(v19 + 12);
        v23[2] = *(_DWORD *)(v19 + 8);
      }
      else
      {
        *v20 = *(_DWORD *)v19;
        v20[1] = *(_DWORD *)(v19 + 4);
        v20[2] = *(_DWORD *)(v19 + 8);
        v20[3] = *(_DWORD *)(v19 + 12);
      }
      v17 = ++v16;
    }
    while ( v16 < v39 );
  }
  v24 = CBufferGetNextOffset(v37, 0x22u);
  v25 = v38;
  v26 = v24;
  v40 = (_DWORD *)v24;
  *(_DWORD *)(v24 + 16) = v41;
  *(_DWORD *)v24 = *v25++;
  *(_DWORD *)(v24 + 4) = *v25++;
  *(_DWORD *)(v24 + 8) = *v25;
  *(_DWORD *)(v24 + 12) = v25[1];
  *(_BYTE *)(v24 + 33) = a5;
  v27 = a5 + 2;
  *(_BYTE *)(v24 + 32) = a3;
  *(_DWORD *)(v24 + 28) = a6;
  if ( (unsigned __int8)(a5 + 2) < a3 )
  {
    v28 = (unsigned int *)(16 * v27 + a4 + 8);
    v29 = (unsigned __int8)(a3 - v27);
    v30 = v40;
    v42 = v29;
    do
    {
      v31 = (void *)CBufferGetNextOffset(v37, *v28);
      memcpy(v31, (const void *)*(v28 - 2), v32);
      v33 = v30[4];
      v34 = (char *)v28 - 8 - a4;
      *(_DWORD *)&v34[v33] = v31;
      *(_DWORD *)&v34[v33 + 4] = 0;
      *(_DWORD *)&v34[v30[4] + 12] = v28[1];
      v35 = *v28;
      v28 += 4;
      v36 = v42-- == 1;
      *(_DWORD *)&v34[v30[4] + 8] = v35;
    }
    while ( !v36 );
    v26 = (int)v40;
  }
  *a7 = v26;
  return 0;
}

/*
 * XREFs of PsspHandleDumper @ 0x4B3880B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

char __stdcall PsspHandleDumper(
        _DWORD *a1,
        int a2,
        int a3,
        char a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        const void *a7,
        void *Src,
        int Size)
{
  char v9; // cl
  int v10; // edx
  int v11; // ebx
  int v12; // ebx
  void *v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // ecx
  _DWORD *v16; // esi
  char result; // al
  void *v18; // [esp-Ch] [ebp-44h]
  size_t v19; // [esp-4h] [ebp-3Ch]
  int v20; // [esp+Ch] [ebp-2Ch]
  unsigned int v21; // [esp+10h] [ebp-28h] BYREF
  void *v22; // [esp+14h] [ebp-24h]
  _WORD *v23; // [esp+18h] [ebp-20h]
  void *v24; // [esp+1Ch] [ebp-1Ch]
  _WORD *v25; // [esp+20h] [ebp-18h]
  _WORD *v26; // [esp+24h] [ebp-14h]
  _DWORD *v27; // [esp+28h] [ebp-10h]
  void *v28; // [esp+2Ch] [ebp-Ch]
  void *v29; // [esp+30h] [ebp-8h]
  char v30; // [esp+37h] [ebp-1h]

  v9 = 0;
  v26 = 0;
  v29 = 0;
  v10 = *a1;
  v25 = 0;
  v28 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v30 = 0;
  v27 = (_DWORD *)v10;
  v11 = 16;
  if ( a5 && *((_DWORD *)a5 + 1) )
  {
    v12 = *a5;
    v26 = (_WORD *)(v10 + 16);
    v29 = (void *)(v10 + 18);
    v11 = v12 + 20;
    v9 = 1;
    v30 = 1;
  }
  if ( a6 && *((_DWORD *)a6 + 1) )
  {
    v25 = (_WORD *)(v10 + v11);
    v28 = (void *)(v10 + v11 + 2);
    v11 += *a6 + 4;
    v9 |= 2u;
    v30 = v9;
  }
  if ( a7 )
  {
    v13 = (void *)(v10 + v11);
    v11 += 56;
    v9 |= 4u;
    v24 = v13;
    v30 = v9;
  }
  if ( Src && Size )
  {
    v23 = (_WORD *)(v11 + v10);
    v11 += Size + 2;
    v22 = v23 + 1;
    v30 = v9 | 8;
  }
  if ( (RtlULongPtrAdd(a1[2], v11, (int *)&v21) & 0x80000000) != 0 || v21 > a1[1] )
    return 0;
  v14 = v27;
  *v27 = a3;
  *((_BYTE *)v14 + 4) = v30;
  *((_BYTE *)v14 + 5) = a4;
  while ( 1 )
  {
    v20 = MEMORY[0x7FFE0014];
    if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
      break;
    _mm_pause();
  }
  v15 = v27;
  v16 = a1;
  v27[3] = MEMORY[0x7FFE0018];
  v15[2] = v20;
  if ( a5 && *((_DWORD *)a5 + 1) )
  {
    *v26 = *a5 + 2;
    LODWORD(v19) = *a5;
    memcpy(v29, *((const void **)a5 + 1), v19);
    *(_WORD *)((char *)v29 + *a5) = 0;
  }
  if ( a6 && *((_DWORD *)a6 + 1) )
  {
    *v25 = *a6 + 2;
    LODWORD(v19) = *a6;
    memcpy(v28, *((const void **)a6 + 1), v19);
    *(_WORD *)((char *)v28 + *a6) = 0;
  }
  if ( a7 )
  {
    qmemcpy(v24, a7, 0x38u);
    v16 = a1;
  }
  if ( Src )
  {
    if ( Size )
    {
      LODWORD(v19) = Size;
      v18 = v22;
      *v23 = Size;
      memcpy(v18, Src, v19);
    }
  }
  *v16 += v11;
  result = 1;
  v16[2] += v11;
  ++v16[3];
  return result;
}

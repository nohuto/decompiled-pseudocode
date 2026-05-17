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
        size_t Size)
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
  int v19; // [esp+Ch] [ebp-2Ch]
  unsigned int v20; // [esp+10h] [ebp-28h] BYREF
  void *v21; // [esp+14h] [ebp-24h]
  _WORD *v22; // [esp+18h] [ebp-20h]
  void *v23; // [esp+1Ch] [ebp-1Ch]
  _WORD *v24; // [esp+20h] [ebp-18h]
  _WORD *v25; // [esp+24h] [ebp-14h]
  _DWORD *v26; // [esp+28h] [ebp-10h]
  void *v27; // [esp+2Ch] [ebp-Ch]
  void *v28; // [esp+30h] [ebp-8h]
  char v29; // [esp+37h] [ebp-1h]

  v9 = 0;
  v25 = 0;
  v28 = 0;
  v10 = *a1;
  v24 = 0;
  v27 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v29 = 0;
  v26 = (_DWORD *)v10;
  v11 = 16;
  if ( a5 && *((_DWORD *)a5 + 1) )
  {
    v12 = *a5;
    v25 = (_WORD *)(v10 + 16);
    v28 = (void *)(v10 + 18);
    v11 = v12 + 20;
    v9 = 1;
    v29 = 1;
  }
  if ( a6 && *((_DWORD *)a6 + 1) )
  {
    v24 = (_WORD *)(v10 + v11);
    v27 = (void *)(v10 + v11 + 2);
    v11 += *a6 + 4;
    v9 |= 2u;
    v29 = v9;
  }
  if ( a7 )
  {
    v13 = (void *)(v10 + v11);
    v11 += 56;
    v9 |= 4u;
    v23 = v13;
    v29 = v9;
  }
  if ( Src && Size )
  {
    v22 = (_WORD *)(v11 + v10);
    v11 += Size + 2;
    v21 = v22 + 1;
    v29 = v9 | 8;
  }
  if ( (RtlULongPtrAdd(a1[2], v11, (int *)&v20) & 0x80000000) != 0 || v20 > a1[1] )
    return 0;
  v14 = v26;
  *v26 = a3;
  *((_BYTE *)v14 + 4) = v29;
  *((_BYTE *)v14 + 5) = a4;
  while ( 1 )
  {
    v19 = MEMORY[0x7FFE0014];
    if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
      break;
    _mm_pause();
  }
  v15 = v26;
  v16 = a1;
  v26[3] = MEMORY[0x7FFE0018];
  v15[2] = v19;
  if ( a5 && *((_DWORD *)a5 + 1) )
  {
    *v25 = *a5 + 2;
    memcpy(v28, *((const void **)a5 + 1), *a5);
    *(_WORD *)((char *)v28 + *a5) = 0;
  }
  if ( a6 && *((_DWORD *)a6 + 1) )
  {
    *v24 = *a6 + 2;
    memcpy(v27, *((const void **)a6 + 1), *a6);
    *(_WORD *)((char *)v27 + *a6) = 0;
  }
  if ( a7 )
  {
    qmemcpy(v23, a7, 0x38u);
    v16 = a1;
  }
  if ( Src )
  {
    if ( Size )
    {
      v18 = v21;
      *v22 = Size;
      memcpy(v18, Src, Size);
    }
  }
  *v16 += v11;
  result = 1;
  v16[2] += v11;
  ++v16[3];
  return result;
}

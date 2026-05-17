/*
 * XREFs of _RtlpCreateServerAcl@20 @ 0x4B348798
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpCreateServerAcl(int a1, char a2, unsigned __int8 *Src, int *a4, _BYTE *a5)
{
  int v6; // esi
  unsigned __int16 *v7; // edi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int Heap; // ecx
  char *v14; // esi
  unsigned int v15; // ecx
  char v16; // al
  unsigned __int16 v17; // ax
  unsigned __int16 *v18; // eax
  char *v19; // esi
  char *v20; // esi
  unsigned __int8 v21; // cl
  int v22; // [esp+Ch] [ebp-14h]
  char *v23; // [esp+10h] [ebp-10h]
  int v24; // [esp+14h] [ebp-Ch]
  unsigned int v25; // [esp+14h] [ebp-Ch]
  void *v26; // [esp+18h] [ebp-8h]
  unsigned __int8 *v27; // [esp+18h] [ebp-8h]
  char v28; // [esp+1Fh] [ebp-1h]

  v28 = a2;
  v6 = 8;
  if ( a1 )
  {
    v7 = (unsigned __int16 *)(a1 + 8);
    v8 = a1 + 8;
    v24 = (unsigned __int16)(4 * (Src[1] + 2));
    v26 = (void *)*(unsigned __int16 *)(a1 + 4);
    if ( *(_WORD *)(a1 + 4) )
    {
      do
      {
        if ( *(_BYTE *)v8 )
        {
          if ( a2 && *(_BYTE *)v8 == 4 )
          {
            v9 = *(unsigned __int8 *)(v8 + 13);
            LOWORD(v9) = 4 * v9;
            if ( (unsigned __int16)(v9 + 8) <= (unsigned __int16)v24 )
            {
              v10 = v24 - v9;
              v6 -= 8;
            }
            else
            {
              v10 = v9 + 8 - v24;
            }
            a2 = v28;
            v6 += v10;
          }
        }
        else
        {
          v6 += v24 + 4;
        }
        v11 = *(unsigned __int16 *)(v8 + 2);
        v6 += v11;
        v8 += v11;
        v26 = (char *)v26 - 1;
      }
      while ( v26 );
      v7 = (unsigned __int16 *)(a1 + 8);
    }
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, (unsigned __int16)v6);
    *a4 = Heap;
    if ( !Heap )
      return -1073741670;
    *a5 = 1;
    RtlCreateAcl(Heap, (unsigned __int16)v6, 3u);
    v25 = 0;
    v22 = *a4;
    v14 = (char *)(*a4 + 8);
    LOWORD(v15) = *(_WORD *)(a1 + 4);
    if ( (_WORD)v15 )
    {
      do
      {
        v16 = *(_BYTE *)v7;
        if ( !*(_BYTE *)v7 || v28 && v16 == 4 )
        {
          v23 = v14;
          if ( v16 )
            v18 = &v7[2 * *((unsigned __int8 *)v7 + 13) + 10];
          else
            v18 = v7 + 4;
          v27 = (unsigned __int8 *)v18;
          *(_DWORD *)v14 = *(_DWORD *)v7;
          *((_DWORD *)v14 + 1) = *((_DWORD *)v7 + 1);
          v19 = v14 + 12;
          memcpy(v19, Src, 4 * Src[1] + 8);
          v20 = &v19[(unsigned __int8)(4 * (Src[1] + 2))];
          memcpy(v20, v27, 4 * v27[1] + 8);
          v21 = v27[1];
          v14 = &v20[4 * v21 + 8];
          *((_WORD *)v23 + 1) = 4 * (v21 + Src[1] + 7);
          *v23 = 4;
          *((_WORD *)v23 + 4) = 1;
          v17 = v7[1];
        }
        else
        {
          memcpy(v14, v7, v7[1]);
          v14 += v7[1];
          v17 = v7[1];
        }
        v15 = *(unsigned __int16 *)(a1 + 4);
        v7 = (unsigned __int16 *)((char *)v7 + v17);
        ++v25;
      }
      while ( v25 < v15 );
    }
    *(_WORD *)(v22 + 4) = v15;
  }
  else
  {
    *a5 = 0;
    *a4 = 0;
  }
  return 0;
}

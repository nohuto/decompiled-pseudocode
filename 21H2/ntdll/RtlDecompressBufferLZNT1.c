/*
 * XREFs of RtlDecompressBufferLZNT1 @ 0x18010CA80
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1DecompressChunk @ 0x1800A2A80 (LZNT1DecompressChunk.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 __fastcall RtlDecompressBufferLZNT1(char *a1, int a2, __int16 *a3, unsigned int a4, int a5, int *a6)
{
  __int16 *v6; // rsi
  char *v7; // r14
  int v8; // edi
  char *v9; // rbp
  __int16 v10; // bx
  unsigned __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // r9
  _BYTE *v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  size_t v17; // r8
  char *v18; // r15
  __int64 v19; // rcx
  int *v20; // rax
  int v22; // [rsp+70h] [rbp+8h]
  int v23; // [rsp+78h] [rbp+10h] BYREF
  int v24; // [rsp+88h] [rbp+20h] BYREF

  v22 = (int)a1;
  v6 = a3;
  v7 = &a1[a2];
  v23 = 0;
  v8 = 0;
  v9 = a1;
  v10 = *a3;
  v11 = (unsigned __int64)a3 + a4;
  while ( 1 )
  {
    v19 = (v10 & 0xFFFu) + 3;
    if ( (unsigned __int64)v6 + v19 > v11 )
    {
LABEL_21:
      v20 = a6;
LABEL_22:
      v8 = -1073741246;
      *v20 = (int)v6;
      return (unsigned int)v8;
    }
    v12 = (unsigned int)v19;
    if ( v10 >= 0 )
    {
      if ( (unsigned int)v19 < 2uLL )
        goto LABEL_21;
      v16 = v19 - 2;
      v23 = v16;
      if ( &v9[v16] > v7 )
      {
        v16 = (_DWORD)v7 - (_DWORD)v9;
        v23 = (_DWORD)v7 - (_DWORD)v9;
      }
      if ( (unsigned __int64)v6 + v16 + 2 > v11 )
        goto LABEL_21;
      memmove(v9, v6 + 1, v16);
      goto LABEL_13;
    }
    v13 = (__int64)v6 + v19;
    v14 = v6 + 1;
    if ( !a5 )
    {
      v8 = LZNT1DecompressChunk(v9, v7, v14, v13, &v23);
      if ( v8 < 0 )
      {
LABEL_7:
        *a6 = v23;
        return (unsigned int)v8;
      }
LABEL_13:
      v15 = v23;
      goto LABEL_14;
    }
    v8 = LZNT1DecompressChunk(v9, v7, v14, v13, &v24);
    if ( v8 < 0 )
      goto LABEL_7;
    v15 = a5;
    v23 = a5;
LABEL_14:
    v6 = (__int16 *)((char *)v6 + v12);
    v9 += v15;
    if ( v9 == v7 )
      break;
    if ( (unsigned __int64)v6 > v11 - 2 )
      break;
    v10 = *v6;
    if ( !*v6 )
      break;
    if ( v15 < 0x1000 )
    {
      v17 = (int)(4096 - v15);
      v18 = &v9[v17];
      if ( &v9[v17] >= v7 )
        break;
      memset(v9, 0, v17);
      v9 = v18;
    }
  }
  v20 = a6;
  if ( (unsigned __int64)v6 > v11 )
    goto LABEL_22;
  *a6 = (_DWORD)v9 - v22;
  return (unsigned int)v8;
}

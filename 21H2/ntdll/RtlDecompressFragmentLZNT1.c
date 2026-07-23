/*
 * XREFs of RtlDecompressFragmentLZNT1 @ 0x18010CC10
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1DecompressChunk @ 0x1800A2A80 (LZNT1DecompressChunk.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall RtlDecompressFragmentLZNT1(
        char *a1,
        size_t Size,
        __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        _BYTE *a8)
{
  unsigned int v8; // r14d
  unsigned __int64 v10; // r13
  char *v11; // rcx
  unsigned __int64 v12; // rdi
  __int16 v13; // r8
  int v14; // ebx
  __int64 v15; // rax
  __int16 *v16; // rcx
  __int64 v17; // r15
  _BYTE *v18; // rsi
  int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // r9
  _BYTE *v22; // r8
  unsigned int v23; // eax
  _BYTE *v24; // rdx
  size_t v25; // r8
  bool v26; // zf
  char *v28; // [rsp+30h] [rbp-18h]
  int v29; // [rsp+90h] [rbp+48h]
  int v30; // [rsp+98h] [rbp+50h]
  int v31; // [rsp+A0h] [rbp+58h] BYREF
  int v32; // [rsp+A8h] [rbp+60h] BYREF

  v30 = Size;
  v29 = (int)a1;
  v8 = a5;
  v10 = (unsigned __int64)a3 + a4;
  v11 = &a1[(unsigned int)Size];
  v12 = (unsigned __int64)a3;
  v28 = v11;
  v13 = *a3;
  v14 = 0;
  v32 = 4096;
  v15 = (v13 & 0xFFFu) + 3;
  if ( a5 >= 0x1000 )
  {
    do
    {
      v16 = (__int16 *)(v12 + (unsigned int)v15);
      if ( (unsigned __int64)v16 > v10 )
        goto LABEL_35;
      v8 -= 4096;
      v12 += (unsigned int)v15;
      if ( (unsigned __int64)v16 > v10 - 2 || (v13 = *v16) == 0 )
      {
        *a7 = 0;
        return (unsigned int)v14;
      }
      v32 = 4096;
      v15 = (v13 & 0xFFFu) + 3;
    }
    while ( v8 >= 0x1000 );
    v11 = v28;
  }
  v17 = (unsigned int)v15;
  v18 = a1;
  if ( v12 + v15 > v10 )
  {
LABEL_35:
    v14 = -1073741246;
    *a7 = v12;
    return (unsigned int)v14;
  }
  v19 = a6;
  while ( 1 )
  {
    v20 = 4096 - v8;
    if ( (unsigned int)v20 >= (unsigned int)Size )
      v20 = (unsigned int)Size;
    a5 = v20;
    if ( v13 >= 0 )
    {
      v25 = (unsigned int)v20;
      if ( v8 + v20 + v12 + 2 > v10 )
        goto LABEL_35;
      v24 = (_BYTE *)(v12 + v8 + 2LL);
      goto LABEL_26;
    }
    if ( v8 || (_DWORD)v20 != 4096 )
      break;
    v21 = v17 + v12;
    v22 = (_BYTE *)(v12 + 2);
    if ( v19 )
    {
      v14 = LZNT1DecompressChunk(v18, v11, v22, v21, &v31);
      if ( v14 < 0 )
        goto LABEL_19;
      a5 = v19;
    }
    else
    {
      v14 = LZNT1DecompressChunk(v18, v11, v22, v21, &a5);
      if ( v14 < 0 )
      {
LABEL_19:
        v23 = a5;
LABEL_20:
        *a7 = v23;
        return (unsigned int)v14;
      }
    }
LABEL_27:
    v8 = 0;
    v18 += a5;
    v26 = v30 == a5;
    LODWORD(Size) = v30 - a5;
    v30 -= a5;
    if ( v26 )
      goto LABEL_33;
    v12 += v17;
    if ( v12 > v10 - 2 )
      goto LABEL_33;
    v13 = *(_WORD *)v12;
    if ( !*(_WORD *)v12 )
      goto LABEL_33;
    v32 = 4096;
    v17 = (v13 & 0xFFF) + 3LL;
    if ( v12 + v17 > v10 )
      goto LABEL_35;
    v11 = v28;
  }
  v14 = LZNT1DecompressChunk(a8, a8 + 4096, (_BYTE *)(v12 + 2), v17 + v12, &v32);
  if ( v14 < 0 )
  {
    v23 = v32;
    goto LABEL_20;
  }
  v24 = &a8[v8];
  if ( v32 - v8 >= a5 )
  {
    v25 = a5;
LABEL_26:
    memmove(v18, v24, v25);
    goto LABEL_27;
  }
  memmove(v18, v24, v32 - v8);
  LODWORD(v18) = v32 - v8 + (_DWORD)v18;
LABEL_33:
  *a7 = (_DWORD)v18 - v29;
  return (unsigned int)v14;
}

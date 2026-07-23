/*
 * XREFs of LZNT1CompressChunk @ 0x140990570
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x140990470 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(char *, __int64),
        char *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  _WORD *v8; // r14
  __int64 *v9; // r11
  char v10; // r9
  __int64 (__fastcall *v12)(char *, __int64); // r8
  __int64 v13; // rcx
  char *v14; // rdx
  char *v15; // rbx
  unsigned int v16; // r12d
  unsigned __int8 v17; // bp
  char *v18; // r15
  int v19; // edi
  char *v20; // r10
  int *v21; // r12
  _WORD *v22; // r14
  int v23; // eax
  char v24; // al
  __int64 v25; // rcx
  int v26; // eax
  int v27; // r15d
  int v29; // eax
  unsigned int v30; // esi
  char *v31; // [rsp+20h] [rbp-58h]
  __int64 *v32; // [rsp+28h] [rbp-50h]
  char v34; // [rsp+88h] [rbp+10h]
  char *v35; // [rsp+90h] [rbp+18h]

  v8 = a4;
  v9 = &LZNT1Formats;
  v10 = 0;
  v32 = &LZNT1Formats;
  v34 = 0;
  v12 = a1;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    a3 = (unsigned __int64)(a2 + 4096);
  v13 = a7;
  v14 = (char *)a5;
  v15 = a2;
  if ( (unsigned __int64)v8 + 4095 < a5 )
    v14 = (char *)v8 + 4095;
  *(_QWORD *)a7 = a2;
  v16 = 0;
  v31 = v14;
  *(_QWORD *)(a7 + 8) = a3;
  v17 = 0;
  *(_DWORD *)(a7 + 16) = 4098;
  v18 = (char *)v8 + 3;
  LOBYTE(v19) = 0;
  v20 = (char *)(v8 + 1);
  if ( (unsigned __int64)a2 >= a3 )
  {
LABEL_17:
    if ( v20 >= v14 )
      LODWORD(v18) = (_DWORD)v18 - 1;
    else
      *v20 = v17;
    v27 = (_DWORD)v18 - (_DWORD)v8;
    *a6 = v27;
    *v8 = (v27 - 3) & 0xFFF | 0xB000;
    if ( !v34 )
      return 279;
    return v16;
  }
  v35 = (char *)(v8 + 1);
  v21 = &dword_1409B4B8C;
  v22 = v8 + 2;
  while ( 1 )
  {
    if ( &a2[*v21] < v15 )
    {
      do
      {
        v29 = *((_DWORD *)v9 + 7);
        v9 = (__int64 *)((char *)v9 + 20);
        *(_DWORD *)(v13 + 16) = v29;
        v21 = (int *)v9 + 3;
      }
      while ( &a2[*((unsigned int *)v9 + 3)] < v15 );
      v32 = v9;
    }
    if ( (unsigned __int64)(v15 + 3) > a3 )
      goto LABEL_11;
    v23 = v12(v15, v13);
    v14 = v31;
    if ( v23 )
      break;
    v10 = v34;
    v9 = v32;
LABEL_11:
    if ( v18 >= v14 )
      goto LABEL_28;
    v24 = *v15;
    v25 = 1LL;
    *v18 = *v15;
    v10 |= v24;
    ++v18;
    ++v15;
    v34 = v10;
    v26 = v17 & ~(1 << v19);
LABEL_13:
    v22 = (_WORD *)((char *)v22 + v25);
    v17 = v26;
    v19 = ((_BYTE)v19 + 1) & 7;
    if ( !v19 )
    {
      v20 = v35;
      if ( (unsigned __int64)v15 >= a3 )
        goto LABEL_16;
      v35 = v18;
      v17 = 0;
      ++v18;
      *v20 = v26;
      v22 = (_WORD *)((char *)v22 + 1);
    }
    v13 = a7;
    v12 = a1;
    if ( (unsigned __int64)v15 >= a3 )
      goto LABEL_15;
  }
  if ( v22 < (_WORD *)v31 )
  {
    v9 = v32;
    v10 = v34;
    *(_WORD *)v18 = (v23 - 3) | (((_WORD)v15 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v32 + 16));
    v15 += v23;
    v14 = v31;
    v18 += 2;
    v25 = 2LL;
    v26 = v17 | (1 << v19);
    goto LABEL_13;
  }
LABEL_28:
  if ( (unsigned __int64)v15 >= a3 )
  {
LABEL_15:
    v20 = v35;
LABEL_16:
    v8 = a4;
    v16 = 0;
    goto LABEL_17;
  }
  v30 = a3 - (_DWORD)a2;
  if ( (unsigned __int64)a4 + v30 + 2 > a5 )
    return 3221225507LL;
  memmove(a4 + 1, a2, v30);
  *a6 = v30 + 2;
  *a4 = (v30 - 1) & 0xFFF | 0x3000;
  return 0LL;
}

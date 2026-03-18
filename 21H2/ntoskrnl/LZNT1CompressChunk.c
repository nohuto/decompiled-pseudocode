/*
 * XREFs of LZNT1CompressChunk @ 0x140A475C0
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x140A474C0 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(char *, __int64),
        char *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  char v9; // dl
  char *v10; // r10
  __int64 *v11; // r9
  __int64 (__fastcall *v12)(char *, __int64); // r8
  char *v14; // rcx
  char *v15; // rsi
  char *v16; // rbx
  unsigned int v17; // r11d
  unsigned __int8 v18; // r12
  int v19; // ebp
  char *v20; // rax
  int *v21; // r15
  int v22; // eax
  __int64 v23; // rcx
  char v24; // dl
  int v25; // eax
  __int64 v26; // rdx
  bool v27; // cf
  int v28; // esi
  char *v30; // rcx
  int v31; // eax
  unsigned int v32; // edi
  __int64 *v33; // [rsp+20h] [rbp-58h]
  char v35; // [rsp+88h] [rbp+10h]
  unsigned __int64 v36; // [rsp+90h] [rbp+18h]
  char *v38; // [rsp+B0h] [rbp+38h]

  v9 = 0;
  v10 = a4;
  v11 = &LZNT1Formats;
  v35 = 0;
  v12 = a1;
  v33 = &LZNT1Formats;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    a3 = (unsigned __int64)(a2 + 4096);
  v14 = (char *)a5;
  v15 = v10 + 3;
  v16 = a2;
  if ( (unsigned __int64)(v10 + 4095) < a5 )
    v14 = v10 + 4095;
  *(_QWORD *)a7 = a2;
  v17 = 0;
  v36 = (unsigned __int64)v14;
  v18 = 0;
  *(_QWORD *)(a7 + 8) = a3;
  *(_DWORD *)(a7 + 16) = 4098;
  LOBYTE(v19) = 0;
  v20 = v10 + 2;
  if ( (unsigned __int64)a2 >= a3 )
  {
LABEL_18:
    if ( v20 >= v14 )
      LODWORD(v15) = (_DWORD)v15 - 1;
    else
      *v20 = v18;
    v28 = (_DWORD)v15 - (_DWORD)v10;
    *a6 = v28;
    *(_WORD *)v10 = (v28 - 3) & 0xFFF | 0xB000;
    if ( !v9 )
      return 279;
    return v17;
  }
  v38 = v10 + 2;
  v21 = &dword_140A6D8BC;
  while ( 1 )
  {
    if ( &a2[*v21] < v16 )
    {
      do
      {
        v31 = *((_DWORD *)v11 + 7);
        v11 = (__int64 *)((char *)v11 + 20);
        *(_DWORD *)(a7 + 16) = v31;
        v21 = (int *)v11 + 3;
      }
      while ( &a2[*((unsigned int *)v11 + 3)] < v16 );
      v33 = v11;
    }
    if ( (unsigned __int64)(v16 + 3) > a3 )
      goto LABEL_11;
    v22 = v12(v16, a7);
    if ( v22 )
      break;
    v14 = (char *)v36;
    v9 = v35;
    v11 = v33;
LABEL_11:
    if ( v15 >= v14 )
      goto LABEL_16;
    v23 = 1LL;
    v24 = *v16 | v9;
    *v15 = *v16;
    v35 = v24;
    v25 = v18 & ~(1 << v19);
    v26 = 1LL;
LABEL_13:
    v15 += v26;
    v16 += v23;
    v18 = v25;
    v19 = ((_BYTE)v19 + 1) & 7;
    if ( !v19 )
    {
      v27 = (unsigned __int64)v16 < a3;
      if ( (unsigned __int64)v16 >= a3 )
        goto LABEL_15;
      v30 = v38;
      v18 = 0;
      v38 = v15++;
      *v30 = v25;
    }
    v27 = (unsigned __int64)v16 < a3;
LABEL_15:
    v12 = a1;
    v14 = (char *)v36;
    v9 = v35;
    if ( !v27 )
      goto LABEL_16;
  }
  if ( (unsigned __int64)(v15 + 1) < v36 )
  {
    v11 = v33;
    v23 = v22;
    *(_WORD *)v15 = (v22 - 3) | (((_WORD)v16 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v33 + 16));
    v25 = v18 | (1 << v19);
    v26 = 2LL;
    goto LABEL_13;
  }
  v14 = (char *)v36;
LABEL_16:
  if ( (unsigned __int64)v16 >= a3 )
  {
    v9 = v35;
    v17 = 0;
    v20 = v38;
    v10 = a4;
    goto LABEL_18;
  }
  v32 = a3 - (_DWORD)a2;
  if ( (unsigned __int64)&a4[v32 + 2] > a5 )
    return 3221225507LL;
  memmove(a4 + 2, a2, v32);
  *a6 = v32 + 2;
  *(_WORD *)a4 = (v32 - 1) & 0xFFF | 0x3000;
  return 0LL;
}

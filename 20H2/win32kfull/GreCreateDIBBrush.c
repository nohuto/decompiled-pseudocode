/*
 * XREFs of GreCreateDIBBrush @ 0x1C0152498
 * Callers:
 *     GreExtCreatePen @ 0x1C007BEA0 (GreExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1C0152390 (NtGdiCreateDIBBrush.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C00961AC (GreCreateDIBitmapReal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0152670 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall GreCreateDIBBrush(unsigned int *a1, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  __int64 v6; // rsi
  __int64 v10; // r11
  __int64 v11; // rdx
  unsigned int v12; // eax
  char *v13; // rbx
  int v14; // ecx
  const void *v15; // r12
  unsigned int v16; // r14d
  __int64 v17; // r10
  int v18; // ecx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 DIBitmapReal; // rax
  __int64 v23; // rdx
  HBITMAP v24; // r15
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // rdi
  __int64 v36; // rbx
  void *v37; // rcx
  ULONG v38; // ecx
  _QWORD v39[2]; // [rsp+70h] [rbp-48h] BYREF
  int v40; // [rsp+80h] [rbp-38h]
  __int64 v41; // [rsp+C0h] [rbp+8h]

  v6 = 0LL;
  if ( !a1 )
    goto LABEL_59;
  if ( a3 < 0x28 )
    goto LABEL_59;
  v10 = *a1;
  if ( (unsigned int)v10 > a3 )
    goto LABEL_59;
  v11 = 2LL;
  if ( a2 > 2 )
    goto LABEL_59;
  v12 = a1[4];
  v13 = (char *)a1 + v10;
  v14 = *((unsigned __int16 *)a1 + 7);
  v15 = v13;
  v16 = a1[8];
  v17 = 4LL;
  if ( v12 == 3 )
  {
    v26 = 0;
    v16 = 3;
    if ( a2 != 1 )
      v26 = a2;
    a2 = v26;
    if ( ((v14 - 16) & 0xFFFFFFEF) != 0 )
      return 0LL;
  }
  else if ( v12 )
  {
    if ( v12 == 2 )
    {
      if ( v14 != 4 )
        return 0LL;
      if ( !v16 )
        v16 = 16;
    }
    else
    {
      if ( v12 != 1 || v14 != 8 )
        return 0LL;
      if ( !v16 )
        v16 = 256;
    }
  }
  else
  {
    v18 = v14 - 1;
    if ( v18 )
    {
      v27 = v18 - 3;
      if ( v27 )
      {
        v28 = v27 - 4;
        if ( v28 )
        {
          v29 = v28 - 8;
          if ( v29 )
          {
            v30 = v29 - 8;
            if ( v30 )
            {
              if ( v30 != 8 )
                return 0LL;
            }
          }
          v31 = 0;
          v19 = 0;
          if ( a2 != 1 )
            v31 = a2;
          a2 = v31;
          goto LABEL_10;
        }
        v19 = 256;
      }
      else
      {
        v19 = 16;
      }
    }
    else
    {
      v19 = 2;
    }
    if ( !v16 || v19 < v16 )
LABEL_10:
      v16 = v19;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v17 = 0LL;
    v11 = v17;
  }
  v20 = v11 * v16;
  if ( v20 > 0xFFFFFFFF || (int)v20 + 3 < (unsigned int)v20 )
  {
    v38 = 534;
LABEL_60:
    EngSetLastError(v38);
    return 0LL;
  }
  v21 = (v20 + 3) & 0xFFFFFFFC;
  if ( v21 > a3 - (unsigned int)v10 )
  {
LABEL_59:
    v38 = 87;
    goto LABEL_60;
  }
  DIBitmapReal = GreCreateDIBitmapReal(
                   0LL,
                   6,
                   &v13[v21],
                   (__int64)a1,
                   a2 != 0 ? 3 : 0,
                   a3,
                   a3 + (_DWORD)a1 - (v21 + (_DWORD)v13),
                   0LL,
                   0,
                   0LL,
                   1,
                   0LL,
                   0LL);
  v24 = (HBITMAP)DIBitmapReal;
  if ( !DIBitmapReal )
    return 0LL;
  if ( a4 )
  {
    LOBYTE(v23) = 5;
    v32 = HmgShareLockCheck(DIBitmapReal, v23);
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 56);
      if ( (int)v33 > 8 )
        LODWORD(v33) = 8;
      LODWORD(v41) = v33;
      v34 = HIDWORD(*(_QWORD *)(v32 + 56));
      if ( *(int *)(v32 + 60) > 8 )
        v34 = 8;
      HIDWORD(v41) = v34;
      *(_QWORD *)(v32 + 56) = v41;
      DEC_SHARE_REF_CNT(v32);
      goto LABEL_20;
    }
    return 0LL;
  }
LABEL_20:
  if ( a2 == 1 )
  {
    LOBYTE(v23) = 5;
    v35 = HmgShareLockCheck(v24, v23);
    v36 = *(_QWORD *)(v35 + 128);
    v37 = *(void **)(v36 + 112);
    *(_DWORD *)(v36 + 24) |= 0x4000u;
    memmove(v37, v15, 2 * v16);
    *(_DWORD *)(v36 + 60) = v16;
    DEC_SHARE_REF_CNT(v35);
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v39, v24, a6, 0, a2, 0x80u, a5);
  if ( v39[0] )
  {
    v40 = 1;
    *(_DWORD *)(v39[0] + 84LL) = a2;
    v6 = *(_QWORD *)v39[0];
  }
  else
  {
    bDeleteSurface(v24);
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v39);
  return v6;
}

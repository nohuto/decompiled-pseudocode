/*
 * XREFs of _GreCreateDIBBrush@24 @ 0x21DE30
 * Callers:
 *     _GreExtCreatePen@44 @ 0xA90C4 (_GreExtCreatePen@44.c)
 *     _NtGdiCreateDIBBrush@24 @ 0x21E0FD (_NtGdiCreateDIBBrush@24.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ??1BRUSHMEMOBJ@@QAE@XZ @ 0x21DDC9 (--1BRUSHMEMOBJ@@QAE@XZ.c)
 */

int __fastcall GreCreateDIBBrush(int a1, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  char *v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // ecx
  int DIBitmapReal; // eax
  int v21; // edx
  HBITMAP v22; // esi
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // edi
  _DWORD *v27; // esi
  void *v29; // [esp-Ch] [ebp-44h]
  void *v30; // [esp-8h] [ebp-40h]
  int v31; // [esp-4h] [ebp-3Ch]
  size_t v32; // [esp-4h] [ebp-3Ch]
  ULONG *v33; // [esp+0h] [ebp-38h]
  unsigned int v34; // [esp+0h] [ebp-38h]
  unsigned int *v35; // [esp+4h] [ebp-34h]
  _DWORD v36[3]; // [esp+10h] [ebp-28h] BYREF
  void *Src; // [esp+1Ch] [ebp-1Ch]
  char *v38; // [esp+20h] [ebp-18h]
  unsigned int v39; // [esp+24h] [ebp-14h]
  unsigned int v40; // [esp+28h] [ebp-10h] BYREF
  unsigned int v41; // [esp+2Ch] [ebp-Ch]
  int v42; // [esp+30h] [ebp-8h]
  int v43; // [esp+34h] [ebp-4h]
  HBITMAP v44; // [esp+40h] [ebp+8h]

  v7 = a2;
  if ( !a1 )
    goto LABEL_54;
  if ( a3 < 0x28 )
    goto LABEL_54;
  v8 = *(_DWORD *)a1;
  v39 = v8;
  if ( v8 > a3 )
    goto LABEL_54;
  v42 = 2;
  if ( a2 > 2 )
    goto LABEL_54;
  v9 = *(_DWORD *)(a1 + 32);
  v10 = (char *)(v8 + a1);
  v11 = *(unsigned __int16 *)(a1 + 14);
  v12 = 0;
  v38 = v10;
  Src = v10;
  v13 = *(_DWORD *)(a1 + 16);
  v43 = v9;
  if ( v13 == 3 )
  {
    v9 = 3;
    v43 = 3;
    v7 &= -(v7 != 1);
    if ( v11 != 16 && v11 != 32 )
      return 0;
    goto LABEL_34;
  }
  if ( !v13 )
  {
    v14 = v11 - 1;
    if ( v14 )
    {
      v15 = v14 - 3;
      if ( v15 )
      {
        v16 = v15 - 4;
        if ( v16 )
        {
          v17 = v16 - 8;
          if ( v17 )
          {
            v18 = v17 - 8;
            if ( v18 )
            {
              if ( v18 != 8 )
                return 0;
            }
          }
          v19 = 0;
          v7 &= -(v7 != 1);
LABEL_22:
          v9 = v19;
          goto LABEL_33;
        }
        v19 = 256;
LABEL_21:
        if ( v9 && v19 >= v9 )
          goto LABEL_34;
        goto LABEL_22;
      }
      v31 = 16;
    }
    else
    {
      v31 = 2;
    }
    v19 = v31;
    goto LABEL_21;
  }
  if ( v13 != 2 )
  {
    if ( v13 != 1 || v11 != 8 )
      return 0;
    if ( v9 )
      goto LABEL_34;
    v9 = 256;
LABEL_33:
    v43 = v9;
    goto LABEL_34;
  }
  if ( v11 != 4 )
    return 0;
  if ( !v9 )
  {
    v9 = 16;
    goto LABEL_33;
  }
LABEL_34:
  if ( v7 != 1 )
    v42 = v7 != 2 ? 4 : 0;
  v40 = 0;
  v41 = 0;
  if ( ULongLongToULong((unsigned int)v42 * (unsigned __int64)v9, v33) < 0
    || (ULongAdd(3, v41, (int *)&v40, v34, v35) & 0x80000000) != 0 )
  {
    EngSetLastError(0x216u);
    return 0;
  }
  if ( (v40 & 0xFFFFFFFC) > a3 - v39 )
  {
LABEL_54:
    EngSetLastError(0x57u);
    return 0;
  }
  DIBitmapReal = GreCreateDIBitmapReal(
                   0,
                   &v38[v40 & 0xFFFFFFFC],
                   a1,
                   v7 != 0 ? 3 : 0,
                   a3,
                   a3 + a1 - (_DWORD)&v38[v40 & 0xFFFFFFFC],
                   0,
                   0,
                   0,
                   1,
                   0,
                   0);
  v22 = (HBITMAP)DIBitmapReal;
  v44 = (HBITMAP)DIBitmapReal;
  if ( !DIBitmapReal )
    return 0;
  if ( a4 )
  {
    LOBYTE(v21) = 5;
    v23 = HmgShareLockCheck(DIBitmapReal, v21);
    if ( v23 )
    {
      v24 = *(_DWORD *)(v23 + 32);
      v25 = *(_DWORD *)(v23 + 36);
      if ( v24 > 8 )
        v24 = 8;
      if ( v25 > 8 )
        v25 = 8;
      *(_DWORD *)(v23 + 32) = v24;
      *(_DWORD *)(v23 + 36) = v25;
      DEC_SHARE_REF_CNT(v23);
      goto LABEL_47;
    }
    return 0;
  }
LABEL_47:
  if ( v7 == 1 )
  {
    LOBYTE(v21) = 5;
    v26 = HmgShareLockCheck(v22, v21);
    v32 = 2 * v43;
    v30 = Src;
    v27 = *(_DWORD **)(v26 + 88);
    v29 = (void *)v27[19];
    v27[4] |= 0x4000u;
    memcpy(v29, v30, v32);
    v27[11] = v43;
    DEC_SHARE_REF_CNT(v26);
    v22 = v44;
    v12 = 0;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v36, v22, a6, 0, v7, 0x80u, a5);
  if ( v36[0] )
  {
    v36[2] = 1;
    *(_DWORD *)(v36[0] + 60) = v7;
    v12 = *(_DWORD *)v36[0];
  }
  else
  {
    bDeleteSurface(v22);
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v36);
  return v12;
}

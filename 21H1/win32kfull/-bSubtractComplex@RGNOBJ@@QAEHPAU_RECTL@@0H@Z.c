/*
 * XREFs of ?bSubtractComplex@RGNOBJ@@QAEHPAU_RECTL@@0H@Z @ 0x98D9E
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QAEHPAU_RECTL@@0H@Z @ 0x24D40 (-bSubtract@RGNOBJAPI@@QAEHPAU_RECTL@@0H@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall RGNOBJ::bSubtractComplex(RGNOBJ *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  int v4; // ebx
  RGNOBJ *v5; // edi
  _BYTE *v6; // esi
  int v7; // ecx
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // ebx
  int v12; // eax
  int v13; // edx
  LONG top; // ecx
  int v15; // ecx
  LONG v16; // eax
  int v17; // eax
  LONG v18; // edi
  int v19; // ebx
  LONG v20; // eax
  int v21; // ecx
  int v22; // ecx
  char *v23; // edi
  int v24; // eax
  int *v25; // eax
  _DWORD *v26; // esi
  void *v27; // ecx
  _DWORD *v28; // ebx
  _DWORD *v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  void *v33; // edx
  _DWORD *v34; // ecx
  LONG v35; // eax
  int v36; // eax
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // [esp+0h] [ebp-204h]
  ULONG *v44; // [esp+0h] [ebp-204h]
  unsigned int *v45; // [esp+4h] [ebp-200h]
  _DWORD *v46; // [esp+14h] [ebp-1F0h]
  _BYTE *v47; // [esp+18h] [ebp-1ECh]
  int v48; // [esp+1Ch] [ebp-1E8h]
  int v49; // [esp+1Ch] [ebp-1E8h]
  _DWORD *v50; // [esp+20h] [ebp-1E4h]
  _DWORD *v52; // [esp+28h] [ebp-1DCh]
  char *Src; // [esp+2Ch] [ebp-1D8h]
  LONG v54; // [esp+34h] [ebp-1D0h]
  int v55; // [esp+38h] [ebp-1CCh]
  int v56; // [esp+38h] [ebp-1CCh]
  _DWORD *v57; // [esp+3Ch] [ebp-1C8h]
  int v58; // [esp+40h] [ebp-1C4h]
  int v59; // [esp+44h] [ebp-1C0h]
  size_t Size; // [esp+48h] [ebp-1BCh] BYREF
  _DWORD *v61; // [esp+4Ch] [ebp-1B8h]
  void *v62; // [esp+50h] [ebp-1B4h]
  LONG bottom; // [esp+54h] [ebp-1B0h]
  _DWORD v64[4]; // [esp+58h] [ebp-1ACh] BYREF
  _BYTE v65[404]; // [esp+68h] [ebp-19Ch] BYREF

  v4 = a4;
  v5 = this;
  memset(v65, 0, 0x190u);
  if ( a4 < 100 )
  {
    v6 = v65;
    v47 = v65;
LABEL_3:
    v7 = 0;
    if ( a4 > 0 )
    {
      v9 = a4;
      do
      {
        v10 = v7;
        if ( v7 )
        {
          do
          {
            v61 = *(_DWORD **)&v6[4 * v10 - 4];
            if ( a3->top >= v61[1] )
              break;
            *(_DWORD *)&v6[4 * v10--] = v61;
          }
          while ( v10 );
          v9 = a4;
        }
        *(_DWORD *)&v6[4 * v10] = a3;
        ++v7;
        ++a3;
      }
      while ( v7 < v9 );
      v5 = this;
      v4 = a4;
    }
    v64[0] = 0;
    v64[2] = 0;
    v64[3] = 0x7FFFFFFF;
    v64[1] = a2->bottom;
    *(_DWORD *)&v6[4 * v4] = v64;
    v50 = *(_DWORD **)(*(_DWORD *)v5 + 60);
    *v50 = 0;
    v11 = v50 + 4;
    v50[3] = 0;
    v50[1] = 0x80000000;
    v50[2] = 0x7FFFFFFF;
    v12 = *(_DWORD *)v5;
    Size = (size_t)(v50 + 4);
    *(_DWORD *)(v12 + 52) = 16;
    *(_DWORD *)(*(_DWORD *)v5 + 56) = 1;
    *(_DWORD *)(*(_DWORD *)v5 + 64) = 0x7FFFFFFF;
    *(_DWORD *)(*(_DWORD *)v5 + 72) = 0x80000000;
    v13 = 0;
    top = a2->top;
    v54 = top;
    v52 = 0;
    if ( *(_DWORD *)(*(_DWORD *)v6 + 12) <= top )
    {
      do
        ++v13;
      while ( *(_DWORD *)(*(_DWORD *)&v6[4 * v13] + 12) <= top );
      v52 = (_DWORD *)v13;
    }
    v58 = v13;
    while ( 1 )
    {
      v61 = *(_DWORD **)v5;
      v48 = v61[13] + 40 + 8 * (a4 - v13);
      if ( v48 > v61[4] )
      {
        v61[8] = v11;
        if ( !RGNOBJ::bExpand(v5, v48 + 4 * (a4 - v13) * (a4 - v13 + 4)) )
        {
          if ( v6 != v65 )
            Win32FreePool(v6);
          return 0;
        }
        v13 = (int)v52;
        v11 = *(_DWORD **)(*(_DWORD *)v5 + 32);
        Size = (size_t)v11;
        v50 = &v11[-*(v11 - 1) - 4];
      }
      v46 = v11 + 3;
      v62 = (void *)2;
      v11[3] = a2->left;
      v5 = this;
      v11[4] = a2->right;
      v15 = *(_DWORD *)&v6[4 * v13];
      v16 = *(_DWORD *)(v15 + 4);
      bottom = v16;
      if ( v16 <= v54 )
      {
        bottom = *(_DWORD *)(v15 + 12);
        v17 = *(_DWORD *)&v6[4 * v58];
        v55 = v17;
        if ( *(_DWORD *)(v17 + 4) <= v54 )
        {
          v18 = bottom;
          v19 = v58;
          do
          {
            v20 = *(_DWORD *)(v17 + 12);
            if ( v20 < v18 )
              bottom = v20;
            v21 = v19;
            if ( v19 > v13 )
            {
              do
              {
                v61 = *(_DWORD **)&v6[4 * v21 - 4];
                if ( *(_DWORD *)(v55 + 12) >= v61[3] )
                  break;
                *(_DWORD *)&v6[4 * v21--] = v61;
              }
              while ( v21 > v13 );
              v19 = v58;
            }
            if ( *(_DWORD *)(*(_DWORD *)&v6[4 * v21] + 12) <= v54 )
              ++v13;
            else
              *(_DWORD *)&v6[4 * v21] = v55;
            ++v19;
            v18 = bottom;
            v58 = v19;
            v17 = *(_DWORD *)&v6[4 * v19];
            v55 = v17;
          }
          while ( *(_DWORD *)(v17 + 4) <= v54 );
          v5 = this;
          v11 = (_DWORD *)Size;
          v52 = (_DWORD *)v13;
        }
        v16 = bottom;
        if ( *(_DWORD *)(*(_DWORD *)&v6[4 * v58] + 4) < bottom )
        {
          v16 = *(_DWORD *)(*(_DWORD *)&v6[4 * v58] + 4);
          bottom = v16;
        }
        v22 = v58;
        v61 = (_DWORD *)v13;
        if ( v13 < v58 )
        {
          v23 = (char *)v62;
          v24 = v13;
          while ( 1 )
          {
            v25 = *(int **)&v6[4 * v24];
            v59 = 0;
            v56 = *v25;
            v49 = v25[2];
            if ( (int)v23 <= 0 )
              goto LABEL_41;
            v26 = v46;
            v27 = v11 + 6;
            v57 = v11 + 5;
            v28 = v11 + 4;
            v62 = v27;
            v29 = v57;
            Src = (char *)v57;
            v30 = 0;
            do
            {
              if ( v56 >= *v28 )
                goto LABEL_39;
              if ( v49 <= *v26 )
                break;
              v31 = v56 <= *v26;
              if ( v49 >= *v28 )
                v31 += 2;
              if ( !v31 )
              {
                memmove(v62, v28, 4 * (_DWORD)&v23[-v59] - 4);
                v23 += 2;
                *v28 = v56;
                *v57 = v49;
                goto LABEL_38;
              }
              v32 = v31 - 1;
              if ( !v32 )
              {
                *v26 = v49;
LABEL_38:
                v29 = v57;
                v30 = v59;
                goto LABEL_39;
              }
              v38 = v32 - 1;
              if ( !v38 )
              {
                *v28 = v56;
                goto LABEL_38;
              }
              if ( v38 != 1 )
                goto LABEL_38;
              memmove(v26, Src, 4 * (_DWORD)&v23[-v59] - 8);
              v23 -= 2;
              Src -= 8;
              v30 = v59 - 2;
              v62 = (char *)v62 - 8;
              v26 -= 2;
              v28 -= 2;
              v29 = v57 - 2;
LABEL_39:
              Src += 8;
              v30 += 2;
              v62 = (char *)v62 + 8;
              v29 += 2;
              v26 += 2;
              v59 = v30;
              v28 += 2;
              v57 = v29;
            }
            while ( v30 < (int)v23 );
            v6 = v47;
            v11 = (_DWORD *)Size;
            v22 = v58;
            v62 = v23;
LABEL_41:
            v24 = (int)v61 + 1;
            v61 = (_DWORD *)v24;
            if ( v24 >= v22 )
            {
              v5 = this;
              v16 = bottom;
              break;
            }
          }
        }
      }
      if ( v16 > a2->bottom )
        bottom = a2->bottom;
      v33 = v62;
      if ( (void *)*v50 != v62 )
        goto LABEL_62;
      if ( memcmp(v50 + 3, v11 + 3, 4 * (_DWORD)v62) )
        break;
      v34 = v50;
      v35 = bottom;
      v50[2] = bottom;
LABEL_48:
      v13 = (int)v52;
      v54 = v35;
      if ( (int)v52 < v58 )
      {
        do
        {
          if ( *(_DWORD *)(*(_DWORD *)&v6[4 * v13] + 12) > bottom )
            break;
          ++v13;
        }
        while ( v13 < v58 );
        v5 = this;
        v34 = v50;
        v35 = bottom;
        v52 = (_DWORD *)v13;
      }
      v11 = (_DWORD *)Size;
      if ( v35 >= a2->bottom )
      {
        v36 = *(_DWORD *)v5;
        if ( *(_DWORD *)(*(_DWORD *)v5 + 56) == 1 )
        {
          *(_DWORD *)(v36 + 68) = 0;
          *(_DWORD *)(*(_DWORD *)v5 + 76) = 0;
          *(_DWORD *)(*(_DWORD *)v5 + 64) = 0;
          *(_DWORD *)(*(_DWORD *)v5 + 72) = 0;
          v34[2] = 0x7FFFFFFF;
          *(_DWORD *)(*(_DWORD *)v5 + 32) = v11;
        }
        else
        {
          if ( *v34 )
          {
            *(_DWORD *)(Size + 4) = v34[2];
            ++*(_DWORD *)(*(_DWORD *)v5 + 56);
            *v11 = 0;
            v11[3] = 0;
            *(_DWORD *)(*(_DWORD *)v5 + 52) += 16;
            v36 = *(_DWORD *)v5;
          }
          else
          {
            v11 = v34;
          }
          *(_DWORD *)(*(_DWORD *)(v36 + 60) + 8) = *(_DWORD *)(*(_DWORD *)(v36 + 60) + 4 * **(_DWORD **)(v36 + 60) + 20);
          *(_DWORD *)(*(_DWORD *)v5 + 68) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v5 + 60) + 8);
          *(_DWORD *)(*(_DWORD *)v5 + 76) = v11[1];
          v42 = *v11 + 4;
          v11[2] = 0x7FFFFFFF;
          *(_DWORD *)(*(_DWORD *)v5 + 32) = &v11[v42];
        }
        if ( v6 != v65 )
          Win32FreePool(v6);
        return 1;
      }
    }
    v33 = v62;
LABEL_62:
    if ( v33 )
    {
      v39 = *(_DWORD *)v5;
      v40 = v11[3];
      if ( v40 < *(_DWORD *)(*(_DWORD *)v5 + 64) )
      {
        *(_DWORD *)(v39 + 64) = v40;
        v39 = *(_DWORD *)v5;
      }
      v41 = v11[(_DWORD)v33 + 2];
      if ( v41 > *(_DWORD *)(v39 + 72) )
        *(_DWORD *)(v39 + 72) = v41;
    }
    ++*(_DWORD *)(*(_DWORD *)v5 + 56);
    *v11 = v33;
    *(_DWORD *)(*(_DWORD *)v5 + 52) += 4 * (_DWORD)v33 + 16;
    v34 = v11;
    v11[1] = v54;
    v11[2] = bottom;
    v11[(_DWORD)v33 + 3] = v33;
    v50 = v11;
    v35 = bottom;
    Size = (size_t)&v11[*v11 + 4];
    goto LABEL_48;
  }
  Size = 0;
  if ( (ULongAdd(a4, 1u, (int *)&Size, v43, v45) & 0x80000000) == 0 && ULongLongToULong(4LL * Size, v44) >= 0 )
  {
    v6 = PALLOCMEM2(Size, 1852273223, 0);
    v47 = v6;
    if ( v6 )
      goto LABEL_3;
  }
  return 0;
}

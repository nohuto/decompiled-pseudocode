/*
 * XREFs of ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180083610
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180082B80 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Union(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  int *v4; // r9
  char *v5; // r11
  int *v6; // rdx
  char *v7; // r10
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // r8d
  int v11; // r8d
  int v12; // eax
  int v13; // r8d

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (int *)((char *)a2 + *((int *)a2 + 1));
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (int *)((char *)a3 + *((int *)a3 + 1));
  v7 = (char *)a3 + *((int *)a3 + 3) + 8;
  v8 = (_DWORD *)((char *)this + *((int *)this + 1));
LABEL_2:
  if ( v4 != (int *)v5 )
  {
    if ( v6 == (int *)v7 )
      goto LABEL_22;
LABEL_4:
    while ( 2 )
    {
      v9 = *v4;
      v10 = *v6;
      if ( *v4 >= *v6 )
      {
        ++v6;
        if ( v10 < v9 )
        {
          *v8++ = v10;
          goto LABEL_7;
        }
        *v8 = v9;
        ++v4;
        v11 = *v6;
        ++v8;
LABEL_9:
        v12 = *v4;
        goto LABEL_10;
      }
      ++v4;
      *v8++ = v9;
      while ( 1 )
      {
        v12 = *v4;
        while ( 1 )
        {
          v13 = *v6;
          if ( v12 < *v6 )
          {
            *v8 = v12;
            ++v4;
            ++v8;
            if ( v4 == (int *)v5 )
              goto LABEL_14;
            goto LABEL_4;
          }
          ++v6;
          if ( v13 >= v12 )
            break;
          v11 = *v6;
LABEL_10:
          if ( v12 < v11 )
            break;
          ++v6;
          if ( v11 >= v12 )
          {
            ++v4;
            *v8++ = v12;
            goto LABEL_2;
          }
          if ( v6 == (int *)v7 )
            goto LABEL_21;
        }
        if ( ++v4 == (int *)v5 )
          goto LABEL_14;
LABEL_7:
        v11 = *v6;
        if ( *v4 < *v6 )
        {
          ++v4;
          goto LABEL_9;
        }
        ++v6;
        if ( v11 < *v4 )
          break;
        ++v4;
        if ( v6 == (int *)v7 )
          goto LABEL_21;
      }
      *v8++ = v11;
      if ( v6 != (int *)v7 )
        continue;
      break;
    }
LABEL_21:
    while ( v4 != (int *)v5 )
LABEL_22:
      *v8++ = *v4++;
  }
LABEL_14:
  while ( v6 != (int *)v7 )
    *v8++ = *v6++;
  *((_DWORD *)this + 3) = (_DWORD)v8 - ((_DWORD)this + 8);
}

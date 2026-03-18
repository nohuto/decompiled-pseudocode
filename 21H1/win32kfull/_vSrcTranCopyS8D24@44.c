/*
 * XREFs of _vSrcTranCopyS8D24@44 @ 0x1D6E22
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z @ 0x83544 (-pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ulBlendPixelCT @ 0x1D4F15 (ulBlendPixelCT.c)
 */

void __stdcall vSrcTranCopyS8D24(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct SURFACE *a9,
        int a10,
        void **a11)
{
  _BYTE *v11; // ebx
  unsigned __int8 *v12; // edi
  unsigned int **v13; // ecx
  int v14; // eax
  unsigned __int8 *v15; // esi
  unsigned __int8 *i; // eax
  unsigned int *v17; // ecx
  int v18; // edx
  int v19; // eax
  unsigned __int8 *v20; // esi
  struct _BLENDINFO *v21; // [esp+0h] [ebp-74h]
  int v22; // [esp+4h] [ebp-70h]
  unsigned int v23[14]; // [esp+10h] [ebp-64h] BYREF
  _DWORD v24[2]; // [esp+48h] [ebp-2Ch] BYREF
  int v25; // [esp+50h] [ebp-24h] BYREF
  unsigned int v26; // [esp+54h] [ebp-20h] BYREF
  unsigned __int8 *v27; // [esp+58h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]
  int v29; // [esp+7Ch] [ebp+8h]
  struct _BLENDINFO *v30; // [esp+8Ch] [ebp+18h]
  int v31; // [esp+90h] [ebp+1Ch]
  unsigned int **v32; // [esp+9Ch] [ebp+28h]

  memset(v23, 0, sizeof(v23));
  v25 = (unsigned int)a9 & 0xFFFFFF;
  v26 = 0;
  v24[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  ms_exc.registration.TryLevel = 0;
  v31 = 3 * (a6 - a5);
  v11 = (_BYTE *)(a2 + a1);
  v29 = a2 + a1;
  v12 = (unsigned __int8 *)(3 * a5 + a4);
  v30 = (struct _BLENDINFO *)(*v12 | (*(unsigned __int16 *)(v12 + 1) << 8));
  v13 = pvFillOpaqTableCT(a9, v30, a11, (struct SURFACE *)v23, (struct SURFACE *)1, v21, v22);
  v32 = v13;
  v14 = a8;
  while ( v14 )
  {
    v15 = v12;
    for ( i = &v12[v31]; ; i = &v12[v31] )
    {
      v27 = v15;
      v24[1] = v11;
      if ( v15 >= i )
        break;
      if ( *v11 )
      {
        if ( *v11 == 114 )
        {
          v17 = (unsigned int *)&v25;
        }
        else
        {
          v18 = *v15 | (*(unsigned __int16 *)(v15 + 1) << 8);
          v19 = (unsigned __int8)*v11;
          if ( (struct _BLENDINFO *)v18 == v30 )
          {
            v17 = (unsigned int *)&v13[v19];
          }
          else
          {
            v26 = ulBlendPixelCT(v23, v18, (unsigned __int8 *)off_266024 + 4 * v19);
            v17 = &v26;
          }
        }
        *v15 = *(_BYTE *)v17;
        v20 = v15 + 1;
        v27 = v20;
        *v20++ = *((_BYTE *)v17 + 1);
        v27 = v20;
        *v20 = *((_BYTE *)v17 + 2);
        v15 = v20 + 1;
        v13 = v32;
      }
      else
      {
        v15 += 3;
      }
      ++v11;
    }
    v14 = --a8;
    v11 = (_BYTE *)(a3 + v29);
    v29 += a3;
    v12 += a7;
  }
  ms_exc.registration.TryLevel = -2;
  SEMOBJ::vUnlock((SEMOBJ *)v24);
}

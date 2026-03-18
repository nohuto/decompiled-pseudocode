/*
 * XREFs of ?bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z @ 0x225B92
 * Callers:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vCheckForTrivial@XLATE@@QAEXXZ @ 0x225F31 (-vCheckForTrivial@XLATE@@QAEXXZ.c)
 */

int __thiscall EXLATEOBJ::bMakeXlate(
        XLATE **this,
        int a2,
        unsigned int a3,
        unsigned int a4,
        struct PALETTE *a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int *v10; // edx
  signed __int32 v11; // eax
  unsigned int *v12; // ebx
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  struct PALETTE *v20; // eax
  unsigned int v21; // edx
  unsigned int v23; // eax
  struct PALETTE *v24; // ecx
  unsigned int v25; // esi
  unsigned int v26; // edx
  unsigned int v27; // eax
  struct PALETTE *v28; // ecx
  unsigned int v29; // esi
  unsigned int v30; // edx
  struct PALETTE *v31; // esi
  unsigned int v32; // edx
  int v33; // ecx
  unsigned int v34; // eax
  int v35; // [esp+Ch] [ebp-Ch] BYREF
  XLATE **v36; // [esp+10h] [ebp-8h]
  unsigned int v37; // [esp+14h] [ebp-4h]

  v6 = a6;
  v8 = *(_DWORD *)(a4 + 88);
  v36 = this;
  a4 = v8;
  if ( a6 <= 0x3FFFFFFF && 4 * a6 + 64 >= 4 * a6 )
  {
    v9 = 0;
    v10 = 4 * a6 == -64 ? 0 : (unsigned int *)AllocThreadBufferWithTag(4 * a6 + 64, 1953265735, 0);
    *this = (XLATE *)v10;
    if ( v10 )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)ulXlatePalUnique, 1u);
      v10[8] = -1;
      v12 = v10 + 15;
      *v10 = v11 + 1;
      v10[2] = 0;
      v10[3] = v6;
      v10[1] = 2;
      v10[4] = (unsigned int)(v10 + 15);
      v10[5] = 0;
      v10[6] = 0;
      v10[7] = 0;
      v10[9] = 0;
      v10[10] = a4;
      v10[11] = a3;
      memset(&v10[(_DWORD)a5 + 15], 0, 4 * (v6 - (_DWORD)a5));
      a6 = *(_DWORD *)(a3 + 20);
      v35 = _ghsemPalette;
      GreAcquireSemaphore(_ghsemPalette);
      v13 = a4;
      if ( !a4 || (*(_DWORD *)(a4 + 16) & 0x800) != 0 )
      {
        v19 = a3;
        if ( (struct PALETTE *)a3 != ppalDefault )
        {
          if ( a4 )
          {
            v23 = *(_DWORD *)(a3 + 56);
            v37 = v23;
            if ( v23 )
            {
              v24 = a5;
              if ( a5 )
              {
                v25 = a6;
                do
                {
                  v26 = *(unsigned __int16 *)(a2 + 2 * v9);
                  if ( v26 >= v25 )
                  {
                    v26 %= v25;
                    v23 = v37;
                  }
                  ++v9;
                  *v12++ = *(unsigned __int8 *)(v23 + v26 + 4);
                  v23 = v37;
                }
                while ( v9 < (unsigned int)v24 );
              }
              goto LABEL_28;
            }
          }
          else
          {
            v27 = *(_DWORD *)(a3 + 52);
            v37 = v27;
            if ( v27 )
            {
              v28 = a5;
              if ( a5 )
              {
                v29 = a6;
                do
                {
                  v30 = *(unsigned __int16 *)(a2 + 2 * v9);
                  if ( v30 >= v29 )
                  {
                    v30 %= v29;
                    v27 = v37;
                  }
                  ++v9;
                  *v12++ = *(unsigned __int8 *)(v27 + v30 + 4);
                  v27 = v37;
                }
                while ( v9 < (unsigned int)v28 );
              }
              goto LABEL_28;
            }
          }
          v31 = a5;
          if ( a5 )
          {
            while ( 1 )
            {
              v32 = *(unsigned __int16 *)(a2 + 2 * v9);
              if ( v32 >= a6 )
                v32 %= a6;
              v33 = *(_DWORD *)(*(_DWORD *)(v19 + 76) + 4 * v32);
              if ( HIBYTE(v33) == 2 )
              {
                v34 = (unsigned __int16)v33;
                if ( (unsigned __int16)v33 >= 0x100u )
                  v34 = (unsigned __int8)v33;
              }
              else
              {
                a5 = ppalDefault;
                v34 = XEPALOBJ::ulDispatchGFPEFunction(&a5, *((_DWORD *)ppalDefault + 16), v33);
                if ( v34 >= 0xA )
                  v34 += 236;
              }
              *v12 = v34;
              ++v9;
              ++v12;
              if ( v9 >= (unsigned int)v31 )
                break;
              v19 = a3;
            }
          }
          goto LABEL_28;
        }
        v20 = a5;
        if ( a5 )
        {
          do
          {
            v21 = *(unsigned __int16 *)(a2 + 2 * v9);
            if ( v21 >= 0x14 )
            {
              v21 %= 0x14u;
              v20 = a5;
            }
            if ( v21 >= 0xA )
              v21 += 236;
            *v12 = v21;
            ++v9;
            ++v12;
          }
          while ( v9 < (unsigned int)v20 );
        }
      }
      else
      {
        v14 = 0;
        v37 = 0;
        if ( a5 )
        {
          while ( 1 )
          {
            v15 = *(unsigned __int16 *)(a2 + 2 * v14);
            if ( v15 >= a6 )
              v15 %= a6;
            v16 = *(_DWORD *)(*(_DWORD *)(a3 + 76) + 4 * v15);
            if ( HIBYTE(v16) == 2 )
            {
              v17 = *(_DWORD *)(v13 + 20);
              if ( v17 )
              {
                v18 = (unsigned __int16)v16;
                if ( (unsigned __int16)v16 >= v17 )
                  v18 = (unsigned __int16)v16 % v17;
              }
              else
              {
                v18 = 0;
              }
              *v12 = v18;
            }
            else
            {
              *v12 = XEPALOBJ::ulDispatchGFPEFunction(
                       &a4,
                       *(_DWORD *)(v13 + 64),
                       *(_DWORD *)(*(_DWORD *)(a3 + 76) + 4 * v15));
            }
            ++v12;
            v14 = v37 + 1;
            v37 = v14;
            if ( v14 >= (unsigned int)a5 )
              break;
            v13 = a4;
          }
        }
      }
LABEL_28:
      XLATE::vCheckForTrivial(*v36);
      SEMOBJ::vUnlock((SEMOBJ *)&v35);
      return 1;
    }
  }
  return 0;
}

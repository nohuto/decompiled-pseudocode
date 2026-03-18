/*
 * XREFs of ?vDIBPatBltSrccopy8x8@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU_PATBLTFRAME@@H@Z@Z @ 0x22C848
 * Callers:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __userpurge vDIBPatBltSrccopy8x8(
        XCLIPOBJ *a1@<edx>,
        int a2@<ecx>,
        struct SURFACE *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _BRUSHOBJ *a6,
        struct _POINTL *a7,
        void (__stdcall *a8)(struct _PATBLTFRAME *, int))
{
  int v9; // ecx
  XCLIPOBJ *v10; // ecx
  int v11; // edi
  int v12; // ebx
  int v13; // ecx
  int *v14; // eax
  int v15; // edx
  int v16; // esi
  int v17; // ecx
  int v18; // ebx
  struct _BRUSHOBJ *v19; // ebx
  int v20; // esi
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  _DWORD v24[4]; // [esp+10h] [ebp-1B8h] BYREF
  struct SURFACE *v25; // [esp+20h] [ebp-1A8h]
  int v26; // [esp+24h] [ebp-1A4h]
  int v27; // [esp+28h] [ebp-1A0h]
  int v28; // [esp+2Ch] [ebp-19Ch]
  int v29; // [esp+30h] [ebp-198h]
  int v30; // [esp+34h] [ebp-194h]
  int v31; // [esp+38h] [ebp-190h]
  XCLIPOBJ *v32; // [esp+3Ch] [ebp-18Ch]
  int v33; // [esp+40h] [ebp-188h]
  int v34; // [esp+44h] [ebp-184h]
  int v35; // [esp+48h] [ebp-180h]
  struct _BRUSHOBJ *v36; // [esp+4Ch] [ebp-17Ch]
  XCLIPOBJ *v37; // [esp+50h] [ebp-178h]
  struct _BRUSHOBJ *v38; // [esp+54h] [ebp-174h]
  struct SURFACE *v39; // [esp+58h] [ebp-170h]
  _DWORD v40[85]; // [esp+5Ch] [ebp-16Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1B0h] [ebp-18h]

  v37 = a1;
  v32 = a1;
  v39 = a3;
  v38 = a6;
  v36 = a6;
  v25 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  memset(v40, 0, 0x144u);
  v24[0] = *(_DWORD *)(a2 + 48);
  v24[2] = *(_DWORD *)(a2 + 52);
  v9 = *(_DWORD *)&a4->iDComplexity;
  v24[1] = *(_DWORD *)(v9 + 32);
  v24[3] = *(_DWORD *)(v9 + 28);
  v26 = a5->left & 7;
  v27 = a5->top & 7;
  if ( v37 )
  {
    if ( *((_BYTE *)v37 + 20) )
    {
      if ( *((_BYTE *)v37 + 20) == 1 )
      {
        v40[1] = *((_DWORD *)v37 + 1);
        v40[2] = *((_DWORD *)v37 + 2);
        v40[3] = *((_DWORD *)v37 + 3);
        v40[4] = *((_DWORD *)v37 + 4);
        v20 = v40[1];
        if ( v40[1] <= *(_DWORD *)v39 )
        {
          v20 = *(_DWORD *)v39;
          v40[1] = *(_DWORD *)v39;
        }
        v21 = v40[3];
        if ( v40[3] >= *((_DWORD *)v39 + 2) )
        {
          v21 = *((_DWORD *)v39 + 2);
          v40[3] = v21;
        }
        v22 = v40[2];
        if ( v40[2] <= *((_DWORD *)v39 + 1) )
        {
          v22 = *((_DWORD *)v39 + 1);
          v40[2] = v22;
        }
        v23 = v40[4];
        if ( v40[4] >= *((_DWORD *)v39 + 3) )
        {
          v23 = *((_DWORD *)v39 + 3);
          v40[4] = v23;
        }
        if ( v20 < v21 && v22 < v23 )
        {
          v25 = (struct SURFACE *)&v40[1];
          ms_exc.registration.TryLevel = 2;
          ((void (__stdcall *)(_DWORD *, int))v36)(v24, 1);
        }
      }
      else if ( *((_BYTE *)v37 + 20) == 3 )
      {
        XCLIPOBJ::cEnumStart(v37, 0, 0, 4u, 0x14u);
        do
        {
          v31 = XCLIPOBJ::bEnum(v10, 0x144u, (char *)v40, 0);
          if ( (unsigned int)(v40[0] - 1) <= 0x13 )
          {
            v11 = 0;
            if ( v40[0] > 0 )
            {
              v12 = *(_DWORD *)v39;
              v33 = *(_DWORD *)v39;
              v13 = *((_DWORD *)v39 + 2);
              v34 = v13;
              v35 = *((_DWORD *)v39 + 1);
              v38 = (struct _BRUSHOBJ *)*((_DWORD *)v39 + 3);
              v14 = &v40[3];
              do
              {
                v15 = *(v14 - 2);
                if ( v15 < v12 )
                {
                  *(v14 - 2) = v12;
                  v15 = v12;
                }
                v16 = *v14;
                if ( *v14 > v13 )
                {
                  *v14 = v13;
                  v16 = v13;
                }
                v17 = *(v14 - 1);
                v18 = v35;
                if ( v17 < v35 )
                {
                  *(v14 - 1) = v35;
                  v17 = v18;
                }
                v19 = (struct _BRUSHOBJ *)v14[1];
                if ( (int)v19 > (int)v38 )
                {
                  v19 = v38;
                  v14[1] = (int)v38;
                }
                if ( v16 < v15 )
                  *v14 = v15;
                if ( (int)v19 < v17 )
                  v14[1] = v17;
                ++v11;
                v14 += 4;
                v13 = v34;
                v12 = v33;
              }
              while ( v11 < v40[0] );
            }
            v25 = (struct SURFACE *)&v40[1];
            ms_exc.registration.TryLevel = 3;
            ((void (__stdcall *)(_DWORD *, _DWORD))v36)(v24, v40[0]);
            ms_exc.registration.TryLevel = -2;
            v10 = v37;
          }
        }
        while ( v31 );
      }
    }
    else
    {
      v25 = v39;
      ms_exc.registration.TryLevel = 1;
      ((void (__stdcall *)(_DWORD *, int))v36)(v24, 1);
    }
  }
  else
  {
    v25 = v39;
    ms_exc.registration.TryLevel = 0;
    ((void (__stdcall *)(_DWORD *, int))v38)(v24, 1);
  }
}

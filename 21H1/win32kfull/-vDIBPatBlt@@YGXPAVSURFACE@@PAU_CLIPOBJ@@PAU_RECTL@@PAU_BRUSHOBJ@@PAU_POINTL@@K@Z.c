/*
 * XREFs of ?vDIBPatBlt@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@K@Z @ 0xA8080
 * Callers:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __userpurge vDIBPatBlt(
        XCLIPOBJ *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct SURFACE *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _BRUSHOBJ *a6,
        struct _POINTL *a7,
        unsigned int a8)
{
  struct SURFACE *v8; // edi
  int v9; // edx
  int v10; // ecx
  XCLIPOBJ *v11; // esi
  _DWORD *v12; // ecx
  struct SURFACE **v13; // eax
  struct SURFACE *v14; // ecx
  int v15; // edx
  struct SURFACE *v16; // ecx
  unsigned int *v17; // ecx
  struct _RECTL *v18; // ecx
  _DWORD v19[4]; // [esp+10h] [ebp-1B8h] BYREF
  struct SURFACE *v20; // [esp+20h] [ebp-1A8h]
  int v21; // [esp+24h] [ebp-1A4h]
  LONG top; // [esp+28h] [ebp-1A0h]
  int v23; // [esp+2Ch] [ebp-19Ch]
  int v24; // [esp+30h] [ebp-198h]
  int v25; // [esp+34h] [ebp-194h]
  struct SURFACE *v26; // [esp+38h] [ebp-190h]
  XCLIPOBJ *v27; // [esp+3Ch] [ebp-18Ch]
  struct _CLIPOBJ *v28; // [esp+40h] [ebp-188h]
  void (__stdcall *v29)(_DWORD *); // [esp+44h] [ebp-184h]
  struct _RECTL *v30; // [esp+48h] [ebp-180h]
  struct SURFACE *v31; // [esp+4Ch] [ebp-17Ch]
  int v32; // [esp+50h] [ebp-178h]
  XCLIPOBJ *v33; // [esp+54h] [ebp-174h]
  unsigned int i; // [esp+58h] [ebp-170h]
  int v35; // [esp+5Ch] [ebp-16Ch]
  _DWORD v36[84]; // [esp+60h] [ebp-168h] BYREF
  CPPEH_RECORD ms_exc; // [esp+1B0h] [ebp-18h]

  v33 = a1;
  i = (unsigned int)a2;
  v27 = a1;
  v8 = a3;
  v31 = a3;
  v26 = a3;
  v28 = a4;
  v30 = a5;
  v20 = 0;
  memset(v36, 0, 0x144u);
  v32 = 0;
  v9 = 0;
  v10 = *(_DWORD *)(i + 60);
  v29 = (void (__stdcall *)(_DWORD *))*(&apfnPatBlt + (_DWORD)a6 + 3 * v10);
  v35 = (int)(&aulMulFormat)[v10];
  v25 = v35;
  v11 = v33;
  if ( v33 )
  {
    if ( *((_BYTE *)v33 + 20) == 1 )
    {
      v36[0] = 1;
      v36[1] = *((_DWORD *)v33 + 1);
      v36[2] = *((_DWORD *)v33 + 2);
      v36[3] = *((_DWORD *)v33 + 3);
      v36[4] = *((_DWORD *)v33 + 4);
      v8 = v31;
      v11 = v33;
    }
    else
    {
      if ( *((_BYTE *)v33 + 20) != 3 )
        goto LABEL_2;
      v32 = 1;
      XCLIPOBJ::cEnumStart(v33, 0, 0, 4u, 0x14u);
    }
    v9 = 1;
  }
LABEL_2:
  v19[0] = *(_DWORD *)(i + 48);
  v19[2] = *(_DWORD *)(i + 52);
  v12 = *(_DWORD **)&v28->iDComplexity;
  v19[1] = v12[8];
  v19[3] = v12[7];
  v23 = v35 * v12[5];
  v24 = v12[6];
  v21 = v35 * v30->left;
  top = v30->top;
  if ( v9 )
  {
    if ( !v32 )
      goto LABEL_11;
    do
    {
      v32 = XCLIPOBJ::bEnum(v11, 0x144u, (char *)v36, 0);
LABEL_11:
      for ( i = 0; i < v36[0]; ++i )
      {
        v13 = (struct SURFACE **)&v36[4 * i + 1];
        v31 = *v13;
        v14 = *(struct SURFACE **)v8;
        if ( (int)v31 < *(_DWORD *)v8 )
        {
          *v13 = v14;
          v31 = v14;
        }
        v15 = (int)v13[2];
        v16 = (struct SURFACE *)*((_DWORD *)v8 + 2);
        if ( v15 > (int)v16 )
        {
          v13[2] = v16;
          v15 = (int)v16;
        }
        v35 = (int)v13[1];
        v17 = (unsigned int *)*((_DWORD *)v8 + 1);
        if ( v35 < (int)v17 )
        {
          v13[1] = (struct SURFACE *)v17;
          v35 = (int)v17;
        }
        v18 = (struct _RECTL *)v13[3];
        v30 = (struct _RECTL *)*((_DWORD *)v8 + 3);
        v11 = v33;
        if ( (int)v18 > (int)v30 )
        {
          v18 = v30;
          v13[3] = (struct SURFACE *)v30;
        }
        if ( v35 < (int)v18 && (int)v31 < v15 )
        {
          v20 = (struct SURFACE *)v13;
          ms_exc.registration.TryLevel = 1;
          v29(v19);
          ms_exc.registration.TryLevel = -2;
        }
      }
    }
    while ( v32 );
  }
  else
  {
    v20 = v8;
    ms_exc.registration.TryLevel = 0;
    v29(v19);
    ms_exc.registration.TryLevel = -2;
  }
}

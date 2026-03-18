/*
 * XREFs of ?vDIBnPatBltSrccopy6x6@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU_PATBLTFRAME@@H@Z@Z @ 0x22CB54
 * Callers:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vPatCpyRect1_6x6@@YGXPAU_PATBLTFRAME@@H@Z @ 0x22CE2A (-vPatCpyRect1_6x6@@YGXPAU_PATBLTFRAME@@H@Z.c)
 */

void __userpurge vDIBnPatBltSrccopy6x6(
        XCLIPOBJ *a1@<edx>,
        int a2@<ecx>,
        struct SURFACE *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _BRUSHOBJ *a6,
        struct _POINTL *a7,
        void (__stdcall *a8)(struct _PATBLTFRAME *, int))
{
  struct SURFACE *v9; // ebx
  LONG left; // eax
  int top; // eax
  XCLIPOBJ *v12; // ecx
  unsigned int v13; // ecx
  int v14; // esi
  int v15; // edi
  int v16; // edx
  int *v17; // eax
  struct _RECTL *v18; // ebx
  int v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  _DWORD v23[4]; // [esp+10h] [ebp-1A8h] BYREF
  int *v24; // [esp+20h] [ebp-198h]
  int v25; // [esp+24h] [ebp-194h]
  int v26; // [esp+28h] [ebp-190h]
  int v27; // [esp+2Ch] [ebp-18Ch]
  int v28; // [esp+30h] [ebp-188h]
  int v29; // [esp+34h] [ebp-184h]
  int v30; // [esp+38h] [ebp-180h]
  XCLIPOBJ *v31; // [esp+3Ch] [ebp-17Ch]
  struct SURFACE *v32; // [esp+40h] [ebp-178h]
  struct _RECTL *v33; // [esp+44h] [ebp-174h]
  XCLIPOBJ *v34; // [esp+48h] [ebp-170h]
  int v35[85]; // [esp+4Ch] [ebp-16Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1A0h] [ebp-18h]

  v34 = a1;
  v31 = a1;
  v9 = a3;
  v32 = a3;
  v33 = a5;
  v23[3] = 0;
  v24 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  memset(v35, 0, 0x144u);
  v23[0] = *(_DWORD *)(a2 + 48);
  v23[2] = *(_DWORD *)(a2 + 52);
  v23[1] = *(_DWORD *)(*(_DWORD *)&a4->iDComplexity + 32);
  left = a5->left;
  if ( a5->left < 0 )
    v25 = 5 - ~left % 6;
  else
    v25 = left % 6;
  top = v33->top;
  if ( top < 0 )
    v26 = 5 - ~top % 6;
  else
    v26 = top % 6;
  if ( !v34 )
  {
    v24 = (int *)a3;
    ms_exc.registration.TryLevel = 0;
LABEL_9:
    vPatCpyRect1_6x6((struct _PATBLTFRAME *)v23, 1);
LABEL_10:
    ms_exc.registration.TryLevel = -2;
    return;
  }
  switch ( *((_BYTE *)v34 + 20) )
  {
    case 0:
      v24 = (int *)a3;
      ms_exc.registration.TryLevel = 1;
      vPatCpyRect1_6x6((struct _PATBLTFRAME *)v23, 1);
      goto LABEL_10;
    case 1:
      v35[1] = *((_DWORD *)v34 + 1);
      v35[2] = *((_DWORD *)v34 + 2);
      v35[3] = *((_DWORD *)v34 + 3);
      v35[4] = *((_DWORD *)v34 + 4);
      v19 = v35[1];
      if ( v35[1] <= *(_DWORD *)a3 )
      {
        v19 = *(_DWORD *)a3;
        v35[1] = *(_DWORD *)a3;
      }
      v20 = v35[3];
      if ( v35[3] >= *((_DWORD *)a3 + 2) )
      {
        v20 = *((_DWORD *)a3 + 2);
        v35[3] = v20;
      }
      v21 = v35[2];
      if ( v35[2] <= *((_DWORD *)a3 + 1) )
      {
        v21 = *((_DWORD *)a3 + 1);
        v35[2] = v21;
      }
      v22 = v35[4];
      if ( v35[4] >= *((_DWORD *)a3 + 3) )
      {
        v22 = *((_DWORD *)a3 + 3);
        v35[4] = v22;
      }
      if ( v19 < v20 && v21 < v22 )
      {
        v24 = &v35[1];
        ms_exc.registration.TryLevel = 2;
        goto LABEL_9;
      }
      break;
    case 3:
      XCLIPOBJ::cEnumStart(v34, 0, 0, 4u, 0x14u);
      do
      {
        v30 = XCLIPOBJ::bEnum(v12, 0x144u, (char *)v35, 0);
        if ( (unsigned int)(v35[0] - 1) <= 0x13 )
        {
          v13 = 0;
          if ( v35[0] )
          {
            v14 = *(_DWORD *)v9;
            v15 = *((_DWORD *)v9 + 2);
            v16 = *((_DWORD *)v9 + 1);
            v33 = (struct _RECTL *)*((_DWORD *)v9 + 3);
            v17 = &v35[2];
            v18 = v33;
            do
            {
              if ( *(v17 - 1) < v14 )
                *(v17 - 1) = v14;
              if ( v17[1] > v15 )
                v17[1] = v15;
              if ( *v17 < v16 )
                *v17 = v16;
              if ( v17[2] > (int)v18 )
                v17[2] = (int)v18;
              ++v13;
              v17 += 4;
            }
            while ( v13 < v35[0] );
            v9 = v32;
          }
          v24 = &v35[1];
          ms_exc.registration.TryLevel = 3;
          vPatCpyRect1_6x6((struct _PATBLTFRAME *)v23, v35[0]);
          ms_exc.registration.TryLevel = -2;
          v12 = v34;
        }
      }
      while ( v30 );
      break;
  }
}

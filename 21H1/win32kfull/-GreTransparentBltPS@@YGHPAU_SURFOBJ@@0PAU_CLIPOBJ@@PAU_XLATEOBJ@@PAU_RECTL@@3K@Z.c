/*
 * XREFs of ?GreTransparentBltPS@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3K@Z @ 0x1F17C8
 * Callers:
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vTransparentScan@@YGXPAU_SURFOBJ@@0KKPAU_XLATEOBJ@@PAU_RECTL@@K@Z @ 0x1F2EDF (-vTransparentScan@@YGXPAU_SURFOBJ@@0KKPAU_XLATEOBJ@@PAU_RECTL@@K@Z.c)
 */

int __userpurge GreTransparentBltPS@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _XLATEOBJ *a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  XCLIPOBJ *v9; // esi
  struct _SURFOBJ *v10; // edi
  HSURF *p_hsurf; // esi
  _DWORD *v13; // esi
  int v14; // eax
  struct _SURFOBJ *dhsurf; // ecx
  int dhpdev; // ecx
  HSURF v17; // edx
  HSURF hsurf; // esi
  HDEV v19; // edx
  HSURF v20; // eax
  struct _RECTL *v21; // [esp+0h] [ebp-1C4h]
  unsigned int v22; // [esp+4h] [ebp-1C0h]
  int v23; // [esp+10h] [ebp-1B4h] BYREF
  char v24; // [esp+14h] [ebp-1B0h]
  int v25; // [esp+18h] [ebp-1ACh]
  struct _CLIPOBJ *v26; // [esp+1Ch] [ebp-1A8h]
  int v27; // [esp+20h] [ebp-1A4h]
  int v28; // [esp+24h] [ebp-1A0h]
  struct _XLATEOBJ *v29; // [esp+28h] [ebp-19Ch]
  HDEV hdev; // [esp+2Ch] [ebp-198h]
  unsigned int v31; // [esp+30h] [ebp-194h] BYREF
  HSURF v32; // [esp+34h] [ebp-190h]
  int v33; // [esp+38h] [ebp-18Ch]
  int v34; // [esp+3Ch] [ebp-188h]
  HSURF v35; // [esp+40h] [ebp-184h]
  HSURF v36; // [esp+44h] [ebp-180h]
  struct _SURFOBJ *v37; // [esp+48h] [ebp-17Ch]
  unsigned int i; // [esp+4Ch] [ebp-178h]
  unsigned int v39; // [esp+50h] [ebp-174h]
  struct _SURFOBJ *v40; // [esp+54h] [ebp-170h]
  int v41; // [esp+58h] [ebp-16Ch]
  HSURF v42; // [esp+5Ch] [ebp-168h]
  struct _SURFOBJ *v43; // [esp+60h] [ebp-164h]
  _DWORD v44[82]; // [esp+64h] [ebp-160h] BYREF
  CPPEH_RECORD ms_exc; // [esp+1ACh] [ebp-18h]

  v27 = a2;
  v28 = a1;
  v9 = (XCLIPOBJ *)a3;
  v40 = a3;
  v39 = (unsigned int)a4;
  v10 = (struct _SURFOBJ *)a5;
  v43 = (struct _SURFOBJ *)a5;
  v26 = a5;
  v29 = a6;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  memset(v44, 0, 0x144u);
  if ( !a3 || !LOBYTE(a3->sizlBitmap.cy) )
  {
    p_hsurf = (HSURF *)a5;
    goto LABEL_9;
  }
  if ( LOBYTE(a3->sizlBitmap.cy) == 1 )
  {
    p_hsurf = &a3->hsurf;
LABEL_9:
    v44[0] = 1;
    v44[1] = *p_hsurf;
    v13 = p_hsurf + 1;
    v44[2] = *v13++;
    v44[3] = *v13;
    v44[4] = v13[1];
    v41 = 0;
    v9 = (XCLIPOBJ *)v40;
    v10 = v43;
    goto LABEL_10;
  }
  if ( LOBYTE(a3->sizlBitmap.cy) != 3 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v23);
    return 0;
  }
  v41 = 1;
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
LABEL_10:
  if ( !v39 )
    v39 = (unsigned int)xloIdent;
  if ( !v41 )
    goto LABEL_14;
  do
  {
    v41 = XCLIPOBJ::bEnum(v9, 0x144u, (char *)v44, 0);
LABEL_14:
    for ( i = 0; i < v44[0]; ++i )
    {
      v14 = 2 * i;
      v43 = (struct _SURFOBJ *)v44[4 * i + 1];
      dhsurf = (struct _SURFOBJ *)v10->dhsurf;
      v37 = dhsurf;
      if ( (int)v43 < (int)dhsurf )
      {
        v44[4 * i + 1] = dhsurf;
        v43 = dhsurf;
      }
      dhpdev = (int)v10->dhpdev;
      if ( v44[2 * v14 + 3] <= dhpdev )
        dhpdev = v44[2 * v14 + 3];
      else
        v44[2 * v14 + 3] = dhpdev;
      v17 = (HSURF)v44[2 * v14 + 2];
      v36 = v17;
      hsurf = v10->hsurf;
      v35 = hsurf;
      if ( (int)v17 < (int)hsurf )
      {
        v17 = hsurf;
        v44[2 * v14 + 2] = hsurf;
        v36 = hsurf;
      }
      v42 = v17;
      v19 = (HDEV)v44[2 * v14 + 4];
      hdev = v10->hdev;
      v9 = (XCLIPOBJ *)v40;
      if ( (int)v19 > (int)hdev )
      {
        v19 = hdev;
        v44[2 * v14 + 4] = hdev;
      }
      if ( (int)v36 < (int)v19 && (int)v43 < dhpdev )
      {
        v31 = (unsigned int)v43;
        v32 = v42;
        v33 = dhpdev;
        v34 = (int)v42 + 1;
        v37 = (struct _SURFOBJ *)((char *)v43 + v29->iUniq - (_DWORD)v37);
        v43 = (struct _SURFOBJ *)((char *)v42 + v29->flXlate - (_DWORD)v35);
        v42 = (HSURF)((char *)v19 - (char *)v42);
        while ( 1 )
        {
          v20 = v42;
          v42 = (HSURF)((char *)v42 - 1);
          if ( !v20 )
            break;
          ms_exc.registration.TryLevel = 0;
          vTransparentScan(v37, v43, v39, (unsigned int)&v31, a7, v21, v22);
          ms_exc.registration.TryLevel = -2;
          v43 = (struct _SURFOBJ *)((char *)v43 + 1);
          v32 = (HSURF)((char *)v32 + 1);
          ++v34;
        }
      }
    }
  }
  while ( v41 );
  SURFMEM::~SURFMEM((SURFMEM *)&v23);
  return 1;
}

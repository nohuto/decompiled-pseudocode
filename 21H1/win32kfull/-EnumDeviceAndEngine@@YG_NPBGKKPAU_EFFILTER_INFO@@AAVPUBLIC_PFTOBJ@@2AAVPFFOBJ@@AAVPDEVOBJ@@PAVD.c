/*
 * XREFs of ?EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVDCOBJ@@PAKPAX@Z @ 0x21F000
 * Callers:
 *     _GreEnumFonts@28 @ 0x888D8 (_GreEnumFonts@28.c)
 * Callees:
 *     ?pfsubAlternateFacename@@YGPAU_FONTSUB@@PBG@Z @ 0x886E4 (-pfsubAlternateFacename@@YGPAU_FONTSUB@@PBG@Z.c)
 *     ?bValid@FHOBJ@@QBEHXZ @ 0x88B7E (-bValid@FHOBJ@@QBEHXZ.c)
 *     ??1EFSMEMOBJ@@QAE@XZ @ 0x88B8C (--1EFSMEMOBJ@@QAE@XZ.c)
 *     ??0EFSMEMOBJ@@QAE@PAVDCOBJ@@KKPAXPAK@Z @ 0x88BBA (--0EFSMEMOBJ@@QAE@PAVDCOBJ@@KKPAXPAK@Z.c)
 *     ?bScanFamilyAndFace@@YGHPAVFHOBJ@@000PAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x899EA (-bScanFamilyAndFace@@YGHPAVFHOBJ@@000PAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z.c)
 *     ?bScanFamily@@YGHPAVFHOBJ@@K0K0KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x89A4A (-bScanFamily@@YGHPAVFHOBJ@@K0K0KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z.c)
 */

char __userpurge EnumDeviceAndEngine@<al>(
        unsigned int a1@<ecx>,
        struct FHOBJ *a2,
        struct EFSOBJ *a3,
        _DWORD *a4,
        struct PUBLIC_PFTOBJ ***a5,
        struct PUBLIC_PFTOBJ *a6,
        struct PUBLIC_PFTOBJ *a7,
        struct PFFOBJ *a8,
        struct PDEVOBJ *a9,
        struct DCOBJ *a10,
        unsigned int *a11,
        void *a12)
{
  int v12; // esi
  int v14; // ebx
  int v15; // edx
  char v16; // bl
  struct PUBLIC_PFTOBJ **v17; // eax
  int v18; // eax
  struct PUBLIC_PFTOBJ **v19; // eax
  struct PUBLIC_PFTOBJ **v20; // ecx
  struct _FONTSUB *v21; // eax
  unsigned int v22; // edi
  struct PUBLIC_PFTOBJ **v23; // ecx
  struct _EFFILTER_INFO *v25; // [esp+0h] [ebp-44h]
  struct _EFFILTER_INFO *v26; // [esp+0h] [ebp-44h]
  struct _EFFILTER_INFO *v27; // [esp+0h] [ebp-44h]
  struct _EFFILTER_INFO *v28; // [esp+0h] [ebp-44h]
  struct _EFFILTER_INFO *v29; // [esp+0h] [ebp-44h]
  const unsigned __int16 *v30; // [esp+4h] [ebp-40h]
  const unsigned __int16 *v31; // [esp+4h] [ebp-40h]
  const unsigned __int16 *v32; // [esp+4h] [ebp-40h]
  const unsigned __int16 *v33; // [esp+4h] [ebp-40h]
  const unsigned __int16 *v34; // [esp+4h] [ebp-40h]
  struct PUBLIC_PFTOBJ **v35; // [esp+Ch] [ebp-38h] BYREF
  struct PUBLIC_PFTOBJ *v36; // [esp+10h] [ebp-34h]
  struct PUBLIC_PFTOBJ **v37; // [esp+14h] [ebp-30h] BYREF
  struct PUBLIC_PFTOBJ *v38; // [esp+18h] [ebp-2Ch]
  _DWORD v39[2]; // [esp+1Ch] [ebp-28h] BYREF
  _DWORD v40[2]; // [esp+24h] [ebp-20h] BYREF
  struct PUBLIC_PFTOBJ **v41; // [esp+2Ch] [ebp-18h] BYREF
  struct PUBLIC_PFTOBJ *v42; // [esp+30h] [ebp-14h]
  _DWORD v43[2]; // [esp+34h] [ebp-10h] BYREF
  _DWORD v44[2]; // [esp+3Ch] [ebp-8h] BYREF
  struct PUBLIC_PFTOBJ *v45; // [esp+5Ch] [ebp+18h]

  v12 = *(_DWORD *)a6;
  v41 = (struct PUBLIC_PFTOBJ **)(*(_DWORD *)a6 + 72);
  v45 = *v41;
  v42 = *v41;
  if ( FHOBJ::bValid((FHOBJ *)&v41) )
  {
    v44[0] = *a4;
    v14 = *(_DWORD *)v44[0];
    v44[1] = *(_DWORD *)v44[0];
    if ( FHOBJ::bValid((FHOBJ *)v44) )
    {
      v40[0] = v12 + 68;
      v40[1] = *(_DWORD *)(v12 + 68);
      if ( FHOBJ::bValid((FHOBJ *)v40) )
      {
        v39[0] = v15 + 4;
        v39[1] = *(_DWORD *)(v15 + 4);
        if ( FHOBJ::bValid((FHOBJ *)v39) )
        {
          if ( a1 )
          {
            EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v43, a8, 0x20u, (unsigned int)a2, a10, (unsigned int *)a9);
            if ( !v43[0]
              || !bScanFamilyAndFace(
                    (struct FHOBJ *)v39,
                    (struct FHOBJ *)v44,
                    (struct FHOBJ *)&v41,
                    (struct FHOBJ *)v40,
                    (struct FHOBJ *)v43,
                    a2,
                    a3,
                    a1,
                    v25,
                    v30) )
            {
              v16 = 0;
              goto LABEL_35;
            }
            v16 = 0;
            v20 = *a5;
            if ( *a5 )
            {
              v36 = *v20;
              v35 = v20;
              v37 = v20 + 1;
              v38 = v20[1];
              if ( !FHOBJ::bValid((FHOBJ *)&v35)
                || !FHOBJ::bValid((FHOBJ *)&v37)
                || !bScanFamilyAndFace(
                      (struct FHOBJ *)&v37,
                      (struct FHOBJ *)&v35,
                      0,
                      0,
                      (struct FHOBJ *)v43,
                      a2,
                      a3,
                      a1,
                      v28,
                      v33) )
              {
                goto LABEL_35;
              }
            }
            v21 = pfsubAlternateFacename();
            v22 = (unsigned int)v21 + 130;
            if ( !v21 )
              v22 = 0;
            if ( !v22 )
              goto LABEL_14;
            *(_DWORD *)v43[0] = v21;
            if ( !bScanFamilyAndFace(
                    (struct FHOBJ *)v39,
                    (struct FHOBJ *)v44,
                    (struct FHOBJ *)&v41,
                    (struct FHOBJ *)v40,
                    (struct FHOBJ *)v43,
                    a2,
                    a3,
                    v22,
                    v28,
                    v33) )
            {
LABEL_35:
              EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v43);
              return v16;
            }
            v23 = *a5;
            if ( *a5 )
            {
              v38 = *v23;
              v37 = v23;
              v35 = v23 + 1;
              v36 = v23[1];
              if ( !FHOBJ::bValid((FHOBJ *)&v37) || !FHOBJ::bValid((FHOBJ *)&v35) )
                goto LABEL_35;
              v18 = bScanFamilyAndFace(
                      (struct FHOBJ *)&v35,
                      (struct FHOBJ *)&v37,
                      0,
                      0,
                      (struct FHOBJ *)v43,
                      a2,
                      a3,
                      v22,
                      v29,
                      v34);
LABEL_13:
              if ( v18 )
                goto LABEL_14;
              goto LABEL_35;
            }
          }
          else
          {
            EFSMEMOBJ::EFSMEMOBJ(
              (EFSMEMOBJ *)v43,
              a8,
              *((_DWORD *)v45 + 3) + *(_DWORD *)(v14 + 12),
              (unsigned int)a2,
              a10,
              (unsigned int *)a9);
            v16 = 0;
            if ( !v43[0] )
              goto LABEL_35;
            if ( (*(_DWORD *)(*(_DWORD *)a7 + 1468) & 0x2000) != 0 )
            {
              if ( !bScanFamily(
                      (struct FHOBJ *)v44,
                      2u,
                      (struct FHOBJ *)v44,
                      1u,
                      (struct FHOBJ *)v43,
                      (unsigned int)a2,
                      a3,
                      0,
                      v25,
                      v30) )
                goto LABEL_35;
              v17 = *a5;
              if ( !*a5 )
                goto LABEL_14;
              v41 = *a5;
              v42 = *v17;
              if ( !FHOBJ::bValid((FHOBJ *)&v41) )
                goto LABEL_35;
              v18 = bScanFamily((struct FHOBJ *)&v41, 1u, 0, 0, (struct FHOBJ *)v43, (unsigned int)a2, a3, 0, v26, v31);
              goto LABEL_13;
            }
            v16 = 0;
            if ( !bScanFamily(
                    (struct FHOBJ *)v44,
                    1u,
                    (struct FHOBJ *)v44,
                    2u,
                    (struct FHOBJ *)v43,
                    (unsigned int)a2,
                    a3,
                    0,
                    v25,
                    v30) )
              goto LABEL_35;
            v19 = *a5;
            if ( *a5 )
            {
              v41 = *a5;
              v42 = *v19;
              if ( !FHOBJ::bValid((FHOBJ *)&v41) )
                goto LABEL_35;
              v18 = bScanFamily((struct FHOBJ *)&v41, 2u, 0, 0, (struct FHOBJ *)v43, (unsigned int)a2, a3, 0, v27, v32);
              goto LABEL_13;
            }
          }
LABEL_14:
          if ( !*(_DWORD *)(v43[0] + 16) )
            v16 = 1;
          goto LABEL_35;
        }
      }
    }
  }
  return 0;
}

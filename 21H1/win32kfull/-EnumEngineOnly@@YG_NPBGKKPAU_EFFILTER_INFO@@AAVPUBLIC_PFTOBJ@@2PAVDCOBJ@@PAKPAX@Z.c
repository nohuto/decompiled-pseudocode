/*
 * XREFs of ?EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z @ 0x88A46
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

char __userpurge EnumEngineOnly@<al>(
        unsigned int a1@<ecx>,
        struct FHOBJ *a2,
        struct EFSOBJ *a3,
        int **a4,
        int **a5,
        struct PUBLIC_PFTOBJ *a6,
        struct PUBLIC_PFTOBJ *a7,
        struct DCOBJ *a8,
        unsigned int *a9,
        void *a10)
{
  int v11; // esi
  int v12; // edx
  char v13; // bl
  int *v14; // ecx
  struct _FONTSUB *v15; // eax
  unsigned int v16; // edi
  int *v18; // eax
  int *v19; // ecx
  int v20; // eax
  struct _EFFILTER_INFO *v21; // [esp+0h] [ebp-3Ch]
  struct _EFFILTER_INFO *v22; // [esp+0h] [ebp-3Ch]
  struct _EFFILTER_INFO *v23; // [esp+0h] [ebp-3Ch]
  struct _EFFILTER_INFO *v24; // [esp+0h] [ebp-3Ch]
  const unsigned __int16 *v25; // [esp+4h] [ebp-38h]
  const unsigned __int16 *v26; // [esp+4h] [ebp-38h]
  const unsigned __int16 *v27; // [esp+4h] [ebp-38h]
  const unsigned __int16 *v28; // [esp+4h] [ebp-38h]
  int *v29; // [esp+10h] [ebp-2Ch] BYREF
  int v30; // [esp+14h] [ebp-28h]
  int *v31; // [esp+18h] [ebp-24h] BYREF
  int v32; // [esp+1Ch] [ebp-20h]
  _DWORD v33[2]; // [esp+20h] [ebp-1Ch] BYREF
  int *v34; // [esp+28h] [ebp-14h] BYREF
  int v35; // [esp+2Ch] [ebp-10h]
  _DWORD v36[3]; // [esp+30h] [ebp-Ch] BYREF

  v34 = *a4;
  v11 = *v34;
  v35 = *v34;
  if ( !FHOBJ::bValid((FHOBJ *)&v34) )
    return 0;
  v33[0] = v12 + 4;
  v33[1] = *(_DWORD *)(v12 + 4);
  if ( !FHOBJ::bValid((FHOBJ *)v33) )
    return 0;
  if ( !a1 )
  {
    EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v36, a6, *(_DWORD *)(v11 + 12), (unsigned int)a2, a8, (unsigned int *)a7);
    v13 = 0;
    if ( !v36[0] || !bScanFamily((struct FHOBJ *)&v34, 1u, 0, 0, (struct FHOBJ *)v36, (unsigned int)a2, a3, 0, v21, v25) )
      goto LABEL_12;
    v18 = *a5;
    if ( !*a5 )
      goto LABEL_10;
    v34 = *a5;
    v35 = *v18;
    if ( !FHOBJ::bValid((FHOBJ *)&v34) )
      goto LABEL_12;
    v20 = bScanFamily((struct FHOBJ *)&v34, 1u, 0, 0, (struct FHOBJ *)v36, (unsigned int)a2, a3, 0, v23, v27);
    goto LABEL_31;
  }
  EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v36, a6, 0x20u, (unsigned int)a2, a8, (unsigned int *)a7);
  v13 = 0;
  if ( v36[0] )
  {
    if ( bScanFamilyAndFace(0, 0, (struct FHOBJ *)v36, a2, a3, a1, v21, v25) )
    {
      v14 = *a5;
      if ( !*a5
        || (v30 = *v14, v29 = v14, v31 = v14 + 1, v32 = v14[1], FHOBJ::bValid((FHOBJ *)&v29))
        && FHOBJ::bValid((FHOBJ *)&v31)
        && bScanFamilyAndFace(0, 0, (struct FHOBJ *)v36, a2, a3, a1, v22, v26) )
      {
        v15 = pfsubAlternateFacename();
        v16 = (unsigned int)v15 + 130;
        if ( !v15 )
          v16 = 0;
        if ( !v16 )
          goto LABEL_10;
        *(_DWORD *)v36[0] = v15;
        if ( bScanFamilyAndFace(0, 0, (struct FHOBJ *)v36, a2, a3, v16, v22, v26) )
        {
          v19 = *a5;
          if ( !*a5 )
            goto LABEL_10;
          v32 = *v19;
          v31 = v19;
          v29 = v19 + 1;
          v30 = v19[1];
          if ( FHOBJ::bValid((FHOBJ *)&v31) && FHOBJ::bValid((FHOBJ *)&v29) )
          {
            v20 = bScanFamilyAndFace(0, 0, (struct FHOBJ *)v36, a2, a3, v16, v24, v28);
LABEL_31:
            if ( v20 )
            {
LABEL_10:
              if ( !*(_DWORD *)(v36[0] + 16) )
                v13 = 1;
            }
          }
        }
      }
    }
  }
LABEL_12:
  EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v36);
  return v13;
}

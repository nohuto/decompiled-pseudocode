/*
 * XREFs of ?bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z @ 0x1E8DAB
 * Callers:
 *     _GreAddFontMemResourceEx@20 @ 0x1E9227 (_GreAddFontMemResourceEx@20.c)
 *     _NtGdiAddRemoteFontToDC@16 @ 0x1E92FF (_NtGdiAddRemoteFontToDC@16.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE@XZ @ 0xECFA2 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE@XZ.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE_N_K@Z @ 0xECFE0 (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE_N_K@Z.c)
 *     ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE@XZ @ 0xF6DDC (--0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __userpurge bCreateFontFileView@<eax>(
        int a1@<edx>,
        unsigned __int64 *a2@<ecx>,
        const struct _FONTFILEVIEW *a3,
        const struct tagDOWNLOADFONTHEADER *a4,
        unsigned int a5,
        struct _FONTFILEVIEW ***a6,
        unsigned int a7)
{
  int v8; // ebx
  unsigned int v10; // esi
  PATHOBJ *v11; // eax
  PATHOBJ *v12; // edx
  unsigned int v13; // edi
  unsigned int i; // ecx
  unsigned int v15; // esi
  char *v16; // edx
  char *v17; // eax
  PATHOBJ *v18; // edx
  _DWORD v19[20]; // [esp+10h] [ebp-B4h] BYREF
  const struct tagDOWNLOADFONTHEADER *v20; // [esp+60h] [ebp-64h]
  int v21; // [esp+64h] [ebp-60h]
  unsigned int v22; // [esp+68h] [ebp-5Ch]
  int v23; // [esp+6Ch] [ebp-58h]
  PATHOBJ *v24; // [esp+70h] [ebp-54h]
  PATHOBJ *p_cCurves; // [esp+74h] [ebp-50h]
  unsigned int v26; // [esp+78h] [ebp-4Ch]
  char *v27; // [esp+7Ch] [ebp-48h]
  _BYTE v28[32]; // [esp+80h] [ebp-44h] BYREF
  int v29; // [esp+A0h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+ACh] [ebp-18h]

  v23 = a1;
  v20 = a4;
  v26 = a5;
  v8 = 1;
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v28);
  if ( !UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
          (UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v28,
          a2[5]) )
    goto LABEL_2;
  qmemcpy(v19, a2, 0x48u);
  if ( (unsigned int)a3 <= ((4 * v26 + 15) & 0xFFFFFFF8) )
  {
    v29 = 87;
LABEL_2:
    UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v28);
    return 0;
  }
  v10 = (4 * v26 + 7) & 0xFFFFFFF8;
  v11 = (PATHOBJ *)PALLOCMEM2(v10 + 72 * v26, 1986422343, 1);
  v12 = v11;
  v24 = v11;
  if ( !v11 )
  {
    v29 = 8;
    goto LABEL_2;
  }
  p_cCurves = v11;
  v27 = (char *)v11 + v10;
  qmemcpy((char *)v11 + v10, v19, 0x48u);
  v13 = 0;
  ms_exc.registration.TryLevel = 0;
  for ( i = 0; ; ++i )
  {
    v22 = i;
    if ( i >= v26 )
      break;
    v15 = *(_DWORD *)(v23 + 4 * i + 8);
    if ( v15 < v13 || v15 > v19[4] || v13 != ((v13 + 3) & 0xFFFFFFFC) )
    {
      v8 = 0;
      v21 = 0;
      break;
    }
    v16 = v27;
    *((_DWORD *)v27 + 3) = v13 + v19[3];
    *((_DWORD *)v16 + 4) = v15 - v13;
    v17 = v16;
    v18 = p_cCurves;
    p_cCurves->fl = (FLONG)v17;
    p_cCurves = (PATHOBJ *)&v18->cCurves;
    v19[19] = &v18->cCurves;
    v27 = v17 + 72;
    v19[18] = v17 + 72;
    v13 = v15;
    v12 = v24;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v8 )
    *(_DWORD *)v20 = v12;
  else
    Win32FreePool(v12);
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v28);
  return v8;
}

/*
 * XREFs of ?vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRUSHOBJ@@PAU_POINTL@@@Z @ 0x553A0
 * Callers:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 * Callees:
 *     _draw_nf_ntb_o_to_temp_start@28 @ 0x55820 (_draw_nf_ntb_o_to_temp_start@28.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x94E94 (-BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _exit_fast_text@24 @ 0xB5608 (_exit_fast_text@24.c)
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z @ 0xF6EBC (--0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QAE@XZ @ 0xF6F23 (--1UMPDReleaseAcquireRFONTSem@@QAE@XZ.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 */

void __userpurge vExpandAndCopyText(
        struct _FONTOBJ *a1@<edx>,
        struct SURFACE *a2@<ecx>,
        struct SURFACE *a3,
        struct _FONTOBJ *a4,
        struct _GLYPHPOS *a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned int a8,
        unsigned int a9,
        struct SURFACE *a10,
        struct SURFACE *a11,
        struct _RECTL *a12,
        struct _RECTL *a13,
        int a14,
        LONG a15,
        unsigned int a16,
        struct _RECTL *a17,
        struct _RECTL *a18,
        struct _POINTL *a19,
        struct _BRUSHOBJ *a20,
        struct _POINTL *a21)
{
  unsigned int v21; // edx
  _DWORD **v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // edx
  int v26; // edx
  char v27; // bl
  struct SURFACE *v28; // edx
  unsigned int v29; // esi
  int v30; // eax
  int v31; // eax
  struct _FONTOBJ *i; // edi
  signed int flFontType; // eax
  int v34; // ecx
  signed int v35; // edx
  signed int iFace; // ebx
  int v37; // esi
  signed int v38; // eax
  void (__stdcall *v39)(LONG, struct _FONTOBJ *, struct _GLYPHPOS *, int, unsigned int, unsigned __int8 *, int (__stdcall *)(int, int, int, int, int, int, int, int, int, int, int)); // eax
  void (__stdcall *v40)(unsigned __int8 *, unsigned int, int, int, int, int); // esi
  int *v41; // edx
  int v42; // ecx
  int v43; // edx
  int v44; // ecx
  int v45; // edx
  int (__stdcall *v46)(int, int, int, int, int, int, int, int, int, int, int); // ebx
  int (__stdcall *v47)(int, int, int, int, int, int, int, int, int, int, int); // edi
  int v48; // ebx
  struct _FONTOBJ *v49; // edi
  int v50; // edi
  int v51; // eax
  struct _POINTL *v52; // [esp+0h] [ebp-2CCh]
  unsigned int v53; // [esp+4h] [ebp-2C8h]
  struct _RECTL v54; // [esp+18h] [ebp-2B4h] BYREF
  unsigned int v55; // [esp+28h] [ebp-2A4h]
  struct SURFACE *v56; // [esp+2Ch] [ebp-2A0h]
  int v57; // [esp+30h] [ebp-29Ch]
  LONG v58; // [esp+34h] [ebp-298h]
  int iUniq; // [esp+38h] [ebp-294h]
  struct _FONTOBJ *cxMax; // [esp+3Ch] [ebp-290h]
  struct _FONTOBJ *v61; // [esp+40h] [ebp-28Ch]
  int (__stdcall *v62)(int, int, int, int, int, int, int, int, int, int, int); // [esp+44h] [ebp-288h]
  struct _GLYPHPOS *v63; // [esp+48h] [ebp-284h]
  int v64; // [esp+4Ch] [ebp-280h]
  unsigned int v65; // [esp+50h] [ebp-27Ch]
  int v66; // [esp+54h] [ebp-278h]
  int v67; // [esp+58h] [ebp-274h]
  unsigned int v68; // [esp+5Ch] [ebp-270h]
  signed int v69; // [esp+60h] [ebp-26Ch]
  struct SURFACE *v70; // [esp+64h] [ebp-268h]
  char v71[32]; // [esp+68h] [ebp-264h] BYREF
  int v72; // [esp+88h] [ebp-244h]
  int v73; // [esp+8Ch] [ebp-240h]
  struct _GLYPHPOS *v74; // [esp+98h] [ebp-234h]
  unsigned int v75; // [esp+9Ch] [ebp-230h]
  int v76; // [esp+A4h] [ebp-228h]
  __int16 v77; // [esp+A8h] [ebp-224h]
  _BYTE v78[68]; // [esp+258h] [ebp-74h] BYREF
  _DWORD v79[4]; // [esp+29Ch] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2B4h] [ebp-18h]

  v61 = a1;
  v56 = a2;
  v58 = (LONG)a3;
  v63 = a5;
  v65 = a6;
  v68 = a8;
  v55 = a9;
  v70 = a10;
  v67 = a14;
  v57 = a14;
  v54.right = a15;
  v69 = a16;
  v54.bottom = 0;
  v21 = 0;
  if ( a4 )
  {
    v22 = (_DWORD **)((char *)a3 + 4);
    while ( **v22 )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= (unsigned int)a4 )
        goto LABEL_5;
    }
    goto LABEL_48;
  }
LABEL_5:
  if ( (a14 & 1) == 0 && (unsigned int)a4 > 1 )
  {
    v23 = *((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 4 * (_DWORD)a4 - 2);
    if ( v23 > 0x8000000 || v23 < -134217728 )
    {
LABEL_48:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v54.bottom);
      return;
    }
  }
  UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v78, v56, v61, 1);
  v62 = (int (__stdcall *)(int, int, int, int, int, int, int, int, int, int, int))*((_DWORD *)v70 + 1);
  if ( !v55 )
    v55 = v68;
  v61 = (struct _FONTOBJ *)(v67 & 8);
  cxMax = v61;
  v66 = v67 & 0x20;
  if ( (v67 & 8) != 0 )
    v24 = 4 * ((v67 & 0x20) == 0) + 3;
  else
    v24 = 31;
  iUniq = v67 & 0x20;
  v25 = *(_DWORD *)v70;
  v56 = (struct SURFACE *)(v24 & *(_DWORD *)v70);
  v26 = v25 - (v24 & v25);
  v64 = v26;
  if ( (v67 & 0x20) != 0 )
  {
    v54.left = (LONG)draw_clrt_nf_ntb_o_to_temp_start;
    v54.top = (LONG)draw_clrt_f_ntb_o_to_temp_start;
    v39 = (void (__stdcall *)(LONG, struct _FONTOBJ *, struct _GLYPHPOS *, int, unsigned int, unsigned __int8 *, int (__stdcall *)(int, int, int, int, int, int, int, int, int, int, int)))*(&v54.left + (a14 & 1));
    ms_exc.registration.TryLevel = 1;
    v39(v58, a4, v63, v26, v65, a7, v62);
    ms_exc.registration.TryLevel = -2;
    v27 = v67;
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v27 = v67;
    ((void (__stdcall *)(LONG, struct _FONTOBJ *, struct _GLYPHPOS *, int, unsigned int, unsigned __int8 *, int (__stdcall *)(int, int, int, int, int, int, int, int, int, int, int)))(&MastertextTypeTabel)[v67 & 0xFFFFFF4F])(
      v58,
      a4,
      v63,
      v26,
      v65,
      a7,
      v62);
    ms_exc.registration.TryLevel = -2;
  }
  v28 = v70;
  v29 = v68;
  v30 = v64;
  if ( v69 )
  {
    if ( v61 )
      v40 = (void (__stdcall *)(unsigned __int8 *, unsigned int, int, int, int, int))exit_fast_text;
    else
      v40 = vRectBlt;
    v66 = (int)v40;
    v41 = (int *)v69;
    while ( 1 )
    {
      v42 = *v41;
      v43 = v41[2];
      if ( v42 == v43 )
        break;
      if ( v42 <= *(_DWORD *)v70 )
        v42 = *(_DWORD *)v70;
      v44 = v42 - v30;
      if ( v43 >= *((_DWORD *)v70 + 2) )
        v43 = *((_DWORD *)v70 + 2);
      v45 = v43 - v30;
      v46 = *(int (__stdcall **)(int, int, int, int, int, int, int, int, int, int, int))(v69 + 4);
      v47 = (int (__stdcall *)(int, int, int, int, int, int, int, int, int, int, int))*((_DWORD *)v70 + 1);
      v62 = v47;
      if ( (int)v46 <= (int)v47 )
        v46 = v47;
      v48 = (char *)v46 - (char *)v47;
      v49 = *(struct _FONTOBJ **)(v69 + 12);
      v61 = (struct _FONTOBJ *)*((_DWORD *)v70 + 3);
      v30 = v64;
      if ( (int)v49 >= (int)v61 )
        v49 = v61;
      v50 = (char *)v49 - (char *)v62;
      if ( v44 < v45 && v48 < v50 )
      {
        ms_exc.registration.TryLevel = 2;
        v40((unsigned __int8 *)v63, v65, v44, v48, v45, v50);
        ms_exc.registration.TryLevel = -2;
        v30 = v64;
      }
      v27 = v67;
      v41 = (int *)(v69 + 16);
      v69 += 16;
    }
    v29 = v68;
    v28 = v70;
  }
  if ( *(_DWORD *)(v29 + 60) > 6u )
  {
    if ( bUMPDSecurityGateEx() )
    {
      if ( gfUMPDDebug )
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:vExpandAndCopyText:Invalid pSurf->iFormat().\n",
          1836);
      goto LABEL_39;
    }
    v28 = v70;
  }
  v31 = *(_DWORD *)(v29 + 60);
  if ( a13 == (struct _RECTL *)-1 )
    v31 += 8;
  if ( v27 < 0 )
  {
    if ( iUniq )
      v62 = vSrcAlphaCopyS8D32;
    else
      v62 = vSrcAlphaCopyS4D32;
  }
  else
  {
    if ( cxMax )
    {
      v31 += 16;
      if ( iUniq )
        v31 += 16;
    }
    v62 = (int (__stdcall *)(int, int, int, int, int, int, int, int, int, int, int))(&SrcCopyTextFunctionTable)[v31];
  }
  for ( i = (struct _FONTOBJ *)v54.right; ; i = (struct _FONTOBJ *)((char *)i + 16) )
  {
    v61 = i;
    flFontType = i->flFontType;
    if ( !flFontType )
      break;
    v34 = *(_DWORD *)v28;
    iUniq = i->iUniq;
    if ( v34 > iUniq )
      iUniq = v34;
    cxMax = (struct _FONTOBJ *)*((_DWORD *)v28 + 2);
    if ( (int)cxMax >= (signed int)i->cxMax )
      cxMax = (struct _FONTOBJ *)i->cxMax;
    v35 = *((_DWORD *)v70 + 1);
    iFace = i->iFace;
    if ( v35 > iFace )
      iFace = *((_DWORD *)v70 + 1);
    v69 = *((_DWORD *)v70 + 3);
    v37 = iUniq;
    if ( v69 >= flFontType )
      v69 = flFontType;
    else
      flFontType = v69;
    v66 = iUniq - v34;
    v58 = iFace - v35;
    if ( (v67 & 0x10) != 0 )
    {
      v37 = iUniq - v64;
      iUniq -= v64;
      cxMax = (struct _FONTOBJ *)((char *)cxMax - v64);
      iFace = v58;
      v38 = flFontType - v35;
      v69 = v38;
    }
    else
    {
      v54.right = *(_DWORD *)(v68 + 28);
      PDEVOBJ::vSync((PDEVOBJ *)&v54.right, (struct _SURFOBJ *)(v68 + 16), 0, 0);
      v38 = v69;
    }
    if ( v37 < (int)cxMax && iFace < v38 )
    {
      if ( a12 == (struct _RECTL *)-1 )
      {
        v79[0] = v37;
        v79[1] = iFace;
        v79[2] = cxMax;
        v79[3] = v38;
        v76 = 1;
        v77 = 0;
        v74 = v63;
        v75 = v65;
        v72 = 8 * v65;
        v73 = *((_DWORD *)v70 + 3) - *((_DWORD *)v70 + 1);
        v54.left = (LONG)v56 + v66;
        v54.top = v58;
        BltLnk(
          (struct SURFACE *)v71,
          0,
          0,
          (struct ECLIPOBJ *)v79,
          0,
          &v54,
          (struct _POINTL *)a18,
          a19,
          (struct _BRUSHOBJ *)0xAAF0,
          v52,
          v53);
      }
      else
      {
        ms_exc.registration.TryLevel = 3;
        v62(
          (int)v63 + v58 * v65,
          (int)v56 + v66,
          v65,
          *(_DWORD *)(v68 + 48) + iFace * *(_DWORD *)(v68 + 52),
          iUniq,
          (int)cxMax,
          *(_DWORD *)(v68 + 52),
          v69 - iFace,
          (int)a12,
          (int)a13,
          v55);
        ms_exc.registration.TryLevel = -2;
      }
    }
    v28 = v70;
  }
LABEL_39:
  UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v78);
  if ( v54.bottom )
  {
    v51 = *(_DWORD *)(v54.bottom + 32);
    if ( v51 < 0 )
    {
      if ( v51 == -1 )
        FreeThreadBufferWithTag(v54.bottom);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 6 * v51);
    }
  }
}

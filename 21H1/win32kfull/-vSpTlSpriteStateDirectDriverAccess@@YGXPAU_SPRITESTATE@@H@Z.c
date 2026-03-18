/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z @ 0x3099C
 * Callers:
 *     ?vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z @ 0x3061A (-vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 * Callees:
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(_DWORD *a1, int a2)
{
  int v3; // esi
  int *ThreadWin32Thread; // eax
  int v5; // eax
  int *v6; // eax
  int v7; // ecx
  int *v8; // eax
  int v9; // ecx
  int *v10; // eax
  int v11; // ecx
  int *v12; // eax
  int v13; // ecx
  int *v14; // eax
  int v15; // ecx
  int *v16; // eax
  int v17; // ecx
  int *v18; // eax
  int v19; // ecx
  int *v20; // eax
  int v21; // ecx
  int *v22; // eax
  int v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int *v26; // eax
  int v27; // ecx
  int *v28; // eax
  int v29; // ecx
  int *v30; // eax
  int v31; // ecx
  int *v32; // eax
  int v33; // ecx
  int *v34; // eax
  int v35; // esi
  int *v36; // eax
  int v37; // eax
  int *v38; // eax
  int v39; // eax
  int *v40; // eax
  int v41; // eax
  int *v42; // eax
  int v43; // eax
  int *v44; // eax
  int v45; // eax
  int *v46; // eax
  int v47; // eax
  int *v48; // eax
  int v49; // eax
  int *v50; // eax
  int v51; // eax
  int *v52; // eax
  int v53; // eax
  int *v54; // eax
  int v55; // eax
  int *v56; // eax
  int v57; // eax
  int *v58; // eax
  int v59; // eax
  int *v60; // eax
  int v61; // eax
  int *v62; // eax
  int v63; // eax
  int *v64; // eax
  int v65; // eax
  PKTHREAD v66; // ebx
  int *v67; // eax
  PKTHREAD CurrentThread; // [esp+Ch] [ebp-4h]
  PKTHREAD v69; // [esp+Ch] [ebp-4h]
  PKTHREAD v70; // [esp+Ch] [ebp-4h]
  PKTHREAD v71; // [esp+Ch] [ebp-4h]
  PKTHREAD v72; // [esp+Ch] [ebp-4h]
  PKTHREAD v73; // [esp+Ch] [ebp-4h]
  PKTHREAD v74; // [esp+Ch] [ebp-4h]
  PKTHREAD v75; // [esp+Ch] [ebp-4h]
  PKTHREAD v76; // [esp+Ch] [ebp-4h]
  PKTHREAD v77; // [esp+Ch] [ebp-4h]
  PKTHREAD v78; // [esp+Ch] [ebp-4h]
  PKTHREAD v79; // [esp+Ch] [ebp-4h]
  PKTHREAD v80; // [esp+Ch] [ebp-4h]
  PKTHREAD v81; // [esp+Ch] [ebp-4h]
  PKTHREAD v82; // [esp+Ch] [ebp-4h]
  PKTHREAD v83; // [esp+Ch] [ebp-4h]
  PKTHREAD v84; // [esp+Ch] [ebp-4h]
  PKTHREAD v85; // [esp+Ch] [ebp-4h]
  PKTHREAD v86; // [esp+Ch] [ebp-4h]
  PKTHREAD v87; // [esp+Ch] [ebp-4h]
  PKTHREAD v88; // [esp+Ch] [ebp-4h]
  PKTHREAD v89; // [esp+Ch] [ebp-4h]
  PKTHREAD v90; // [esp+Ch] [ebp-4h]
  PKTHREAD v91; // [esp+Ch] [ebp-4h]
  PKTHREAD v92; // [esp+Ch] [ebp-4h]
  PKTHREAD v93; // [esp+Ch] [ebp-4h]
  PKTHREAD v94; // [esp+Ch] [ebp-4h]
  PKTHREAD v95; // [esp+Ch] [ebp-4h]
  PKTHREAD v96; // [esp+Ch] [ebp-4h]
  PKTHREAD v97; // [esp+Ch] [ebp-4h]
  PKTHREAD v98; // [esp+Ch] [ebp-4h]

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0;
    if ( IsThreadCrossSessionAttached() || (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread)) == 0 )
      v5 = 0;
    else
      v5 = *ThreadWin32Thread;
    *(_DWORD *)(*(_DWORD *)(v5 + 156) + 28) = a1;
    v69 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v6 = (int *)PsGetThreadWin32Thread(v69)) == 0 )
      v7 = 0;
    else
      v7 = *v6;
    *(_DWORD *)(*(_DWORD *)(v7 + 156) + 32) = a1[188];
    v70 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v8 = (int *)PsGetThreadWin32Thread(v70)) == 0 )
      v9 = 0;
    else
      v9 = *v8;
    *(_DWORD *)(*(_DWORD *)(v9 + 156) + 36) = a1[189];
    v71 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v10 = (int *)PsGetThreadWin32Thread(v71)) == 0 )
      v11 = 0;
    else
      v11 = *v10;
    *(_DWORD *)(*(_DWORD *)(v11 + 156) + 40) = a1[190];
    v72 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v12 = (int *)PsGetThreadWin32Thread(v72)) == 0 )
      v13 = 0;
    else
      v13 = *v12;
    *(_DWORD *)(*(_DWORD *)(v13 + 156) + 48) = a1[192];
    v73 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v14 = (int *)PsGetThreadWin32Thread(v73)) == 0 )
      v15 = 0;
    else
      v15 = *v14;
    *(_DWORD *)(*(_DWORD *)(v15 + 156) + 52) = a1[193];
    v74 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v16 = (int *)PsGetThreadWin32Thread(v74)) == 0 )
      v17 = 0;
    else
      v17 = *v16;
    *(_DWORD *)(*(_DWORD *)(v17 + 156) + 56) = a1[194];
    v75 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v18 = (int *)PsGetThreadWin32Thread(v75)) == 0 )
      v19 = 0;
    else
      v19 = *v18;
    *(_DWORD *)(*(_DWORD *)(v19 + 156) + 60) = a1[195];
    v76 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v20 = (int *)PsGetThreadWin32Thread(v76)) == 0 )
      v21 = 0;
    else
      v21 = *v20;
    *(_DWORD *)(*(_DWORD *)(v21 + 156) + 64) = a1[196];
    v77 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v22 = (int *)PsGetThreadWin32Thread(v77)) == 0 )
      v23 = 0;
    else
      v23 = *v22;
    *(_DWORD *)(*(_DWORD *)(v23 + 156) + 68) = a1[197];
    v78 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v24 = (int *)PsGetThreadWin32Thread(v78)) == 0 )
      v25 = 0;
    else
      v25 = *v24;
    *(_DWORD *)(*(_DWORD *)(v25 + 156) + 72) = a1[198];
    v79 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v26 = (int *)PsGetThreadWin32Thread(v79)) == 0 )
      v27 = 0;
    else
      v27 = *v26;
    *(_DWORD *)(*(_DWORD *)(v27 + 156) + 76) = a1[199];
    v80 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v28 = (int *)PsGetThreadWin32Thread(v80)) == 0 )
      v29 = 0;
    else
      v29 = *v28;
    *(_DWORD *)(*(_DWORD *)(v29 + 156) + 80) = a1[200];
    v81 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v30 = (int *)PsGetThreadWin32Thread(v81)) == 0 )
      v31 = 0;
    else
      v31 = *v30;
    *(_DWORD *)(*(_DWORD *)(v31 + 156) + 88) = a1[202];
    v82 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v32 = (int *)PsGetThreadWin32Thread(v82)) == 0 )
      v33 = 0;
    else
      v33 = *v32;
    *(_DWORD *)(*(_DWORD *)(v33 + 156) + 84) = a1[201];
    v83 = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      v34 = (int *)PsGetThreadWin32Thread(v83);
      if ( v34 )
        v3 = *v34;
    }
    *(_DWORD *)(*(_DWORD *)(v3 + 156) + 92) = a1[203];
  }
  else
  {
    v84 = KeGetCurrentThread();
    v35 = 0;
    if ( IsThreadCrossSessionAttached() || (v36 = (int *)PsGetThreadWin32Thread(v84)) == 0 )
      v37 = 0;
    else
      v37 = *v36;
    *(_DWORD *)(*(_DWORD *)(v37 + 156) + 28) = 0;
    v85 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v38 = (int *)PsGetThreadWin32Thread(v85)) == 0 )
      v39 = 0;
    else
      v39 = *v38;
    *(_DWORD *)(*(_DWORD *)(v39 + 156) + 32) = SpStrokeAndFillPath;
    v86 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v40 = (int *)PsGetThreadWin32Thread(v86)) == 0 )
      v41 = 0;
    else
      v41 = *v40;
    *(_DWORD *)(*(_DWORD *)(v41 + 156) + 36) = SpStrokePath;
    v87 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v42 = (int *)PsGetThreadWin32Thread(v87)) == 0 )
      v43 = 0;
    else
      v43 = *v42;
    *(_DWORD *)(*(_DWORD *)(v43 + 156) + 40) = SpFillPath;
    v88 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v44 = (int *)PsGetThreadWin32Thread(v88)) == 0 )
      v45 = 0;
    else
      v45 = *v44;
    *(_DWORD *)(*(_DWORD *)(v45 + 156) + 48) = SpBitBlt;
    v89 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v46 = (int *)PsGetThreadWin32Thread(v89)) == 0 )
      v47 = 0;
    else
      v47 = *v46;
    *(_DWORD *)(*(_DWORD *)(v47 + 156) + 52) = SpCopyBits;
    v90 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v48 = (int *)PsGetThreadWin32Thread(v90)) == 0 )
      v49 = 0;
    else
      v49 = *v48;
    *(_DWORD *)(*(_DWORD *)(v49 + 156) + 56) = SpStretchBlt;
    v91 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v50 = (int *)PsGetThreadWin32Thread(v91)) == 0 )
      v51 = 0;
    else
      v51 = *v50;
    *(_DWORD *)(*(_DWORD *)(v51 + 156) + 60) = SpTextOut;
    v92 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v52 = (int *)PsGetThreadWin32Thread(v92)) == 0 )
      v53 = 0;
    else
      v53 = *v52;
    *(_DWORD *)(*(_DWORD *)(v53 + 156) + 64) = SpLineTo;
    v93 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v54 = (int *)PsGetThreadWin32Thread(v93)) == 0 )
      v55 = 0;
    else
      v55 = *v54;
    *(_DWORD *)(*(_DWORD *)(v55 + 156) + 68) = SpTransparentBlt;
    v94 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v56 = (int *)PsGetThreadWin32Thread(v94)) == 0 )
      v57 = 0;
    else
      v57 = *v56;
    *(_DWORD *)(*(_DWORD *)(v57 + 156) + 72) = SpAlphaBlend;
    v95 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v58 = (int *)PsGetThreadWin32Thread(v95)) == 0 )
      v59 = 0;
    else
      v59 = *v58;
    *(_DWORD *)(*(_DWORD *)(v59 + 156) + 76) = SpPlgBlt;
    v96 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v60 = (int *)PsGetThreadWin32Thread(v96)) == 0 )
      v61 = 0;
    else
      v61 = *v60;
    *(_DWORD *)(*(_DWORD *)(v61 + 156) + 80) = SpGradientFill;
    v97 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v62 = (int *)PsGetThreadWin32Thread(v97)) == 0 )
      v63 = 0;
    else
      v63 = *v62;
    *(_DWORD *)(*(_DWORD *)(v63 + 156) + 88) = SpStretchBltROP;
    v98 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v64 = (int *)PsGetThreadWin32Thread(v98)) == 0 )
      v65 = 0;
    else
      v65 = *v64;
    *(_DWORD *)(*(_DWORD *)(v65 + 156) + 84) = SpSaveScreenBits;
    v66 = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      v67 = (int *)PsGetThreadWin32Thread(v66);
      if ( v67 )
        v35 = *v67;
    }
    *(_DWORD *)(*(_DWORD *)(v35 + 156) + 92) = SpDrawStream;
  }
}

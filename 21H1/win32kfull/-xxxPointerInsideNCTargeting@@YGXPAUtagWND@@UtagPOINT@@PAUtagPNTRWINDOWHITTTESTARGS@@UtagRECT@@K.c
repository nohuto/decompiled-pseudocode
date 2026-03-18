/*
 * XREFs of ?xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x17A5BF
 * Callers:
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?_TTCheckNCTarget@@YGHUtagRECT@@PAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@PAU1@PAGPAUtagPOINT@@3K@Z @ 0x17A3C7 (-_TTCheckNCTarget@@YGHUtagRECT@@PAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@PAU1@PAGPAUtagPOINT@@3K.c)
 *     ?_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@K@Z @ 0x17A464 (-_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@.c)
 *     ?xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x17A904 (-xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     __TTHmToPixels@8 @ 0x1B97AF (__TTHmToPixels@8.c)
 */

void __userpurge xxxPointerInsideNCTargeting(
        LONG a1@<edx>,
        int *a2@<ecx>,
        struct tagWND *a3,
        struct tagPOINT a4,
        struct tagPNTRWINDOWHITTTESTARGS *a5,
        struct tagRECT a6,
        unsigned int a7)
{
  _DWORD *v7; // ecx
  struct tagRECT *v8; // ebx
  struct tagPOINT *v9; // esi
  unsigned int v10; // edi
  int v11; // eax
  struct tagRECT *v12; // edx
  int v13; // eax
  int v14; // esi
  bool v15; // cc
  struct tagRECT *v16; // eax
  int *v17; // esi
  _DWORD *v18; // ecx
  LONG x; // esi
  int *v20; // edi
  int v21; // ecx
  _DWORD *v22; // ecx
  LONG v23; // esi
  int v24; // ecx
  LONG v25; // ebx
  _DWORD *v26; // ecx
  int v27; // edx
  struct tagPNTRWINDOWHITTTESTARGS **v28; // esi
  int v29; // ecx
  struct tagRECT **v30; // esi
  int v31; // eax
  struct tagPNTRWINDOWHITTTESTARGS *v32; // ebx
  LONG v33; // esi
  struct tagRECT v34; // [esp-24h] [ebp-B8h]
  struct tagRECT v35; // [esp-24h] [ebp-B8h]
  struct tagRECT v36; // [esp-24h] [ebp-B8h]
  struct tagRECT v37; // [esp-24h] [ebp-B8h]
  struct tagRECT v38; // [esp-24h] [ebp-B8h]
  struct tagPOINT v39; // [esp-Ch] [ebp-A0h]
  struct tagRECT v40; // [esp-Ch] [ebp-A0h]
  struct tagRECT *v41; // [esp+0h] [ebp-94h]
  struct tagRECT *v42; // [esp+0h] [ebp-94h]
  struct tagRECT *v43; // [esp+0h] [ebp-94h]
  struct tagRECT *v44; // [esp+0h] [ebp-94h]
  struct tagRECT *v45; // [esp+0h] [ebp-94h]
  int *v46; // [esp+0h] [ebp-94h]
  unsigned int v47; // [esp+4h] [ebp-90h]
  unsigned int v48; // [esp+4h] [ebp-90h]
  unsigned int v49; // [esp+4h] [ebp-90h]
  unsigned int v50; // [esp+4h] [ebp-90h]
  unsigned int v51; // [esp+4h] [ebp-90h]
  struct tagPNTRWINDOWHITTTESTARGS *v52; // [esp+4h] [ebp-90h]
  unsigned int v53; // [esp+4h] [ebp-90h]
  struct tagPNTRWINDOWHITTTESTARGS *v54; // [esp+Ch] [ebp-88h] BYREF
  struct tagRECT *v55; // [esp+10h] [ebp-84h]
  unsigned __int16 *v56; // [esp+14h] [ebp-80h]
  struct tagPOINT *v57; // [esp+18h] [ebp-7Ch]
  struct tagPNTRWINDOWHITTTESTARGS *v58; // [esp+1Ch] [ebp-78h] BYREF
  struct tagRECT *v59; // [esp+20h] [ebp-74h]
  unsigned __int16 *v60; // [esp+24h] [ebp-70h]
  struct tagPOINT *v61; // [esp+28h] [ebp-6Ch]
  unsigned __int16 *v62; // [esp+2Ch] [ebp-68h]
  struct tagPOINT *v63; // [esp+30h] [ebp-64h]
  unsigned __int16 *v64; // [esp+34h] [ebp-60h]
  struct tagPNTRWINDOWHITTTESTARGS *v65; // [esp+38h] [ebp-5Ch]
  struct tagRECT *v66; // [esp+3Ch] [ebp-58h]
  unsigned __int16 *v67; // [esp+40h] [ebp-54h]
  struct tagPOINT *v68; // [esp+44h] [ebp-50h]
  struct tagPNTRWINDOWHITTTESTARGS *v69; // [esp+48h] [ebp-4Ch] BYREF
  int v70; // [esp+4Ch] [ebp-48h] BYREF
  int v71; // [esp+50h] [ebp-44h]
  int v72; // [esp+54h] [ebp-40h]
  struct tagPOINT v73; // [esp+58h] [ebp-3Ch] BYREF
  struct tagRECT *v74; // [esp+60h] [ebp-34h]
  int *v75; // [esp+64h] [ebp-30h]
  struct tagRECT v76; // [esp+68h] [ebp-2Ch] BYREF
  unsigned int v77; // [esp+7Ch] [ebp-18h] BYREF
  struct tagRECT *v78; // [esp+80h] [ebp-14h]
  unsigned __int16 *v79; // [esp+84h] [ebp-10h]
  struct tagPOINT *v80; // [esp+88h] [ebp-Ch]

  v70 = 0;
  v71 = 0;
  v76.left = (LONG)a5;
  v75 = a2;
  v7 = (_DWORD *)a2[5];
  v76.top = a6.left;
  v73.x = a1;
  v8 = (struct tagRECT *)v7[20];
  v73.y = 4095;
  v76.right = a6.top;
  v59 = v8;
  v55 = v8;
  v76.bottom = a6.right;
  v9 = (struct tagPOINT *)v7[16];
  v77 = 0;
  v63 = v9;
  v61 = v9;
  v57 = v9;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v58 = (struct tagPNTRWINDOWHITTTESTARGS *)v7[13];
  v62 = (unsigned __int16 *)v7[17];
  v60 = v62;
  v10 = 120;
  v69 = (struct tagPNTRWINDOWHITTTESTARGS *)v7[19];
  v54 = v69;
  v64 = (unsigned __int16 *)v7[15];
  v56 = v64;
  if ( (_WORD)a3 == 3 && HIWORD(a3) >= 0x78u )
    v10 = (unsigned int)a3 >> 16;
  v11 = *(_DWORD *)(a1 + 24);
  v12 = *(struct tagRECT **)(v11 + 188);
  v13 = *(_DWORD *)(v11 + 184);
  v74 = v12;
  v72 = v13;
  v14 = _TTHmToPixels(v10, v12);
  v15 = _TTHmToPixels(v10, v72) <= v14;
  v16 = (struct tagRECT *)v72;
  if ( v15 )
    v16 = v74;
  v72 = _TTHmToPixels(v10, v16);
  v74 = (struct tagRECT *)((v10 << 16) + 3);
  v34.bottom = (LONG)&v77;
  v34.right = (LONG)&v70;
  v34.top = (LONG)&v73.y;
  v34.left = (LONG)&v76;
  _TTCheckNCTarget(v73.x, (int)v75, v34, (struct tagWND *)v74, v54, v55, v56, v57, v41, v47);
  v35.bottom = (LONG)&v77;
  v35.right = (LONG)&v70;
  v35.top = (LONG)&v73.y;
  v35.left = (LONG)&v76;
  v17 = v75;
  _TTCheckNCTarget(v73.x, (int)v75, v35, (struct tagWND *)v74, v58, v59, v60, v61, v42, v48);
  v18 = (_DWORD *)v17[5];
  v65 = (struct tagPNTRWINDOWHITTTESTARGS *)v18[19];
  v66 = (struct tagRECT *)v18[14];
  v67 = (unsigned __int16 *)v18[15];
  v68 = (struct tagPOINT *)(v18[20] - 1);
  v36.bottom = (LONG)&v77;
  v36.right = (LONG)&v70;
  v36.top = (LONG)&v73.y;
  v36.left = (LONG)&v76;
  x = v73.x;
  v20 = v75;
  if ( _TTCheckNCTarget(v73.x, (int)v75, v36, (struct tagWND *)v74, v65, v66, v67, v68, v43, v49) )
  {
    v21 = *(_DWORD *)(*(_DWORD *)(x + 24) + 36);
    if ( v21 + v72 >= (int)v8 )
    {
      v77 = (unsigned int)v69;
      v79 = v64;
      v80 = v63;
      v78 = v8;
      v71 = (int)&v8->left - v21 + 1;
    }
  }
  v22 = (_DWORD *)v20[5];
  v65 = (struct tagPNTRWINDOWHITTTESTARGS *)v22[13];
  v66 = (struct tagRECT *)v22[14];
  v67 = (unsigned __int16 *)v22[17];
  v68 = (struct tagPOINT *)(v22[20] - 1);
  v37.bottom = (LONG)&v77;
  v37.right = (LONG)&v70;
  v37.top = (LONG)&v73.y;
  v37.left = (LONG)&v76;
  v23 = v73.x;
  if ( _TTCheckNCTarget(v73.x, (int)v75, v37, (struct tagWND *)v74, v65, v66, v67, v68, v44, v50) )
  {
    v24 = *(_DWORD *)(*(_DWORD *)(v23 + 24) + 36);
    if ( v24 + v72 >= (int)v8 )
    {
      v77 = (unsigned int)v58;
      v71 = (int)&v8->left - v24 + 1;
      v78 = v59;
      v79 = v60;
      v80 = v61;
    }
  }
  v25 = v73.x;
  v26 = (_DWORD *)v75[5];
  v65 = (struct tagPNTRWINDOWHITTTESTARGS *)(v26[17] + 1);
  v66 = (struct tagRECT *)v26[20];
  v67 = (unsigned __int16 *)(v26[19] - 1);
  v68 = (struct tagPOINT *)v26[16];
  v38.bottom = (LONG)&v77;
  v38.right = (LONG)&v70;
  v38.top = (LONG)&v73.y;
  v38.left = (LONG)&v76;
  if ( _TTCheckNCTarget(v73.x, (int)v75, v38, (struct tagWND *)v74, v65, v66, v67, v68, v45, v51) )
  {
    v27 = *(_DWORD *)(*(_DWORD *)(v25 + 24) + 32);
    if ( v72 + v27 >= (int)v69 )
    {
      v28 = &v54;
      v29 = (int)v69 - v27 + 1;
LABEL_17:
      v70 = v29;
      v77 = (unsigned int)*v28;
      v30 = (struct tagRECT **)(v28 + 1);
      v78 = *v30++;
      v79 = (unsigned __int16 *)*v30;
      v80 = (struct tagPOINT *)v30[1];
      goto LABEL_18;
    }
    if ( v27 - v72 <= (int)v62 )
    {
      v28 = &v58;
      v29 = (int)v62 - v27 - 1;
      goto LABEL_17;
    }
  }
LABEL_18:
  if ( LOWORD(v73.y) < 0xFFDu )
  {
    v31 = *(_DWORD *)(v25 + 24);
    v69 = 0;
    v39.y = *(_DWORD *)(v31 + 32);
    v39.x = a4.y;
    xxxSendNCHitTest(
      (struct tagWND *)&v69,
      (struct tagPOINT)__PAIR64__(a4.x, v25),
      v39,
      *(struct tagPOINT **)(v31 + 36),
      v46,
      v52);
    v32 = v69;
    if ( v69 == (struct tagPNTRWINDOWHITTTESTARGS *)15
      || v69 == (struct tagPNTRWINDOWHITTTESTARGS *)6
      || v69 == (struct tagPNTRWINDOWHITTTESTARGS *)10
      || v69 == (struct tagPNTRWINDOWHITTTESTARGS *)11
      || v69 == (struct tagPNTRWINDOWHITTTESTARGS *)7
      || v69 == (struct tagPNTRWINDOWHITTTESTARGS *)17
      || v69 == (struct tagPNTRWINDOWHITTTESTARGS *)16
      || v69 == (struct tagPNTRWINDOWHITTTESTARGS *)4 )
    {
      *(_QWORD *)&v40.left = *(_QWORD *)&v76.top;
      v40.right = v76.bottom;
      v33 = v73.x;
      _TTUpdateBestTarget(
        v75,
        v73.x,
        (struct tagPNTRWINDOWHITTTESTARGS *)LOWORD(v73.y),
        (struct tagWND *)&v70,
        &v77,
        0,
        v74,
        v76.left,
        v40,
        v53);
      *(_DWORD *)(v33 + 16) = v32;
    }
  }
}

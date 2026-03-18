/*
 * XREFs of ?MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z @ 0x171A18
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtagMONITOR@@H@Z @ 0x174001 (-xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtag.c)
 * Callees:
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ReduceArrangedRectangleByFrameMargin@12 @ 0x140128 (_ReduceArrangedRectangleByFrameMargin@12.c)
 *     _TransformRectAroundPoint@28 @ 0x151AD1 (_TransformRectAroundPoint@28.c)
 */

bool __userpurge MigrateRectMonitors@<al>(
        LONG *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        struct tagRECT *a4,
        struct tagMONITOR *a5,
        struct tagRECT *a6,
        struct tagMONITOR *a7,
        struct tagMONITOR *a8,
        struct _MOVESIZEDATA *a9,
        unsigned int a10)
{
  int *MonitorWorkRectForWindow; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  LONG *v13; // eax
  LONG *v14; // esi
  INT v15; // eax
  LONG *v16; // esi
  INT v17; // ecx
  INT v18; // edx
  INT v19; // esi
  INT v20; // edi
  int v21; // esi
  INT v22; // edi
  INT v23; // eax
  INT v24; // eax
  LONG left; // edx
  LONG v26; // ecx
  int v27; // eax
  LONG v28; // edx
  LONG v29; // edi
  INT v30; // eax
  int v31; // ecx
  int v32; // eax
  LONG v33; // eax
  BOOL v34; // ecx
  INT v35; // eax
  struct tagMONITOR *v36; // eax
  INT v37; // edi
  LONG v38; // ecx
  int v39; // eax
  LONG v40; // edx
  LONG v41; // edi
  int v42; // ecx
  int v43; // eax
  unsigned __int16 v44; // cx
  _DWORD v46[3]; // [esp+10h] [ebp-80h] BYREF
  LONG v47; // [esp+1Ch] [ebp-74h]
  LONG v48; // [esp+20h] [ebp-70h] BYREF
  LONG top; // [esp+24h] [ebp-6Ch]
  LONG right; // [esp+28h] [ebp-68h]
  LONG bottom; // [esp+2Ch] [ebp-64h]
  struct tagWND *v52; // [esp+30h] [ebp-60h]
  int v53; // [esp+34h] [ebp-5Ch] BYREF
  int v54; // [esp+38h] [ebp-58h]
  LONG v55; // [esp+3Ch] [ebp-54h]
  LONG v56; // [esp+40h] [ebp-50h]
  struct tagMONITOR *v57; // [esp+44h] [ebp-4Ch]
  LONG v58; // [esp+48h] [ebp-48h]
  LONG v59; // [esp+4Ch] [ebp-44h]
  LONG v60; // [esp+50h] [ebp-40h]
  LONG v61; // [esp+54h] [ebp-3Ch]
  _DWORD *v62; // [esp+58h] [ebp-38h]
  INT c; // [esp+5Ch] [ebp-34h]
  INT v64; // [esp+60h] [ebp-30h]
  INT v65; // [esp+64h] [ebp-2Ch]
  INT a; // [esp+68h] [ebp-28h]
  INT b; // [esp+6Ch] [ebp-24h]
  int v68; // [esp+70h] [ebp-20h]
  BOOL v69; // [esp+74h] [ebp-1Ch]
  INT v70; // [esp+78h] [ebp-18h]
  struct tagRECT v71; // [esp+7Ch] [ebp-14h] BYREF

  v69 = 0;
  v52 = a3;
  v57 = a5;
  v71.left = *a1;
  v70 = (INT)a6;
  v71.top = a1[1];
  v62 = a2;
  v71.right = a1[2];
  v71.bottom = a1[3];
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow((int)a3, a2, v46);
  v53 = *MonitorWorkRectForWindow;
  v54 = MonitorWorkRectForWindow[1];
  v55 = MonitorWorkRectForWindow[2];
  v56 = MonitorWorkRectForWindow[3];
  if ( IsSemiMaximized(v62) )
  {
    ReduceArrangedRectangleByFrameMargin((int)v11, &v53, &v71.left);
    v11 = v62;
  }
  v65 = v71.bottom - v71.top;
  c = v55 - v53;
  v64 = v56 - v54;
  a = v71.right - v71.left;
  if ( v70 )
  {
    v12 = GetMonitorWorkRectForWindow(v70, v11, &v48);
    v46[0] = *v12;
    v46[1] = v12[1];
    v46[2] = v12[2];
    v47 = v12[3];
    v13 = GetMonitorWorkRectForWindow((int)v57, v62, &v48);
    v58 = *v13;
    v59 = v13[1];
    v60 = v13[2];
    v61 = v13[3];
    v14 = &v48;
    v48 = v58;
    top = v59;
    right = v60;
    bottom = v47;
  }
  else
  {
    v14 = GetMonitorWorkRectForWindow((int)v57, v11, v46);
  }
  v15 = a;
  v58 = *v14;
  v16 = v14 + 1;
  v59 = *v16++;
  v60 = *v16;
  v61 = v16[1];
  v17 = v60 - v58;
  v18 = v61 - v59;
  v70 = v60 - v58;
  b = v61 - v59;
  if ( v60 - v58 < a )
  {
    v35 = EngMulDiv(a, v60 - v58, c);
    v19 = v65;
    a = v35;
    v68 = (unsigned __int8)a8 & 0x20;
    if ( ((unsigned __int8)a8 & 0x20) != 0 && (v68 = (unsigned __int8)a8 & 0x20, v20 = *((_DWORD *)a7 + 23), v35 <= v20) )
    {
      a = *((_DWORD *)a7 + 23);
      v68 = (unsigned __int8)a8 & 0x20;
    }
    else
    {
      v20 = a;
    }
    v18 = b;
LABEL_39:
    v65 = (unsigned __int8)a8 & 1;
    if ( ((unsigned __int8)a8 & 1) != 0 )
    {
      v19 = v18;
    }
    else if ( v18 < v19 )
    {
      v19 = EngMulDiv(v19, v18, v64);
      if ( v68 )
      {
        v36 = a7;
        if ( v19 <= *((_DWORD *)a7 + 24) )
          v19 = *((_DWORD *)a7 + 24);
LABEL_42:
        if ( ((unsigned __int8)a8 & 8) != 0
          || v20 < *((_DWORD *)v36 + 23)
          || v20 > *((_DWORD *)v36 + 25)
          || v19 < *((_DWORD *)v36 + 24)
          || v19 > *((_DWORD *)v36 + 26) )
        {
          goto LABEL_64;
        }
        v37 = EngMulDiv(v71.left - v53, v70, c);
        if ( v65 )
          v70 = 0;
        else
          v70 = EngMulDiv(v71.top - v54, b, v64);
        v38 = v58;
        v39 = v70 + v59;
        a4->top = v70 + v59;
        v40 = v38 + v37;
        a4->bottom = v19 + v39;
        v41 = v38 + v37 + a;
        a4->left = v40;
        a4->right = v41;
        if ( ((unsigned __int8)a8 & 4) != 0 )
        {
          v42 = v38 - v40;
        }
        else
        {
          if ( ((unsigned __int8)a8 & 2) == 0 )
          {
LABEL_59:
            v34 = 1;
            goto LABEL_60;
          }
          v42 = v60 - v41;
        }
        a4->left = v40 + v42;
        a4->right = v41 + v42;
        goto LABEL_59;
      }
    }
    v36 = a7;
    goto LABEL_42;
  }
  v68 = (unsigned __int8)a8 & 1;
  if ( ((unsigned __int8)a8 & 1) == 0 )
  {
    v19 = v65;
    if ( v18 < v65 )
    {
      v20 = a;
      v68 = (unsigned __int8)a8 & 0x20;
      goto LABEL_39;
    }
  }
  *a4 = v71;
  v21 = v68;
  if ( v71.right <= v55 && (v68 || v71.bottom <= v56) )
  {
    if ( c == v15 )
    {
      v22 = 0;
    }
    else
    {
      v23 = EngMulDiv(v71.left - v53, v70 - v15, c - v15);
      v18 = b;
      v22 = v23;
    }
    if ( !v21 && v64 != v65 )
    {
      v24 = EngMulDiv(v71.top - v54, v18 - v65, v64 - v65);
      goto LABEL_22;
    }
    goto LABEL_20;
  }
  v22 = EngMulDiv(v71.left - v53, v17, c);
  if ( v21 )
  {
LABEL_20:
    v24 = 0;
    goto LABEL_22;
  }
  v24 = EngMulDiv(v71.top - v54, b, v64);
LABEL_22:
  left = a4->left;
  v64 = v24 + v59 - v71.top;
  v26 = v58;
  v27 = v22 + v58 - v71.left;
  v28 = v27 + left;
  v29 = v27 + a4->right;
  a4->bottom += v64;
  v30 = v64 + a4->top;
  a4->left = v28;
  a4->right = v29;
  v70 = v30;
  a4->top = v30;
  if ( ((unsigned __int8)a8 & 4) != 0 )
  {
    v31 = v26 - v28;
LABEL_26:
    a4->left = v28 + v31;
    a4->right = v29 + v31;
    goto LABEL_27;
  }
  if ( ((unsigned __int8)a8 & 2) != 0 )
  {
    v31 = v60 - v29;
    goto LABEL_26;
  }
LABEL_27:
  if ( v68 )
  {
    if ( ((unsigned __int8)a8 & 8) != 0 || (v32 = *((_DWORD *)a7 + 26), b < v32) )
      v33 = v61;
    else
      v33 = v70 + v32;
    a4->bottom = v33;
  }
  v34 = !EqualRectInl(a4, &v71);
LABEL_60:
  v69 = v34;
  if ( v34 && (*(_DWORD *)(v62[5] + 184) & 0xF) == 2 && ((unsigned __int8)a8 & 0x10) != 0 )
  {
    v43 = *((_DWORD *)v57 + 5);
    v48 = a4->left;
    v44 = *(_WORD *)(v43 + 52);
    top = a4->top;
    right = a4->right;
    bottom = a4->bottom;
    TransformRectAroundPoint(&v48, *(_WORD *)(*((_DWORD *)v52 + 5) + 52), 0, a4, v44, v48, top);
LABEL_64:
    LOBYTE(v34) = v69;
  }
  return v34;
}

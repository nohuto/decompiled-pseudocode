/*
 * XREFs of ?TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z @ 0x179F56
 * Callers:
 *     _xxxPointerSpeedHitTest@20 @ 0x17C2EC (_xxxPointerSpeedHitTest@20.c)
 *     _xxxPointerWindowHitTest@48 @ 0x17C5CD (_xxxPointerWindowHitTest@48.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?Detach@UserAtomicCheck@@QAEXXZ @ 0xAAF2E (-Detach@UserAtomicCheck@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetScreenRect@@YG?AUtagRECT@@HPBU_D3DMATRIX@@U1@@Z @ 0x179C6A (-GetScreenRect@@YG-AUtagRECT@@HPBU_D3DMATRIX@@U1@@Z.c)
 *     ?_TTBetterRank@@YGHIHIH@Z @ 0x17A392 (-_TTBetterRank@@YGHIHIH@Z.c)
 *     _xxxTouchTargetWindow@28 @ 0x17C92C (_xxxTouchTargetWindow@28.c)
 */

struct tagWND *__userpurge TopLevelTouchTarget@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        struct tagTOUCHTARGETINGCONTACT *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6,
        int a7)
{
  unsigned int *v8; // esi
  int v9; // edi
  unsigned int *v10; // ebx
  struct tagTOUCHTARGETINGCONTACT *v11; // edi
  int v12; // esi
  int v13; // eax
  struct tagRECT *ScreenRect; // eax
  int v15; // edx
  struct tagRECT *v16; // eax
  int v17; // edx
  struct tagRECT *v18; // eax
  int v19; // edx
  struct tagRECT v21; // [esp-8h] [ebp-15Ch]
  struct tagRECT v22; // [esp-8h] [ebp-15Ch]
  struct tagRECT v23; // [esp-8h] [ebp-15Ch]
  struct tagRECT v24; // [esp-8h] [ebp-15Ch]
  struct tagRECT v25; // [esp-8h] [ebp-15Ch]
  struct tagRECT v26; // [esp+10h] [ebp-144h] BYREF
  struct tagRECT v27; // [esp+20h] [ebp-134h] BYREF
  struct tagRECT v28; // [esp+30h] [ebp-124h] BYREF
  struct tagRECT v29; // [esp+40h] [ebp-114h] BYREF
  struct tagRECT v30; // [esp+50h] [ebp-104h] BYREF
  struct tagRECT v31; // [esp+60h] [ebp-F4h] BYREF
  struct tagRECT v32; // [esp+70h] [ebp-E4h] BYREF
  struct tagRECT v33; // [esp+80h] [ebp-D4h] BYREF
  struct tagRECT v34; // [esp+90h] [ebp-C4h]
  LONG left; // [esp+A0h] [ebp-B4h]
  LONG top; // [esp+A4h] [ebp-B0h]
  LONG right; // [esp+A8h] [ebp-ACh]
  LONG bottom; // [esp+ACh] [ebp-A8h]
  struct tagRECT v39; // [esp+B0h] [ebp-A4h]
  struct tagRECT v40; // [esp+C0h] [ebp-94h]
  struct tagRECT v41; // [esp+D0h] [ebp-84h]
  struct tagRECT v42; // [esp+E0h] [ebp-74h]
  struct tagRECT v43; // [esp+F0h] [ebp-64h]
  struct tagRECT v44; // [esp+100h] [ebp-54h]
  _BYTE v45[8]; // [esp+110h] [ebp-44h] BYREF
  int v46; // [esp+118h] [ebp-3Ch] BYREF
  int v47; // [esp+11Ch] [ebp-38h]
  int v48; // [esp+120h] [ebp-34h]
  int v49; // [esp+124h] [ebp-30h]
  int v50; // [esp+128h] [ebp-2Ch]
  int v51; // [esp+12Ch] [ebp-28h]
  int v52; // [esp+130h] [ebp-24h]
  int v53; // [esp+134h] [ebp-20h]
  int v54; // [esp+138h] [ebp-1Ch]
  int v55; // [esp+13Ch] [ebp-18h] BYREF
  unsigned int v56; // [esp+140h] [ebp-14h]
  int v57; // [esp+144h] [ebp-10h] BYREF
  int v58; // [esp+148h] [ebp-Ch]

  v53 = 4094;
  v8 = 0;
  v54 = 0;
  v56 = 0;
  v9 = a1;
  v49 = 0;
  v48 = 0;
  v51 = 0;
  v50 = 0;
  v52 = a1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v45);
  if ( !g_bHitTestDwmFirstForTouch && (unsigned __int8)IsInputThread() )
    UserAtomicCheck::Detach((UserAtomicCheck *)v45);
  v10 = *(unsigned int **)(a2 + 60);
  if ( !v10 )
    goto LABEL_20;
  do
  {
    v55 = 0;
    v57 = 0;
    if ( !*(_DWORD *)(v9 + 176) && !*(_DWORD *)(v9 + 180) )
      break;
    v11 = a4;
    v46 = *(_DWORD *)a3;
    v47 = *((_DWORD *)a3 + 1);
    v12 = xxxTouchTargetWindow(v10, v52, &v46, &v57, &v55, a4, a5);
    v13 = HMValidateHandleNoSecure(v56, 1);
    v58 = v13;
    if ( !v12 )
      goto LABEL_16;
    if ( v13 )
    {
      *(_QWORD *)&v21.left = *(_QWORD *)(*(_DWORD *)(v13 + 20) + 60);
      ScreenRect = GetScreenRect(
                     *(_DWORD *)(v13 + 120),
                     (int)a5,
                     &v33,
                     *(_DWORD *)(*(_DWORD *)(v13 + 20) + 52),
                     *(const struct _D3DMATRIX **)(*(_DWORD *)(v13 + 20) + 56),
                     v21);
      v15 = v10[30];
      v44 = *ScreenRect;
      *(_QWORD *)&v22.left = *(_QWORD *)(v10[5] + 60);
      v43 = *GetScreenRect(
               v15,
               (int)a5,
               &v32,
               *(_DWORD *)(v10[5] + 52),
               *(const struct _D3DMATRIX **)(v10[5] + 56),
               v22);
      if ( v44.left < v43.right )
      {
        *(_QWORD *)&v21.left = *(_QWORD *)(v10[5] + 60);
        v42 = *GetScreenRect(
                 v10[30],
                 (int)a5,
                 &v31,
                 *(_DWORD *)(v10[5] + 52),
                 *(const struct _D3DMATRIX **)(v10[5] + 56),
                 v21);
        *(_QWORD *)&v23.left = *(_QWORD *)(*(_DWORD *)(v58 + 20) + 60);
        v41 = *GetScreenRect(
                 *(_DWORD *)(v58 + 120),
                 (int)a5,
                 &v30,
                 *(_DWORD *)(*(_DWORD *)(v58 + 20) + 52),
                 *(const struct _D3DMATRIX **)(*(_DWORD *)(v58 + 20) + 56),
                 v23);
        if ( v42.left < v41.right )
        {
          *(_QWORD *)&v21.left = *(_QWORD *)(*(_DWORD *)(v58 + 20) + 60);
          v16 = GetScreenRect(
                  *(_DWORD *)(v58 + 120),
                  (int)a5,
                  &v29,
                  *(_DWORD *)(*(_DWORD *)(v58 + 20) + 52),
                  *(const struct _D3DMATRIX **)(*(_DWORD *)(v58 + 20) + 56),
                  v21);
          v17 = v10[30];
          v40 = *v16;
          *(_QWORD *)&v24.left = *(_QWORD *)(v10[5] + 60);
          v39 = *GetScreenRect(
                   v17,
                   (int)a5,
                   &v28,
                   *(_DWORD *)(v10[5] + 52),
                   *(const struct _D3DMATRIX **)(v10[5] + 56),
                   v24);
          if ( v40.top < v39.bottom )
          {
            *(_QWORD *)&v21.left = *(_QWORD *)(v10[5] + 60);
            v18 = GetScreenRect(
                    v10[30],
                    (int)a5,
                    &v27,
                    *(_DWORD *)(v10[5] + 52),
                    *(const struct _D3DMATRIX **)(v10[5] + 56),
                    v21);
            left = v18->left;
            v19 = *(_DWORD *)(v58 + 120);
            top = v18->top;
            right = v18->right;
            bottom = v18->bottom;
            *(_QWORD *)&v25.left = *(_QWORD *)(*(_DWORD *)(v58 + 20) + 60);
            v34 = *GetScreenRect(
                     v19,
                     (int)a5,
                     &v26,
                     *(_DWORD *)(*(_DWORD *)(v58 + 20) + 52),
                     *(const struct _D3DMATRIX **)(*(_DWORD *)(v58 + 20) + 56),
                     v25);
            if ( top < v34.bottom )
              goto LABEL_16;
          }
        }
      }
      if ( !_TTBetterRank((unsigned __int16)v53, v54, v21.right, v21.bottom) )
      {
LABEL_16:
        v8 = (unsigned int *)v58;
        goto LABEL_17;
      }
      v11 = a4;
    }
    v8 = v10;
    v54 = (_WORD)v57 == 3;
    v56 = *v10;
    v53 = (unsigned __int16)v55;
    v49 = *(_DWORD *)v11;
    v48 = *((_DWORD *)v11 + 1);
    v51 = v46;
    v50 = v47;
LABEL_17:
    v10 = (unsigned int *)v10[12];
    v9 = v52;
  }
  while ( v10 );
  if ( !v8 )
  {
LABEL_20:
    *(_DWORD *)a4 = 0;
    *((_DWORD *)a4 + 1) = 0;
    goto LABEL_21;
  }
  *(_DWORD *)a3 = v51;
  *((_DWORD *)a3 + 1) = v50;
  *(_DWORD *)a4 = v49;
  *((_DWORD *)a4 + 1) = v48;
LABEL_21:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v45);
  return (struct tagWND *)v8;
}

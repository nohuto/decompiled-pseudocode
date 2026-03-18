/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446
 * Callers:
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 *     _xxxPointerWindowHitTest@48 @ 0x17C5CD (_xxxPointerWindowHitTest@48.c)
 * Callees:
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _ThreadLockExchangeAlways@8 @ 0x7D602 (_ThreadLockExchangeAlways@8.c)
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1796EB (-ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?CanPointStartResize@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179A47 (-CanPointStartResize@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?ClipContact@@YGXPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@HPBUtagRECT@@@Z @ 0x179AD7 (-ClipContact@@YGXPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@HPBUtagRECT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YGHPAUtagWND@@0@Z @ 0x17A283 (-TouchTargetingIsSpecialTarget@@YGHPAUtagWND@@0@Z.c)
 *     ?TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z @ 0x17A360 (-TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z.c)
 *     ?xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x17A904 (-xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@PAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x17B14E (-xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTT.c)
 */

HWND __fastcall xxxWindowHitTestWithTargeting(
        ULONG_PTR a1,
        LONG a2,
        int a3,
        struct tagWND *a4,
        struct tagPOINT *a5,
        LONG a6,
        int a7,
        int a8,
        const struct tagTOUCHTARGETINGCONTACT *a9)
{
  ULONG_PTR v9; // ebx
  int v10; // edx
  LONG x; // esi
  int started; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  HWND v16; // ecx
  LONG y; // eax
  struct tagRECT *v18; // edi
  int v19; // eax
  LONG v20; // ecx
  int v21; // eax
  int v22; // eax
  struct tagPOINT v24; // [esp-Ch] [ebp-8Ch]
  const struct _D3DMATRIX *v25; // [esp-8h] [ebp-88h]
  struct tagPOINT v26; // [esp+0h] [ebp-80h]
  int v27; // [esp+10h] [ebp-70h]
  struct tagPOINT v28; // [esp+14h] [ebp-6Ch] BYREF
  int Prop; // [esp+1Ch] [ebp-64h]
  struct tagWND *v30; // [esp+20h] [ebp-60h] BYREF
  struct tagPOINT v31; // [esp+24h] [ebp-5Ch]
  HWND v32; // [esp+2Ch] [ebp-54h]
  struct tagWND *v33; // [esp+30h] [ebp-50h] BYREF
  struct tagPOINT *v34; // [esp+34h] [ebp-4Ch]
  int v35; // [esp+3Ch] [ebp-44h]
  int v36; // [esp+40h] [ebp-40h]
  int v37; // [esp+44h] [ebp-3Ch] BYREF
  int v38; // [esp+48h] [ebp-38h]
  _DWORD v39[3]; // [esp+4Ch] [ebp-34h] BYREF
  LONG v40; // [esp+58h] [ebp-28h]
  int v41; // [esp+5Ch] [ebp-24h]
  int v42; // [esp+60h] [ebp-20h]
  const struct tagTOUCHTARGETINGCONTACT *v43; // [esp+64h] [ebp-1Ch]
  LONG v44; // [esp+68h] [ebp-18h] BYREF
  int v45; // [esp+6Ch] [ebp-14h]
  int v46; // [esp+70h] [ebp-10h]
  const struct tagTOUCHTARGETINGCONTACT *v47; // [esp+74h] [ebp-Ch]

  v28.x = a2;
  v44 = a6;
  v9 = a1;
  v38 = a3;
  v10 = 0;
  v45 = a7;
  v36 = 0;
  v35 = 0;
  v31.x = (LONG)a4;
  v46 = a8;
  v31.y = (LONG)a5;
  v33 = a4;
  v34 = a5;
  v47 = a9;
  v39[2] = 0;
  v32 = 0;
  v40 = a6;
  v30 = 0;
  v28.y = 0;
  v37 = -2;
  v41 = a7;
  v27 = 0;
  v42 = a8;
  v43 = a9;
  x = v28.x;
  if ( a1 && *(_DWORD *)(v28.x + 64) == 2 )
  {
    v36 = *(_DWORD *)(a1 + 56);
    started = CanPointStartResize(a4, (struct tagTOUCHTARGETINGCONTACT *)a5, v26);
    v10 = 0;
    v35 = started;
  }
  v39[0] = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = v39;
  v39[1] = 0;
LABEL_48:
  if ( v9 && !v10 )
  {
    while ( 1 )
    {
      ThreadLockExchangeAlways(v9, (int)v39);
      v13 = *(_DWORD *)(x + 24);
      if ( !*(_DWORD *)(v13 + 176) && !*(_DWORD *)(v13 + 180) )
        break;
      if ( *(_DWORD *)(x + 36) && !*(_DWORD *)(x + 40) )
        break;
      v14 = IsCompositionInputWindow();
      if ( !v14 && (*(_BYTE *)(*(_DWORD *)(v9 + 20) + 23) & 0x10) == 0
        || (v15 = *(_DWORD *)(v9 + 20), (*(_BYTE *)(v15 + 18) & 8) != 0) && (*(_BYTE *)(v15 + 16) & 0x20) != 0
        || IsWindowDesktopComposed(v9) && GetWindowCloakState((_DWORD *)v9)
        || v35 && TouchTargetingIsSpecialTarget(v36, v9) )
      {
        v10 = v27;
LABEL_47:
        v9 = *(_DWORD *)(v9 + 48);
        goto LABEL_48;
      }
      v30 = 0;
      if ( *(_DWORD *)(x + 64) || v14 )
        Prop = _GetProp(v9, (unsigned __int16)gatomPtrTargetFlags, 1);
      else
        Prop = 4;
      if ( *(_DWORD *)(x + 60) )
      {
        if ( *(_DWORD *)(v9 + 120) )
        {
          qmemcpy((void *)(x + 72), *(const void **)(v9 + 120), 0x40u);
          v25 = *(const struct _D3DMATRIX **)(v28.x + 24);
          *(_DWORD *)(v28.x + 68) = x + 72;
          ApplyWindowTransform(
            (int)&v33,
            (struct tagRECT *)(x + 136),
            v25,
            (struct _D3DMATRIX *)1,
            (struct tagTOUCHTARGETINGCONTACT *)v26.x,
            v26.y);
          if ( EnterFloatingPointRegion() )
          {
            TransformRect((int)&v44, (const struct _D3DMATRIX *)1, (struct tagRECT *)v26.x, v26.y);
            KeRestoreFloatingPointState(_gfsSave);
          }
        }
      }
      x = v28.x;
      v16 = xxxWindowHitTestFromTargetingProperty(
              v9,
              (int *)v28.x,
              &v28.y,
              (unsigned __int16)Prop,
              (LONG)v33,
              (LONG)v34,
              v44,
              v45,
              v46,
              v47);
      if ( *(_DWORD *)(v28.x + 64) < 0xAu )
      {
        y = v28.y;
      }
      else
      {
        y = 0;
        *(_DWORD *)(v28.x + 144) = 1;
        v28.y = 0;
      }
      v18 = (struct tagRECT *)v31.x;
      if ( y )
      {
        x = v28.x;
        v16 = (HWND)xxxTargetingHitTest(
                      v9,
                      v28.x,
                      &v30,
                      (struct tagRECT *)Prop,
                      v38,
                      v31,
                      (LONG)v33,
                      v34,
                      v44,
                      v45,
                      v46,
                      (LONG)v47);
      }
      if ( !v32 && v16 )
        v32 = v16;
      if ( *(_DWORD *)(x + 136) == v9 )
        v27 = 1;
      v19 = *(_DWORD *)(x + 24);
      v24.y = *(_DWORD *)(v19 + 32);
      v24.x = v31.y;
      xxxSendNCHitTest(
        (struct tagPOINT **)(x + 28),
        (int *)v9,
        (struct tagWND *)&v37,
        (struct tagPOINT)__PAIR64__((unsigned int)v18, x),
        v24,
        *(struct tagPOINT **)(v19 + 36),
        (int *)v26.x,
        (struct tagPNTRWINDOWHITTTESTARGS *)v26.y);
      if ( v37 != -1 )
        ClipContact(v9, v30, (struct tagTOUCHTARGETINGCONTACT *)&v44, v26.x, (const struct tagRECT *)v26.y);
      if ( *(_DWORD *)(x + 60) && *(_DWORD *)(x + 68) && *(_DWORD *)(x + 64) == 1 )
      {
        ApplyWindowTransform(
          (int)&v33,
          v18,
          *(const struct _D3DMATRIX **)(x + 24),
          0,
          (struct tagTOUCHTARGETINGCONTACT *)v26.x,
          v26.y);
        v20 = v31.x;
        v44 = v40;
        v45 = v41;
        v46 = v42;
        v47 = v43;
        x = v28.x;
        v21 = *(_DWORD *)(v28.x + 24);
        *(_DWORD *)(v28.x + 68) = 0;
        *(_DWORD *)(v21 + 32) = v20;
        *(_DWORD *)(v21 + 36) = v31.y;
      }
      v10 = v27;
      if ( !v27 )
        goto LABEL_47;
      v22 = *(_DWORD *)(v9 + 64);
      if ( !v22 || v22 == v9 )
        break;
      v9 = *(_DWORD *)(v9 + 64);
    }
  }
  ThreadUnlock1();
  return v32;
}

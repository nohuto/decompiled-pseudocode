/*
 * XREFs of _xxxPointerWindowHitTest@48 @ 0x17C5CD
 * Callers:
 *     _EditionPointerWindowHitTest@52 @ 0x17B823 (_EditionPointerWindowHitTest@52.c)
 * Callees:
 *     _IsThreadDesktopComposed@4 @ 0x303CC (_IsThreadDesktopComposed@4.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?TTSqm@@YGXUtagPOINT@@PBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x179E96 (-TTSqm@@YGXUtagPOINT@@PBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z @ 0x179F56 (-TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YGPAUHWND__@@PAUtagTHREADINFO@@PAUtagWND@@IIJUtagPOINT@@PAHKPBUtagPOINTEREVENTINT@@PAU4@@Z @ 0x17B79F (-xxxWindowHitTestWithoutTargeting@@YGPAUHWND__@@PAUtagTHREADINFO@@PAUtagWND@@IIJUtagPOINT@@PAHKP.c)
 *     _TouchTargetingCreateContact@16 @ 0x1B8BA5 (_TouchTargetingCreateContact@16.c)
 */

HWND __fastcall xxxPointerWindowHitTest(
        _DWORD *a1,
        ULONG_PTR a2,
        struct tagTHREADINFO *a3,
        struct tagWND *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        _DWORD *a8,
        int a9,
        struct tagTOUCHTARGETINGCONTACT *a10,
        int *a11,
        unsigned int a12)
{
  LONG v12; // ecx
  HWND v13; // edi
  int v14; // ebx
  int v16; // esi
  struct tagTOUCHTARGETINGCONTACT *v17; // eax
  int v18; // esi
  int *v19; // edx
  bool v20; // zf
  int v21; // edi
  LONG v22; // esi
  struct tagTOUCHTARGETINGCONTACT *v23; // ecx
  int v24; // eax
  _DWORD *v25; // ecx
  unsigned int v26; // eax
  _BYTE *v27; // eax
  LONG v28; // esi
  struct tagWND *v29; // eax
  int *v30; // edi
  LONG v31; // esi
  LONG v32; // ecx
  struct tagTOUCHTARGETINGCONTACT *v33; // ecx
  struct tagPOINT v34; // [esp-10h] [ebp-B8h]
  struct tagPOINT v35; // [esp-10h] [ebp-B8h]
  _DWORD *v36; // [esp-Ch] [ebp-B4h]
  _BYTE *v37; // [esp-4h] [ebp-ACh]
  struct tagPOINT *v38; // [esp+0h] [ebp-A8h]
  struct tagPOINT *v39; // [esp+4h] [ebp-A4h]
  _DWORD v40[3]; // [esp+Ch] [ebp-9Ch] BYREF
  _DWORD v41[3]; // [esp+18h] [ebp-90h] BYREF
  int *v42; // [esp+24h] [ebp-84h] BYREF
  _DWORD *v43; // [esp+28h] [ebp-80h]
  int v44; // [esp+2Ch] [ebp-7Ch]
  _DWORD *v45; // [esp+30h] [ebp-78h]
  int v46; // [esp+34h] [ebp-74h]
  LONG v47; // [esp+38h] [ebp-70h]
  int *v48; // [esp+3Ch] [ebp-6Ch]
  _BYTE *v49; // [esp+40h] [ebp-68h]
  struct tagTOUCHTARGETINGCONTACT *v50; // [esp+44h] [ebp-64h]
  unsigned int v51; // [esp+48h] [ebp-60h]
  ULONG_PTR v52; // [esp+4Ch] [ebp-5Ch]
  unsigned int v53; // [esp+50h] [ebp-58h]
  _DWORD v54[11]; // [esp+54h] [ebp-54h] BYREF
  int v55; // [esp+80h] [ebp-28h]
  int v56; // [esp+84h] [ebp-24h] BYREF
  int v57; // [esp+88h] [ebp-20h]
  int v58; // [esp+8Ch] [ebp-1Ch]
  int v59; // [esp+90h] [ebp-18h]
  int v60; // [esp+94h] [ebp-14h] BYREF
  int v61; // [esp+98h] [ebp-10h]
  int v62; // [esp+9Ch] [ebp-Ch]
  int v63; // [esp+A0h] [ebp-8h]

  v51 = a6;
  v46 = a7;
  v52 = a2;
  v45 = a1;
  v49 = a8;
  v50 = a10;
  v48 = a11;
  v53 = a12;
  EtwTraceTouchTargetingWindowHitTestStart();
  v43 = a8 + 2;
  if ( TouchTargetingEnabledForInput(a11, a12, a8 + 2) )
  {
    v14 = Win32AllocPool(192, 1920103253);
    v44 = v14;
    if ( v14 )
    {
      v16 = Win32AllocPool(148, 1920103253);
      v47 = v16;
      if ( v16 )
      {
        memset(v40, 0, sizeof(v40));
        memset(v41, 0, sizeof(v41));
        PushW32ThreadLock(v14, v40, (int)Win32FreePool);
        PushW32ThreadLock(v16, v41, (int)Win32FreePool);
        if ( _gSqmIsOptedIn )
          WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633, 1000);
        v17 = v50;
        v18 = v44;
        v60 = 0;
        v61 = 0;
        *(_DWORD *)v50 = 0;
        *((_DWORD *)v17 + 1) = 0;
        v62 = 0;
        v36 = v43;
        v63 = 0;
        v56 = 0;
        v57 = 0;
        v58 = 0;
        v59 = 0;
        v54[0] = 0;
        *(_DWORD *)(v18 + 188) = 0;
        *(_DWORD *)(v18 + 184) = 0;
        if ( _GetDeviceRects(v36, &v60, &v56) )
        {
          _SetHimetricToPixelRatio(v60, v61, v62, v63, v56, v57, v58, v59, v18);
          v19 = &v60;
        }
        else
        {
          v19 = 0;
        }
        v54[1] = v48;
        v20 = (v49[100] & 2) == 0;
        v54[2] = v53;
        v54[3] = *((_DWORD *)v49 + 26);
        v54[4] = *((_DWORD *)v49 + 27);
        v54[5] = *((_DWORD *)v49 + 28);
        v54[6] = *((_DWORD *)v49 + 29);
        v54[7] = *((_DWORD *)v49 + 26);
        v54[8] = *((_DWORD *)v49 + 27);
        v54[9] = *((_DWORD *)v49 + 28);
        v54[10] = *((_DWORD *)v49 + 29);
        if ( v20 )
          v55 = 0;
        else
          v55 = *((_DWORD *)v49 + 34);
        v21 = v44;
        TouchTargetingCreateContact(v54, v19, 1, v44);
        v22 = v47;
        v23 = v50;
        *(_DWORD *)v47 = a3;
        *(_DWORD *)(v22 + 4) = a4;
        *(_DWORD *)(v22 + 8) = a5;
        *(_DWORD *)(v22 + 12) = a9;
        *(_DWORD *)(v22 + 16) = *(_DWORD *)v51;
        *(_DWORD *)(v22 + 20) = v46;
        *(_DWORD *)(v22 + 24) = v21;
        *(_DWORD *)(v22 + 28) = *(_DWORD *)v23;
        v24 = *((_DWORD *)v23 + 1);
        v25 = v45;
        *(_DWORD *)(v22 + 32) = v24;
        *(_DWORD *)(v22 + 36) = 0;
        *(_DWORD *)(v22 + 40) = 0;
        *(_DWORD *)(v22 + 60) = IsThreadDesktopComposed(v25);
        v42 = v48;
        v26 = v53;
        *(_DWORD *)(v22 + 64) = 0;
        *(_DWORD *)(v22 + 68) = 0;
        *(_DWORD *)(v22 + 136) = 0;
        *(_DWORD *)(v22 + 140) = 0;
        *(_DWORD *)(v22 + 144) = 0;
        v43 = (_DWORD *)v26;
        v27 = (_BYTE *)Win32AllocPool(192, 1920103253);
        v49 = v27;
        if ( v27 )
        {
          qmemcpy(v27, *(const void **)(v22 + 24), 0xC0u);
          v28 = v47;
          v29 = TopLevelTouchTarget(
                  (int)v27,
                  v52,
                  (struct tagWND *)&v42,
                  v50,
                  *(struct tagPOINT **)(v47 + 60),
                  v38,
                  (int)v39);
          v37 = v49;
          *(_DWORD *)(v28 + 136) = v29;
          Win32FreePool(v37);
        }
        v30 = v48;
        v31 = v47;
        xxxWindowHitTestWithTargeting(
          v52,
          v47,
          0,
          (struct tagWND *)v48,
          (struct tagPOINT *)v53,
          *(_DWORD *)(*(_DWORD *)(v52 + 20) + 52),
          *(_DWORD *)(*(_DWORD *)(v52 + 20) + 56),
          *(_DWORD *)(*(_DWORD *)(v52 + 20) + 60),
          *(const struct tagTOUCHTARGETINGCONTACT **)(*(_DWORD *)(v52 + 20) + 64));
        if ( *(_DWORD *)(v31 + 144) )
        {
          v35.y = v32;
          v35.x = v32;
          v13 = xxxWindowHitTestWithoutTargeting(
                  v52,
                  v45,
                  a3,
                  a4,
                  a5,
                  v51,
                  v46,
                  v35,
                  v30,
                  v53,
                  (const struct tagPOINTEREVENTINT *)v38,
                  v39);
        }
        else
        {
          v33 = v50;
          *(_DWORD *)v51 = *(_DWORD *)(v31 + 16);
          *(_DWORD *)v33 = *(_DWORD *)(v31 + 28);
          *((_DWORD *)v33 + 1) = *(_DWORD *)(v31 + 32);
          v13 = *(HWND *)(v31 + 36);
          TTSqm(v44, *(struct tagPOINT *)(v31 + 28), (const struct tagTOUCHTARGETINGCONTACT *)v38);
        }
        PopAndFreeAlwaysW32ThreadLock((int)v41);
        PopAndFreeAlwaysW32ThreadLock((int)v40);
        goto LABEL_25;
      }
      Win32FreePool(v14);
    }
    return 0;
  }
  if ( _gSqmIsOptedIn && *v43 == 2 && (*((_DWORD *)v49 + 5) & 0x10000) != 0 )
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633, 0);
  v34.y = v12;
  v34.x = v12;
  v13 = xxxWindowHitTestWithoutTargeting(
          v52,
          v45,
          a3,
          a4,
          a5,
          v51,
          v46,
          v34,
          a11,
          a12,
          (const struct tagPOINTEREVENTINT *)v38,
          v39);
LABEL_25:
  EtwTraceTouchTargetingWindowHitTestStop();
  return v13;
}

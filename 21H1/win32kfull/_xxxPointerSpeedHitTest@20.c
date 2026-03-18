/*
 * XREFs of _xxxPointerSpeedHitTest@20 @ 0x17C2EC
 * Callers:
 *     _EditionPointerSpeedHitTest@20 @ 0x17B7E0 (_EditionPointerSpeedHitTest@20.c)
 * Callees:
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     ?CanHitTestInDwm@@YG_NXZ @ 0xA13B0 (-CanHitTestInDwm@@YG_NXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     _xxxSpeedHitTest@24 @ 0xF3E36 (_xxxSpeedHitTest@24.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z @ 0x179F56 (-TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z.c)
 *     _TouchTargetChildTree@24 @ 0x17BA7D (_TouchTargetChildTree@24.c)
 *     _TouchTargetingCreateContact@16 @ 0x1B8BA5 (_TouchTargetingCreateContact@16.c)
 */

int __fastcall xxxPointerSpeedHitTest(int a1, int a2, int a3, struct tagPOINT *a4, _DWORD *a5)
{
  struct tagWND *v5; // ebx
  int v6; // ecx
  int v7; // edx
  int *v8; // edx
  bool v9; // zf
  int result; // eax
  _DWORD *v11; // eax
  struct tagWND *v12; // esi
  struct tagWND *v13; // eax
  int v14; // ecx
  struct tagPOINT *v15; // [esp+0h] [ebp-248h]
  int v16; // [esp+4h] [ebp-244h]
  char v17; // [esp+13h] [ebp-235h]
  int v19[2]; // [esp+20h] [ebp-228h] BYREF
  int v20; // [esp+28h] [ebp-220h] BYREF
  int v21; // [esp+2Ch] [ebp-21Ch]
  _DWORD v22[12]; // [esp+30h] [ebp-218h] BYREF
  _BYTE v23[104]; // [esp+60h] [ebp-1E8h] BYREF
  _DWORD v24[26]; // [esp+C8h] [ebp-180h] BYREF
  int v25; // [esp+130h] [ebp-118h] BYREF
  int v26; // [esp+134h] [ebp-114h]
  int v27; // [esp+138h] [ebp-110h]
  int v28; // [esp+13Ch] [ebp-10Ch]
  int v29; // [esp+140h] [ebp-108h] BYREF
  int v30; // [esp+144h] [ebp-104h]
  int v31; // [esp+148h] [ebp-100h]
  int v32; // [esp+14Ch] [ebp-FCh]
  _DWORD v33[11]; // [esp+150h] [ebp-F8h] BYREF
  int v34; // [esp+17Ch] [ebp-CCh]
  _BYTE v35[184]; // [esp+180h] [ebp-C8h] BYREF
  int v36; // [esp+238h] [ebp-10h]
  int v37; // [esp+23Ch] [ebp-Ch]

  v19[0] = a1;
  v22[0] = *(_DWORD *)(a2 + 8);
  v22[1] = *(_DWORD *)(a2 + 20);
  v22[3] = *(_DWORD *)(a2 + 12);
  v22[4] = *(_DWORD *)(a2 + 172);
  v22[5] = *(_DWORD *)(a2 + 32);
  v22[6] = *(_DWORD *)(a2 + 36);
  v22[7] = *(_DWORD *)(a2 + 24);
  v5 = 0;
  v22[10] = *(_DWORD *)(a2 + 80);
  v22[11] = *(_DWORD *)(a2 + 84);
  v22[8] = *(_DWORD *)(a2 + 64);
  v22[2] = 0;
  v22[9] = 0;
  v17 = 0;
  memset(v23, 0, sizeof(v23));
  qmemcpy(a5, v23, 0x68u);
  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 36);
  v20 = v6;
  v21 = v7;
  if ( v19[0] || !TouchTargetingEnabledForInput(v6, v7, a2 + 8) )
  {
    LOBYTE(result) = xxxSpeedHitTest(v19[0], (int)v22, a3, 0, a4, a5) != 0;
  }
  else
  {
    memset(v35, 0, sizeof(v35));
    v33[0] = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    EtwTraceTouchTargetingSpeedHitTestStart();
    v37 = 0;
    v36 = 0;
    if ( _GetDeviceRects(a2 + 8, &v25, &v29) )
    {
      _SetHimetricToPixelRatio(v25, v26, v27, v28, v29, v30, v31, v32, v35);
      v8 = &v25;
    }
    else
    {
      v8 = 0;
    }
    v9 = (*(_BYTE *)(a2 + 100) & 2) == 0;
    v33[1] = *(_DWORD *)(a2 + 32);
    v33[2] = *(_DWORD *)(a2 + 36);
    v33[3] = *(_DWORD *)(a2 + 104);
    v33[4] = *(_DWORD *)(a2 + 108);
    v33[5] = *(_DWORD *)(a2 + 112);
    v33[6] = *(_DWORD *)(a2 + 116);
    v33[7] = *(_DWORD *)(a2 + 104);
    v33[8] = *(_DWORD *)(a2 + 108);
    v33[9] = *(_DWORD *)(a2 + 112);
    v33[10] = *(_DWORD *)(a2 + 116);
    if ( v9 )
      v34 = 0;
    else
      v34 = *(_DWORD *)(a2 + 136);
    TouchTargetingCreateContact(v33, v8, 1, v35);
    if ( g_bHitTestDwmFirstForTouch && CanHitTestInDwm() )
    {
      LOBYTE(result) = xxxDCompSpeedHitTest(v22, 16, 0, 0, (int)v35, a4, a5);
    }
    else
    {
      v19[0] = 0;
      v19[1] = 0;
      v11 = *(_DWORD **)(_grpdeskRitInput + 4);
      v12 = (struct tagWND *)v11[3];
      v13 = TopLevelTouchTarget(
              (int)v35,
              (int)v12,
              (struct tagWND *)&v20,
              (struct tagTOUCHTARGETINGCONTACT *)v19,
              (struct tagPOINT *)(*(_DWORD *)(*v11 + 32) & 1),
              v15,
              v16);
      if ( v13 )
      {
        v17 = 1;
        v12 = TouchTargetChildTree((int)v13, (int)v35, v19, v14, v20, v21);
      }
      if ( a5[22] == 2 )
        v5 = (struct tagWND *)a5[20];
      if ( v5 != v12 )
      {
        qmemcpy(v23, INPUTDEST_FROM_PWND(v12, v24), sizeof(v23));
        qmemcpy(a5, v23, 0x68u);
      }
      LOBYTE(result) = v17;
    }
  }
  return (unsigned __int8)result;
}

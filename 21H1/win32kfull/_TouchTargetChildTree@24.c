/*
 * XREFs of _TouchTargetChildTree@24 @ 0x17BA7D
 * Callers:
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     _xxxPointerSpeedHitTest@20 @ 0x17C2EC (_xxxPointerSpeedHitTest@20.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     ?ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z @ 0x179A75 (-ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z.c)
 *     ?DoesPointSnapToTopLevelWindow@@YGHPAUtagWND@@0PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x179C2F (-DoesPointSnapToTopLevelWindow@@YGHPAUtagWND@@0PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YGXHHHHHHH@Z @ 0x1867EB (-TraceLoggingHitTestWindowTargeting@@YGXHHHHHHH@Z.c)
 *     __TTPixelsToHm@8 @ 0x1B97F4 (__TTPixelsToHm@8.c)
 */

struct tagWND *__fastcall TouchTargetChildTree(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v6; // esi
  _DWORD *v7; // ecx
  int v9; // ecx
  int v10; // ecx
  struct tagWND *v11; // edi
  struct tagTOUCHTARGETINGCONTACT *v12; // ebx
  int v14; // [esp-8h] [ebp-30h]
  int v15; // [esp-8h] [ebp-30h]
  _BYTE v16[12]; // [esp-4h] [ebp-2Ch]
  int v17; // [esp+10h] [ebp-18h]
  int v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+14h] [ebp-14h]
  int v21; // [esp+14h] [ebp-14h]
  int v22; // [esp+18h] [ebp-10h]
  int v23; // [esp+18h] [ebp-10h]
  int v24; // [esp+18h] [ebp-10h]
  int v25; // [esp+1Ch] [ebp-Ch]
  int v26; // [esp+1Ch] [ebp-Ch]
  int v27; // [esp+1Ch] [ebp-Ch]
  _DWORD *v28; // [esp+20h] [ebp-8h]
  int v29; // [esp+20h] [ebp-8h]
  int v30; // [esp+20h] [ebp-8h]
  struct tagWND *v32; // [esp+30h] [ebp+8h]
  int v33; // [esp+3Ch] [ebp+14h]
  int v34; // [esp+3Ch] [ebp+14h]
  int v35; // [esp+3Ch] [ebp+14h]

  v6 = a1;
  if ( a1 )
  {
    v7 = *(_DWORD **)(a1 + 20);
    v28 = v7;
    v25 = v7[19] - a5;
    v33 = a6 - v7[18];
    v19 = a5 - v7[17];
    v22 = v7[20] - a6;
    if ( v25 < 0 || a5 - v7[17] < 0 || v33 < 0 || v22 < 0 )
    {
      v18 = *(_DWORD *)(a2 + 184);
      v27 = _TTPixelsToHm(v7[15] - a5, v18);
      v24 = _TTPixelsToHm(a5 - v28[13], v18);
      v35 = *(_DWORD *)(a2 + 188);
      v21 = _TTPixelsToHm(a6 - v28[14], v35);
      v10 = _TTPixelsToHm(v28[16] - a6, v35);
      v30 = v10;
      if ( v27 < 500 || v24 < 500 || v21 < 500 || v10 < 500 )
      {
        *(_DWORD *)v16 = _TTPixelsToHm(*(_DWORD *)(a2 + 28) - *(_DWORD *)(a2 + 20), v35);
        v15 = _TTPixelsToHm(*(_DWORD *)(a2 + 24) - *(_DWORD *)(a2 + 16), v18);
        TraceLoggingHitTestWindowTargeting(v24, v21, v30, v15, *(int *)v16, *(int *)&v16[4], *(int *)&v16[8]);
      }
    }
    else
    {
      v29 = *(_DWORD *)(a2 + 184);
      v17 = _TTPixelsToHm(v25, v29);
      v20 = _TTPixelsToHm(v19, v29);
      v26 = *(_DWORD *)(a2 + 188);
      v34 = _TTPixelsToHm(v33, v26);
      v9 = _TTPixelsToHm(v22, v26);
      v23 = v9;
      if ( v17 < 500 || v20 < 500 || v34 < 500 || v9 < 500 )
      {
        *(_DWORD *)v16 = _TTPixelsToHm(*(_DWORD *)(a2 + 28) - *(_DWORD *)(a2 + 20), v26);
        v14 = _TTPixelsToHm(*(_DWORD *)(a2 + 24) - *(_DWORD *)(a2 + 16), v29);
        TraceLoggingHitTestWindowTargeting(v20, v34, v23, v14, *(int *)v16, *(int *)&v16[4], *(int *)&v16[8]);
      }
    }
    v11 = (struct tagWND *)(*a3 + a5);
    v12 = (struct tagTOUCHTARGETINGCONTACT *)(a3[1] + a6);
    if ( *(_DWORD *)(v6 + 60) )
    {
      if ( PtInRect((_DWORD *)(*(_DWORD *)(v6 + 20) + 68), (int)v11, (int)v12) )
      {
        *(_DWORD *)v16 = v12;
        v32 = ClassicChildTreeSpeedHitTest(v6, v11, *(struct tagPOINT *)v16);
        if ( v32 )
        {
          if ( !DoesPointSnapToTopLevelWindow(v6, (struct tagWND *)a2, v11, v12, *(struct tagPOINT *)&v16[4]) )
            return v32;
        }
      }
    }
  }
  return (struct tagWND *)v6;
}

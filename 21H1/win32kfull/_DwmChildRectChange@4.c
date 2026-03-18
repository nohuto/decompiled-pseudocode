/*
 * XREFs of _DwmChildRectChange@4 @ 0x30F5A
 * Callers:
 *     _OffsetWindow@16 @ 0x2AF60 (_OffsetWindow@16.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _DwmAsyncChildMoveSize@24 @ 0x312A8 (_DwmAsyncChildMoveSize@24.c)
 *     __AdjustWindowRectExForDpi@20 @ 0x313D6 (__AdjustWindowRectExForDpi@20.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 */

int __thiscall DwmChildRectChange(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // edi
  INT WindowDpiLastNotify; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  _DWORD *v8; // edx
  int *v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  PKTHREAD CurrentThread; // esi
  _DWORD *ThreadWin32Thread; // eax
  int v16; // edi
  int *v17; // eax
  PKTHREAD v18; // ebx
  int v19; // edi
  int *v20; // eax
  int v21; // eax
  _DWORD *v22; // edi
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  unsigned __int16 ScaledLogPixels; // ax
  INT v27; // esi
  int v30; // [esp+14h] [ebp-5Ch]
  _DWORD *v31; // [esp+18h] [ebp-58h]
  _DWORD *v32; // [esp+18h] [ebp-58h]
  INT a; // [esp+1Ch] [ebp-54h]
  int v34; // [esp+20h] [ebp-50h]
  int v35; // [esp+24h] [ebp-4Ch]
  int v36; // [esp+24h] [ebp-4Ch]
  int v37; // [esp+28h] [ebp-48h]
  int v38; // [esp+28h] [ebp-48h]
  int v39; // [esp+28h] [ebp-48h]
  int v40; // [esp+2Ch] [ebp-44h]
  PKTHREAD v41; // [esp+2Ch] [ebp-44h]
  int v42; // [esp+30h] [ebp-40h]
  int v43; // [esp+34h] [ebp-3Ch]
  int v44; // [esp+38h] [ebp-38h]
  int v45; // [esp+3Ch] [ebp-34h]
  int v46; // [esp+40h] [ebp-30h] BYREF
  int v47; // [esp+44h] [ebp-2Ch]
  INT v48; // [esp+48h] [ebp-28h]
  int v49; // [esp+4Ch] [ebp-24h]
  int v50[4]; // [esp+50h] [ebp-20h] BYREF
  int v51[4]; // [esp+60h] [ebp-10h] BYREF

  v1 = (_DWORD *)this[5];
  a = 0;
  v31 = v1;
  v42 = v1[13];
  v43 = v1[14];
  v44 = v1[15];
  v45 = v1[16];
  if ( v42 < v44 && v43 < v45 )
  {
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v2 = v1[46] & 0xF;
    if ( v2 == 3 )
    {
      WindowDpiLastNotify = (v1[46] >> 8) & 0x1FF;
    }
    else if ( (v1[36] & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify();
      v1 = v31;
    }
    else if ( !v2 && (v4 = *(_DWORD *)(this[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v4 + 4) + 32) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(this[2] + 232) + 160);
    }
    _AdjustWindowRectExForDpi(this, v1[4], WindowDpiLastNotify);
    v30 = v44 - v48;
    v5 = v42 - v46;
    v6 = v43 - v47;
    v7 = v45 - v49;
    a = v48;
    v32 = (_DWORD *)this[5];
    if ( !ERECTL::bWrapped((ERECTL *)(v32 + 17)) )
    {
      if ( v5 >= *v9 )
        v5 = *v9;
      if ( v6 >= v8[18] )
        v6 = v8[18];
      v10 = v44 - v48;
      if ( v30 <= v8[19] )
        v10 = v8[19];
      v30 = v10;
      if ( v7 <= v8[20] )
        v7 = v8[20];
    }
    v11 = v8[13];
    v35 = v5;
    if ( v5 <= v11 )
      v35 = v8[13];
    v34 = v8[15];
    if ( v35 >= v34 )
    {
      v5 = v8[15];
    }
    else if ( v5 <= v11 )
    {
      v5 = v8[13];
    }
    v42 = v5;
    v36 = v8[14];
    v37 = v6;
    if ( v6 <= v36 )
      v37 = v8[14];
    v12 = v8[16];
    v40 = v12;
    if ( v37 >= v12 || (v12 = v8[14], v6 <= v36) )
      v6 = v12;
    v13 = v30;
    v43 = v6;
    if ( v30 >= v34 )
      v38 = v8[15];
    else
      v38 = v30;
    if ( v38 <= v11 || (v11 = v8[15], v30 >= v34) )
      v13 = v11;
    v44 = v13;
    v39 = v7;
    if ( v7 >= v40 )
      v39 = v40;
    if ( v39 <= v36 )
    {
      v7 = v8[14];
    }
    else if ( v7 >= v40 )
    {
      v7 = v40;
    }
    v1 = v32;
    v45 = v7;
    if ( v5 > v13 )
      v44 = v5;
    if ( v6 > v7 )
      v45 = v6;
  }
  v51[0] = v1[13];
  v51[1] = v1[14];
  v51[2] = v1[15];
  v51[3] = v1[16];
  v50[0] = v1[17];
  v50[1] = v1[18];
  v50[2] = v1[19];
  v50[3] = v1[20];
  v46 = v42;
  v47 = v43;
  v48 = v44;
  v49 = v45;
  CurrentThread = KeGetCurrentThread();
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_63;
  ThreadWin32Thread = (_DWORD *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread || !*ThreadWin32Thread )
    goto LABEL_63;
  v41 = KeGetCurrentThread();
  v16 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v17 = (int *)PsGetThreadWin32Thread(v41);
    if ( v17 )
      v16 = *v17;
  }
  if ( *(_DWORD *)(v16 + 248) )
  {
    v18 = KeGetCurrentThread();
    v19 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v20 = (int *)PsGetThreadWin32Thread(v18);
      if ( v20 )
        v19 = *v20;
    }
    v21 = *(_DWORD *)(v19 + 248);
    v22 = this;
    if ( (*(_BYTE *)(**(_DWORD **)(v21 + 4) + 32) & 1) != 0 )
    {
      v23 = this[5];
      v24 = *(_DWORD *)(v23 + 184);
      if ( (v24 & 0xF) == 0 && (v24 & 0x40000000) != 0 )
      {
        v25 = *(unsigned __int16 *)(v23 + 180);
        if ( (_WORD)v25 != 96 )
        {
          ScaledLogPixels = GreGetScaledLogPixels(v25);
          v27 = ScaledLogPixels;
          ScaleDPIRect(v51, v51, ScaledLogPixels, 0x60u, 0, 0, 0, 0);
          ScaleDPIRect(v50, v50, v27, 0x60u, 0, 0, 0, 0);
          ScaleDPIRect(&v46, &v46, v27, 0x60u, 0, 0, 0, 0);
          a = EngMulDiv(a, v27, 96);
        }
      }
    }
  }
  else
  {
LABEL_63:
    v22 = this;
  }
  DirtyVisRgnTrackers(v22);
  ReferenceDwmApiPort();
  return DwmAsyncChildMoveSize(v51, v50, &v46, a);
}

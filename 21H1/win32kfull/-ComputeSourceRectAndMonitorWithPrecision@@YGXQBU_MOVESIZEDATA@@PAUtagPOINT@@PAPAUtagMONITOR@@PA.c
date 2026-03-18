/*
 * XREFs of ?ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PAUtagRECT@@@Z @ 0x170EAA
 * Callers:
 *     ?HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1715B3 (-HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_M.c)
 * Callees:
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge ComputeSourceRectAndMonitorWithPrecision(
        int *a1@<edx>,
        _DWORD *a2@<ecx>,
        const struct _MOVESIZEDATA *a3,
        struct tagPOINT *a4,
        struct tagMONITOR **a5,
        struct tagRECT *a6)
{
  int CurrentThreadDpiAwarenessContext; // eax
  int v9; // edx
  int v10; // ebx
  int v11; // eax
  LONG *MonitorWorkRectForWindow; // esi
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // edx
  LONG *MonitorRectForWindow; // eax
  int v17; // eax
  _DWORD *v18; // edx
  LONG *v19; // esi
  struct tagPOINT *v20; // edi
  int v21; // [esp-10h] [ebp-70h]
  int v22; // [esp-Ch] [ebp-6Ch]
  int v23[4]; // [esp+10h] [ebp-50h] BYREF
  _DWORD v24[4]; // [esp+20h] [ebp-40h] BYREF
  struct tagPOINT *v25; // [esp+30h] [ebp-30h]
  const struct _MOVESIZEDATA *v26; // [esp+34h] [ebp-2Ch]
  int v27; // [esp+38h] [ebp-28h] BYREF
  LONG v28; // [esp+3Ch] [ebp-24h]
  LONG v29; // [esp+40h] [ebp-20h]
  LONG v30; // [esp+44h] [ebp-1Ch]
  LONG v31; // [esp+48h] [ebp-18h]
  LONG v32; // [esp+4Ch] [ebp-14h] BYREF
  LONG v33; // [esp+50h] [ebp-10h]
  LONG v34; // [esp+54h] [ebp-Ch]
  LONG v35; // [esp+58h] [ebp-8h]

  v26 = a3;
  v25 = a4;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v9 = a2[46];
  v10 = CurrentThreadDpiAwarenessContext;
  if ( (v9 & 0x38000) == 0x30000 )
  {
    v17 = _MonitorFromPoint(*a1, a1[1], 2u, CurrentThreadDpiAwarenessContext);
    v18 = (_DWORD *)a2[2];
    v27 = v17;
    MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(v17, v18, v24);
    v11 = v27;
    goto LABEL_13;
  }
  if ( *(_DWORD *)*_gpDispInfo > 1u && (*(_DWORD *)(*(_DWORD *)(a2[2] + 20) + 184) & 0xF) != 2 )
  {
    *a1 = a2[69];
    v22 = a2[70];
    v21 = *a1;
    a1[1] = v22;
    v11 = _MonitorFromPoint(v21, v22, 2u, 18);
    v27 = v11;
    MonitorWorkRectForWindow = (LONG *)(*(_DWORD *)(v11 + 20) + 16);
LABEL_13:
    v32 = *MonitorWorkRectForWindow;
    v19 = MonitorWorkRectForWindow + 1;
    v33 = *v19++;
    v34 = *v19;
    v35 = v19[1];
    goto LABEL_14;
  }
  if ( (v9 & 0x20) != 0 )
    v13 = ValidateHmonitorNoRip(*(_DWORD *)(*(_DWORD *)(a2[2] + 20) + 164));
  else
    v13 = a2[48];
  v27 = v13;
  LogicalToPhysicalDPIPoint(a1, a1, v10, &v27);
  v14 = _MonitorFromPoint(*a1, a1[1], 2u, 18);
  v15 = (_DWORD *)a2[2];
  v27 = v14;
  if ( *(_DWORD *)*_gpDispInfo <= 1u )
    MonitorRectForWindow = GetMonitorWorkRectForWindow(v14, v15, v24);
  else
    MonitorRectForWindow = GetMonitorRectForWindow(v23);
  v28 = *MonitorRectForWindow;
  v29 = MonitorRectForWindow[1];
  v30 = MonitorRectForWindow[2];
  v31 = MonitorRectForWindow[3];
  v32 = v28;
  v33 = v29;
  v34 = v30 - 1;
  v35 = v31 - 1;
  LogicalToPhysicalDPIRect(&v32, &v32, v10, &v27);
  ++v34;
  ++v35;
  v11 = v27;
LABEL_14:
  v20 = v25;
  *(_DWORD *)v26 = v11;
  v20->x = v32;
  v20 = (struct tagPOINT *)((char *)v20 + 4);
  v20->x = v33;
  v20 = (struct tagPOINT *)((char *)v20 + 4);
  v20->x = v34;
  v20->y = v35;
}

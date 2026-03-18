/*
 * XREFs of _DetectNewMonitor@8 @ 0x150BE3
 * Callers:
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 * Callees:
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     _GetInheritedMonitor@4 @ 0x35826 (_GetInheritedMonitor@4.c)
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsNewMonitorRectMostOccupied@@YGHPBUtagRECT@@00@Z @ 0x14FE5B (-IsNewMonitorRectMostOccupied@@YGHPBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YGXPAU_MOVESIZEDATA@@PBUtagRECT@@GPAU2@2G@Z @ 0x1500CD (-TransformRectAroundCursor@@YGXPAU_MOVESIZEDATA@@PBUtagRECT@@GPAU2@2G@Z.c)
 */

int __fastcall DetectNewMonitor(INT *a1, LONG *a2)
{
  LONG *v3; // esi
  _DWORD *v4; // ecx
  INT v5; // eax
  INT v6; // eax
  int v7; // eax
  INT v8; // eax
  INT v9; // eax
  INT v10; // ecx
  int v11; // edi
  INT v12; // esi
  INT v13; // esi
  int *MonitorRectForWindow; // eax
  unsigned __int16 *v15; // esi
  int v16; // esi
  INT v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  LONG *v21; // edi
  LONG *v22; // esi
  INT v23; // eax
  int v25; // [esp-8h] [ebp-80h]
  struct tagRECT *v26; // [esp+0h] [ebp-78h]
  const struct tagRECT *v27; // [esp+0h] [ebp-78h]
  const struct tagRECT *v28; // [esp+4h] [ebp-74h]
  const struct tagRECT *v29; // [esp+4h] [ebp-74h]
  int v30; // [esp+10h] [ebp-68h] BYREF
  int v31; // [esp+18h] [ebp-60h] BYREF
  LONG v32; // [esp+1Ch] [ebp-5Ch]
  struct tagRECT v33; // [esp+20h] [ebp-58h] BYREF
  int v34; // [esp+34h] [ebp-44h] BYREF
  LONG v35; // [esp+38h] [ebp-40h]
  int v36; // [esp+3Ch] [ebp-3Ch]
  int v37; // [esp+40h] [ebp-38h]
  LONG *v38; // [esp+44h] [ebp-34h]
  int v39; // [esp+48h] [ebp-30h] BYREF
  INT v40; // [esp+4Ch] [ebp-2Ch] BYREF
  int InheritedMonitor; // [esp+50h] [ebp-28h] BYREF
  struct tagRECT v42; // [esp+54h] [ebp-24h] BYREF
  unsigned __int16 v43[2]; // [esp+64h] [ebp-14h] BYREF
  LONG top; // [esp+68h] [ebp-10h]
  LONG right; // [esp+6Ch] [ebp-Ch] BYREF
  LONG bottom; // [esp+70h] [ebp-8h]

  v3 = a2;
  v4 = (_DWORD *)a1[2];
  v38 = a2;
  InheritedMonitor = GetInheritedMonitor(v4);
  v5 = a1[48];
  v33.left = *v3++;
  v40 = v5;
  v6 = a1[2];
  v33.top = *v3++;
  v33.right = *v3;
  v33.bottom = v3[1];
  v42 = v33;
  LogicalToPhysicalDPIRect(&v42, &v42, *(_DWORD *)(*(_DWORD *)(v6 + 20) + 184), &v40);
  v7 = InheritedMonitor;
  if ( !InheritedMonitor )
  {
    v7 = _MonitorFromRect(&v42.left, 0, 18);
    InheritedMonitor = v7;
  }
  if ( v40 && v7 && v40 != v7 )
  {
    if ( !EnterFloatingPointRegion() )
    {
LABEL_31:
      v7 = InheritedMonitor;
      goto LABEL_32;
    }
    v8 = a1[41];
    if ( v8 == 9 || v8 == 10 )
    {
      *(_DWORD *)v43 = 0;
      top = 0;
      right = 0;
      bottom = 0;
      TransformRectAroundCursor(
        (int)&v42,
        a1,
        (struct _MOVESIZEDATA *)*(unsigned __int16 *)(*(_DWORD *)(v40 + 20) + 52),
        0,
        (int)v43,
        (struct tagRECT *)*(unsigned __int16 *)(*(_DWORD *)(InheritedMonitor + 20) + 52),
        v26,
        (unsigned __int16)v28);
      v16 = v40;
      if ( IsNewMonitorRectMostOccupied(
             (int *)(*(_DWORD *)(InheritedMonitor + 20) + 16),
             (int *)v43,
             (const struct tagRECT *)(*(_DWORD *)(v40 + 20) + 16),
             v27,
             v29) )
      {
        v31 = *(_DWORD *)v43;
        v32 = top;
        v17 = a1[2];
        v34 = *(_DWORD *)v43;
        v18 = *(_DWORD *)(v17 + 20);
        v35 = top;
        v25 = *(_DWORD *)(v18 + 184);
        v36 = right;
        v37 = bottom;
        PhysicalToLogicalDPIPoint(&v31, &v31, v25, &InheritedMonitor);
        v34 = v31;
        v35 = v32;
        v19 = *(_DWORD *)(*(_DWORD *)(a1[2] + 20) + 184);
        if ( (v19 & 0xF) != 2 )
        {
          right = 0;
          bottom = 0;
          v39 = InheritedMonitor;
          PhysicalToLogicalDPIPoint(&right, a1 + 69, v19, &v39);
          v20 = a1[40] + bottom;
          v34 = right + a1[39];
          v35 = v20;
          v36 = v33.right + v34 - v33.left;
          v37 = v33.bottom + v20 - v33.top;
        }
        v15 = (unsigned __int16 *)&v34;
        goto LABEL_29;
      }
    }
    else
    {
      *(_DWORD *)v43 = v42.left;
      v9 = a1[2];
      top = v42.top;
      right = v42.right;
      bottom = v42.bottom;
      PhysicalToLogicalDPIRect(v43, v43, *(_DWORD *)(*(_DWORD *)(v9 + 20) + 184), &InheritedMonitor);
      v10 = a1[23];
      v11 = *(_DWORD *)(_gpsi + 4428);
      v39 = *(_DWORD *)(_gpsi + 4432);
      v12 = right - *(_DWORD *)v43;
      if ( right - *(_DWORD *)v43 <= v10 )
        v12 = v10;
      if ( v12 >= a1[25] )
        v12 = a1[25];
      if ( v12 != right - *(_DWORD *)v43 )
      {
        *(_DWORD *)v43 = v11 - EngMulDiv(v11 - v42.left, v12, right - *(_DWORD *)v43);
        right = *(_DWORD *)v43 + v12;
      }
      v13 = bottom - top;
      if ( bottom - top <= a1[24] )
        v13 = a1[24];
      if ( v13 >= a1[26] )
        v13 = a1[26];
      if ( v13 != bottom - top )
      {
        top = v39 - EngMulDiv(v39 - v42.top, v13, bottom - top);
        bottom = top + v13;
      }
      MonitorRectForWindow = GetMonitorRectForWindow(&v33);
      v34 = *MonitorRectForWindow;
      v35 = MonitorRectForWindow[1];
      v36 = MonitorRectForWindow[2];
      v37 = MonitorRectForWindow[3];
      v33 = *(struct tagRECT *)GetMonitorRectForWindow(&v30);
      if ( IsNewMonitorRectMostOccupied(&v34, (int *)v43, &v33, v26, v28) )
      {
        v15 = v43;
LABEL_29:
        v21 = v38;
        *v38 = *(_DWORD *)v15;
        v22 = (LONG *)(v15 + 2);
        *++v21 = *v22++;
        *++v21 = *v22;
        v21[1] = v22[1];
        goto LABEL_30;
      }
      v16 = v40;
    }
    InheritedMonitor = v16;
LABEL_30:
    KeRestoreFloatingPointState(_gfsSave);
    goto LABEL_31;
  }
LABEL_32:
  if ( v7 == a1[48] || !v7 )
    return 0;
  a1[48] = v7;
  v23 = a1[46];
  if ( (v23 & 0x20) == 0 )
    a1[46] = v23 | 0x10000000;
  return 1;
}

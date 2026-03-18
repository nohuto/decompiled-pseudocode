/*
 * XREFs of _GetNewMonitor@12 @ 0x355FC
 * Callers:
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _NtUserUpdateLayeredWindow@40 @ 0xBA93E (_NtUserUpdateLayeredWindow@40.c)
 * Callees:
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     _GetInheritedMonitor@4 @ 0x35826 (_GetInheritedMonitor@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _GetMonitorTransform@12 @ 0x99CB2 (_GetMonitorTransform@12.c)
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?IsNewMonitorRectMostOccupied@@YGHPBUtagRECT@@00@Z @ 0x14FE5B (-IsNewMonitorRectMostOccupied@@YGHPBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YGXPAU_MOVESIZEDATA@@PBUtagRECT@@GPAU2@2G@Z @ 0x1500CD (-TransformRectAroundCursor@@YGXPAU_MOVESIZEDATA@@PBUtagRECT@@GPAU2@2G@Z.c)
 *     _TransformRectAroundPoint@28 @ 0x151AD1 (_TransformRectAroundPoint@28.c)
 *     _TransformVector@20 @ 0x17BC83 (_TransformVector@20.c)
 */

struct tagMONITOR *__fastcall GetNewMonitor(int a1, const struct tagRECT *a2, LONG *a3)
{
  int v4; // edi
  struct tagMONITOR *InheritedMonitor; // ebx
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  struct tagRECT *v14; // ecx
  int v15; // eax
  int v16; // esi
  _DWORD *v17; // edi
  struct tagMONITOR *v19; // eax
  int v20; // ecx
  unsigned int v21; // edi
  BOOL v22; // eax
  unsigned __int16 v23; // cx
  LONG *v24; // ecx
  const struct tagWND *v25; // [esp+0h] [ebp-B0h]
  struct tagRECT *v26; // [esp+0h] [ebp-B0h]
  const struct tagRECT *v27; // [esp+0h] [ebp-B0h]
  const struct tagRECT *v28; // [esp+4h] [ebp-ACh]
  const struct tagRECT *v29; // [esp+4h] [ebp-ACh]
  int v31; // [esp+14h] [ebp-9Ch]
  BOOL v32; // [esp+14h] [ebp-9Ch]
  _DWORD *v33; // [esp+18h] [ebp-98h]
  BOOL v34; // [esp+1Ch] [ebp-94h]
  int v35; // [esp+20h] [ebp-90h]
  int v37; // [esp+28h] [ebp-88h]
  unsigned __int16 v38[2]; // [esp+30h] [ebp-80h] BYREF
  LONG v39; // [esp+34h] [ebp-7Ch]
  LONG v40; // [esp+38h] [ebp-78h]
  LONG v41; // [esp+3Ch] [ebp-74h]
  BOOL v42; // [esp+40h] [ebp-70h]
  int v43; // [esp+44h] [ebp-6Ch]
  int v44; // [esp+48h] [ebp-68h]
  _DWORD v45[2]; // [esp+4Ch] [ebp-64h] BYREF
  LONG v46; // [esp+54h] [ebp-5Ch] BYREF
  _BYTE v47[68]; // [esp+58h] [ebp-58h] BYREF
  LONG left; // [esp+9Ch] [ebp-14h] BYREF
  LONG top; // [esp+A0h] [ebp-10h]
  LONG right; // [esp+A4h] [ebp-Ch]
  LONG bottom; // [esp+A8h] [ebp-8h]

  v4 = 0;
  InheritedMonitor = 0;
  v37 = ValidateHmonitorNoRip(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 164));
  v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)v38 = 0;
  v39 = 0;
  v40 = 0;
  v33 = *(_DWORD **)(v6 + 368);
  v41 = 0;
  if ( IsSemiMaximized(v25)
    || (v8 = *(_DWORD *)(a1 + 20), (*(_BYTE *)(v8 + 23) & 1) != 0)
    || (*(_BYTE *)(v8 + 12) & 0x40) != 0 )
  {
    v4 = 1;
  }
  if ( !v7 || v7[2] != a1 )
  {
    v9 = 0;
    v43 = 0;
    goto LABEL_6;
  }
  v9 = 1;
  v43 = 1;
  if ( (int)v7[46] < 0 )
  {
LABEL_6:
    v10 = 0;
    v31 = 0;
    if ( !v9 )
      goto LABEL_7;
    goto LABEL_45;
  }
  v10 = 1;
  v31 = 1;
LABEL_45:
  if ( (int)v7[46] < 0 )
  {
    v11 = 1;
    goto LABEL_8;
  }
LABEL_7:
  v11 = 0;
LABEL_8:
  v35 = v11;
  v42 = v10 && (v7[46] & 8) != 0 && v4;
  v12 = *(_DWORD **)(a1 + 20);
  left = v12[13];
  top = v12[14];
  right = v12[15];
  bottom = v12[16];
  if ( a2 && (!v10 || !EqualRectInl(v7 + 3, v12 + 13)) )
  {
    left = a2->left;
    top = a2->top;
    right = a2->right;
    bottom = a2->bottom;
  }
  v13 = v31;
  v32 = 0;
  if ( !v42 )
  {
    if ( v31 )
    {
      v20 = v33[41];
      if ( v20 == 9 || v20 == 10 )
        v32 = 1;
    }
  }
  v34 = !v13 && !v4;
  if ( v43 )
  {
    if ( v13 || (v14 = (struct tagRECT *)a2) != 0 )
    {
      v21 = v33[46];
      v22 = EqualRectInl(v33 + 3, &left);
      v14 = (struct tagRECT *)a2;
      if ( v22 )
      {
        InheritedMonitor = (struct tagMONITOR *)v33[48];
        v15 = (v21 >> 3) & 1;
        goto LABEL_20;
      }
      v33[46] = v21 | 0x20000000;
    }
  }
  else
  {
    v14 = (struct tagRECT *)a2;
  }
  v15 = v35;
LABEL_20:
  if ( v15 )
  {
    *(_DWORD *)v38 = v33[3];
    v39 = v33[4];
    v40 = v33[5];
    v41 = v33[6];
    if ( v14 )
    {
      v14->left = v33[3];
      v14->top = v33[4];
      v14->right = v33[5];
      v14->bottom = v33[6];
    }
  }
  if ( a3 )
  {
    *a3 = left;
    a3[1] = top;
    a3[2] = right;
    a3[3] = bottom;
  }
  if ( !InheritedMonitor )
  {
    v16 = a1;
    InheritedMonitor = (struct tagMONITOR *)GetInheritedMonitor(a1);
    if ( !InheritedMonitor )
    {
      InheritedMonitor = _MonitorFromWindowInternal(0, a1, (struct tagWND *)1, (unsigned int)v26, (int)v28);
      if ( !InheritedMonitor )
        goto LABEL_37;
      if ( v37 && InheritedMonitor != (struct tagMONITOR *)v37 && v32 && EnterFloatingPointRegion() )
      {
        v44 = left;
        v45[0] = top;
        v45[1] = right;
        v46 = bottom;
        memset(v47, 0, 0x40u);
        v16 = a1;
        if ( GetMonitorTransform(v47) )
        {
          TransformVector(v45, 0, 0);
          TransformVector(&v46, 0, 0);
        }
        TransformRectAroundCursor(
          (struct _MOVESIZEDATA *)*(unsigned __int16 *)(*(_DWORD *)(v37 + 20) + 52),
          a2,
          (unsigned __int16)v38,
          (struct tagRECT *)*(unsigned __int16 *)(*((_DWORD *)InheritedMonitor + 5) + 52),
          v26,
          (unsigned __int16)v28);
        if ( !IsNewMonitorRectMostOccupied((const struct tagRECT *)(*(_DWORD *)(v37 + 20) + 16), v27, v29) )
        {
          InheritedMonitor = 0;
          *(_DWORD *)v38 = left;
          v39 = top;
          v40 = right;
          v41 = bottom;
          v16 = a1;
        }
        KeRestoreFloatingPointState(_gfsSave);
      }
      if ( !InheritedMonitor )
      {
LABEL_37:
        if ( (*(_DWORD *)(*(_DWORD *)(v16 + 20) + 184) & 0xF) == 2 )
          v19 = (struct tagMONITOR *)_MonitorFromRect(&left, 2, 0);
        else
          v19 = _MonitorFromWindowInternal(2, v16, (struct tagWND *)1, (unsigned int)v26, (int)v28);
        InheritedMonitor = v19;
      }
    }
  }
  if ( a3 )
  {
    v17 = *(_DWORD **)(a1 + 20);
    if ( (v17[46] & 0xF) == 2
      && (*(_DWORD *)(*(_DWORD *)(a1 + 8) + 352) & 0x2000000) == 0
      && v37
      && (struct tagMONITOR *)v37 != InheritedMonitor
      && _IsTopLevelWindow(a1) )
    {
      if ( ERECTL::bWrapped((ERECTL *)v38) )
      {
        if ( v32 )
        {
          TransformRectAroundCursor(
            (struct _MOVESIZEDATA *)*(unsigned __int16 *)(*(_DWORD *)(v37 + 20) + 52),
            a2,
            v23,
            (struct tagRECT *)*(unsigned __int16 *)(*((_DWORD *)InheritedMonitor + 5) + 52),
            v26,
            (unsigned __int16)v28);
        }
        else if ( v34 )
        {
          TransformRectAroundPoint(a2, v38, *(_WORD *)(*((_DWORD *)InheritedMonitor + 5) + 52), v17[13], v17[14]);
        }
        if ( !ERECTL::bWrapped((ERECTL *)v38)
          && !IsNewMonitorRectMostOccupied((const struct tagRECT *)(*(_DWORD *)(v37 + 20) + 16), v26, v28) )
        {
          InheritedMonitor = (struct tagMONITOR *)v37;
          *(_DWORD *)v38 = left;
          v39 = top;
          v40 = right;
          v41 = bottom;
        }
      }
      if ( !ERECTL::bWrapped((ERECTL *)v38) )
      {
        *a3 = *v24;
        a3[1] = v24[1];
        a3[2] = v24[2];
        a3[3] = v24[3];
      }
    }
  }
  return InheritedMonitor;
}

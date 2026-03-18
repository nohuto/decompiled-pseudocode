/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470
 * Callers:
 *     _xxxDCEWindowHitTestIndirect@16 @ 0x262C0 (_xxxDCEWindowHitTestIndirect@16.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@PAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x17B14E (-xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTT.c)
 * Callees:
 *     _DCELayerHitTest@12 @ 0x25668 (_DCELayerHitTest@12.c)
 *     _xxxDCEWindowHitTestIndirect@16 @ 0x262C0 (_xxxDCEWindowHitTestIndirect@16.c)
 *     _IsWindowHolographicForHitTest@4 @ 0x268C0 (_IsWindowHolographicForHitTest@4.c)
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _IsMessageOnlyWindow@4 @ 0xADBD2 (_IsMessageOnlyWindow@4.c)
 *     _DwmSyncHitTestQuery@40 @ 0xBF4BC (_DwmSyncHitTestQuery@40.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ?HasFallbackInteractionSink@@YGHPBUtagWND@@@Z @ 0x14D31F (-HasFallbackInteractionSink@@YGHPBUtagWND@@@Z.c)
 *     _DCEHitTestWindow@16 @ 0x150745 (_DCEHitTestWindow@16.c)
 *     _SizeBoxHwnd@4 @ 0x1B6D75 (_SizeBoxHwnd@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

HWND __userpurge xxxDCEWindowHitTest2Internal@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        struct tagPOINT a4,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a5)
{
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // esi
  int Prop; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  struct tagWND *v13; // ecx
  struct tagWND *v14; // edx
  _DWORD *v15; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  HWND v20; // edx
  int v21; // eax
  int v22; // esi
  int *ThreadWin32Thread; // eax
  int v24; // ecx
  HWND v25; // esi
  int v26; // esi
  void *v27; // esi
  int v28; // esi
  int v29; // eax
  int *v30; // eax
  unsigned __int8 *v31; // edx
  int v32; // eax
  const struct tagWND *v33; // [esp+0h] [ebp-40h]
  int v34; // [esp+Ch] [ebp-34h] BYREF
  int v35; // [esp+10h] [ebp-30h]
  int v36; // [esp+14h] [ebp-2Ch]
  int v37; // [esp+18h] [ebp-28h]
  int v38; // [esp+1Ch] [ebp-24h]
  int x; // [esp+20h] [ebp-20h]
  int v40; // [esp+24h] [ebp-1Ch] BYREF
  struct tagWND *v41; // [esp+28h] [ebp-18h] BYREF
  struct tagWND *v42; // [esp+2Ch] [ebp-14h]
  int CurrentThread; // [esp+34h] [ebp-Ch] BYREF
  struct tagWND *v44; // [esp+38h] [ebp-8h]

  v38 = (int)a3;
  v42 = a3;
  v6 = a2;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  CurrentThread = 0;
  v7 = *(_DWORD *)(a1 + 8);
  x = a4.x;
  v44 = (struct tagWND *)a4.x;
  v40 = -2;
  v37 = v7;
  if ( !a2 )
    return 0;
  v8 = 0;
  Prop = RealGetProp(a2[20], CInputQueueProp::s_atom, 1);
  if ( Prop )
  {
    if ( !*(_DWORD *)(Prop + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v8 = 1;
  }
  if ( IsWindowHolographicForHitTest(v6) )
    goto LABEL_15;
  if ( !v8 )
    goto LABEL_18;
  if ( (*(_BYTE *)(v6[5] + 147) & 1) != 0
    && (v10 = RealGetProp(v6[20], CoreWindowProp::s_atom, 1)) != 0
    && *(_DWORD *)(v10 + 12) )
  {
LABEL_15:
    v8 = 1;
  }
  else if ( (*(_BYTE *)(v6[5] + 147) & 1) != 0 || HasFallbackInteractionSink(v33) )
  {
    v8 = 0;
LABEL_18:
    if ( (*(_BYTE *)(v6[5] + 23) & 0x10) == 0 )
      return 0;
    goto LABEL_19;
  }
  if ( (*(_BYTE *)(a1 + 16) & 8) == 0 )
    return 0;
  if ( !IsMessageOnlyWindow(v6) )
    goto LABEL_18;
LABEL_19:
  if ( GetWindowCloakState(v6) )
  {
    if ( ((*(_BYTE *)(v6[5] + 147) & 1) == 0
       || (v11 = RealGetProp(v6[20], CoreWindowProp::s_atom, 1)) == 0
       || !*(_DWORD *)(v11 + 12))
      && !IsWindowHolographicForHitTest(v6) )
    {
      return 0;
    }
  }
  if ( v8 )
  {
    v13 = v44;
    v14 = v42;
  }
  else
  {
    if ( v6[30] && (*(_BYTE *)(a1 + 16) & 4) == 0 )
    {
      v12 = *(_DWORD *)(a1 + 32);
      v41 = *(struct tagWND **)v12;
      v42 = *(struct tagWND **)(v12 + 4);
      if ( DCEHitTestWindow(&v41, *(_DWORD *)(a1 + 24)) )
      {
        v13 = v42;
        v14 = v41;
        v44 = v42;
        v42 = v41;
        goto LABEL_35;
      }
      return 0;
    }
    v15 = (_DWORD *)v6[5];
    v14 = v42;
    if ( (int)v42 < v15[13] )
      return 0;
    if ( (int)v42 >= v15[15] )
      return 0;
    v13 = v44;
    if ( (int)v44 < v15[14] || (int)v44 >= v15[16] )
      return 0;
  }
LABEL_35:
  v17 = *(_DWORD *)(v6[5] + 108);
  if ( v17 && !GrePtInRegion(v17, v14, v13) )
    return 0;
  v18 = v6[5];
  if ( (*(_BYTE *)(v18 + 18) & 8) != 0
    && (*(_BYTE *)(v18 + 144) & 0x20) == 0
    && !DCELayerHitTest((int)v6, (HDEV)v42, (HWND)v44) )
  {
    return 0;
  }
  if ( CoreWindowProp::IsCompositeAppOrSelfDisabled(v33) && (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    if ( !v8 && (*(_BYTE *)(v6[5] + 23) & 0xC0) == 0x40 )
      return 0;
    CurrentThread = 1;
  }
  v20 = (HWND)v44;
  if ( v6[30] )
  {
    v19 = (unsigned __int16)v42 | ((unsigned __int16)v44 << 16);
    *(_DWORD *)(a1 + 28) = 1;
    *(_DWORD *)(a1 + 8) = v19;
  }
  if ( CurrentThread )
  {
    v28 = -2;
  }
  else
  {
    if ( v8 )
      goto LABEL_76;
    v21 = v6[5];
    if ( (*(_BYTE *)(v21 + 23) & 0x20) != 0
      || (int)v42 < *(_DWORD *)(v21 + 68)
      || (int)v42 >= *(_DWORD *)(v21 + 76)
      || (int)v20 < *(_DWORD *)(v21 + 72)
      || (int)v20 >= *(_DWORD *)(v21 + 80) )
    {
      v26 = 1;
    }
    else
    {
      v22 = v6[15];
      CurrentThread = (int)KeGetCurrentThread();
      if ( IsThreadCrossSessionAttached() || (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread)) == 0 )
        v24 = 0;
      else
        v24 = *ThreadWin32Thread;
      v34 = *(_DWORD *)(v24 + 228);
      *(_DWORD *)(v24 + 228) = &v34;
      v35 = v22;
      if ( v22 )
        HMLockObject(v22);
      v25 = xxxDCEWindowHitTestIndirect(v6[15], a1, v42, (LONG)v44);
      ThreadUnlock1();
      if ( v25 )
        return v25;
      v26 = 0;
    }
    v19 = v6[2];
    if ( v19 != _gptiCurrent )
    {
LABEL_76:
      v28 = 1;
    }
    else
    {
      if ( !IsToplevelWindowDesktopComposed(v6) || (*(_BYTE *)(v6[5] + 18) & 8) == 0 || !v26 )
        goto LABEL_73;
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      v27 = (void *)ReferenceDwmApiPort();
      CurrentThread = 1;
      UserSessionSwitchLeaveCrit();
      DwmSyncHitTestQuery(
        v27,
        *(_DWORD *)a1,
        *(_DWORD *)(a1 + 4),
        *(_DWORD *)(a1 + 8),
        -2,
        (int)&v40,
        (int)&CurrentThread,
        v38,
        x);
      EnterCrit(0, 1);
      if ( CurrentThread )
      {
        v28 = v40;
      }
      else
      {
LABEL_73:
        _InterlockedIncrement(&glSendMessage);
        v28 = xxxSendTransformableMessageTimeout(
                (ULONG_PTR)v6,
                0,
                (unsigned __int16)v42 | ((unsigned __int16)v44 << 16),
                0,
                0,
                0,
                1,
                0);
      }
      if ( v28 == -1 )
      {
        v29 = v37;
        *(_DWORD *)(a1 + 28) = 0;
        *(_DWORD *)(a1 + 8) = v29;
        return 0;
      }
    }
  }
  v30 = *(int **)(a1 + 12);
  if ( v30 )
  {
    *v30 = v28;
    *(_DWORD *)(a1 + 20) = 1;
  }
  v31 = (unsigned __int8 *)v6[5];
  LOBYTE(v19) = ~v31[18];
  if ( v28 == (((v31[17] ^ (unsigned int)v19) >> 6) & 1) + 16 && (v31[22] & 4) == 0 )
  {
    v32 = SizeBoxHwnd(v6);
    if ( v32 )
      v6 = (_DWORD *)v32;
  }
  return (HWND)*v6;
}

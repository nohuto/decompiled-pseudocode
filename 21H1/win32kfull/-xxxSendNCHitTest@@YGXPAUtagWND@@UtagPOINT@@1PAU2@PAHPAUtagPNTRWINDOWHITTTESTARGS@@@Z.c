/*
 * XREFs of ?xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x17A904
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x17A5BF (-xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     _DwmSyncHitTestQuery@40 @ 0xBF4BC (_DwmSyncHitTestQuery@40.c)
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 */

void __userpurge xxxSendNCHitTest(
        struct tagPOINT **a1@<edx>,
        int *a2@<ecx>,
        struct tagWND *a3,
        struct tagPOINT a4,
        struct tagPOINT a5,
        struct tagPOINT *a6,
        int *a7,
        struct tagPNTRWINDOWHITTTESTARGS *a8)
{
  LONG y; // ebx
  struct tagPOINT *v9; // esi
  int v11; // eax
  float *v12; // esi
  struct tagPOINT *v13; // ecx
  int v14; // edx
  int v15; // [esp+Ch] [ebp-14h]
  int v16; // [esp+Ch] [ebp-14h]
  int v17; // [esp+10h] [ebp-10h]
  LONG v18; // [esp+10h] [ebp-10h]
  int v19; // [esp+14h] [ebp-Ch]
  LONG x; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h] BYREF
  struct tagPOINT *v22; // [esp+1Ch] [ebp-4h]
  struct tagPOINT *v23; // [esp+3Ch] [ebp+1Ch]
  float v24; // [esp+3Ch] [ebp+1Ch]
  float v25; // [esp+3Ch] [ebp+1Ch]
  BOOL v26; // [esp+3Ch] [ebp+1Ch]

  v21 = 0;
  y = a5.y;
  v9 = a6;
  if ( a1 )
  {
    v9 = (struct tagPOINT *)((char *)a6 + (_DWORD)a1[1]);
    y = (LONG)*a1 + a5.y;
    v23 = *a1;
    v15 = (int)*a1;
    v11 = (int)a1[1];
    v22 = v9;
    v19 = v11;
    v17 = v11;
    if ( IsWindowDesktopComposed(a2) && a2[30] && EnterFloatingPointRegion() )
    {
      v12 = (float *)a2[30];
      v24 = (float)v15;
      v16 = (int)(v24 * *v12);
      v25 = (float)v17;
      v19 = (int)(v12[5] * v25);
      KeRestoreFloatingPointState(_gfsSave);
      v13 = (struct tagPOINT *)v16;
      v9 = v22;
    }
    else
    {
      v13 = v23;
    }
    v18 = (LONG)v13 + a4.y;
    x = a5.x + v19;
  }
  else
  {
    x = a5.x;
    v22 = a6;
    v18 = a4.y;
  }
  if ( PtInRect((_DWORD *)(a2[5] + 52), y, (int)v9) )
  {
    v26 = (*(_BYTE *)(v14 + 23) & 0x20) != 0 || !PtInRect((_DWORD *)(v14 + 68), y, (int)v9);
    if ( a2[2] == _gptiCurrent )
    {
      if ( !*(_DWORD *)(a4.x + 60) )
        goto LABEL_27;
      if ( IsToplevelWindowDesktopComposed(a2) && (*(_BYTE *)(a2[5] + 18) & 8) != 0 && v26 )
      {
        if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
        v9 = (struct tagPOINT *)ReferenceDwmApiPort();
        v21 = 1;
        UserSessionSwitchLeaveCrit();
        DwmSyncHitTestQuery(
          v9,
          *a2,
          *(_DWORD *)a4.x,
          *(_DWORD *)(a4.x + 4),
          *(_DWORD *)(a4.x + 8),
          -2,
          a3,
          &v21,
          v18,
          x);
        EnterCrit(0, 1);
        LOWORD(v9) = (_WORD)v22;
      }
      if ( !*(_DWORD *)(a4.x + 60) || !v21 )
      {
LABEL_27:
        _InterlockedIncrement(&glSendMessage);
        *(_DWORD *)a3 = xxxSendTransformableMessageTimeout(
                          (int)a2,
                          0x84u,
                          0,
                          (unsigned __int16)y | ((unsigned __int16)v9 << 16),
                          0,
                          0,
                          0,
                          1u,
                          0);
      }
    }
    else
    {
      *(_DWORD *)a3 = 1;
    }
  }
  else
  {
    *(_DWORD *)a3 = 0;
  }
}

/*
 * XREFs of _xxxDCETrackCaptionButton@8 @ 0x151F8A
 * Callers:
 *     ?xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z @ 0x1A1C90 (-xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _DwmSyncHitTestQuery@40 @ 0xBF4BC (_DwmSyncHitTestQuery@40.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     ?xxxDCECalcCaptionButton@@YGXPAUtagWND@@HPAG@Z @ 0x1501AD (-xxxDCECalcCaptionButton@@YGXPAUtagWND@@HPAG@Z.c)
 *     _xxxSetCapture@4 @ 0x18772B (_xxxSetCapture@4.c)
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 */

__int16 __fastcall xxxDCETrackCaptionButton(int a1, int a2)
{
  __int16 v2; // bx
  int v3; // edi
  void *v4; // esi
  struct tagEVENTHOOK *v5; // edi
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  void *v10; // esi
  unsigned __int16 v11; // ax
  int v12; // ecx
  __int16 v13; // ax
  int v14; // [esp-8h] [ebp-60h]
  int v15; // [esp+0h] [ebp-58h]
  unsigned __int16 *v16; // [esp+4h] [ebp-54h]
  int v17; // [esp+10h] [ebp-48h]
  int v18; // [esp+14h] [ebp-44h]
  unsigned __int16 v19; // [esp+18h] [ebp-40h]
  int v21; // [esp+20h] [ebp-38h] BYREF
  int v22; // [esp+24h] [ebp-34h]
  int v23; // [esp+28h] [ebp-30h] BYREF
  int v24; // [esp+2Ch] [ebp-2Ch] BYREF
  int v25; // [esp+30h] [ebp-28h]
  int v26; // [esp+34h] [ebp-24h]
  int v27; // [esp+38h] [ebp-20h]
  unsigned int v28[7]; // [esp+3Ch] [ebp-1Ch] BYREF

  v27 = a1;
  memset(v28, 0, sizeof(v28));
  v2 = 0;
  v21 = 0;
  v22 = 0;
  v17 = 0;
  v25 = _gptiCurrent;
  v18 = 0;
  v19 = 0;
  v3 = *(_DWORD *)(_gptiCurrent + 428);
  v26 = *(_DWORD *)(_gptiCurrent + 432);
  v24 = 1;
  v23 = a2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  v4 = (void *)ReferenceDwmApiPort();
  UserSessionSwitchLeaveCrit();
  v14 = v3;
  v5 = (struct tagEVENTHOOK *)v27;
  DwmSyncHitTestQuery(v4, *(_DWORD *)v27, 512, 1, 0, a2, &v23, &v24, v14, v26);
  EnterCrit(0, 1);
  if ( !v24 )
    return xxxTrackCaptionButton(v5, a2);
  switch ( a2 )
  {
    case 8:
      v7 = 2;
      v18 = 2;
      v19 = 1344;
      break;
    case 9:
      v7 = 3;
      v18 = 3;
      v19 = 1312;
      break;
    case 20:
      v7 = 5;
      v18 = 5;
      v19 = 1296;
      break;
    case 21:
      v7 = 4;
      v18 = 4;
      v19 = 1408;
      break;
    default:
      v7 = 0;
      break;
  }
  xxxDCECalcCaptionButton(v7, v5, (struct tagWND *)&v21, v15, v16);
  if ( (_WORD)v21 )
  {
    v22 = 1;
    SetOrClrWF(1, (int)v5, v19, 1);
    xxxWindowEvent(0x800Au, v5, 0xFFFFFFFE, (struct tagWND *)v7, 0);
  }
  else
  {
    v7 = 0;
    v18 = 0;
  }
  xxxSetCapture(v5);
  do
  {
    if ( !xxxInternalGetMessage(v28, (struct tagMSG *)0x200, 0x20Eu, 1u, 0) )
    {
      if ( xxxInternalGetMessage(v28, (struct tagMSG *)0x241, 0x257u, 1u, 0) )
      {
        *(_DWORD *)(v25 + 264) |= 0x8000u;
        xxxDispatchMessage(v28);
        *(_DWORD *)(v25 + 264) &= ~0x8000u;
      }
      else if ( !xxxSleepThread2(1u, 0, 0) )
      {
        break;
      }
      goto LABEL_37;
    }
    if ( v28[1] != 514 )
    {
      if ( v28[1] == 512 && (_WORD)v21 )
      {
        v9 = *(_DWORD *)(_gptiCurrent + 432);
        v26 = *(_DWORD *)(_gptiCurrent + 428);
        v27 = v9;
        if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
        v10 = (void *)ReferenceDwmApiPort();
        UserSessionSwitchLeaveCrit();
        DwmSyncHitTestQuery(v10, *(_DWORD *)v5, 512, v28[2], v28[3], a2, &v23, &v24, v26, v27);
        EnterCrit(0, 1);
        if ( v23 == a2 )
        {
          v11 = 1;
          v12 = 1;
        }
        else
        {
          v11 = 0;
          v12 = 0;
        }
        if ( (_WORD)v22 == v11 )
        {
          v7 = v18;
        }
        else
        {
          v22 = v11;
          SetOrClrWF(v12, (int)v5, v19, 1);
          v7 = v18;
          xxxWindowEvent(0x800Au, v5, 0xFFFFFFFE, (struct tagWND *)v18, 0);
        }
      }
LABEL_37:
      v8 = v17;
      continue;
    }
    xxxReleaseCapture();
    v8 = 1;
    v17 = 1;
  }
  while ( v5 == *(struct tagEVENTHOOK **)(*(_DWORD *)(_gptiCurrent + 236) + 56) && !v8 );
  v13 = v21;
  if ( !(_WORD)v21 )
    return 0;
  if ( (_WORD)v22 && (_WORD)v21 != 0xF180 )
  {
    SetOrClrWF(0, (int)v5, v19, 1);
    xxxWindowEvent(0x800Au, v5, 0xFFFFFFFE, (struct tagWND *)v7, 0);
    v13 = v21;
  }
  if ( v17 )
  {
    if ( v23 == a2 )
      return v13;
  }
  return v2;
}

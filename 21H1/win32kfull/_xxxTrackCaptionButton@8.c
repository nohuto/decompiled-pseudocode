/*
 * XREFs of _xxxTrackCaptionButton@8 @ 0x1A558D
 * Callers:
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 *     ?xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z @ 0x1A1C90 (-xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _xxxSetCapture@4 @ 0x18772B (_xxxSetCapture@4.c)
 *     _xxxCalcCaptionButton@24 @ 0x1A52FE (_xxxCalcCaptionButton@24.c)
 */

__int16 __fastcall xxxTrackCaptionButton(struct tagEVENTHOOK *a1, int a2)
{
  struct tagEVENTHOOK *v2; // esi
  __int16 v3; // bx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  struct tagWND *v7; // edi
  int v8; // eax
  HDC DCEx; // esi
  int v10; // ecx
  HDC v11; // esi
  HDC v13; // esi
  struct tagEVENTHOOK *v14; // esi
  __int16 v15; // dx
  int v16; // [esp-4h] [ebp-6Ch]
  int v17; // [esp+10h] [ebp-58h]
  unsigned __int16 v18; // [esp+14h] [ebp-54h]
  _BOOL2 v19; // [esp+18h] [ebp-50h]
  int v20; // [esp+1Ch] [ebp-4Ch] BYREF
  int v21; // [esp+20h] [ebp-48h] BYREF
  int v22; // [esp+24h] [ebp-44h]
  int v23; // [esp+28h] [ebp-40h]
  struct tagEVENTHOOK *v24; // [esp+2Ch] [ebp-3Ch]
  int v25; // [esp+30h] [ebp-38h]
  BOOL v26; // [esp+34h] [ebp-34h]
  unsigned int v27[7]; // [esp+38h] [ebp-30h] BYREF
  int v28[4]; // [esp+54h] [ebp-14h] BYREF

  v2 = a1;
  v3 = 0;
  v24 = a1;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v17 = 0;
  v18 = 0;
  memset(v27, 0, sizeof(v27));
  memset(v28, 0, sizeof(v28));
  v25 = _gptiCurrent;
  v4 = a2 - 8;
  if ( !v4 )
  {
    v16 = 2;
    v18 = 1344;
    goto LABEL_10;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v16 = 3;
    v18 = 1312;
    goto LABEL_10;
  }
  v6 = v5 - 11;
  if ( !v6 )
  {
    v16 = 5;
    v18 = 1296;
    goto LABEL_10;
  }
  if ( v6 == 1 )
  {
    v16 = 4;
    v18 = 1408;
LABEL_10:
    v7 = (struct tagWND *)v16;
    goto LABEL_11;
  }
  v7 = 0;
LABEL_11:
  v8 = xxxCalcCaptionButton(a1, (int)v7, (__int16 *)&v20, v28, &v21, 0);
  v23 = (__int16)v8;
  v22 = SHIWORD(v8);
  if ( (_WORD)v20 )
  {
    DCEx = (HDC)_GetDCEx(v2, 0, 65537);
    BitBltSysBmp(DCEx, v23, v22, v21 + 1, 1);
    _ReleaseDC(DCEx);
    v2 = v24;
    v19 = 1;
    SetOrClrWF(1, (int)v24, v18, 1);
    xxxWindowEvent(0x800Au, v2, 0xFFFFFFFE, v7, 0);
  }
  else
  {
    v7 = 0;
  }
  xxxSetCapture(v2);
  do
  {
    if ( !xxxInternalGetMessage(v27, (struct tagMSG *)0x200, 0x20Eu, 1u, 0) )
    {
      if ( xxxInternalGetMessage(v27, (struct tagMSG *)0x241, 0x257u, 1u, 0) )
      {
        *(_DWORD *)(v25 + 264) |= 0x8000u;
        xxxDispatchMessage(v27);
        *(_DWORD *)(v25 + 264) &= ~0x8000u;
      }
      else if ( !xxxSleepThread2(1u, 0, 0) )
      {
        break;
      }
      goto LABEL_25;
    }
    if ( v27[1] != 514 )
    {
      if ( v27[1] == 512 )
      {
        if ( (_WORD)v20 )
        {
          v26 = PtInRect(v28, v27[5], v27[6]);
          if ( v19 != v26 )
          {
            v19 = v26;
            v11 = (HDC)_GetDCEx(v2, 0, 65537);
            BitBltSysBmp(v11, v23, v22, v21 + v19, 1);
            _ReleaseDC(v11);
            v2 = v24;
            SetOrClrWF(v26, (int)v24, v18, 1);
            xxxWindowEvent(0x800Au, v2, 0xFFFFFFFE, v7, 0);
          }
        }
      }
LABEL_25:
      v10 = v17;
      continue;
    }
    xxxReleaseCapture();
    v10 = 1;
    v17 = 1;
  }
  while ( v2 == *(struct tagEVENTHOOK **)(*(_DWORD *)(_gptiCurrent + 236) + 56) && !v10 );
  if ( !(_WORD)v20 )
    return 0;
  if ( v19 && (_WORD)v20 != 0xF180 )
  {
    v13 = (HDC)_GetDCEx(v2, 0, 65537);
    BitBltSysBmp(v13, v23, v22, v21, 1);
    _ReleaseDC(v13);
    v14 = v24;
    SetOrClrWF(0, (int)v24, v18, 1);
    xxxWindowEvent(0x800Au, v14, 0xFFFFFFFE, v7, 0);
  }
  if ( v17 )
  {
    if ( PtInRect(v28, v27[5], v27[6]) )
      return v15;
  }
  return v3;
}

/*
 * XREFs of _FinalUserInit@0 @ 0xD6A7A
 * Callers:
 *     _xxxInitWindowStation@0 @ 0xD69D6 (_xxxInitWindowStation@0.c)
 * Callees:
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     __GetTextMetricsW@8 @ 0x8440E (__GetTextMetricsW@8.c)
 *     _GreSetBkMode@8 @ 0x90470 (_GreSetBkMode@8.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _MNSetupAnimationDC@4 @ 0xD6DB0 (_MNSetupAnimationDC@4.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GetDPIServerInfo@0 @ 0xEC39A (_GetDPIServerInfo@0.c)
 *     _GreTextInitialized@0 @ 0xF72EC (_GreTextInitialized@0.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall FinalUserInit()
{
  HDC v0; // ebx
  int v1; // ebx
  int *v2; // esi
  HDC v3; // ebx
  int v4; // ebx
  HDC v5; // eax
  int v6; // eax
  int i; // esi
  int CurrentProcessWin32Process; // eax
  int v9; // ecx
  LONG cx; // [esp-4h] [ebp-6Ch]
  int *SessionDpiServerInfo; // [esp+10h] [ebp-58h]
  int v13; // [esp+14h] [ebp-54h]
  int *v14; // [esp+14h] [ebp-54h]
  struct tagSIZE v15; // [esp+18h] [ebp-50h] BYREF
  HDC v16; // [esp+20h] [ebp-48h]
  struct tagSIZE v17; // [esp+24h] [ebp-44h] BYREF
  _DWORD v18[15]; // [esp+2Ch] [ebp-3Ch] BYREF

  SessionDpiServerInfo = (int *)GetSessionDpiServerInfo();
  v0 = *(HDC *)(_gpDispInfo + 32);
  v15.cx = (LONG)v0;
  memset(v18, 0, sizeof(v18));
  v13 = GreTextInitialized();
  if ( v13 && _GetTextMetricsW(v0, v18) )
  {
    v1 = v18[5];
  }
  else
  {
    qmemcpy(v18, (const void *)(GetDPIServerInfo() + 32), sizeof(v18));
    v1 = v18[5];
    if ( !v18[5] )
    {
      v1 = 8;
      v18[5] = 8;
    }
  }
  v2 = SessionDpiServerInfo;
  if ( SessionDpiServerInfo != (int *)-32 )
  {
    qmemcpy(SessionDpiServerInfo + 8, v18, 0x3Cu);
    v2 = SessionDpiServerInfo;
  }
  if ( v2 != (int *)-28 )
    v2[7] = v18[0];
  if ( v13 )
  {
    if ( (v18[13] & 0x1000000) != 0 )
    {
      v17.cx = 0;
      v17.cy = 0;
      if ( GreGetTextExtentW((HDC)v15.cx, 52, &v17, 1) )
        v1 = (v17.cx / 26 + 1) / 2;
    }
  }
  v2[6] = v1;
  v14 = (int *)Get96DpiServerInfo();
  v17.cx = GreSelectFont(*(HDC *)(_gpDispInfo + 32), v14[5]);
  v3 = *(HDC *)(_gpDispInfo + 32);
  v16 = v3;
  memset(v18, 0, sizeof(v18));
  v15.cx = GreTextInitialized();
  if ( v15.cx && _GetTextMetricsW(v3, v18) )
  {
    v4 = v18[5];
  }
  else
  {
    qmemcpy(v18, (const void *)(GetDPIServerInfo() + 32), sizeof(v18));
    v4 = v18[5];
    if ( !v18[5] )
    {
      v4 = 8;
      v18[5] = 8;
    }
  }
  if ( v14 != (int *)-32 )
    qmemcpy(v14 + 8, v18, 0x3Cu);
  if ( v14 != (int *)-28 )
    v14[7] = v18[0];
  if ( v15.cx )
  {
    if ( (v18[13] & 0x1000000) != 0 )
    {
      v15.cx = 0;
      v15.cy = 0;
      if ( GreGetTextExtentW(v16, 52, &v15, 1) )
        v4 = (v15.cx / 26 + 1) / 2;
    }
  }
  cx = v17.cx;
  v14[6] = v4;
  GreSelectFont(*(HDC *)(_gpDispInfo + 32), cx);
  *(_DWORD *)(_gpDispInfo + 36) = GreCreateCompatibleDC(*(_DWORD *)(_gpDispInfo + 28));
  v5 = *(HDC *)(_gpDispInfo + 36);
  if ( !v5 )
    return 0;
  GreSelectFont(v5, SessionDpiServerInfo[5]);
  GreSetDCOwnerEx(*(_DWORD *)(_gpDispInfo + 36), 0, 0, 0);
  *(_DWORD *)(_gpDispInfo + 44) = 40 * SessionDpiServerInfo[6];
  *(_DWORD *)(_gpDispInfo + 48) = SessionDpiServerInfo[7] + 2;
  *(_DWORD *)(_gpDispInfo + 40) = GreCreateBitmap(*(_DWORD *)(_gpDispInfo + 44), *(_DWORD *)(_gpDispInfo + 48), 1, 1, 0);
  v6 = *(_DWORD *)(_gpDispInfo + 40);
  if ( !v6 )
    return 0;
  GreSetBitmapOwner(v6, 0);
  GreSelectBitmap(*(_DWORD *)(_gpDispInfo + 36), *(_DWORD *)(_gpDispInfo + 40));
  GreSetTextColor(*(HDC *)(_gpDispInfo + 36), 0);
  GreSelectBrush(*(_DWORD *)(_gpDispInfo + 36), *(_DWORD *)(_gpsi + 4416));
  GreSetBkMode(*(HDC *)(_gpDispInfo + 36), 2);
  GreSetBkColor(*(HDC *)(_gpDispInfo + 36), 0xFFFFFF);
  MNSetupAnimationDC(_gMenuState);
  for ( i = PsGetCurrentProcessWin32Process(); ; DestroyClass(CurrentProcessWin32Process, (_DWORD **)(i + 196)) )
  {
    v9 = *(_DWORD *)(i + 196);
    if ( !v9 || (*(_DWORD *)(*(_DWORD *)(v9 + 4) + 8) & 0x4000) != 0 )
      break;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  }
  return 1;
}

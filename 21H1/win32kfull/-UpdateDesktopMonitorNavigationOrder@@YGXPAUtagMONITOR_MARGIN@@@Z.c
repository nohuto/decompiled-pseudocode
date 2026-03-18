/*
 * XREFs of ?UpdateDesktopMonitorNavigationOrder@@YGXPAUtagMONITOR_MARGIN@@@Z @ 0xA5700
 * Callers:
 *     _UpdateDesktopThresholds@0 @ 0xA5498 (_UpdateDesktopThresholds@0.c)
 * Callees:
 *     _GetMonitorWorkRectForDpi@8 @ 0x71FAA (_GetMonitorWorkRectForDpi@8.c)
 */

void __thiscall UpdateDesktopMonitorNavigationOrder(_DWORD *this)
{
  size_t v1; // ebx
  int v2; // esi
  _DWORD *v4; // edx
  _DWORD *v5; // ecx
  int v6; // ecx
  int *v7; // edx
  int v8; // ecx
  int *MonitorWorkRectForDpi; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  _DWORD *v12; // edx
  _DWORD *v13; // edi
  int *v14; // edx
  int v15[4]; // [esp+10h] [ebp-30h] BYREF
  int v16; // [esp+20h] [ebp-20h]
  int v17; // [esp+24h] [ebp-1Ch]
  int v18; // [esp+28h] [ebp-18h]
  int v19; // [esp+2Ch] [ebp-14h]
  _DWORD *v20; // [esp+30h] [ebp-10h]
  int *v21; // [esp+34h] [ebp-Ch]
  size_t v22; // [esp+38h] [ebp-8h]
  unsigned int v23; // [esp+3Ch] [ebp-4h]

  v1 = 0;
  v2 = 255;
  v23 = 255;
  v4 = *(_DWORD **)(_gpDispInfo + 56);
  if ( v4 )
  {
    v5 = this + 3;
    do
    {
      if ( (*(_BYTE *)(v4[5] + 12) & 1) != 0 && v1 < *(_DWORD *)*_gpDispInfo )
      {
        *v5 = v4;
        v4[39] = 0;
        v4[40] = 0;
        ++v1;
        v5 += 4;
      }
      v4 = (_DWORD *)v4[7];
    }
    while ( v4 );
  }
  _qsort(this, v1, 0x10u, MonitorCoordComp);
  v6 = _gpDispInfo;
  v22 = 0;
  *(_DWORD *)(_gpDispInfo + 84) = _gpDispInfo + 80;
  *(_DWORD *)(_gpDispInfo + 80) = _gpDispInfo + 80;
  if ( !v1 )
    goto LABEL_16;
  v7 = this + 3;
  v21 = this + 3;
  do
  {
    v8 = *v7;
    v20 = (_DWORD *)(*v7 + 156);
    MonitorWorkRectForDpi = GetMonitorWorkRectForDpi(v8, 0x60u, v15);
    v16 = *MonitorWorkRectForDpi;
    v17 = MonitorWorkRectForDpi[1];
    v18 = MonitorWorkRectForDpi[2];
    v19 = MonitorWorkRectForDpi[3];
    v10 = v18 - v16;
    if ( v18 - v16 >= v19 - v17 )
      v10 = v19 - v17;
    v2 = v23;
    v11 = v10 >> 1;
    if ( v23 >= v11 )
    {
      v2 = v11;
      v23 = v11;
    }
    v6 = _gpDispInfo;
    v12 = *(_DWORD **)(_gpDispInfo + 84);
    if ( *v12 != _gpDispInfo + 80 )
      __fastfail(3u);
    v13 = v20;
    *v20 = _gpDispInfo + 80;
    v13[1] = v12;
    *v12 = v13;
    v14 = v21;
    *(_DWORD *)(_gpDispInfo + 84) = v13;
    v7 = v14 + 4;
    v21 = v7;
    ++v22;
  }
  while ( v22 < v1 );
  if ( v2 == -1 )
    *(_DWORD *)(_gpDispInfo + 76) = 0;
  else
LABEL_16:
    *(_DWORD *)(*(_DWORD *)v6 + 76) = v2;
}

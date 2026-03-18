/*
 * XREFs of ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C002C778
 * Callers:
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C002C468 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 * Callees:
 *     ?compModeCap@@YAHPEAUtagModeCap@@0@Z @ 0x1C002C970 (-compModeCap@@YAHPEAUtagModeCap@@0@Z.c)
 */

__int64 __fastcall PruneMode(
        struct _devicemodeW *a1,
        struct tagModeCap *a2,
        int a3,
        struct _FREQUENCY_RAGE *a4,
        signed int a5)
{
  unsigned int v5; // ebp
  DWORD dmDisplayFrequency; // r10d
  BOOL v7; // ebx
  __int64 v8; // rdi
  DWORD dmPelsHeight; // r8d
  unsigned int v12; // edx
  int v13; // ecx
  DWORD dmPelsWidth; // eax
  DWORD v15; // edx
  int v16; // r9d
  _DWORD *v17; // rdx
  int v18; // r9d
  unsigned int v19; // r10d
  int v20; // r11d
  _DWORD v22[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+2Ch] [rbp-1Ch]
  int v24; // [rsp+34h] [rbp-14h]

  v5 = 0;
  dmDisplayFrequency = a1->dmDisplayFrequency;
  v7 = 0;
  v8 = a3;
  if ( (a1->dmFields & 0x80u) != 0 )
    v7 = ((a1->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0;
  if ( dmDisplayFrequency > 1 && a5 < 0 )
  {
    if ( dmDisplayFrequency < *(_DWORD *)a4 || dmDisplayFrequency > *((_DWORD *)a4 + 1) && dmDisplayFrequency > 0x3D )
      return 1LL;
    dmPelsHeight = a1->dmPelsHeight;
    v12 = dmDisplayFrequency * dmPelsHeight;
    if ( dmDisplayFrequency * dmPelsHeight < *((_DWORD *)a4 + 2) && dmDisplayFrequency < 0x3C )
      return 1LL;
    if ( v12 > *((_DWORD *)a4 + 3) && dmDisplayFrequency > 0x3D || v12 * a1->dmPelsWidth > *((_DWORD *)a4 + 5) )
      return 1LL;
    v13 = 107;
    if ( dmPelsHeight <= 0x258 )
      v13 = 105;
    v5 = v12 * v13 / 0x64;
  }
  if ( v7 )
    dmPelsWidth = a1->dmPelsHeight;
  else
    dmPelsWidth = a1->dmPelsWidth;
  v22[0] = dmPelsWidth;
  if ( v7 )
    v15 = a1->dmPelsWidth;
  else
    v15 = a1->dmPelsHeight;
  v22[1] = v15;
  v22[2] = dmDisplayFrequency;
  v23 = 0LL;
  v24 = 0;
  if ( !(_DWORD)v8 || (a5 & 0x40000000) == 0 || v15 <= *((_DWORD *)a2 + 6 * v8 - 5) )
  {
    v16 = 0;
    if ( (int)v8 > 0 )
    {
      while ( 1 )
      {
        v20 = compModeCap((struct tagModeCap *)v22, (struct tagModeCap *)((char *)a2 + 24 * v16));
        if ( v20 <= 0 )
          break;
        if ( v18 >= (int)v8 - 1 )
        {
          if ( (a5 & 0x40000000) != 0 )
            return 1LL;
          break;
        }
        v16 = v18 + 1;
        if ( v16 >= (int)v8 )
          return 1LL;
      }
      if ( v19 <= 1 || a5 >= 0 )
        return 0LL;
      if ( v20 && v18 )
        v17 = (_DWORD *)((char *)a2 + 24 * v18 - 24);
      if ( (v19 <= v17[2] || v19 <= 0x3D || v20 && v18 <= 0)
        && v19 >= v17[3]
        && (v5 >= v17[4] || v19 >= 0x3C)
        && (v5 <= v17[5] || v19 <= 0x3D) )
      {
        return 0LL;
      }
    }
  }
  return 1LL;
}

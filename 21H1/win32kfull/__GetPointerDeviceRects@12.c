/*
 * XREFs of __GetPointerDeviceRects@12 @ 0xCB44C
 * Callers:
 *     _NtUserGetPointerDeviceRects@12 @ 0xCB364 (_NtUserGetPointerDeviceRects@12.c)
 *     _NtUserGetHimetricScaleFactorFromPixelLocation@20 @ 0x162E74 (_NtUserGetHimetricScaleFactorFromPixelLocation@20.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YGHPAX@Z @ 0x16D99A (-CreateEdgePalmRejectionZones@PalmRejection@@YGHPAX@Z.c)
 *     ?ProcessInertia@Edgy@@YGXPBUINERTIA_INFO_INTERNAL@@@Z @ 0x16E090 (-ProcessInertia@Edgy@@YGXPBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YG?AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x16E9D7 (-_HitTestEdgyRegion@Edgy@@YG-AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _MiPGetPhysicalRect@0 @ 0xCB4FC (_MiPGetPhysicalRect@0.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 *     _VirtualizeMultiMonDigitizerSize@4 @ 0x151D24 (_VirtualizeMultiMonDigitizerSize@4.c)
 *     _EnsurePointerDeviceHasMonitor@4 @ 0x1590D3 (_EnsurePointerDeviceHasMonitor@4.c)
 */

int __fastcall _GetPointerDeviceRects(int a1, _DWORD *a2, _DWORD *a3)
{
  int *ScreenRect; // eax
  int *v6; // eax
  _DWORD *v8; // ecx
  int CurrentThreadDpiAwarenessContext; // eax
  _DWORD *v10; // [esp+Ch] [ebp-34h] BYREF
  int v11; // [esp+10h] [ebp-30h] BYREF
  int v12; // [esp+14h] [ebp-2Ch]
  _BYTE v13[8]; // [esp+18h] [ebp-28h] BYREF
  int v14; // [esp+20h] [ebp-20h]
  int v15; // [esp+24h] [ebp-1Ch]
  int v16; // [esp+28h] [ebp-18h]
  int v17; // [esp+2Ch] [ebp-14h]

  v11 = 0;
  v10 = 0;
  v12 = 1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  if ( !ResolveMouseOrPointerDevice(a1, &v10, &v11) )
  {
    v12 = 0;
    goto LABEL_8;
  }
  if ( v11 )
  {
    if ( a3 )
    {
      ScreenRect = (int *)GetScreenRect();
      v14 = *ScreenRect;
      v15 = ScreenRect[1];
      v16 = ScreenRect[2];
      v17 = ScreenRect[3];
      *a3 = v14;
      a3[1] = v15;
      a3[2] = v16;
      a3[3] = v17;
    }
    if ( a2 )
    {
      v6 = (int *)MiPGetPhysicalRect();
LABEL_7:
      v14 = *v6;
      v15 = v6[1];
      v16 = v6[2];
      v17 = v6[3];
      *a2 = v14;
      a2[1] = v15;
      a2[2] = v16;
      a2[3] = v17;
    }
  }
  else
  {
    EnsurePointerDeviceHasMonitor(v10);
    v8 = v10;
    if ( a2 )
    {
      *a2 = v10[41];
      a2[1] = v8[42];
      a2[2] = v8[43];
      a2[3] = v8[44];
      if ( *(_DWORD *)*_gpDispInfo > 1u && !*(_DWORD *)(v8[2] + 1136) && v8[3] != 7 )
      {
        VirtualizeMultiMonDigitizerSize(a2);
        v8 = v10;
      }
    }
    a2 = a3;
    if ( a3 )
    {
      if ( *(_DWORD *)(v8[2] + 1136) )
      {
        *a3 = v8[37];
        a3[1] = v8[38];
        a3[2] = v8[39];
        a3[3] = v8[40];
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
        PhysicalToLogicalDPIRect(a3, a3, CurrentThreadDpiAwarenessContext, 0);
        goto LABEL_8;
      }
      v6 = (int *)GetScreenRect();
      goto LABEL_7;
    }
  }
LABEL_8:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  return v12;
}

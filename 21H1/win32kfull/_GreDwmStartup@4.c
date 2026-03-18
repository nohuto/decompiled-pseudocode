/*
 * XREFs of _GreDwmStartup@4 @ 0xE1BEA
 * Callers:
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 * Callees:
 *     ?vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z @ 0x213E8 (-vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z @ 0x21BFE (-ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z @ 0x21D46 (-LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z.c)
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     _GreSfmDwmStartup@0 @ 0xE1DB2 (_GreSfmDwmStartup@0.c)
 *     ?bDwmChildWindowDpiIsolationEnabled@@YGHXZ @ 0xE1E08 (-bDwmChildWindowDpiIsolationEnabled@@YGHXZ.c)
 *     ?bDwmResizeOptimizationOverride@@YGHPAK00@Z @ 0xE1EFC (-bDwmResizeOptimizationOverride@@YGHPAK00@Z.c)
 *     ?bDwmDesktopOverlaysEnabled@@YGHXZ @ 0xE207E (-bDwmDesktopOverlaysEnabled@@YGHXZ.c)
 *     ?bDwmOverlayTestMode@@YGHXZ @ 0xE2166 (-bDwmOverlayTestMode@@YGHXZ.c)
 *     ?bDwmDeviceBitmapsEnabledForMultiAdapter@@YGHXZ @ 0xE2254 (-bDwmDeviceBitmapsEnabledForMultiAdapter@@YGHXZ.c)
 *     ?bDwmDeviceBitmapsEnabled@@YGHXZ @ 0xE2348 (-bDwmDeviceBitmapsEnabled@@YGHXZ.c)
 *     ?GrepDwmCreateComposedEvent@@YGJPAUDwmState@@@Z @ 0xE243C (-GrepDwmCreateComposedEvent@@YGJPAUDwmState@@@Z.c)
 *     ?GrepDwmDestroyComposedEvent@@YGXPAUDwmState@@@Z @ 0x1CCE36 (-GrepDwmDestroyComposedEvent@@YGXPAUDwmState@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall GreDwmStartup(int this)
{
  int v2; // ebx
  struct _RTL_GENERIC_TABLE *v3; // eax
  struct _RTL_GENERIC_TABLE *v4; // esi
  RTL_GENERIC_ALLOCATE_ROUTINE *RectRgn; // eax
  NTSTATUS v6; // eax
  BOOL v7; // esi
  struct DwmState *v9; // [esp+0h] [ebp-78h]
  unsigned int *v10; // [esp+0h] [ebp-78h]
  void *v11; // [esp+4h] [ebp-74h]
  _BYTE v12[20]; // [esp+10h] [ebp-68h] BYREF
  int v13; // [esp+24h] [ebp-54h]
  int v14; // [esp+28h] [ebp-50h]
  int v15; // [esp+2Ch] [ebp-4Ch]
  char v16; // [esp+30h] [ebp-48h]
  char v17; // [esp+31h] [ebp-47h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+40h] [ebp-38h] BYREF
  void *v19; // [esp+58h] [ebp-20h] BYREF
  unsigned int v20; // [esp+5Ch] [ebp-1Ch] BYREF
  unsigned int v21; // [esp+60h] [ebp-18h]
  unsigned int v22; // [esp+64h] [ebp-14h]
  int v23; // [esp+68h] [ebp-10h] BYREF
  BOOL v24; // [esp+6Ch] [ebp-Ch]
  BOOL v25; // [esp+70h] [ebp-8h]
  BOOL v26; // [esp+74h] [ebp-4h]

  v26 = 0;
  v25 = 0;
  v24 = 0;
  v19 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v23 = this;
  ENTER_GRE_DWM_CRIT(&v19, this);
  v2 = 1;
  v3 = (struct _RTL_GENERIC_TABLE *)PALLOCMEM2(0x100u, 1935885383, 1);
  v4 = v3;
  if ( v3 )
  {
    v3[2].CompareRoutine = (PRTL_GENERIC_COMPARE_ROUTINE)this;
    v25 = GrepDwmCreateComposedEvent(v9) >= 0;
    RectRgn = (RTL_GENERIC_ALLOCATE_ROUTINE *)GreCreateRectRgn(0, 0, 0, 0);
    v4[2].AllocateRoutine = RectRgn;
    v24 = RectRgn != 0;
    RtlInitializeGenericTable(
      v4,
      (PRTL_GENERIC_COMPARE_ROUTINE)HwndLookupCompareTableData,
      HwndLookupAllocTableData,
      HwndLookupFreeTableData,
      0);
    GreInitializePushLock(&v4[1]);
    ObjectAttributes.Length = 24;
    v4[1].InsertOrderList.Blink = &v4[1].InsertOrderList;
    v4[1].InsertOrderList.Flink = &v4[1].InsertOrderList;
    v4[1].CompareRoutine = (PRTL_GENERIC_COMPARE_ROUTINE)&v4[1].NumberGenericTableElements;
    v4[1].NumberGenericTableElements = (ULONG)&v4[1].NumberGenericTableElements;
    v4[1].FreeRoutine = (PRTL_GENERIC_FREE_ROUTINE)&v4[1].AllocateRoutine;
    v4[1].AllocateRoutine = (PRTL_GENERIC_ALLOCATE_ROUTINE)&v4[1].AllocateRoutine;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.ObjectName = 0;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v4[6].OrderedPointer = 0;
    ObjectAttributes.Attributes = 512;
    v6 = ZwCreateEvent(
           (PHANDLE)&v4[6].OrderedPointer,
           (ACCESS_MASK)&loc_1F0002 + 1,
           &ObjectAttributes,
           NotificationEvent,
           0);
    v26 = v6 >= 0;
    if ( v25 && v24 && v6 >= 0 )
    {
      g_pDwmState = (struct DwmState *)v4;
      v4 = 0;
      if ( bNeedRenderHint(&v23) )
      {
        v17 = 1;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v12, (struct PDEVOBJ *)&v23);
        (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD))(this + 2272))(*(_DWORD *)(this + 1108), 0x10000, 0, 0);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v12);
      }
      vAccNotify(
        6,
        *(_DWORD *)(this + 1820) != 0 ? *(_DWORD *)(this + 1820) + 16 : 0,
        (struct _SURFOBJ *)1,
        (unsigned int)v10,
        v11);
    }
    gfDwmDeviceBitmapsEnabled = bDwmDeviceBitmapsEnabled();
    gfDwmDeviceBitmapsEnabledForMultiAdapter = bDwmDeviceBitmapsEnabledForMultiAdapter();
    gfDwmOverlayTestMode = bDwmOverlayTestMode();
    gfDwmDesktopOverlaysEnabled = bDwmDesktopOverlaysEnabled();
    if ( bDwmResizeOptimizationOverride(&v20, v10, (unsigned int *)v11) )
    {
      gdwDwmResizeOptimizationOptions = v22;
      gdwDwmResizeTimeoutGdi = v21;
      gfDwmResizeOptimizationOverride = 1;
      gdwDwmResizeTimeoutModern = v20;
    }
    gfDwmChildWindowDpiIsolationEnabled = bDwmChildWindowDpiIsolationEnabled();
  }
  else
  {
    EngSetLastError(8u);
  }
  if ( v4 )
  {
    if ( v24 )
      GreDeleteObject(v4[2].AllocateRoutine);
    if ( v25 )
      GrepDwmDestroyComposedEvent(v9);
    if ( v26 )
      ZwClose(v4[6].OrderedPointer);
    Win32FreePool(v4);
  }
  v7 = v26;
  if ( v25 && v24 && v26 )
    GreSfmDwmStartup();
  LEAVE_GRE_DWM_CRIT(v19, this);
  if ( !v25 || !v24 || !v7 )
    return 0;
  return v2;
}

/*
 * XREFs of ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01D8F0C
 * Callers:
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D8A10 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D8FB0 (-xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?TabletAdjustBrightness@@YAXH@Z @ 0x1C01D8870 (-TabletAdjustBrightness@@YAXH@Z.c)
 *     ?xxxTabletSetDisplayOrientation@@YAXJPEAU_devicemodeW@@@Z @ 0x1C01D907C (-xxxTabletSetDisplayOrientation@@YAXJPEAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletButtonExecuteAction(struct tagTABLET_BUTTON_ACTION *a1, int a2, struct _devicemodeW *a3)
{
  struct tagTABLET_BUTTON_ACTION *v3; // rax
  int v7; // ebx
  int v8; // ecx
  int v9; // ecx

  v3 = (struct tagTABLET_BUTTON_ACTION *)((char *)a1 + 8);
  if ( !a2 )
    v3 = a1;
  v7 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == -2147483636 )
  {
    v8 = 1;
  }
  else
  {
    if ( v7 != -2147483635 )
      goto LABEL_8;
    v8 = 0;
  }
  TabletAdjustBrightness(v8);
LABEL_8:
  if ( (PVOID)grpdeskRitInput != grpdeskLogon )
    return;
  if ( v7 == -2147483642 )
  {
    v9 = -1;
  }
  else
  {
    if ( v7 != -2147483637 )
      return;
    if ( a2 )
      v9 = *((_DWORD *)a1 + 3);
    else
      v9 = *((_DWORD *)a1 + 1);
  }
  xxxTabletSetDisplayOrientation(v9, a3);
}
